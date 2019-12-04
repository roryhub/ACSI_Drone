%% startVars.m - Initialize variables
% This script initializes variables and buses required for the model to
% work.

% Copyright 2013-2017 The MathWorks, Inc.

% Register variables in the workspace before the project is loaded
initVars = who;

% Variants Conditions
asbVariantDefinition;
VSS_COMMAND = 0;       % 0: Signal builder, 1: Joystick, 2: Pre-saved data, 3: Pre-saved data in a Spreadsheet
VSS_SENSORS = 1;       % 0: Feedthrough, 1: Dynamics
VSS_ENVIRONMENT = 0;   % 0: Constant, 1: Variable
VSS_VISUALIZATION = 3; % 0: Scopes, 1: Send values to workspace, 2: FlightGear, 3: Simulink 3D.
VSS_VEHICLE = 1;       % 0: Linear Airframe, 1: Nonlinear Airframe.
 
% Bus definitions
asbBusDefinitionCommand; 
asbBusDefinitionSensors;
asbBusDefinitionEnvironment;
asbBusDefinitionStates;

% Enum definitions
asbEnumDefinition;

% Sampling rate
Ts= 0.005;

% Simulation time
TFinal = 100;

% Geometric properties
thrustArm = 0.10795;

% Initial conditions
init.date = [2017 1 1 0 0 0];
init.posLLA = [42.299886 -71.350447 71.3232];
init.posNED = [57 95 -0.046];
init.vb = [0 0 0];
init.euler = [0 0 0];
init.angRates = [0 0 0];

% Initialize States:
States = Simulink.Bus.createMATLABStruct('StatesBus');
States.V_body = init.vb';
States.Omega_body = init.angRates';
States.Euler = init.euler';
States.X_ned = init.posNED';
States.LLA = init.posLLA;
States.DCM_be = angle2dcm(init.euler(3),init.euler(2),init.euler(1));

% Environment
rho = 1.184;
g = 9.81;

% Variables
% Set Mambo model
model = 'Mambo';
% Obtain vehicle variables
vehicleVars;
% Obtain sensor variables
sensorsVars;
% Obtain controller variables
controllerVars;
% Obtain command variables
commandVars;
% Obtain estimator variables
estimatorVars;
% Obtain visualization variables
visualizationFlightGearVars;

% Simulation Settings
takeOffDuration = 1;

%% Custom Variables
% Add your variables here:
% myvariable = 0;

% Neural Network Desired Performance
maxDeviationTarget = [0.05 0.05 0.05]

% Vision Ts
VTs= 40*Ts;

% Control System Gains
% Yaw PD Controller
P_yaw = 0.004;
D_yaw = 0.3*0.004;


% XY PD Controller
P_xy = [-0.15; 0.12];
I_xy = [-0.015; 0.017];
D_xy = [0.15; -0.12];
I_xy_antiWU = 0.001;
I_xy_satLimitHigh = 2;
I_xy_satLimitLow  = -2;

% Attitude PID Controller
P_pr = [0.013; 0.01];
I_pr = 0.01;
D_pr = [0.002;0.003];
I_pr_antiWU = 0.001;
I_pr_satLimitHigh = 2;
I_pr_satLimitLow  = -2;

% Altitude PD Controller
P_z = 0.8;
I_z = 0.5;
D_z = 0.3;
I_z_antiWU = 0.001;
I_z_satLimitHigh = 2;
I_z_satLimitLow  = -2;

%Load defined PID error busses
load('createdBuses.mat', 'error_pid1', 'error_pid2', 'ErrorBus');

% Register variables after the project is loaded and store the variables in
% initVars so they can be cleared later on the project shutdown.
endVars = who;
initVars = setdiff(endVars,initVars);
clear endVars;
