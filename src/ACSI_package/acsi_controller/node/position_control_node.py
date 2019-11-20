#!/usr/bin/env python2

#TODO: May need to port to python3 but currently using tf which is python 2 dependent
#TODO: Update dependency on numpy and tf 

import rospy
from acsi_controller.msg import Attitude_Setpoint, Attitude_Error
from geometry_msgs.msg import Pose, PoseArray, PoseStamped, PoseStamped, Quaternion
from std_msgs.msg import String
import numpy as np
import tf
from math import sin, cos

#TODO: Possibly make error msg type to handle the data in a better struct as well as the integral data
#TODO: May need to check axis convention to align with optitrack

def yaw_difference(current_quaternion,desired_quaternion):

    quat_diff =tf.transformations.quaternion_multiply(desired_quaternion,tf.transformations.quaternion_conjugate(current_quaternion))
    euler_diff = tf.transformations.euler_from_quaternion(quat_diff)

    return euler_diff[2]

def error_update(current_pose,desired_pose,error_hist): #TODO: Update to track error in the drone frame
    
    if len(error_hist == 1):
        error_hist(0).pitch = desired_pose.position.x - current_pose.position.x
        error_hist(0).roll = desired_pose.position.y - current_pose.position.y
        error_hist(0).yaw_rate = yaw_difference(current_pose.orientation,desired_pose.orientation)
        error_hist(0).thrust = desired_pose.position.z - current_pose.position.z
    elif len(error_hist) < 10:
        error_hist.insert(0,Attitude_Setpoint())
        error_hist(0).pitch = desired_pose.position.x - current_pose.position.x
        error_hist(0).roll = desired_pose.position.y - current_pose.position.y
        error_hist(0).yaw_rate = yaw_difference(current_pose.orientation,desired_pose.orientation)
        error_hist(0).thrust = desired_pose.position.z - current_pose.position.z
    else:
        error_hist.insert(0,Attitude_Setpoint())
        error_hist(0).pitch = desired_pose.position.x - current_pose.position.x
        error_hist(0).roll = desired_pose.position.y - current_pose.position.y
        error_hist(0).yaw_rate = yaw_difference(current_pose.orientation,desired_pose.orientation)
        error_hist(0).thrust = desired_pose.position.z - current_pose.position.z
        error_hist.pop()

    return error_hist        

def error_calc(current_pose,desired_pose,error_hist):

    yaw = get_yaw(current_pose.orientation)
    
    global_err = Attitude_Setpoint() #TODO: Replace with error message


    error_hist(0).pitch = desired_pose.position.x - current_pose.position.x
    error_hist(0).roll = desired_pose.position.y - current_pose.position.y
    error_hist(0).yaw_rate = yaw_difference(current_pose.orientation,desired_pose.orientation)
    error_hist(0).thrust = desired_pose.position.z - current_pose.position.z

    local_err = 

    rel_des_position = yaw_transform(desired_pose)

def spin_controller(current_pose,desired_pose,error_hist,integral):

    error_hist = error_update(current_pose,desired_pose,error_hist)
    calculated_setpoint = Attitude_Setpoint()

    current_yaw = get_yaw(current_pose.orientation)

    calculated_setpoint.thrust = altitude_controller(error_hist,integral)
    calculated_setpoint.yaw_rate =  yaw_controller(error_hist,integral)

    calculated_setpoint.pitch, calculated_setpoint.roll, integral = position_controller(error_hist,integral,current_yaw)

def altitude_controller(error, integral):
    thrust = 33000

    return thrust, integral

def altitude_proportional(error):
    p = 0
    return p * error(0).z

def altitude_integral(error,integral):
    i = 0

def altitude_derivitive(error):
    d = 0

def yaw_controller(error, integral):

    yaw_rate = 0

    yaw_p = 0
    yaw_i = 0
    yaw_d = 0

    return yaw_rate, integral

def yaw_proportional(error):
    p = 0
    return p * error(0).yaw_rate

def yaw_integral(error,integral):
    i = 0

def yaw_derivitive(error):
    d = 0

def yaw_transform(global_position,yaw):

    rot = -yaw
    rot_matrix = np.array([[cos(rot), -sin(rot)],[sin(rot), cos(rot)]])
    rel_position = rot_matrix*np.array([[global_position.x],[global_position.z]])
    return rel_position

def get_yaw(orientation):
    current_euler = tf.transformations.euler_from_quaternion(orientation.orientation)
    return current_euler(2)

def position_controller(error,integral,yaw):

    pitch_proportional()
    pitch_integral()
    pitch_derivitive()

    roll_proportional()
    roll_integral()
    roll_derivitive()

    return pitch, roll, integral

def pitch_proportional(error):
    
    return pitch_proportional(error)

def pitch_integral(error,integral):
    i = 0

def pitch_derivitive(error):
    d = 0

def roll_proportional(error):
    
    return pitch_proportional(error)

def roll_integral(error,integral):
    i = 0

def roll_derivitive(error):
    d = 0



if __name__ == '__main__':
    rospy.init_node('position_controller_node')
    status_pub = rospy.Publisher('pid_controller/status',String,queue_size=10)

    rospy.Publisher('controller/ypr',Attitude_Setpoint)
    rospy.Subscriber('optitrak/drone_pose',Pose)
    rospy.Subscriber('trajectory/drone_goal',Pose)
    rospy.Subscriber('trajectory/drone_trajectory',PoseArray)

    error = [Attitude_Error()]
    integral = Attitude_Error()


    r = rospy.Rate(100)
    while not rospy.is_shutdown():

        spin_controller(current_pose,desired_pose)
        
        r.sleep()

