#!/usr/bin/env python2

#TODO: May need to port to python3 but currently using tf which is python 2 dependent
#TODO: Update dependency on numpy and tf 

'''
Follows Right hand convention. X is forward Z is right Y is up in drone frame
TODO: Possible issues with Optitrack environment alignment on initialization. May need a calibration protocol
'''

import rospy
from acsi_controller.msg import Attitude_Setpoint, Attitude_Error
from geometry_msgs.msg import Pose, PoseArray, PoseStamped, PoseStamped, Quaternion
from std_msgs.msg import String
import numpy as np
import tf
from math import sin, cos

recieved_trajectory = False
recieved_optitrack = False
current_pose = Pose()
trajectory = PoseArray()

#TODO: Possibly make error msg type to handle the data in a better struct as well as the integral data
#TODO: May need to check axis convention to align with optitrack

def yaw_difference(current_quaternion,desired_quaternion):
    current_explicit_quat = [current_quaternion.x, current_quaternion.y, current_quaternion.z, current_quaternion.w]
    desired_explicit_quat = [desired_quaternion.x, desired_quaternion.y, desired_quaternion.z, desired_quaternion.w]

    quat_diff =tf.transformations.quaternion_multiply(desired_explicit_quat,tf.transformations.quaternion_conjugate(current_explicit_quat))
    euler_diff = tf.transformations.euler_from_quaternion(quat_diff)

    return euler_diff[2]

def error_update(current_pose,desired_pose,error_hist): #TODO: Update to track error in the drone frame
    
    if len(error_hist) == 1:
        error_calc(current_pose,desired_pose,error_hist)
    elif len(error_hist) < 10:
        error_hist.insert(0,Attitude_Error())
        error_calc(current_pose,desired_pose,error_hist)
    else:
        error_hist.insert(0,Attitude_Error())
        error_calc(current_pose,desired_pose,error_hist)
        error_hist.pop()

    return error_hist        

def error_calc(current_pose,desired_pose,error_hist):

    yaw = get_yaw(current_pose.orientation)
    
    global_err = Attitude_Error()

    global_err.x = desired_pose.position.x - current_pose.position.x
    global_err.y = desired_pose.position.y - current_pose.position.y
    global_err.z = desired_pose.position.z - current_pose.position.z
    global_err.yaw = yaw_difference(current_pose.orientation,desired_pose.orientation)

    rel_err = Attitude_Error()

    rel_err.yaw = global_err.yaw
    rel_err.y = global_err.y

    np_err = yaw_transform(global_err,yaw)
    rel_err.x = np_err[0][0]
    rel_err.z = np_err[1][0]

    error_hist[0] = rel_err

def spin_controller(current_pose,desired_pose,error_hist,integral):

    error_hist = error_update(current_pose,desired_pose,error_hist)
    calculated_setpoint = Attitude_Setpoint()

    calculated_setpoint.thrust, integral = altitude_controller(error_hist,integral)
    calculated_setpoint.yaw_rate , integral =  yaw_controller(error_hist,integral)

    calculated_setpoint.pitch, calculated_setpoint.roll, integral = position_controller(error_hist,integral)
    print(calculated_setpoint)
    return calculated_setpoint

def altitude_controller(error, integral):
    thrust = 33000

    return thrust, integral

def altitude_proportional(error):
    p = 0
    return p * error[0].y

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
    return p * error[0].yaw_rate

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
    explicit_quat = [orientation.x, orientation.y, orientation.z, orientation.w]
    current_euler = tf.transformations.euler_from_quaternion(explicit_quat)
    return current_euler[2]

def position_controller(error,integral):

    pitch_proportional(error)
    pitch_integral(error,integral)
    pitch_derivitive(error)

    roll_proportional(error)
    roll_integral(error,integral)
    roll_derivitive(error)

    return 0.0, 0.0, integral

def pitch_proportional(error):
    p = 0
    return p * error[0].x

def pitch_integral(error,integral):
    i = 0

def pitch_derivitive(error):
    d = 0

def roll_proportional(error):
    p = 0
    return p * error[0].z

def roll_integral(error,integral):
    i = 0

def roll_derivitive(error):
    d = 0

def optitrack_callback(opti_message):
    global current_pose, recieved_optitrack

    current_pose = opti_message.pose
    recieved_optitrack = True

def trajectory_callback(trajectory_in):
    global recieved_trajectory, trajectory

    if recieved_trajectory == False and len(trajectory_in.poses) > 2:
        trajectory = trajectory_in
        recieved_trajectory = True
    
if __name__ == '__main__':



    rospy.init_node('position_controller_node')
    status_pub = rospy.Publisher('pid_controller/status',String,queue_size=2)
    
    setpoint_pub = rospy.Publisher('controller/ypr',Attitude_Setpoint,queue_size=2)
    rospy.Subscriber('/vrpn_client_node/Crazyflie/pose',PoseStamped,optitrack_callback)
    rospy.Subscriber('/trajectory/drone_trajectory',PoseArray,trajectory_callback)
    error = [Attitude_Error()]
    integral = Attitude_Error()

    desired_pose = Pose()

    r = rospy.Rate(100)
    sequence = 0
    while not rospy.is_shutdown():
        if(recieved_trajectory == True and recieved_optitrack == True and sequence < len(trajectory.poses)):
            desired_pose = trajectory.poses[sequence]
            setpoint_pub.publish(spin_controller(current_pose,desired_pose,error,integral))
            sequence = sequence + 1
        else:
            pass

        
        r.sleep()

