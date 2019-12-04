import numpy as np
import matplotlib.pyplot as plt
from scipy import signal
from cvxopt import matrix, solvers



def get_square_wave(T, N):
    t = np.linspace(1, T + N, T + N)
    ref = signal.square(t / 6)

    return t, ref


def build_bars(Q, R, RD, N):
    Qbar = np.diag(Q * np.ones(N))
    Rbar = np.diag(R * np.ones(N))
    RbarD = np.diag(RD * np.ones(N))

    return Qbar, Rbar, RbarD


def build_Sx(A, C, N):
    Sx = np.array([
        C @ np.linalg.matrix_power(A, i)
        for i in range(1, N+1)
    ])

    return Sx


def build_Su(A, B, C, N):
    Su1 = np.cumsum([
        C @ np.linalg.matrix_power(A, i) @ B
        for i in range(N)
    ])
    Su2 = np.array([
        np.concatenate((i*[0], Su1[:-i]))
        for i in range(1,N)
    ]).T

    Su = np.column_stack((Su1, Su2))

    return Su


def build_P(Rbar, RbarD, Qbar, Su):
    P = 2 * (Rbar + RbarD + Su.T @ Qbar @ Su)

    return P


def build_Fs(Rbar, Qbar, Su, Sx):
    Fu = 2 * (np.diag(Rbar).T + Su[:,0].T @ Qbar @ Su)[:, np.newaxis]
    Fr = -2 * (Qbar @ Su).T
    Fx = 2 * (Sx.T @ Qbar @ Su).T

    return Fu, Fr, Fx


def build_G(N):
    G = np.row_stack((np.tril(np.ones(N)), -np.tril(np.ones(N))))

    return G


def build_W0(N):
    W0 = np.ones(2*N)

    return W0


def build_S(N):
    S = np.zeros((2*N, 2))

    return S


def get_reference_horizon(ref, i, N):
    ref_horizon = ref[i:i + N][:, np.newaxis]

    return ref_horizon


def calculate_q(Fx, Fu, Fr, X, U, ref_horizon):
    q = Fx @ X + Fu * U + Fr @ ref_horizon

    return q


def calculate_W(W0, U, N):
    low_limit = np.ones(N) * -U
    high_limit = np.ones(N) * U
    W = (W0 + np.concatenate((low_limit, high_limit)))[:, np.newaxis]

    return W


def calculate_h(W, S, X):
    h = W + S @ X

    return h


def update_states(A, B, U, X):
    X = A @ X + (B * U)[:, np.newaxis]
    
    return X


def mpc(A, B, C, R, RD, Q, N):

    Qbar, Rbar, RbarD = build_bars(Q, R, RD, N)

    Sx = build_Sx(A, C, N)

    Su = build_Su(A, B, C, N)
    
    P = build_P(Rbar, RbarD, Qbar, Su)

    Fu, Fr, Fx = build_Fs(Rbar, Qbar, Su, Sx)

    G = build_G(N)
    
    W0 = build_W0(N)

    S = build_S(N)

    U = 0

    X = np.array([0.0, 0.0])[:, np.newaxis]
    T = 40

    t, ref = get_square_wave(T, N)

    for i in range(T):

        if i == 0:
            state_history = np.array([0.0, 0.0])[:, np.newaxis]
        else:
            state_history = np.column_stack((state_history, X))

        ref_horizon = get_reference_horizon(ref, i, N)

        q = calculate_q(Fx, Fu, Fr, X, U, ref_horizon)

        W = calculate_W(W0, U, N)

        h = calculate_h(W, S, X)

        sol = solvers.qp(matrix(P), matrix(q), matrix(G), matrix(h))

        Uarr = np.array(sol['x'])
        U += Uarr[0][0]

        X = update_states(A, B, U, X)

    fig, ax = plt.subplots()
    ax.plot(t[:40], ref[:40])
    ax.plot(t[:40], state_history[0,:])

    plt.show()


def main():
    solvers.options['show_progress'] = False

    A = np.array([
        [1.0, 1.0],
        [0.0, 1.0]
    ])
    B = np.array([0.0, 1.0])
    C = np.array([1.0, 0.0])

    R = 0.1
    RD = 1.0
    Q = 1.0
    N = 10

    mpc(A, B, C, R, RD, Q, N)


if __name__ == '__main__':

    main()