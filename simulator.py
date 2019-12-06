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