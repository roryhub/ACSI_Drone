#!/usr/bin/env python3
import socket
import rospy
import numpy as np
import geometry_msgs.msg
import threading
from rospy.numpy_msg import numpy_msg
from rospy_tutorials.msg import Floats
from dronecomms.msg import droneOut32, pidIn32
#send_arr = np.zeros(24, dtype=np.dtype('Float32'))
global sockrec, pos_arr, ref_arr, pid_arr
cb_called = True
pos_arr = np.zeros(4, dtype=np.dtype('Float32'))
ref_arr = np.zeros(4, dtype=np.dtype('Float32'))
rec_dat = np.zeros(20, dtype=np.dtype('Float32'))
nnBool = True
start_time = 0
nnTime = 5

p_x = np.float32(-0.15)
i_x = np.float32(-0.015)
d_x = np.float32(0.15)
p_y = np.float32(0.12)
i_y = np.float32(0.017)
d_y = np.float32(-0.12)
p_p = np.float32(0.013)
i_pr = np.float32(0.01)
d_p = np.float32(0.002)
p_r = np.float32(0.01)
d_r = np.float32(0.003)
p_z = np.float32(0.8)
i_z = np.float32(0.5)
d_z = np.float32(0.3)
p_yaw = np.float32(0.004)
d_yaw = np.float32(0.0012)
pid_arr = np.array([p_x, i_x, d_x, p_y, i_y, d_y, p_p, i_pr, d_p, p_r, d_r, p_z, i_z, d_z, p_yaw, d_yaw])

def receive_thread():
    global sockrec, rec_dat
    while(True):
        data = sockrec.recv(4096)
        rec_dat = np.frombuffer(data, dtype=np.dtype('Float32'))
        #rospy.loginfo("Recieved Data: %s", rec_dat)
        #print("received message ", rec_dat)

def pos_callback(mocap):
    global cb_called, pos_arr
    cb_called= True
    
    x_pos = np.float32(mocap.pose.position.x)
    y_pos = np.float32(mocap.pose.position.z)
    z_pos = np.float32(mocap.pose.position.y)
    yaw_pos = np.float32(0)
    
    pos_arr = np.array([x_pos, y_pos, z_pos, yaw_pos])

def trajectory_callback(desired_pose):
    global ref_arr
    
    desired_point = desired_pose.pose.position
    #print(desired_point)

    x_ref = np.float32(desired_point.x)
    y_ref = np.float32(desired_point.y)
    z_ref = np.float32(desired_point.z)
    yaw_ref = np.float32(0.0)

    ref_arr = np.array([x_ref, y_ref, z_ref, yaw_ref])
    print("Trajectory recieved ", x_ref, ",",y_ref,",",z_ref,"\n")

def pid_callback(dat):
    global pid_arr
    gains = dat.data

    p_p = np.float32(gains[0])
    p_r = np.float32(gains[1])
    i_pr = np.float32(gains[2])
    d_p = np.float32(gains[3])
    d_r = np.float32(gains[4])
    p_x = np.float32(gains[5])
    p_y = np.float32(gains[6])
    i_x = np.float32(gains[7])
    i_y = np.float32(gains[8])
    d_x = np.float32(gains[9])
    d_y = np.float32(gains[10])
    p_yaw = np.float32(gains[11])
    d_yaw = np.float32(gains[12])
    p_z = np.float32(gains[13])
    i_z = np.float32(gains[14])
    d_z = np.float32(gains[15])
    print("Gains: ", gains, "\n")

    pid_arr = np.array([p_x, i_x, d_x, p_y, i_y, d_y, p_p, i_pr, d_p, p_r, d_r, p_z, i_z, d_z, p_yaw, d_yaw])

rospy.init_node('droneComms')
UDP_IP = "192.168.3.1"
localhost = "192.168.3.2"
UDP_PORT_SEND = 25000
UDP_PORT_REC = 25001

print ("UDP target IP:", UDP_IP)
print("UDP send port:", UDP_PORT_SEND)
print("UDP rec port:", UDP_PORT_REC)

rec_dat_pub = rospy.Publisher('drone_data_recieved',droneOut32,queue_size = 10)

sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) # UDP
sockrec = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
i = 1
while not rospy.is_shutdown():
    try:
        sockrec.bind((localhost, UDP_PORT_REC))
        print("socket binded")
        break
    except:
        print("Attempt " + str(i) + ": waiting 10 seconds and trying again")
        i+=1
        rospy.sleep(10.)

rec_thread = threading.Thread(target=receive_thread, daemon=True)
rec_thread.start()

rospy.Subscriber("/vrpn_client_node/RigidBody1/pose", geometry_msgs.msg.PoseStamped, pos_callback)
rospy.Subscriber('trajectory_command',geometry_msgs.msg.PoseStamped,trajectory_callback)

print("Subscribed")

r = rospy.Rate(60)
while not rospy.is_shutdown():
    if cb_called:
        send_arr = np.concatenate((pos_arr, ref_arr, pid_arr))
        sock.sendto(send_arr.tobytes(), (UDP_IP, UDP_PORT_SEND))
        rec_dat_pub.publish(rec_dat)
        if (rec_dat[0] != 0) and start_time == 0:
            start_time = rospy.get_time()
        if (rospy.get_time() - start_time > nnTime) and (not nnBool) and (start_time > 0):
            rospy.Subscriber('/pid_gains',pidIn32,pid_callback)
            nnBool = True

    r.sleep()
