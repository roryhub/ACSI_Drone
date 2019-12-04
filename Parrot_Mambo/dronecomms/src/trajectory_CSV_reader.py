#!/usr/bin/env python3

import os
import csv
import rospy
from geometry_msgs.msg import Point
from geometry_msgs.msg import Pose
from geometry_msgs.msg import PoseArray
from dronecomms.srv import readCSV

def handle_CSV_reader(req):

    filename = req.filename
    dirname = os.path.dirname(__file__)
    relative_path = os.path.join(dirname, '../Trajectories/'+filename)
    try:

        with open(relative_path, mode='r') as csv_file:
        
            csv_reader = csv.DictReader(csv_file, delimiter=',')
            print('reading file')
            waypoints = PoseArray()
            waypoints.header.frame_id = "optitrak"
            waypoints.header.stamp = rospy.get_rostime() 
            line_count = 0

            for row in csv_reader:
                print(line_count)
                temp_pose = Pose()
                temp_pose.position =  Point(float(row["X"]),float(row["Y"]),float(row["Z"]))
                waypoints.poses.append(temp_pose)
                line_count += 1
        return waypoints
    except:
        print("Error: Likely name issue")
        return PoseArray()

def open_CSV_server():
    rospy.init_node('open_CSV_server')
    print("Running")
    s = rospy.Service('get_trajectory_CSV', readCSV, handle_CSV_reader)
    print("Ready to add read CSV")
    rospy.spin()

if __name__ == "__main__":
    print("node started")
    open_CSV_server()
