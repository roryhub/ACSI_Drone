#!/usr/bin/env python3

'''
ROS node for use with Rory Hubbard's minimum jerk trajectory generator using optitrak inputs and minimum jerk theory to be expanded
for potentially multiple trajectory generation styles
'''

import numpy as np
import rospy
import math
from acsi_trajectory import minimum_jerk as traj
from geometry_msgs.msg import Point, PoseStamped, PoseArray, Pose



def optitrak_callback(optitrak_location, callback_args):

    '''
    Assigns the PoseStamped data to whatever Pose variable you pass it, dropping the header
    '''
    container = callback_args[0]
    container = optitrak_location.pose

    received_bool = callback_args[1]
    received_bool = True




if __name__ == '__main__':

    rospy.init_node('trajectory_generator')

    r = rospy.Rate(.2) #Amount of times per second new trajectory will be generated and rospy loop will run #TODO: Set on the rosparam server

    drone_location = Pose() 
    target_location = Pose()

    drone_received = False
    target_received = False

    traj_pub = rospy.Publisher("trajectory/drone_trajectory",PoseArray,queue_size=10)

    #These subscribers currently use the vrpn_client_node library and not Bedillian's I plan on writiing a handler that deals with them seperately and publishes them to identical topics so that this node is agnostic to the data source
    rospy.Subscriber("/vrpn_client_node/Crazyflie/pose", PoseStamped, optitrak_callback,callback_args=[drone_location, drone_received]) #TODO: Determine topic name, right now just uses standard vrpn_client_node formatting
    rospy.Subscriber("/vrpn_client_node/Target/pose", PoseStamped, optitrak_callback,callback_args=[target_location, target_received]) #TODO: Determine topic name, right now just uses standard vrpn_client_node formatting

    target_y_offset = .5 #Amount of distance above target we need to be to capture it. #TODO: Set on the rosparam server
    target_location.position.y += target_y_offset

    while not rospy.is_shutdown():


        frequency =  100 #TODO: need 
        total_time = 1 #TODO: needs to be updated to fit goal time to reasonable speed (maybe function based on euclidian distance and goal max speed?)

        if drone_received == target_received == True:
            trajectory = traj.minimum_jerk_pose(drone_location, target_location, frequency, total_time) #TODO: need to convert this into pose array data type

            traj_pub.publish(trajectory)
        
        r.sleep()

