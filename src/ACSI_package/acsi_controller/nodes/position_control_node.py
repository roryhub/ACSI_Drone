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
from acsi_mpc import mpc as MPC
from acsi_pid import pid as PID

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

    
if __name__ == '__main__':

    rospy.init_node('position_controller_node')
    gains = Drone_Pid_Settings() #bring down from the param server?

    status_pub = rospy.Publisher('pid_controller/status',String,queue_size=2)
    pid_controller = PID.PID(gains)

    setpoint_pub = rospy.Publisher('controller/ypr',Attitude_Setpoint,queue_size=2)
    rospy.Subscriber('/state_observer_node/current_states',Drone_States,observer_callback,callback_args=pid_controller)
    rospy.Subscriber('/trajectory/drone_trajectory',PoseArray,trajectory_callback)

    test_setpoint = Attitude_Setpoint()
    test_setpoint.pitch = 0
    test_setpoint.roll = 0
    test_setpoint.yaw_rate = 0
    test_setpoint.thrust = 33000

    r = rospy.Rate(100)
    start_time = rospy.Time.now()
    sequence = 0
    while not rospy.is_shutdown():
           
        r.sleep()

