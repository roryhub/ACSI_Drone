#!/usr/bin/env python3

'''
ROS node for use with Rory Hubbard's minimum jerk trajectory generator using optitrak inputs and minimum jerk theory to be expanded
for potentially multiple trajectory generation styles
'''
from os import sys, path
sys.path.append("../modules")
import minimum_jerk as traj
import numpy as np
import rospy
import math
from geometry_msgs.msg import Point, PoseStamped, PoseArray, Pose

def optitrak_callback(optitrak_location, container): #TODO: Deal with callback (USE HOOP DEMO CODE)

    #TODO: update container

    return

if __name__ == '__main__':

    rospy.init_node('trajectory_generator')

    r = rospy.Rate(1) #Amount of times per second new trajectory will be generated and rospy loop will run
    drone_location = Pose() 
    target_location = Pose()

    traj_pub = rospy.Publisher("trajectory_array",PoseArray,queue_size=10)
    rospy.Subscriber("/vrpn_client_node/Drone/pose", PoseStamped, optitrak_callback,callback_args=drone_location) #TODO: Add callback fn and determine topic name
    rospy.Subscriber("/vrpn_client_node/Target/pose", PoseStamped, optitrak_callback,callback_args=target_location) #TODO: Add callback fn and determine topic name

    while not rospy.is_shutdown():

        #These subscribers currently use the vrpn_client_node library and not Bedillian's I plan on writiing a handler that deals with them seperately and publishes them to identical topics so that this node is agnostic to the data source
        
        start_coord = (0, 0, 0) #TODO: need to add subscriber to optitrak coordinates for current drone location
        end_coord = (5, 10, 15) #TODO: need to add subscriber to optitrak coordiantes for target location + offset for pickup

        frequency =  100 #TODO: need 
        total_time = 5 #TODO: needs to be updated to fit goal time to reasonable speed (maybe function based on euclidian distance?)

        trajectory, velocity, acceleration, jerk = traj.minimum_jerk_extra(start_coord, end_coord, frequency, total_time, plotting=True)

        time_array = [
            i / frequency
            for i in range(1, int(total_time * frequency))
        ]

        if len(trajectory.shape) == 1:
            trajectory = trajectory[:, np.newaxis]
            velocity = velocity[:, np.newaxis]
            acceleration = acceleration[:, np.newaxis]
            jerk = jerk[:, np.newaxis]

        #traj.plot_all(trajectory, velocity, acceleration, jerk, time_array)
        trajectory = traj.minimum_jerk(start_coord, end_coord, frequency, total_time) #TODO: need to convert this into pose array data type
        traj_pub.publish(trajectory)
        r.sleep()

