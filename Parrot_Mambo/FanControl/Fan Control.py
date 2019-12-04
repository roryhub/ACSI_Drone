#!/usr/bin/env python

import threading
import serial
import time
import numpy as np
import math 
import rospy

print("Node started")

#pub = rospy.Publisher("fan_data", AtLocation, queue_size=1)

global sent
sent = True

catchInfo = False
sendSpeeds = False

send_rate = .05 #rate of data transfer to arduino. used in send_Arduino thread
catch_rate = .05 #rate the Arduino should send to the RPi


ser = serial.Serial("/dev/ttyACM0", 9600)
time.sleep(1)

ser.reset_input_buffer()

fan_ser = None       

def initialize_Arduino(): #intention is for function to run serial setup and send any parameters we want to arduino, for now only message frequency, maybe later different modes.

    global fan_ser    
    global sendSpeeds
    global catchInfo

    print("initialize_Arduino entered")
    ser.write("-999\n")
    time.sleep(1)
    while True:
        ser.write("Are you ready kids?,"+str(catch_rate)+"\n") #so far catch rate is the only thing this is concerned with but later we can add additional things to make arduino updates easier on the fly
        print("Message sent")
        time.sleep(1)
        initialize_response = ser.readline()
        print("Read line captured")
        if repr(initialize_response) == repr("Aye aye captain!\r\n"):
            print("Response received from fan arduino")
            fan_ser = ser
            sendSpeeds = True
            catchInfo = True
            #print str(sendSpeeds) + " " + str(catchInfo)
            time.sleep(2)
            break
        else:
            print("Unexpected response " + repr(initialize_response) + initialize_response)

    print("Arduino initialized successfully... we think...\n")
    return

def send_Arduino(): #sends commands to arduino at a consitant rate
    global sendSpeeds
    global sent

    sent = True

    while(not sendSpeeds):
        pass

    while(sendSpeeds == True):
       
        #fan_ser.write(str(m1)+","+str(m2)+","+str(m3)+","+str(m4)+"\n")
       
        #enter in scale_factor check --- not sure if this is important yet
        time.sleep(send_rate)

    return

def catch_Arduino(): #thread function to catch arduino updates from serial
   
    global catchInfo

    while(not catchInfo):
        pass

    while(catchInfo == True):
        arduino_in = fan_ser.readline() #formatting ("m1,m2,m3,m4,arduino_time")
        arduino_in.decode('latin-1')
        input_vector = arduino_in.split(",")

        #code input vector
        if(len(input_vector) == 5):
            pass
       

    return

def init_nodes():
    rospy.init_node("arduino_nodes")

    #Add subscriber for fan commands
    #fan_command = rospy.Subscriber("Fan_Command", , )

    rospy.loginfo("Arduino node is running")
    rospy.spin()

if __name__ == "__main__":

    initialize_Arduino()
    arduino_catch = threading.Thread(target=catch_Arduino, args=(), daemon=True)
    arduino_send =threading.Thread(target=send_Arduino, args=(), daemon=True)
    
    time.sleep(5)
    
    arduino_catch.start()
    arduino_send.start()

    init_nodes()

    sendSpeeds = False
    catchInfo = False

    arduino_catch.join()
    arduino_send.join()

    fan_ser.write("-999\n") #sending reset protocol to arduino
