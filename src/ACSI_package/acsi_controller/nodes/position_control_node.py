#!/usr/bin/env python3

'''
Euler angle order needs to be ZXY for consistent stability 
Follows Right hand convention. X is forward Z is right Y is up in drone frame
TODO: Possible issues with Optitrack environment alignment on initialization. May need a calibration protocol
'''

import rospy
from acsi_controller.msg import Attitude_Setpoint, Attitude_Error, Drone_Pid_Settings
from acsi_observer.msg import Drone_States
from geometry_msgs.msg import Pose, PoseArray, PoseStamped, PoseStamped
from std_msgs.msg import String
from math import sin, cos, pi
import numpy as np
from copy import deepcopy
import os
from scipy.io import loadmat
from acsi_mpc.mpc import MPC
from acsi_pid import pid as PID
from acsi_trajectory.srv import Trajectory_Service

trajectory = PoseArray()
recieved_state = False

class State_Manager:
    
    def __init__(self,A,B):
        self.A = A
        self.B = B
        self.X = np.zeros((self.A.shape[1], 1))

    def update_states(self, command):
        U = np.matrix([[command.roll],[command.pitch],[command.yaw_rate],[command.thrust]])
        self.X = self.A @ self.X + self.B @ U
    
    def correct_states(self, observation):
        self.X[0][0] = observation.y
        self.X[1][0] = observation.z
        self.X[2][0] = observation.x
        self.X[3][0] = observation.yaw

    def restore_to_hover(self):
        old_X = self.X
        self.X = np.zeros((self.A.shape[1], 1))
        self.X[0][0] = old_X[0][0]
        self.X[1][0] = old_X[1][0]
        self.X[2][0] = old_X[2][0]
        self.X[3][0] = old_X[3][0]


def trajectory_callback(trajectory_in):#
    global recieved_trajectory, trajectory

    if recieved_trajectory == False and len(trajectory_in.poses) > 2:
        trajectory = trajectory_in
        recieved_trajectory = True

def observer_callback(observer_states,controller):
    controller.current_global_state = observer_states


# def observer_callback(observer_states,controller):
#     controller.recieved_state = True
#     print(observer_states)
#     controller.current_global_state = deepcopy(observer_states)

def set_gains(gains):
    gains.pitch.p  = .6
    gains.pitch.i  = 0
    gains.pitch.d  = .3

    gains.roll.p   = .6
    gains.roll.i   = 0
    gains.roll.d   = .3

    gains.yaw.p    = 0
    gains.yaw.i    = 0
    gains.yaw.d    = 0

    gains.thrust.p = 25000/2
    gains.thrust.i = 0
    gains.thrust.d = 25000/2

def load_mpc(fname):

    dirname = os.path.dirname(__file__)
    full_path = os.path.join(dirname, '../models/'+fname)

    matfile = loadmat(full_path)

    A = matfile['A']
    B = matfile['B']
    C = matfile['C']
    Q = np.diag(np.array([1000., 10000., 1000., 1000.]))
    R = np.diag(np.array([1., 1., 1., 1e-8]))
    RD = np.diag(np.array([1000, 1000, 10, 1e-5]))

    umin = np.array([-.5, -.5, -.5, -47000.])[:, np.newaxis]
    umax = np.array([.5, .5, .5, 18000.])[:, np.newaxis]

    N = 30

    state_manager  = State_Manager(A,B)

    return MPC(A, B, C, Q, R, RD, umin, umax, N), state_manager

if __name__ == '__main__':
    rospy.init_node('position_controller_node')

    gains = Drone_Pid_Settings() #bring down from the param server eventually?
    set_gains(gains)

    status_pub = rospy.Publisher('pid_controller/status',String,queue_size=2)
    pid_controller = PID.PID(gains)

    mpc, state_manager = load_mpc('Crazyflie_Model.mat')

    setpoint_pub = rospy.Publisher('controller/ypr',Attitude_Setpoint,queue_size=2)
    rospy.Subscriber('/observer/states',Drone_States,observer_callback,callback_args=pid_controller)
    rospy.Subscriber('/trajectory/drone_trajectory',PoseArray,trajectory_callback)

    get_trajectory = rospy.ServiceProxy('generate_trajectory',Trajectory_Service)

    hover_state = Drone_States()
    hover_state.x   = 0
    hover_state.y   = 1.5
    hover_state.z   = 0
    hover_state.yaw = 0

    freq = 1/.04
    r = rospy.Rate(freq)

    start_time = rospy.Time.now()
    command_setpoint = Attitude_Setpoint()

    print("Control node")

    start_time = rospy.Time.now().secs + rospy.Time.now().nsecs*1e-9
    got_trajectory = False
    i = 0
    current_goal = Drone_States()
    current_goal = hover_state

    while not rospy.is_shutdown():
        time_spent = (rospy.Time.now().secs + rospy.Time.now().nsecs*1e-9) - start_time
        print(time_spent)
        if time_spent < 7:
            current_goal = hover_state
        elif time_spent < 15:
            if got_trajectory == False:
                traj_desired = get_trajectory(1/.04, .5).trajectory_states
                current_goal = hover_state
                got_trajectory = True
            else:
                if i < len(traj_desired.state_array):
                    current_goal = traj_desired.state_array[i]
                    i = i+1
                elif i >= len(traj_desired.state_array):
                    current_goal = traj_desired.state_array[-1]
        else:
            current_goal.y = 1.5 

        print(current_goal)
        command_setpoint = pid_controller.spin_controller(current_goal)
        setpoint_pub.publish(command_setpoint)
        r.sleep()

