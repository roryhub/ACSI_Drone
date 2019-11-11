import matplotlib.pyplot as plt
import numpy as np


def get_waypoint(current, setpoint, time, time_freq):
    '''
    calculates a single waypoint for a minimum jerk trajectory
    '''
    delta = setpoint - current
    r = time / time_freq # this variable starts close to 0 and goes to 1 over the course of the trajectory
    equation = 10 * r**3 - 15 * r**4 + 6 * r**5
    waypoint = current + delta * equation
    return waypoint


def get_velocity(current, setpoint, time, time_freq, move_time):
    delta = setpoint - current
    r = time / time_freq
    equation = 30 * r**2 - 60 * r**3 + 30 * r**4
    velocity = delta / move_time * equation
    return velocity


def get_acceleration(current, setpoint, time, time_freq, move_time):
    delta = setpoint - current
    r = time / time_freq
    equation = 60 * r - 180 * r**2 + 120 * r**3
    acceleration = delta / move_time**2 * equation
    return acceleration


def get_jerk(current, setpoint, time, time_freq, move_time):
    delta = setpoint - current
    r = time / time_freq
    equation = 60 - 360 * r + 360 * r**2
    jerk = delta / move_time**3 * equation
    return jerk


def minimum_jerk_extra(coord_start, coord_end, frequency, move_time, plotting=False):
    trajectory = np.array([])
    time_freq = int(move_time * frequency)

    if plotting:
        velocity = np.array([])
        acceleration = np.array([])
        jerk = np.array([])

    try:
        _ = iter(coord_start)
    except TypeError:
        coord_start = [coord_start]
        coord_end = [coord_end]

    dimension = len(coord_start)
    
    for d in range(dimension):

        for t in range(1, time_freq):
            waypoint = get_waypoint(coord_start[d], coord_end[d], t, time_freq)
            trajectory = np.append(trajectory, waypoint)

            if plotting:
                v = get_velocity(coord_start[d], coord_end[d], t, time_freq, move_time)
                velocity = np.append(velocity, v)
                a = get_acceleration(coord_start[d], coord_end[d], t, time_freq, move_time)
                acceleration = np.append(acceleration, a)
                j = get_jerk(coord_start[d], coord_end[d], t, time_freq, move_time)
                jerk = np.append(jerk, j)
        
        if d == 0:
            all_trajectories = trajectory

            if plotting:
                all_velocities = velocity
                all_accelerations = acceleration
                all_jerks = jerk

        else:
            all_trajectories = np.column_stack((all_trajectories, trajectory))

            if plotting:
                all_velocities = np.column_stack((all_velocities, velocity))
                all_accelerations = np.column_stack((all_accelerations, acceleration))
                all_jerks = np.column_stack((all_jerks, jerk))
        
        trajectory = np.array([])

        if plotting:
            velocity = np.array([])
            acceleration = np.array([])
            jerk = np.array([])

    if plotting:
        return all_trajectories, all_velocities, all_accelerations, all_jerks

    else:
        return all_trajectories


def plot_data(x, y, ax, title, ylabel):
    ax.plot(x, y)
    ax.set_title(title, color='xkcd:white')
    ax.set_xlabel('time', color='xkcd:white')
    ax.set_ylabel(ylabel, color='xkcd:white')


def plot_all(trajectory, velocity, acceleration, jerk, time):
    fig, ax = plt.subplots(nrows=2, ncols=2, figsize=(8,8))
    fig.patch.set_facecolor('xkcd:black')
    for i in range(2):
        for j in range(2):
            ax[i, j].set_facecolor('xkcd:black')
            ax[i, j].tick_params(color='xkcd:white', labelcolor='xkcd:white')
            ax[i, j].spines['bottom'].set_color('xkcd:white')
            ax[i, j].spines['top'].set_color('xkcd:white')
            ax[i, j].spines['right'].set_color('xkcd:white')
            ax[i, j].spines['left'].set_color('xkcd:white')
    
    dimension = trajectory.shape[1]

    for d in range(dimension):
        plot_data(time, trajectory[:, d], ax[0,0], 'Trajectory', 'position')
        plot_data(time, velocity[:, d], ax[0,1], 'Velocity', 'velocity')
        plot_data(time, acceleration[:, d], ax[1,0], 'Acceleration', 'acceleration')
        plot_data(time, jerk[:, d], ax[1,1], 'Jerk', 'jerk')

    if dimension > 1:
        data_labels = ['x', 'y', 'z']
        for i in range(2):
            for j in range(2):
                ax[i, j].legend(data_labels[:dimension])

    plt.tight_layout()
    plt.show()


def minimum_jerk(coord_start, coord_end, frequency, move_time):
    '''
    Parameters:
        coord_start: Starting coordinate of trajectory
            - type: could be a float/int or a list/tuple of coordinates depending on dimension of desired trajectory
            - examples: 1, 1.0, (1.0, 2.0), [1, 2.0, 3]

        coord_end: Ending coordinate of trajectory
            - same format as coord_start

        frequency: Need to further investigate how to tune this parameter.
            It basically decides how many waypoints are calculated to compose the trajectory.
            Maybe its dependent on the loop time of your control system?

        move_time: time you want to take to reach destination

    Returns:
        minimum jerk trajectory: numpy array of waypoints for each trajectory
            - dimension depends on the input coordinates
            - 1D trajectory -> (n,) array
            - (x, y, z) trajectory -> (n X 3) array where each column is the trajectory for the corresponding axis
    '''

    trajectory = np.array([]) # will append waypoints in the loop
    time_freq = int(move_time * frequency) # number of waypoints to compose the trajectory

    try:
        # check if the input coordinates are 1D or higher dimension
        _ = iter(coord_start)
    except TypeError:
        # need to put 1D coordinate into a list to make looping easy
        coord_start = [coord_start]
        coord_end = [coord_end]

    dimension = len(coord_start) # 1, 2, or 3
    
    for d in range(dimension): # loop through each dimension 

        for t in range(1, time_freq): # inner loop creates a trajectory for a single dimension
            waypoint = get_waypoint(coord_start[d], coord_end[d], t, time_freq)
            trajectory = np.append(trajectory, waypoint)
        
        if d == 0:
            # return variable equals the 1D trajectory after the first outer loop iteration
            all_trajectories = trajectory
        else:
            # if we are calculating a multidimensional trajectory then stack the trajectories by column
            all_trajectories = np.column_stack((all_trajectories, trajectory))
        
        trajectory = np.array([]) # reset variable for next dimension trajectory

    return all_trajectories


if __name__ == '__main__':
    start_coord = (0, 0, 0)
    end_coord = (5, 10, 15)
    frequency = 100
    total_time = 5

    trajectory, velocity, acceleration, jerk = minimum_jerk_extra(start_coord, end_coord, frequency, total_time, plotting=True)

    time_array = [
        i / frequency
        for i in range(1, int(total_time * frequency))
    ]

    if len(trajectory.shape) == 1:
        trajectory = trajectory[:, np.newaxis]
        velocity = velocity[:, np.newaxis]
        acceleration = acceleration[:, np.newaxis]
        jerk = jerk[:, np.newaxis]

    plot_all(trajectory, velocity, acceleration, jerk, time_array)

    trajectory = minimum_jerk(start_coord, end_coord, frequency, total_time)