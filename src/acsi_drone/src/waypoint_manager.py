#!/usr/bin/env python3

import rospy
import math
from geometry_msgs.msg import Point
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import PoseArray
from dronecomms.srv import readCSV
import numpy as np 
from rospy.numpy_msg import numpy_msg
from rospy_tutorials.msg import Floats
import threading

global drone_data  

current_pose = PoseStamped()
desired_pose = PoseStamped()
waypoints = PoseArray()
threshold = .15 #goal proximity to point before next sent
i = 0
takeoff = False
flight_started = False

def optitrak_callback(optitrak_location):
    global current_pose

    current_pose.header = optitrak_location.header
    current_pose.pose.orientation = optitrak_location.pose.orientation
    current_pose.pose.position.x = optitrak_location.pose.position.x
    current_pose.pose.position.y = optitrak_location.pose.position.z
    current_pose.pose.position.z = -optitrak_location.pose.position.y

    return

def get_current_distance():

    global current_pose
    global desired_pose

    dist = math.sqrt((current_pose.pose.position.x-desired_pose.pose.position.x)**2+(current_pose.pose.position.y-desired_pose.pose.position.y)**2+(current_pose.pose.position.z-desired_pose.pose.position.z)**2)

    return dist

def takeoff_Protocol():
    global takeoff
    global current_pose
    global desired_pose
    global waypoints

    print("Entering Takeoff Protocol\n")
    start_time = rospy.get_time()
    desired_pose = PoseStamped()

    start_x = current_pose.pose.position.x
    start_y = current_pose.pose.position.y

    while rospy.get_time()-start_time < .3:
        desired_point=Point(start_x,start_y,0)
        desired_pose.pose.position = desired_point
        desired_pose.header.stamp = rospy.get_rostime()
        desired_pose.header.frame_id = "optitrak"
        command_pub.publish(desired_pose)
        r.sleep()
    
    while rospy.get_time()-start_time < 5:
        desired_point = Point(start_x,start_y,-1.5)
        desired_pose.pose.position = desired_point
        desired_pose.header.stamp = rospy.get_rostime()
        desired_pose.header.frame_id = "optitrak"
        command_pub.publish(desired_pose)       
        r.sleep()

    takeoff = True
    if(waypoints != PoseArray()):
        desired_pose.pose = waypoints.poses[0]
        command_pub.publish(desired_pose)
    print("Takeoff Completed\n")


def drone_data_callback(data):
    global flight_started
    drone_data = data.data
    if drone_data[0] == 1 and flight_started == False:
        flight_started = True
        print("Flight started\n")
        takeoff_Protocol()

def waypoint_recieved(waypoint_array):
    global waypoints
    global i
    global current_pose
    global desired_pose

    print("New trajectory recieved")
    waypoints = waypoint_array
    i = 0

    if(takeoff == True):
        desired_pose.pose = waypoints.poses[0]
        current_pose.header = waypoints.header


    return

rospy.init_node('waypoint_handler')

command_pub = rospy.Publisher('trajectory_command',PoseStamped,queue_size=10)

rospy.Subscriber("/vrpn_client_node/RigidBody1/pose", PoseStamped, optitrak_callback)

rospy.Subscriber("waypoint_array",PoseArray,waypoint_recieved)

rospy.Subscriber("drone_data_recieved", numpy_msg(Floats), drone_data_callback)

r = rospy.Rate(60)


while not rospy.is_shutdown():
    print(get_current_distance())
    if get_current_distance() < threshold and i < len(waypoints.poses) and takeoff == True:
        print("reached goal point")
        i = i + 1
        print("Assigning new waypoint")
        desired_pose.pose = waypoints.poses[i]
        command_pub.publish(desired_pose)
    elif i == len(waypoints.poses) and i != 0:
        print("Trajectory finished")
        i = i + 1
    
    
    desired_pose.header = current_pose.header

    r.sleep()
