#!/usr/bin/env python3


#-------------------PSUEDO-------------------------
#read in hoop locations from optitrack methodically
#Use location +/- distance from the center to set up the waypoint list
#Figure out if the Optitrak is reliable for the YPR info
#Create trajectory list and then send it to waypoint manager in Pose Array
#Create ability to settle for an amount of time??? if needed --- would need custom message type + another line in the CSV
#Dynamic tolerance specification for certain waypoints?
#--------------------------------------------------


#Subscribe to hoop topic

import rospy
import math
from geometry_msgs.msg import Point
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import PoseArray
from geometry_msgs.msg import Pose
from dronecomms.srv import interpolateTrajectory
from dronecomms.srv import interpolateTrajectoryRequest
from dronecomms.srv import interpolateTrajectoryResponse
from copy import deepcopy

import numpy as np 
import threading

hoop_offset = .25
step_size = .5

def input_Thread():
        print("Input Thread Started")
        while not rospy.is_shutdown():
                input("Press enter to lock in trajectory: ")
                generate_Trajectory()
                r.sleep()

def generate_Trajectory():
    print("Entered gen")
    num_hoops = len(hoop_poses.poses)

    #Bubble sort to order based on Y position
    for i in range(num_hoops): 
        for j in range(0, num_hoops-i-1): 
            if hoop_poses.poses[j].position.y < hoop_poses.poses[j+1].position.y: 
                hoop_poses.poses[j], hoop_poses.poses[j+1] = hoop_poses.poses[j+1], hoop_poses.poses[j] 
    
    #Generate trajectory
    waypoints_Hoops = PoseArray()
    waypoints_Hoops.header = hoop_poses.header

    for pose in hoop_poses.poses:
        waypoints_Hoops.poses.append(deepcopy(pose))
        waypoints_Hoops.poses.append(deepcopy(pose))
        waypoints_Hoops.poses[-1].position.y -= hoop_offset
        waypoints_Hoops.poses[-2].position.y += hoop_offset

    rospy.wait_for_service('interpolate_Trajectory')
    interpolate_service = rospy.ServiceProxy('interpolate_Trajectory', interpolateTrajectory)
    req = interpolateTrajectoryRequest()
    req.waypoints_in = waypoints_Hoops
    req.step_size = step_size
    
    resp = interpolateTrajectoryResponse()
    resp = interpolate_service(req)
    print("called interpolate")
    waypoint_pub.publish(resp.waypoints_out)
    return

def hoop_Callback(optitrak_location, hoop):

    global hoop_poses

    hoop_poses.header = optitrak_location.header
    hoop_poses.poses[hoop].orientation = optitrak_location.pose.orientation
    hoop_poses.poses[hoop].position.x = optitrak_location.pose.position.x
    hoop_poses.poses[hoop].position.y = optitrak_location.pose.position.z
    hoop_poses.poses[hoop].position.z = -optitrak_location.pose.position.y

    return

rospy.init_node("hoop_trajectory")


user_input = threading.Thread(target=input_Thread,daemon=True)
user_input.start()

waypoint_pub = rospy.Publisher("waypoint_array",PoseArray,queue_size=10)

topics = rospy.get_published_topics()

sub_index = len("/vrpn_client_node/")

i = 0
optitrack_topics = []
for topic in topics:
    if(topic[0][0:sub_index] == "/vrpn_client_node/"):
        optitrack_topics.append(topic)
    i+=1

hoop_num = 1
hoop_topics = []
sub_index = len("/vrpn_client_node/Hoop")

for topic in optitrack_topics:
    if(topic[0][0:sub_index] == "/vrpn_client_node/Hoop"):
        hoop_topics.append(topic)

hoop_num = 1
hoop_poses = PoseArray()
for topic in hoop_topics:
    rospy.Subscriber(topic[0], PoseStamped, hoop_Callback,callback_args=hoop_num-1)
    hoop_poses.poses.append(Pose())
    hoop_num+=1


r = rospy.Rate(.5)


while not rospy.is_shutdown():
    r.sleep()
# rospy.Subscriber("/vrpn_client_node/RigidBody1/pose", PoseStamped, optitrak_callback)
