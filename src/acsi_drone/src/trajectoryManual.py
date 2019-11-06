#!/usr/bin/env python3

import rospy
import numpy as np 
from geometry_msgs.msg import PoseStamped
import threading
from geometry_msgs.msg import Point
from rospy.numpy_msg import numpy_msg
from rospy_tutorials.msg import Floats

opti_recieved = False
desired_point = Point(0,0,0)
current_pose = PoseStamped()

global drone_data  
start_time = 0
takeoff = False
flight_started = False

def drone_data_callback(data):
    global flight_started
    drone_data = data.data
    if drone_data[0] == 1 and flight_started == False:
        flight_started = True
        print("Flight started\n")
        takeoff_Protocol()
        

def takeoff_Protocol():
    global takeoff 
    global current_pose
    print("Entering Takeoff Protocol\n")
    start_time = rospy.get_time()
    desired_pose = PoseStamped()

    start_x = current_pose.pose.position.x
    start_y = current_pose.pose.position.y

    desired_point=Point(start_x,start_y,0)
    while rospy.get_time()-start_time < .3:
        desired_point=Point(start_x,start_y,0)
        desired_pose.header.stamp = rospy.get_rostime()
        desired_pose.header.frame_id = "optitrak"
        traj_pub.publish(desired_pose)
        r.sleep()
    
    while rospy.get_time()-start_time < 5:
        desired_point = Point(start_x,start_y,-1.5)
        desired_pose.pose.position = desired_point
        desired_pose.header.stamp = rospy.get_rostime()
        desired_pose.header.frame_id = "optitrak"
        traj_pub.publish(desired_pose)       
        r.sleep()

    takeoff = True
    print("Takeoff Completed\n")

def optitrak_callback(optitrak_location):
    global current_pose

    current_pose.header = optitrak_location.header
    current_pose.pose.orientation = optitrak_location.pose.orientation
    current_pose.pose.position.x = optitrak_location.pose.position.x
    current_pose.pose.position.y = optitrak_location.pose.position.z
    current_pose.pose.position.z = -optitrak_location.pose.position.y

    return   



def input_Thread():

    global desired_point, takeoff
    
    while not rospy.is_shutdown():
        
        user_in = input("Enter desired location point \n")
        
        input_vector = user_in.split(',')
        if len(input_vector) == 3 and takeoff == True:
            desired_point = Point(float(input_vector[0]),float(input_vector[1]),float(input_vector[2]))
            desired_pose = PoseStamped()
            desired_pose.pose.position = desired_point
            desired_pose.header.frame_id = "optitrak"
            desired_pose.header.stamp = rospy.get_rostime()

            traj_pub.publish(desired_pose)

        elif takeoff == False:
            print("Wait for takeoff protocol to complete\n")
        else:
            print("Please provide input as x,y,z\n")


        r.sleep()






rospy.init_node('trajectory_Manual')

print("Node started\n")
r = rospy.Rate(60)
traj_pub = rospy.Publisher('trajectory_command', PoseStamped, queue_size = 1)

rospy.Subscriber("/vrpn_client_node/RigidBody1/pose", PoseStamped, optitrak_callback)
rospy.Subscriber("drone_data_recieved", numpy_msg(Floats), drone_data_callback)
print("Subscribed\n")

user_input = threading.Thread(target=input_Thread,daemon=True)
user_input.start()

print("Input Thread Started\n")


while not rospy.is_shutdown():
    if flight_started == False:
        traj_pub.publish(current_pose)
    r.sleep()