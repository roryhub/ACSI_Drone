import numpy as np
import matplotlib.pyplot as plt
from scipy import signal
from cvxopt import matrix, solvers


class MPC:

    def __init__(self, A, B, C, Q, R, RD, N):
        solvers.options['show_progress'] = False

        self.N = N # horizon length

        self.precompute(A, B, C, Q, R, RD)

    
    def precompute(self, A, B, C, Q, R, RD):

        Qbar, Rbar, RbarD = self.build_bars(Q, R, RD, self.N)

        Sx = self.build_Sx(A, C, self.N)

        Su = self.build_Su(A, B, C, self.N)

        L = self.build_L(self.N)

        self.G = self.build_G(L, self.N)
        
        self.P = self.build_P(Rbar, RbarD, Qbar, Su, L)

        self.Fu, self.Fr, self.Fx = self.build_Fs(Rbar, Qbar, Su, Sx, L)
        
        self.W0 = self.build_W0(self.N)

        self.S = self.build_S(self.N)
    

    def build_bars(self, Q, R, RD, N):
        Qbar = np.diag(Q * np.ones(N))
        Rbar = np.diag(R * np.ones(N))
        RbarD = np.diag(RD * np.ones(N))

        return Qbar, Rbar, RbarD


    def build_Sx(self, A, C, N):
        Sx = np.array([
            C @ np.linalg.matrix_power(A, i)
            for i in range(1, N+1)
        ])

        return Sx
    

    def build_Su(self, A, B, C, N):
        Su1 = np.cumsum([
            C @ np.linalg.matrix_power(A, i) @ B
            for i in range(N)
        ])

        Su2 = np.array([
            np.concatenate((i*[0], Su1[:-i]))
            for i in range(1, N)
        ]).T

        Su = np.column_stack((Su1, Su2))

        return Su

    
    def build_L(self, N):
        L = np.tril(np.ones(N))

        return L

    
    def build_G(self, L, N):
        upper_control_limit = L
        lower_control_limit = np.negative(L)
        G = np.row_stack((upper_control_limit, lower_control_limit))

        return G

    
    def build_W0(self, N):
        W0 = np.ones(2*N)

        return W0

    
    def build_S(self, N):
        S = np.zeros((2*N, 2))

        return S


    def build_P(self, Rbar, RbarD, Qbar, Su, L):
        P = 2 * (Su.T @ Qbar @ Su + L.T @ Rbar @ L + RbarD)

        return P

    
    def build_Fs(self, Rbar, Qbar, Su, Sx, L):
        Fu = 2 * (Su.T @ Qbar.T @ Su[:,0] + np.diag(L.T @ Rbar.T))[:, np.newaxis]
        Fr = -2 * (Su.T @ Qbar.T)
        Fx = 2 * (Su.T @ Qbar.T @ Sx)

        return Fu, Fr, Fx


    def get_control_input(self, X, U, traj):
        traj_horizon = self.get_trajectory_horizon(traj)

        q = self.calculate_q(X, U, traj_horizon)

        W = self.calculate_W(U)

        h = self.calculate_h(W, X)

        sol = solvers.qp(matrix(self.P), matrix(q), matrix(self.G), matrix(h))

        Uarr = np.array(sol['x'])
        U += Uarr[0][0]

        return U


    def calculate_q(self, X, U, ref_horizon):
        q = self.Fx @ X + self.Fu * U + self.Fr @ ref_horizon

        return q


    def calculate_W(self, U):
        low_limit = np.ones(self.N) * -U
        high_limit = np.ones(self.N) * U
        W = (self.W0 + np.concatenate((low_limit, high_limit)))[:, np.newaxis]

        return W


    def calculate_h(self, W, X):
        h = W + self.S @ X

        return h


    def get_trajectory_horizon(self, traj):
        # if horizon is greater than trajectory length, increase trajectory by stacking the last position
        delta = self.N - len(traj)
        if delta > 0:
            end_position = np.array([traj[-1]])
            traj = np.concatenate((traj, np.tile(end_position, delta)))

        traj_horizon = traj[:self.N][:, np.newaxis]

        return traj_horizon