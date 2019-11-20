#!/usr/bin/env python3

"""
Simple example that connects to the first Crazyflie found, ramps up/down
the motors and disconnects.
"""

import rospy
import logging
import time
import threading

import cflib
from cflib.crazyflie import Crazyflie
from std_msgs.msg import String, Float64MultiArray
from geometry_msgs.msg import Twist, Pose
from acsi_controller.msg import Attitude_Setpoint

command_goal = Attitude_Setpoint()
command_lock = threading.Lock()
logging.basicConfig(level=logging.ERROR)


def command_callback(command):
    global command_goal
    command_goal = command

def keyboard_callback(command):
    global command_goal
    command_lock.acquire()
    command_goal.pitch = command.linear.x
    command_goal.roll = command.linear.y
    command_goal.yaw_rate = command.angular.z
    command_goal.thrust = int(33000 + command.linear.z * 20000)
    command_lock.release()
    print(command_goal)

def setpoint_manager(drone):
    global command_goal
    r = rospy.Rate(100) #100 Hz is the recommended communication baudrate
    drone._cf.commander.send_setpoint(0, 0, 0, 0)
    while not rospy.is_shutdown():
        command_lock.acquire()
        drone._cf.commander.send_setpoint(command_goal.pitch, command_goal.roll, command_goal.yaw_rate, command_goal.thrust)
        command_lock.release()
        print(command_goal)
        r.sleep()



class CrazyflieComm:
    """Example that connects to a Crazyflie and ramps the motors up/down and
    the disconnects"""
    
    start_thread = False

    def __init__(self, link_uri):
        """ Initialize and run the example with the specified link_uri """

        self._cf = Crazyflie(rw_cache='./cache')

        self._cf.connected.add_callback(self._connected)
        self._cf.disconnected.add_callback(self._disconnected)
        self._cf.connection_failed.add_callback(self._connection_failed)
        self._cf.connection_lost.add_callback(self._connection_lost)

        self._cf.open_link(link_uri)

        print('Connecting to %s' % link_uri)

    def _connected(self, link_uri):
        """ This callback is called from the Crazyflie API when a Crazyflie
        has been connected and the TOCs have been downloaded."""

        # Start a separate thread to do the motor control.
        # Anything done in here will hijack the external thread 
        self.start_thread = True

    def _connection_failed(self, link_uri, msg):
        """Callback when connection initial connection fails (i.e no Crazyflie
        at the specified address)"""
        print('Connection to %s failed: %s' % (link_uri, msg))

    def _connection_lost(self, link_uri, msg):
        """Callback when disconnected after a connection has been made (i.e
        Crazyflie moves out of range)"""
        print('Connection to %s lost: %s' % (link_uri, msg))

    def _disconnected(self, link_uri):
        """Callback when the Crazyflie is disconnected (called in all cases)"""
        print('Disconnected from %s' % link_uri)

    def _ramp_motors(self):
        thrust_mult = 1
        thrust_step = 500
        thrust = 20000
        pitch = 0
        roll = 0
        yawrate = 0

        # Unlock startup thrust protection
        self._cf.commander.send_setpoint(0, 0, 0, 0)

        while thrust >= 20000:
            self._cf.commander.send_setpoint(roll, pitch, yawrate, thrust)
            time.sleep(0.1)
            if thrust >= 25000:
                thrust_mult = -1
            thrust += thrust_step * thrust_mult
        self._cf.commander.send_setpoint(0, 0, 0, 0)
        # Make sure that the last packet leaves before the link is closed
        # since the message queue is not flushed before closing
        time.sleep(0.1)
        self._cf.close_link()


if __name__ == '__main__':
    rospy.init_node('crazyflie_comms_node')
    status_pub = rospy.Publisher('crazyflie_comms/status',String,queue_size=10)
    tries = 0
    # Initialize the low-level drivers (don't list the debug drivers)
    cflib.crtp.init_drivers(enable_debug_driver=False)
    # Scan for Crazyflies and use the first one found
    print('Scanning interfaces for Crazyflies:\n')
    r = rospy.Rate(.2)

    while not rospy.is_shutdown():
        tries = tries + 1
        available = cflib.crtp.scan_interfaces()
        found = False
        if len(available) > 0:
            print('Crazyflies found:')
            for i in available:
                print(i[0])
                if(i[0]=='radio://0/80/2M'):
                    le = CrazyflieComm(i[0])
                    found = True
        elif found == False :
            print('\rAttempt ' + str(tries) + ' failed, no correct Crazyflie found         ', end =" ")
        if found == True:
            break
        r.sleep()

    rospy.Subscriber('controller/ypr',Attitude_Setpoint,command_callback) 
    rospy.Subscriber('cmd_vel',Twist,keyboard_callback)

    r = rospy.Rate(100)
    crazy_thread = threading.Thread(target=setpoint_manager,daemon=True,args=[le])

    while not rospy.is_shutdown():

        if le.start_thread:
            crazy_thread.start()
            le.start_thread = False

        r.sleep()

