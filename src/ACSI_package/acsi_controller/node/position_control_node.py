#!/usr/bin/env python2

#TODO: May need to port to python3 but currently using tf which is python 2 dependent
#TODO: Look up issue with pitch flipping
#TODO: Yaw_rate may be absolute yaw? needs better investigation

'''
Euler angle order needs to be ZXY for consistent stability 
Follows Right hand convention. X is forward Z is right Y is up in drone frame
TODO: Possible issues with Optitrack environment alignment on initialization. May need a calibration protocol
'''

import rospy
from acsi_controller.msg import Attitude_Setpoint, Attitude_Error
from geometry_msgs.msg import Pose, PoseArray, PoseStamped, PoseStamped, Quaternion
from std_msgs.msg import String
import numpy as np
import tf
from math import sin, cos, pi

recieved_trajectory = False
recieved_optitrack = False
current_pose = Pose()
trajectory = PoseArray()

#TODO: May need to check axis convention to align with optitrack

def five_point_stencil(error,Ts):
    
    derivitive = Attitude_Error()
    try:
        derivitive.x = -(-error[0].x + 8.0*error[1].x - 8.0*error[3].x + error[4].x)/(12.0*Ts)
        derivitive.y = -(-error[0].y + 8.0*error[1].y - 8.0*error[3].y + error[4].y)/(12.0*Ts)
        derivitive.z = -(-error[0].z + 8.0*error[1].z - 8.0*error[3].z + error[4].z)/(12.0*Ts)
        derivitive.yaw = -(-error[0].yaw + 8*error[1].yaw - 8*error[3].yaw + error[4].yaw)/(12.0*Ts)
    except:
        print('division by zero')

    #print(derivitive)

    return derivitive

def yaw_difference(current_quaternion,desired_quaternion):
    current_explicit_quat = [current_quaternion.x, current_quaternion.y, current_quaternion.z, current_quaternion.w]
    desired_explicit_quat = [desired_quaternion.x, desired_quaternion.y, desired_quaternion.z, desired_quaternion.w]

    quat_diff =tf.transformations.quaternion_multiply(desired_explicit_quat,tf.transformations.quaternion_conjugate(current_explicit_quat)) #Maybe ypr convention is wrong
    euler_diff = tf.transformations.euler_from_quaternion(quat_diff)

    return euler_diff[2]

def error_update(current_pose,desired_pose,error_hist):
    
    derivitive = Attitude_Error()

    if len(error_hist) < 10:
        error_hist.insert(0,Attitude_Error())
        error_calc(current_pose,desired_pose,error_hist)
    else:
        error_hist.insert(0,Attitude_Error())
        error_calc(current_pose,desired_pose,error_hist)
        error_hist.pop()
    
    if len(error_hist) == 2:
        error_calc(current_pose,desired_pose,error_hist)

    
    if len(error_hist) >= 10:
        derivitive = five_point_stencil(error_hist,1.0/100.0)

    return error_hist, derivitive

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

def spin_controller(current_pose,desired_pose,error_hist,integral): #

    error_hist, derivitive = error_update(current_pose,desired_pose,error_hist)
    calculated_setpoint = Attitude_Setpoint()

    calculated_setpoint.thrust, integral = altitude_controller(error_hist,integral,derivitive)
    calculated_setpoint.yaw_rate, integral =  yaw_controller(error_hist,integral,derivitive)

    calculated_setpoint.pitch, calculated_setpoint.roll, integral = position_controller(error_hist,integral,derivitive)
    #print(derivitive)
    return calculated_setpoint

def altitude_controller(error, integral,derivitive):#
    thrust = 47000 + altitude_proportional(error) - altitude_derivitive(error,derivitive)
    if thrust >= 65535:
        thrust = 65534
    if thrust < 0:
        thrust = 0
    
    return thrust, integral

def altitude_proportional(error):#
    p = 25000/2 # original 1/1.5
    return p * error[0].y

def altitude_integral(error ,integral):#
    i = 0

def altitude_derivitive(error ,derivitive):#
    d = 25000*1.5
    return d * derivitive.y

def yaw_controller(error, integral ,derivitive):#

    yaw_rate = 0

    return yaw_rate, integral

def yaw_proportional(error):#
    p = 0
    return p * error[0].yaw_rate

def yaw_integral(error,integral):#
    i = 0

def yaw_derivitive(error,derivitive):# Need to check what the yaw command actually is, rate or absolute. I'm leaning absolute
    d = 0
    return d * derivitive.yaw

def yaw_transform(global_position,yaw):

    rot = yaw
    rot_matrix = np.array([[cos(rot), -sin(rot)],[sin(rot), cos(rot)]])
    position_vector = np.array([[global_position.x],[global_position.z]])
    rel_position = np.dot(rot_matrix,position_vector)
    return rel_position

def get_yaw(orientation):
    explicit_quat = [orientation.x, orientation.y, orientation.z, orientation.w]
    current_euler = tf.transformations.euler_from_quaternion(explicit_quat,'szxy')
    return current_euler[2]

def get_euler(orientation):
    explicit_quat = [orientation.x, orientation.y, orientation.z, orientation.w]
    current_euler = tf.transformations.euler_from_quaternion(explicit_quat, "szxy")
    return current_euler

def position_controller(error,integral,derivitive):#

    pitch_set = pitch_proportional(error) - pitch_derivitive(error,derivitive)
    if pitch_set > 45:
        pitch_set = 45

    pitch_integral(error,integral)

    roll_set = roll_proportional(error) -  roll_derivitive(error,derivitive)
    if roll_set > 45:
        roll_set = 45

    roll_integral(error,integral)

    return pitch_set, -roll_set, integral

def pitch_proportional(error):# needs sat
    p = .2 * 180 / pi
    #sat
    return p * error[0].z

def pitch_integral(error,integral):#
    i = 0

def pitch_derivitive(error,derivitive):#
    d = .24 * 180 / pi
    return d * derivitive.z

def roll_proportional(error):# needs sat
    p = .2 * 180 / pi
    #sat
    return p * error[0].x

def roll_integral(error,integral):#
    i = 0

def roll_derivitive(error,derivitive):#
    d = .24 * 180 / pi
    return d * derivitive.x

def optitrack_callback(opti_message):#
    global current_pose, recieved_optitrack

    current_pose = opti_message.pose
    recieved_optitrack = True

def trajectory_callback(trajectory_in):#
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
    desired_pose.position.x = 0
    desired_pose.position.y = 1.5
    desired_pose.position.z = 0
    desired_pose.orientation.x = 0
    desired_pose.orientation.y = 0
    desired_pose.orientation.z = 0
    desired_pose.orientation.w = 1

    desired_pose_2 = Pose()
    desired_pose_2.position.x = 1
    desired_pose_2.position.y = 1.5
    desired_pose_2.position.z = 0
    desired_pose_2.orientation.x = 0
    desired_pose_2.orientation.y = 0
    desired_pose_2.orientation.z = 0
    desired_pose_2.orientation.w = 1

    desired_pose_3 = Pose()
    desired_pose_3.position.x = 1
    desired_pose_3.position.y = -.5
    desired_pose_3.position.z = 0
    desired_pose_3.orientation.x = 0
    desired_pose_3.orientation.y = 0
    desired_pose_3.orientation.z = 0
    desired_pose_3.orientation.w = 1

    test_setpoint = Attitude_Setpoint()
    test_setpoint.pitch = 0
    test_setpoint.roll = 0
    test_setpoint.yaw_rate = 180
    test_setpoint.thrust = 33000

    r = rospy.Rate(100)
    start_time = rospy.Time.now()
    sequence = 0
    while not rospy.is_shutdown():
        current_setpoint = spin_controller(current_pose,desired_pose,error,integral)
        if rospy.Time.now().secs-start_time.secs > 10 and rospy.Time.now().secs-start_time.secs < 20:
            print('yaw control')
            current_setpoint.yaw_rate = -5
        setpoint_pub.publish(current_setpoint)
        # print(rospy.Time.now().secs-start_time.secs)

        
        #print(error[0])
        #print(current_setpoint.thrust)

        #print('Err x: ' + str(error[0].x) + '   -----   roll:' + str(current_setpoint.roll))
        #print('Err y: ' + str(error[0].y) + '   -----   thrust:' + str(current_setpoint.thrust))
        #print('Err z: ' + str(error[0].z) + '   -----   pitch:' + str(current_setpoint.pitch))
        #print('Err yaw: ' + str(error[0].yaw) + '   -----   yaw_rate:' + str(current_setpoint.yaw_rate))

        #if(recieved_trajectory == True and recieved_optitrack == True and sequence < len(trajectory.poses)):
            #desired_pose = trajectory.poses[sequence]
            #spin_controller(current_pose,desired_pose,error,integral)
            #setpoint_pub.publish(current_setpoint)
            #sequence = sequence + 1
        #else:
            #current_setpoint = spin_controller(current_pose,desired_pose,error,integral)

            #setpoint_pub.publish(current_setpoint)
            #spin_controller(current_pose,desired_pose,error,integral)



        
        r.sleep()

