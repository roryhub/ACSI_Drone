import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
from scipy import signal

from mpc import MPC


class Simulator:

    def __init__(self, A, B, C, Q, R, RD, N):
        self.A = A
        self.B = B

        self.mpc = MPC(A, B, C, Q, R, RD, N)

        self.t = None
        self.ref_traj = None


    def get_reference_trajectory(self, T, N):
        self.t = np.linspace(1, T + N, T + N)
        self.ref_traj = signal.square(self.t / 6)

    
    def simulate(self):
        U = 0

        X = np.array([0.0, 0.0])[:, np.newaxis]

        for i in range(len(self.ref_traj)):

            if i == 0:
                state_history = np.array([0.0, 0.0])[:, np.newaxis]
            else:
                state_history = np.column_stack((state_history, X))
            
            remaining_traj = self.ref_traj[i:]

            U = self.mpc.get_control_input(X, U, remaining_traj)

            X = self.update_states(X, U)


        return state_history
    

    def update_states(self, X, U):
        X = self.A @ X + (self.B * U)[:, np.newaxis]
        
        return X


        

    # def animate_and_save(self):
    #     # if coverage doesn't show up in the animation then it means that the coverage is so much biggger than the
    #     # field boundary that the coverage polygon is out of the axes limits of the plot.
    #     # to produce an animation that will expand the axes limits and show the coverage the uncomment this next line.
    #     # self.scale_axes_to_show_large_coverage()
    #     self.plot_boundary()
    #     self.plot_obstacles()
    #     self.plot_set_points()
    #     self.plot_old_path()
    #     self.plot_new_path()
    #     self.establish_artists()
    #     self.make_legend()
    #     plt.tight_layout()

    #     # the number of frames will be which ever list is longer between the combine and tractor positions
    #     number_of_frames = max(len(self.tractor_coord), len(self.combine_coord))
    #     anim = FuncAnimation(self.fig, self.update_frame,
    #         init_func=self.init_animate, frames=number_of_frames,
    #         interval = self.frame_interval, blit=True)
    #     self.save_animation(anim)
    

    # def establish_artists(self):
    #     self.tractor_coord_artist, = self.ax.plot([], [],
    #         marker='o',
    #         linestyle='',
    #         color='xkcd:black',
    #         label='tractor')
    #     self.tractor_heading_artist, = self.ax.plot([], [],
    #         '--',
    #         color='xkcd:sea blue',
    #         label='heading')
    #     self.combine_coord_artist, = self.ax.plot([], [],
    #         marker='o',
    #         linestyle='',
    #         color='xkcd:grey',
    #         label='combine')
    #     self.combine_heading_artist, = self.ax.plot([], [],
    #         '--',
    #         color='xkcd:sea blue',
    #         label='heading')
    #     self.coverage_artist, = self.ax.plot([], [],
    #         '-',
    #         color='xkcd:azure',
    #         label='coverage')


    # def init_animate(self):      
    #     self.tractor_coord_artist.set_data([], [])
    #     self.tractor_heading_artist.set_data([], [])
    #     self.combine_coord_artist.set_data([], [])
    #     self.combine_heading_artist.set_data([], [])
    #     self.coverage_artist.set_data([], [])

    #     return (
    #         self.tractor_coord_artist, self.tractor_heading_artist,
    #         self.combine_coord_artist, self.combine_heading_artist,
    #         self.coverage_artist
    #     )


    # def update_frame(self, i):
    #     trac_index, comb_index, cov_index = self.get_artist_indexes(i)

    #     # animate the tractor and the combine
    #     self.tractor_coord_artist.set_data(*self.tractor_coord[trac_index])
    #     heading_x, heading_y = self.get_heading_line(self.tractor_coord[trac_index], self.tractor_heading[trac_index])
    #     self.tractor_heading_artist.set_data(heading_x, heading_y)

    #     self.combine_coord_artist.set_data(*self.combine_coord[comb_index])
    #     heading_x, heading_y = self.get_heading_line(self.combine_coord[comb_index], self.combine_heading[comb_index])
    #     self.combine_heading_artist.set_data(heading_x, heading_y)

    #     # from the files I've seen so far, we can assume the coverage poly is going to be a Polygon
    #     x, y = self.coverage[cov_index].exterior.coords.xy
    #     self.coverage_artist.set_data(x, y)

    #     return (
    #         self.tractor_coord_artist, self.tractor_heading_artist,
    #         self.combine_coord_artist, self.combine_heading_artist,
    #         self.coverage_artist
    #     )
    

    # def get_artist_indexes(self, i):
    #     # if i becomes greater then the artist index limit,
    #     # then just keep plotting the last value for the animation
    #     trac_index_limit = len(self.tractor_coord) - 1
    #     if i > trac_index_limit:
    #         trac_index = trac_index_limit
    #     else:
    #         trac_index = i
        
    #     comb_index_limit = len(self.combine_coord) - 1
    #     if i > comb_index_limit:
    #         comb_index = comb_index_limit
    #     else:
    #         comb_index = i
        
    #     # coverage gets updated to mqtt at .2 Hz while tractor and combine state get updated at 1 Hz
    #     # so the coverage artist index should increment once for every 5 increments of the other artist indexes
    #     cov_index_limit = len(self.coverage) - 1
    #     cov_index = i//5
    #     if cov_index > cov_index_limit:
    #         cov_index = cov_index_limit
        
    #     return trac_index, comb_index, cov_index



def main():

    A = np.array([
        [1.0, 1.0],
        [0.0, 1.0]
    ])
    B = np.array([0.0, 1.0])
    C = np.array([1.0, 0.0])

    Q = 1.0
    R = 0.1
    RD = 1.0
    N = 100

    sim = Simulator(A, B, C, Q, R, RD, N)

    T = N

    sim.get_reference_trajectory(T, N)

    state_history = sim.simulate()

    fig, ax = plt.subplots()
    ax.plot(sim.t, sim.ref_traj)
    ax.plot(sim.t, state_history[0,:])

    plt.show()


if __name__ == '__main__':

    main()