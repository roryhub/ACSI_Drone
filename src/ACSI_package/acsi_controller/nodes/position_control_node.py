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
import os
from scipy.io import loadmat
from acsi_mpc.mpc import MPC
from acsi_pid import pid as PID
from acsi_trajectory.srv import Trajectory_Service

trajectory = PoseArray()
recieved_state = False

def trajectory_callback(trajectory_in):#
    global recieved_trajectory, trajectory

    if recieved_trajectory == False and len(trajectory_in.poses) > 2:
        trajectory = trajectory_in
        recieved_trajectory = True

def observer_callback(observer_states,controller):
    global recieved_state
    controller.recieved_state = True
    controller.current_global_state = observer_states

def set_gains(gains):
    gains.pitch.p  = .2*180/pi
    gains.pitch.i  = 0
    gains.pitch.d  = .24*180/pi

    gains.roll.p   = .2*180/pi
    gains.roll.i   = 0
    gains.roll.d   = .24*180/pi

    gains.yaw.p    = 0
    gains.yaw.i    = 0
    gains.yaw.d    = 0

    gains.thrust.p = 25000/2.0
    gains.thrust.i = 0
    gains.thrust.d = 25000*1.5

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

    umin = np.array([-1, -1, -1, -47000.])[:, np.newaxis]
    umax = np.array([1, 1, 1, 18000.])[:, np.newaxis]

    N = 30

    return MPC(A, B, C, Q, R, RD, umin, umax, N)

if __name__ == '__main__':
    rospy.init_node('position_controller_node')

    gains = Drone_Pid_Settings() #bring down from the param server eventually?
    set_gains(gains)

    status_pub = rospy.Publisher('pid_controller/status',String,queue_size=2)
    pid_controller = PID.PID(gains)

    mpc = load_mpc('Crazyflie_Model.mat')

    setpoint_pub = rospy.Publisher('controller/ypr',Attitude_Setpoint,queue_size=2)
    rospy.Subscriber('/state_observer_node/current_states',Drone_States,observer_callback,callback_args=pid_controller)
    rospy.Subscriber('/trajectory/drone_trajectory',PoseArray,trajectory_callback)

    rospy.wait_for_service('generate_trajectory')
    get_trajectory = rospy.ServiceProxy('generate_trajectory',Trajectory_Service)

    r = rospy.Rate(100)
    start_time = rospy.Time.now()

    while not rospy.is_shutdown():
           
        r.sleep()

