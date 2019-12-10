import matplotlib.pyplot as plt #Version 3.0.3
import numpy as np #Version 1.17.4
import rospy
from geometry_msgs.msg import Pose, PoseArray
from copy import deepcopy
from acsi_observer.msg import Drone_States, Drone_States_Array

'''
Need to clean up and change some stuff in here for future use
TODO: modify to use matrix solving and take arbitrary initial and final states
'''

def generate_coefficients(initial, final, move_time):

    tf = move_time
    jerk_matrix = np.matrix([[1, 0, 0, 0, 0, 0],[0, 1, 0, 0, 0, 0],[0, 0, 2, 0, 0, 0],[1,tf,tf**2,tf**3,tf**4,tf**5],[0, 1, 2*tf, 3*tf**2, 4*tf**3, 5*tf**4],[0, 0, 2, 6*tf, 12*tf**2, 20*tf**3]])
    conditions  = np.concatenate((initial, final))

    return np.linalg.inv(jerk_matrix) @ conditions

def generate_states(coefficients, t):
    state_matrix = np.matrix([[1, t, t**2, t**3, t**4, t**5], [0, 1, 2*t, 3*t**2, 4*t**3, 5*t**4], [0, 0, 2, 6*t, 12*t**2, 20*t**3]])
    return state_matrix @ coefficients

def minimum_jerk(start_states, end_states, frequency, move_time):
    '''
    start states and end states take form 
    '''
    state_waypoint = Drone_States()
    states_array = Drone_States_Array()
    N = int(move_time * frequency) # number of waypoints to compose the trajectory
    
    x_start = np.matrix([[start_states.x],[start_states.dx],[0]])
    x_end   = np.matrix([[end_states.x],[end_states.dx],[0]])

    y_start = np.matrix([[start_states.y],[start_states.dy],[0]])
    y_end   = np.matrix([[end_states.y],[end_states.dy],[0]])

    z_start = np.matrix([[start_states.z],[start_states.dz],[0]])
    z_end   = np.matrix([[end_states.z],[end_states.dz],[0]])

    coefficients_x = generate_coefficients(x_start, x_end, move_time)
    coefficients_y = generate_coefficients(y_start, y_end, move_time)
    coefficients_z = generate_coefficients(z_start, z_end, move_time)

    for i in range(1, N+1): # loop creates a trajectory all dimensions at once
        x_states = generate_states(coefficients_x, i/frequency)
        y_states = generate_states(coefficients_y, i/frequency)
        z_states = generate_states(coefficients_z, i/frequency)

        state_waypoint.time = start_states.time + i/frequency

        state_waypoint.x    = x_states[0][0]
        state_waypoint.dx   = x_states[1][0]

        state_waypoint.y  = y_states[0][0]
        state_waypoint.dy = y_states[1][0]

        state_waypoint.z  = z_states[0][0]
        state_waypoint.dz = z_states[1][0]

        states_array.state_array.append(deepcopy(state_waypoint))

    return states_array



# if __name__ == '__main__':
#     start = Drone_States()
#     end   = Drone_States()

#     start.x = 6
#     start.y = 5
#     start.z = 5
#     start.dx = 5
#     start.dy = 1
#     start.dz = 1

#     end.x = 0
#     end.y = 0
#     end.z = 0
#     end.dx = 0
#     end.dy = 0
#     end.dz = 0

#     traj = minimum_jerk(start, end, 1, 10)
#     print(traj)
