import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
from scipy import signal
from scipy.io import loadmat
import os

from mpc import MPC


class Simulator:

    def __init__(self, A, B, C, Q, R, RD, umin, umax, N):
        self.A = A
        self.B = B

        self.mpc = MPC(A, B, C, Q, R, RD, umin, umax, N)

        self.t = None
        self.ref_traj = None


    def get_reference_trajectory(self, n, model_type=0):
        self.t = np.linspace(1, n, n)

        if model_type == 0:
            self.ref_traj = signal.square(self.t / 6)
        
        else:
            first = signal.square(self.t / 6)
            second = np.zeros((len(first)))
            third = np.zeros((len(first)))
            fourth = np.zeros((len(first)))

            self.ref_traj = np.row_stack((first, second, third, fourth))

    
    def simulate(self):

        U, X = self.establish_starting_state()

        for i in range(len(self.ref_traj)):

            if i == 0:
                state_history = X
            else:
                state_history = np.column_stack((state_history, X))
            
            remaining_traj = self.ref_traj[i:]

            U = self.mpc.get_control_input(X, U, remaining_traj)

            X = self.update_states(X, U)


        self.state_history = state_history
    

    def establish_starting_state(self):
        U = np.zeros((self.B.shape[1], 1))
        X = np.zeros((self.A.shape[1], 1))

        return U, X
    

    def update_states(self, X, U):
        X = self.A @ X + self.B @ U
        
        return X


    def plot(self):
        fig, ax = plt.subplots()
        ax.plot(self.t, self.ref_traj)
        ax.plot(self.t, self.state_history[0,:])

        plt.show()


def main(model_type=0):

    if model_type == 0: # SISO
        A = np.array([
            [1.0, 1.0],
            [0.0, 1.0]
        ])
        B = np.array([0.0, 1.0]).reshape(-1,1)
        C = np.array([1.0, 0.0]).reshape(1,-1)

        Q = np.array([1.0])
        R = np.array([0.1])
        RD = np.array([1.0])

        umin = np.array([-1.0])
        umax = np.array([1.0])

    else: # MIMO
        directory = 'Crazyflie_Matlab'
        fname = 'Rory.mat'

        full_path = os.path.join(directory, fname)

        matfile = loadmat(full_path)

        A = matfile['A']
        B = matfile['B']
        C = matfile['C']

        nout = C.shape[1]
        nin = B.shape[1]

        Q = np.array([1.0] * nout)
        R = np.array([0.1] * nin)
        RD = np.array([1.0] * nin)

        umin = np.tile(np.array([-1.0]),(nin, 1))
        umax = np.tile(np.array([1.0]),(nin, 1))

    N = 100

    sim = Simulator(A, B, C, Q, R, RD, umin, umax, N)

    traj_length = 2*N

    sim.get_reference_trajectory(traj_length, model_type=model_type)

    sim.simulate()

    sim.plot()


if __name__ == '__main__':

    mtype = 0
    main(mtype)