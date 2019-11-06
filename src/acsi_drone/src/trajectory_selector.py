#!/usr/bin/env python3

import rospy
import threading
from geometry_msgs.msg import Point
from dronecomms.srv import readCSV
from geometry_msgs.msg import PoseArray

waypoint_pub = rospy.Publisher("waypoint_array",PoseArray,queue_size=10)

def input_Thread():

    print("Input Thread Started")

    while not rospy.is_shutdown():
        
        filename = input("Enter desired trajectory name: ") + ".csv"
        
        rospy.wait_for_service('get_trajectory_CSV')
        try:
                CSV_service = rospy.ServiceProxy('get_trajectory_CSV', readCSV)
                response = CSV_service(filename)
                waypoints = response.waypoints
        except:
                print("Service failed, likely invalid trajectory")

        if waypoints == PoseArray():
                print("Null array returned, likely invalid file name")
        else:
                print("Trajectory sent")
                waypoint_pub.publish(waypoints)



        r.sleep()




rospy.init_node('trajectory_Selector')


user_input = threading.Thread(target=input_Thread,daemon=True)
user_input.start()


r = rospy.Rate(60)

while not rospy.is_shutdown():
    r.sleep()