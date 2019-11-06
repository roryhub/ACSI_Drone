#!/usr/bin/env python3

import rospy
import math
from geometry_msgs.msg import Point
from geometry_msgs.msg import Pose
from geometry_msgs.msg import PoseArray
from dronecomms.srv import interpolateTrajectory
from copy import deepcopy

def handle_interpolate_trajectory(req):

    print("Recieved interpolation request")
    finished = False
    step_size = req.step_size
    trajectory_in = PoseArray()
    trajectory_in.poses = req.waypoints_in.poses
    #print(trajectory_in.poses)
    points_added = 0
    #this while loop keeps running until a full run has been added without a point being added
    while finished == False:
        size = len(trajectory_in.poses)
        trajectory_out = PoseArray()
        finished = True

        i = 0
        #runs through the Pose Array and checks to see if 2 consecutive poses are above the max step_size distance, if so it adds an interpolated point
        for i in range(size-1):

            trajectory_out.poses.append(deepcopy(trajectory_in.poses[i]))


            if(find_pose_distance(trajectory_in.poses[i],trajectory_in.poses[i+1]) > step_size):
                print(find_pose_distance(trajectory_in.poses[i],trajectory_in.poses[i+1]))

                trajectory_out.poses.append(find_bisect_point(trajectory_in.poses[i],trajectory_in.poses[i+1]))
                points_added += 1
                finished = False

        trajectory_out.poses.append(deepcopy(trajectory_in.poses[-1]))
        trajectory_in = deepcopy(trajectory_out)
    landing_point = deepcopy(trajectory_out.poses[-1])
    landing_point.position.y -= .5
    trajectory_out.poses.append(deepcopy(landing_point))
    landing_point.position.z = .5
    trajectory_out.poses.append(deepcopy(landing_point))
    print("There were " + str(points_added) + " points added.")
    return trajectory_out

def find_pose_distance(waypoint_1, waypoint_2):
    return math.sqrt((waypoint_1.position.x-waypoint_2.position.x)**2+(waypoint_1.position.y-waypoint_2.position.y)**2+(waypoint_1.position.z-waypoint_2.position.z)**2)

def find_bisect_point(waypoint_1, waypoint_2):
    bisect = Pose()
    bisect.position.x = (waypoint_1.position.x + waypoint_2.position.x)/2
    bisect.position.y = (waypoint_1.position.y + waypoint_2.position.y)/2
    bisect.position.z = (waypoint_1.position.z + waypoint_2.position.z)/2
    return bisect


def open_interpolate_server():
    rospy.init_node('trajectory_interpolation_server')
    print("Running")
    s = rospy.Service('interpolate_Trajectory', interpolateTrajectory, handle_interpolate_trajectory)
    print("Ready to interpolate trajectories")
    rospy.spin()

if __name__ == "__main__":
    print("node started")
    open_interpolate_server()
