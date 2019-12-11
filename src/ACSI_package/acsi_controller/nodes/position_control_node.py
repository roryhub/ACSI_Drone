#!/usr/bin/env python3

'''
Euler angle order needs to be ZXY for consistent stability 
Follows Right hand convention. X is forward Z is right Y is up in drone frame
TODO: Possible issues with Optitrack environment alignment on initialization. May need a calibration protocol
'''

import rospy
from acsi_controller.msg import Attitude_Setpoint, Attitude_Error, Drone_Pid_Settings
from acsi_observer.msg import Drone_States, Drone_States_Array
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

class Manager:
    
    def __init__(self,gains,fname):
        self.pid = PID(gains)
        self.current_global_state = Drone_States()
        self.load_mpc(fname)
        self.command = Attitude_Setpoint()
        self.X = np.zeros((self.A.shape[1], 1))
        self.current_trajectory = Drone_States_Array()
        self.current_setpoint = Drone_States()

    def observer_handle(self,states_message):
        self.pid.current_global_state = states_message
        self.correct_states(states_message)

    def load_mpc(self,fname):

        dirname = os.path.dirname(__file__)
        full_path = os.path.join(dirname, '../models/'+fname)

        matfile = loadmat(full_path)

        self.A = matfile['A']
        self.B = matfile['B']
        self.C = matfile['C']
        self.Q = np.diag(np.array([1000., 10000., 1000., 1000.]))
        self.R = np.diag(np.array([1., 1., 1., 1e-8]))
        self.RD = np.diag(np.array([1000, 1000, 10, 1e-5]))

        self.umin = np.array([-.5, -.5, -.5, -47000.])[:, np.newaxis]
        self.umax = np.array([.5, .5, .5, 18000.])[:, np.newaxis]

        self.N = 30
        self.mpc = MPC(self.A, self.B, self.C, self.Q, self.R, self.RD, self.umin, self.umax, self.N)

    def spin_mpc(self):
        return
    
    def spin_pid(self):
        self.command = self.pid.spin_controller()

    def update_states(self, command):
        self.U = np.matrix([[self.command.roll],[self.command.pitch],[self.command.yaw_rate],[self.command.thrust]])
        self.X = self.A @ self.X + self.B @ self.U
    
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

def observer_callback(observer_states,manager):
    manager.observer_handle(observer_states)

def set_gains(gains): #Could be a param server pull at some point
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

if __name__ == '__main__':
    rospy.init_node('position_controller_node')

    model_fname = 'Crazyflie_Model.mat'

    gains = Drone_Pid_Settings() #bring down from the param server eventually?

    status_pub = rospy.Publisher('pid_controller/status',String,queue_size=2)

    manager = Manager(gains, model_fname)

    setpoint_pub = rospy.Publisher('controller/ypr',Attitude_Setpoint,queue_size=2)
    rospy.Subscriber('/observer/states',Drone_States,observer_callback,callback_args=manager)
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
            if time_spent > 5:
                manager.restore_to_hover()

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

