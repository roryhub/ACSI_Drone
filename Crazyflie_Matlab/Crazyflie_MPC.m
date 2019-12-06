
% Adjust these matrices for crazyflie
dynamics_sys = load('linearization_test_4output.mat');
A = dynamics_sys.linsys1.A;
B = dynamics_sys.linsys1.B;
C = dynamics_sys.linsys1.C;

% Let nu = number of control inputs
% Let nx = number of states
% Let nob = number of observed states
nu = size(B,2);
nx = size(A,2);
nob = size(C,1);

R = 1/10*eye(nu); %Penalty to control value. Adjust to number of control inputs we have (nu). 4 thrust/ypr?
RD = 1*eye(nu);  %Weight the slew rate - respect actuation bandwidths. Adjust to number of control inputs (nu) (4?)
Q = 1*eye(nob);  %Adjust to how many states we want to control. 6 position/velocity. How many angular? (nob)

N = 5;  %Change the horizon for MPC
Qbar = []; % Should be nob*N x nob*N
Rbar = []; % Should be nu*N x nu*N
RbarD = []; % Should be nu*N x nu*N
Sx = []; % Should be nob*N x nx
Su = cell(nob*N, nu*N); % Should be nob*N x nu*N
CAB = cell(nob*N, nu); % Should be nob*N x nu
% For matrix dimensions, z will be nu*N x 1
% r should be nob*N x 1

for ii = 1:N
    Qbar = blkdiag(Qbar,Q);
    Rbar = blkdiag(Rbar,R);
    RbarD = blkdiag(RbarD,RD);
    Sx = [Sx;C*A^ii];
    CAB{ii, 1} = C*A^(ii-1)*B;
end
for ii = 1:N
    for jj = 1:ii
        Su{ii,jj} = sum(cat(3,CAB{1:ii-jj+1}),3);
    end
    for jj = ii+1:N
        Su{ii,jj} = zeros(nob,nu);
    end
end

Su1=  Su(:,1); % Should be nob*N x nu.
Su = cell2mat(Su);
Su1 = cell2mat(Su1);

L = cell(N,N); % Lower block diagonal of identity matrices. nu*N x nu*N
for ii = 1:N
    for jj = 1:ii
        L{ii,jj} = eye(nu,nu);
    end
    for jj = ii+1:N
        L{ii,jj} = zeros(nu,nu);
    end
end
L = cell2mat(L);

H = 2*(L'*Rbar*L+RbarD+Su'*Qbar*Su);
Fu1 = 2*(Rbar*L)';  %Should be nu*N x nu*N. Multiply later by entire sequence of control usage
Fu2 = 2*(Su1'*Qbar*Su)';% Should be nu x nu*N. Multiply later by just last control usage
Fr = -2*(Qbar*Su)';
Fx = 2*(Sx'*Qbar*Su)';

%% Need to modify this for MIMO
% Need to check dimensions of constraints
% input constraint of -10 to 10 for rpy, input constraint of 0 to 1 for yaw
%  [-10;-10;-10;0]   < u(-1) + du < [ 10,10,10,1]
% rate
control_upper = [10;10;10;1];
control_lower = -1*[-10;-10;-10;0];  % -uk < -umin 
W0 = [];    % constraint on control
for i = 1:N
    W0 = cat(1,W0,control_upper);
end
for j = 1:N
    W0 = cat(1,W0,control_lower);  % final size (2*N*nu,1)
end

G = [tril(ones(N*nu));-tril(ones(N*nu))];
S = zeros(2*N*nu,nx);  % constraint states

%% Setup initial conditions for simulation
X = zeros(nx,1); % Initial states. Should be nx x 1

T = 40; % Number of time steps to simulate
r = square([1:T+N+1]/6); % Step reference
r2 = zeros(size(r)); % Pad zeros for extending step reference to nob states
for i = 1:nob-1
    r = [r;r2];
end

r = reshape(r, [], 1);                                            

Z = zeros(N*nu, 1); %Predicted delta U. Should be nu*N x 1
U = zeros(nu,1); % Initial control usage. Should be nu x 1
U_all = repmat(U, N, 1); % Initial control usage for all prediction steps. Should be nu*N x 1

options = optimoptions('quadprog');
options.Display = 'none';
Uopt = zeros(nu, T);
Xact = zeros(nx, T);
%% Need to modify this for MIMO
for ii = 1:T-1
    Xact(:,ii) = X; %For graphing
    f = Fx*X + Fu2*U + Fu1*U_all + Fr*r(nob*ii:nob*(ii+N)-1);   % linear term in QP 
    U_init = [];
    for iter = 1:N
        U_init = cat(1,U_init,U);
    end
    W = W0 - [U_init;U_init]; % du matrix for W
    Z = quadprog(H,f,G,W+S*X,[],[],[],[],[],options);  %Here is the magic!
    Uopt(:, ii) = U + Z(1);  %Modify this for MIMO after getting Z matrix. Just use the first item   
    U = Uopt(:, ii);
    U_all = repmat(U, N, 1);
    X = A*X+B*U;
end
Xact(:,ii+1) = X;
plot([1:T],Xact(1,:),[1:T],r(nob*[1:T]))
plot(Uopt)