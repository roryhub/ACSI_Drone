#!/usr/bin/env python3

'''
ROS node for use with Rory Hubbard's minimum jerk trajectory generator using optitrak inputs and minimum jerk theory to be expanded
for potentially multiple trajectory generation styles
'''

import numpy as np
import rospy
import math
from acsi_trajectory.srv import Trajectory_Service
from acsi_observer.msg import Drone_States, Drone_States_Array
from acsi_trajectory import minimum_jerk as traj
from geometry_msgs.msg import Point, PoseStamped, PoseArray, Pose
from rospy.numpy_msg import numpy_msg

class Health_Monitor:

    trajectory_out = Trajectory_Service()

    drone_states = Drone_States()
    target_location = Drone_States()

    speed = 1.0 #m/s

    drone_received = False
    target_received = False

    goal_time = 0.0

    freq = 1.0

    def __init__(self):
        return
    
    def dist_calc(self):
        dx = self.drone_states.x-self.target_location.x
        dy = self.drone_states.y-self.target_location.y
        dz = self.drone_states.z-self.target_location.z

        return math.sqrt(dx**2 + dy**2 + dz**2)

    def gen_trajectory(self):

        if self.drone_received == self.target_received == True:
            self.goal_time = self.dist_calc()/self.speed
            self.trajectory_out = traj.minimum_jerk(self.drone_states, self.target_location, self.freq, self.goal_time)
        else:
            print('no targets found')

def handle_trajectory_service(req):
    global monitor

    print('recieved trajectory request')
    print(req.frequency)
    print(req.speed)
    monitor.freq = req.frequency
    monitor.speed = req.speed
    monitor.gen_trajectory()
    #print(monitor.trajectory_out)
    return monitor.trajectory_out

def observer_callback(observer_states,monitor):
    monitor.drone_states = observer_states
    monitor.drone_received = True

def target_callback(optitrak_location,monitor):

    monitor.target_location.time = rospy.Time.now().secs + rospy.Time.now().nsecs*1e-9
    monitor.target_location.x = optitrak_location.pose.position.x
    monitor.target_location.y = optitrak_location.pose.position.y + .13
    monitor.target_location.z = optitrak_location.pose.position.z +.15
    monitor.target_location.dx = 0
    monitor.target_location.dy = 0
    monitor.target_location.dz = 0

    monitor.target_received = True

monitor = Health_Monitor() #Can't think of a better way to get this into the service call since it can't take args

if __name__ == '__main__':

    rospy.init_node('trajectory_service')
    s = rospy.Service('generate_trajectory', Trajectory_Service, handle_trajectory_service)
    
    #These subscribers currently use the vrpn_client_node library and not Bedillian's I plan on writiing a handler that deals with them seperately and publishes them to identical topics so that this node is agnostic to the data source
    rospy.Subscriber('/observer/states',Drone_States,observer_callback,callback_args=monitor)
    rospy.Subscriber("/vrpn_client_node/Target/pose", PoseStamped, target_callback, callback_args=monitor) #TODO: Determine topic name, right now just uses standard vrpn_client_node formatting

    print('ready to generate trajectories')

    rospy.spin()
