#!/usr/bin/env python2

'''
Euler angle order needs to be ZXY for consistent stability 
Follows Right hand convention. X is forward Z is right Y is up in drone frame
TODO: Possible issues with Optitrack environment alignment on initialization. May need a calibration protocol
'''

import rospy
from acsi_controller.msg import Attitude_Setpoint, Attitude_Error
from acsi_observer.msg import Drone_States
from geometry_msgs.msg import Pose, PoseArray, PoseStamped, PoseStamped, Quaternion
from std_msgs.msg import String
import numpy as np
import tf
from copy import deepcopy
from math import sin, cos, pi


class Observer:

    current_states = Drone_States()
    state_history = []
    last_update =  0
    def __init__(self):
        self.last_update = rospy.Time.now()
        return
    
    def handle_opti(self,opti_msg):

        self.current_states.time = rospy.Time.now().nsecs*1e-9+rospy.Time.now().secs
        self.current_states.x = opti_msg.position.x
        self.current_states.y = opti_msg.position.y
        self.current_states.z = opti_msg.position.z
        current_euler = self.get_euler(opti_msg.orientation)
        self.current_states.roll = current_euler[0]
        self.current_states.pitch = current_euler[1]
        self.current_states.yaw = current_euler[2]
        if len(self.state_history) > 10:
            self.update_vel()
            self.state_history.insert(0, deepcopy(self.current_states))
            self.state_history.pop()
        elif len(self.state_history) < 5:
            self.state_history.insert(0, deepcopy(self.current_states))
        else:
            self.update_vel()
            self.state_history.insert(0, deepcopy(self.current_states))

        return

    def update_vel(self):

        Ts = (self.state_history[0].time-self.state_history[4].time)/(4) #making sample time the average in the last five samples converted to seconds

        try:
            self.current_states.dx = -(-self.state_history[0].x + 8.0*self.state_history[1].x - 8.0*self.state_history[3].x + self.state_history[4].x)/(12.0*Ts)
            self.current_states.dy = -(-self.state_history[0].y + 8.0*self.state_history[1].y - 8.0*self.state_history[3].y + self.state_history[4].y)/(12.0*Ts)
            self.current_states.dz = -(-self.state_history[0].z + 8.0*self.state_history[1].z - 8.0*self.state_history[3].z + self.state_history[4].z)/(12.0*Ts)
            self.current_states.droll = -(-self.state_history[0].yaw + 8*self.state_history[1].yaw - 8*self.state_history[3].yaw + self.state_history[4].yaw)/(12.0*Ts)
            self.current_states.dpitch = -(-self.state_history[0].yaw + 8*self.state_history[1].yaw - 8*self.state_history[3].yaw + self.state_history[4].yaw)/(12.0*Ts)
            self.current_states.dyaw = -(-self.state_history[0].yaw + 8*self.state_history[1].yaw - 8*self.state_history[3].yaw + self.state_history[4].yaw)/(12.0*Ts)
        except:
            print('division by zero')

    def get_euler(self,orientation):
        explicit_quat = [orientation.x, orientation.y, orientation.z, orientation.w]
        current_euler = tf.transformations.euler_from_quaternion(explicit_quat, "szxy")
        return current_euler
