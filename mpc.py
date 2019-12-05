import numpy as np
import matplotlib.pyplot as plt
from scipy import signal
from cvxopt import matrix, solvers



class MPC:

    def __init__(self, A, B, C, Q, R, RD, N):
        self.A = A
        self.B = B
        self.C = C
        self.R = R
        self.RD = RD
        self.Q = Q
        self.N = N

        Qbar, Rbar, RbarD = self.build_bars(Q, R, RD, N)

        Sx = self.build_Sx(A, C, N)

        Su = self.build_Su(A, B, C, N)

        self.G = self.build_G(N)
        
        self.P = self.build_P(Rbar, RbarD, Qbar, Su)

        self.Fu, self.Fr, self.Fx = self.build_Fs(Rbar, Qbar, Su, Sx)
        
        self.W0 = self.build_W0(N)

        self.S = self.build_S(N)
    

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

    
    def build_G(self, N):
        upper_control_limit = np.tril(np.ones(N))
        lower_control_limit = np.tril(-np.ones(N))
        G = np.row_stack((upper_control_limit, lower_control_limit))

        return G

    
    def build_W0(self, N):
        W0 = np.ones(2*N)

        return W0

    
    def build_S(self, N):
        S = np.zeros((2*N, 2))

        return S


    def build_P(self, Rbar, RbarD, Qbar, Su):
        # TODO: include L for multiple input systems
        # P = 2 * (Su.T @ Qbar @ Su + L.T @ Rbar @ L + RbarD)
        P = 2 * (Su.T @ Qbar @ Su + Rbar + RbarD)

        return P

    
    def build_Fs(self, Rbar, Qbar, Su, Sx):
        # TODO: include L for multiple input systems
        Fu = 2 * (Su[:,0].T @ Qbar @ Su + np.diag(Rbar).T)[:, np.newaxis]
        Fr = -2 * (Qbar @ Su).T
        Fx = 2 * (Sx.T @ Qbar @ Su).T

        return Fu, Fr, Fx

    
    def track_trajectory(self, X, U, traj):
        
        T = 40

        for i in range(T):

            if i == 0:
                state_history = np.array([0.0, 0.0])[:, np.newaxis]
            else:
                state_history = np.column_stack((state_history, X))

            traj_horizon = self.get_trajectory_horizon(traj, i)

            q = self.calculate_q(X, U, traj_horizon)

            W = self.calculate_W(U)

            h = self.calculate_h(W, X)

            sol = solvers.qp(matrix(self.P), matrix(q), matrix(self.G), matrix(h))

            Uarr = np.array(sol['x'])
            U += Uarr[0][0]

            X = self.update_states(U, X)

        return state_history


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

    def update_states(self, U, X):
        X = self.A @ X + (self.B * U)[:, np.newaxis]
        
        return X

    def get_trajectory_horizon(self, traj, i):
        traj_horizon = traj[i:i + self.N][:, np.newaxis]

        return traj_horizon





def get_square_wave(T, N):
    t = np.linspace(1, T + N, T + N)
    ref = signal.square(t / 6)

    return t, ref



def main():
    solvers.options['show_progress'] = False

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


    mpc = MPC(A, B, C, Q, R, RD, N)

    T = 40

    t, traj = get_square_wave(T, N)

    U = 0

    X = np.array([0.0, 0.0])[:, np.newaxis]

    state_history = mpc.track_trajectory(X, U, traj)


    fig, ax = plt.subplots()
    ax.plot(t[:40], traj[:40])
    ax.plot(t[:40], state_history[0,:])

    plt.show()




if __name__ == '__main__':

    main()