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
print('hi')

def optitrak_callback(optitrak_location, container):

    '''
    Assigns the PoseStamped data to whatever Pose variable you pass it, dropping the header
    '''

    container = optitrak_location.pose

    return


if __name__ == '__main__':

    rospy.init_node('trajectory_generator')

    r = rospy.Rate(1) #Amount of times per second new trajectory will be generated and rospy loop will run #TODO: Set on the rosparam server

    drone_location = Pose() 
    target_location = Pose()

    traj_pub = rospy.Publisher("trajectory_array",PoseArray,queue_size=10)

    #These subscribers currently use the vrpn_client_node library and not Bedillian's I plan on writiing a handler that deals with them seperately and publishes them to identical topics so that this node is agnostic to the data source
    rospy.Subscriber("/vrpn_client_node/Drone/pose", PoseStamped, optitrak_callback,callback_args=drone_location) #TODO: Determine topic name, right now just uses standard vrpn_client_node formatting
    rospy.Subscriber("/vrpn_client_node/Target/pose", PoseStamped, optitrak_callback,callback_args=target_location) #TODO: Determine topic name, right now just uses standard vrpn_client_node formatting

    target_z_offset = .5 #Amount of distance above target we need to be to capture it. #TODO: Set on the rosparam server

    while not rospy.is_shutdown():

        

        #TODO: Turn ROS types to 
        start_coord = (0, 0, 0) #TODO: need to add subscriber to optitrak coordinates for current drone location
        end_coord = (5, 10, 15) #TODO: need to add subscriber to optitrak coordiantes for target location + offset for pickup

        frequency =  100 #TODO: need 
        total_time = 5 #TODO: needs to be updated to fit goal time to reasonable speed (maybe function based on euclidian distance and goal max speed?)

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
        trajectory = PoseArray()
        traj_pub.publish(trajectory)
        r.sleep()

