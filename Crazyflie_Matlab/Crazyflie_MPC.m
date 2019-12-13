%% Remove this if running in simulink (?)
clc
clear
close all

% Get system model
load('Rory.mat')

% Let nu = number of control inputs
% Let nx = number of states
% Let nob = number of observed states
nu = size(B,2);
nx = size(A,1);
nob = size(C,1);

% Roll, pitch, yaw rate, thrust
R = diag([1, 1, 1, 1e-8]); % Penalty to control usage. Thrust values are very high 10^4 so make penalty very small

%Penalty to change in control usage. These weights should be small.
RD = diag([1/100, 1/100, 1/10, 1e-8]);

% X, Y, Z, Yaw
% Penalty for reference tracking error. Care most about Y (height).
Q = diag([1000, 10000, 1000, 1000]);

N = 20;  %Change the horizon for MPC

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
H = (H+H')/2;

%% Constraints

% This is for just max and min input constraints
G = [L;-L]; % Should be (2*nu*N) x (nu*N)

% Thrust constraints take into account feedforward thrust
maxT = 18000;
minT = -47000;

%Fix this later if drone behaving weird. Are these angles in radians or
%degrees?
maxYPR = 20%/180*pi;
minYPR = -20%/180*pi;

% Make W0
uMax_constraint = [maxYPR; maxYPR; maxYPR; maxT]; %Assume control inputs stacked YPRT
uMin_constraint = -1 * [minYPR; minYPR; minYPR; minT];

uMax = repmat(uMax_constraint, N, 1);
uMin = repmat(uMin_constraint, N, 1);

W0 = [uMax; uMin]; % Should be (2*nu*N) x 1
S = zeros(2*nu*N, nx); % Should be (2*nu*N) x nx. No output constraints so all 0

%% Setup initial conditions for simulation
X = zeros(nx,1); % Initial states. Should be nx x 1
T = 100; % Number of time steps to simulate

%Create references to follow
ref = square([1:T+N+1]/6);
rx = 3*ones(size(ref)); % Step reference
% rx = zeros(size(rx));

ry = ones(size(ref)); % Step reference
% ry = zeros(size(rx));

rz = square([1:T+N+1]/6); % Step reference
% rz = zeros(size(rx));

ryaw = 2 * square([1:T+N+1]/6); % Step reference
% ryaw = zeros(size(rx));

r = [rx;ry;rz;ryaw];
r = reshape(r, [], 1); %Should be N*nob x 1

Z = zeros(N*nu, 1); %Predicted delta U. Should be nu*N x 1
U = zeros(nu,1); % Initial control usage. Should be nu x 1
U_all = repmat(U, N, 1); % Initial control usage for all prediction steps. Should be nu*N x 1

options = optimoptions('quadprog');
options.Display = 'none';
Uopt = zeros(nu, T);
Xact = zeros(nx, T);
Ract = zeros(nob, T);
%% Need to modify this for MIMO
for ii = 1:T-1
    Xact(:,ii) = X; %For graphing
    new_r = r(nob*(ii-1)+1:nob*(ii+N-1)); % Get new reference vector to follow
    Ract(:,ii) = new_r(1:nob, 1); %For debugging reference
    f = Fx*X + Fu2*U + Fu1*U_all + Fr*new_r;
    W = W0 + [-1 * U_all; U_all]; %Should be (2*nu*N) x 1
    Z = quadprog(H,f,G,W+S*X,[],[],[],[],[],options);  %Here is the magic!
    Uopt(:, ii) = U + Z(1:nu, 1);  %Just use the first item   
    U = Uopt(:, ii);
    U_all = repmat(U, N, 1);
    X = A*X+B*U;
end
Xact(:, ii+1) = X;
y = C*Xact; % Get actual drone outputs

time = [1:T]*0.04;

%Plot performance and control usage
figure('Position', [10 700 900 650])
subplot(4,1,1)
plot(time,y(1,:), time,rx(1:T), '-')%, time,Ract(1,:), 'r*')
title('X position')

subplot(4,1,2)
plot(time,y(2,:) ,time,ry(1:T), '-')%, time,Ract(2,:), 'r*')
title('Y position')

subplot(4,1,3)
plot(time,y(3,:), time,rz(1:T), '-')%, time,Ract(3,:), 'r*')
title('Z position')

subplot(4,1,4)
plot(time,y(4,:), time, ryaw(1:T), '-')%, time,Ract(4,:), 'r*')
title('Yaw position')
suptitle('Reference tracking')
xlabel('Time (sec)')
legend('System response', 'Reference')%, 'Reference verified')


figure('Position', [10 20 900 650])
subplot(4,1,1)
plot(time, Uopt(1,:))
title('Roll control')

subplot(4,1,2)
plot(time, Uopt(2,:))
title('Pitch control')

subplot(4,1,3)
plot(time, Uopt(3,:))
title('Yaw rate control')

subplot(4,1,4)
plot(time, Uopt(4,:))
title('Thrust control')
xlabel('Time (sec)')
suptitle('Control usage')
