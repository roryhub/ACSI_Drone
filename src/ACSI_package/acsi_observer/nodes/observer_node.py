#!/usr/bin/env python2

'''
Euler angle order needs to be ZXY for consistent stability 
Follows Right hand convention. X is forward Z is right Y is up in drone frame
TODO: Possible issues with Optitrack environment alignment on initialization. May need a calibration protocol
'''

import rospy
from acsi_controller.msg import Attitude_Setpoint, Attitude_Error
from acsi_observer.msg import Drone_States
from geometry_msgs.msg import Pose, PoseArray, PoseStamped, PoseStamped, Quaternion
from std_msgs.msg import String
import numpy as np
from acsi_observer import observer as obs

def optitrack_callback(opti_message,observer):#
    observer.handle_opti(opti_message.pose)


if __name__ == '__main__':


    rospy.init_node('state_observer_node')
    observer = obs.Observer()

    status_pub = rospy.Publisher('observer/status',String,queue_size=2)
    states_pub = rospy.Publisher('observer/states',Drone_States,queue_size=2)
    rospy.Subscriber('/vrpn_client_node/Crazyflie/pose',PoseStamped,optitrack_callback,callback_args=observer) #May need to rename for generality

    r = rospy.Rate(100)
    start_time = rospy.Time.now()

    while not rospy.is_shutdown():
        print(observer.current_states)
        states_pub.publish(observer.current_states)
        r.sleep()

