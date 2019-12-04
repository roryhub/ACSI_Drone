load('RSdata.mat');
close all;

RSrun_yawError = [rt_error.time, rt_error.signals.values(:,1), ...
    rt_error.signals.values(:,2), rt_error.signals.values(:,3)];
RSrun_prError = [rt_error.time rt_error.signals.values(:,4:5), ...
    rt_error.signals.values(:,6:7), rt_error.signals.values(:,8:9)];
RSrun_xyError = [rt_error.time rt_error.signals.values(:,10:11), ...
    rt_error.signals.values(:,12:13), rt_error.signals.values(:,14:15)];
RSrun_zError = [rt_error.time rt_error.signals.values(:,16), ...
    rt_error.signals.values(:,17), rt_error.signals.values(:,18)];

RSrun_stateXYZ = [rt_estimatedStates.time, rt_estimatedStates.signals.values(:,1:3)];
RSrun_stateYPR = [rt_estimatedStates.time, rt_estimatedStates.signals.values(:,4:6)];
RSrun_statedXYZ = [rt_estimatedStates.time, rt_estimatedStates.signals.values(:,7:9)];
RSrun_statePQR = [rt_estimatedStates.time, rt_estimatedStates.signals.values(:,10:12)];

RSrun_refXYZ = [rt_ref.time, rt_ref.signals.values(:,1:3)];
RSrun_refYPR = [rt_ref.time, rt_ref.signals.values(:,4:6)];

RSrun_AccelXYZ = [rt_imu.time, rt_imu.signals.values(:,1:3)];
RSrun_GyroPQR = [rt_imu.time, rt_imu.signals.values(:,4:6)];
RSrun_Alt = [rt_alt.time, rt_alt.signals.values(:,1:2)];

RSrun_snrFlg = [rt_sonar_flags.time, rt_sonar_flags.signals.values(:,1:5)];

RSrun_mocapXYZ = [rt_mocap.time, rt_mocap.signals.values(:,1:3)];

%% Plot Controller Gains

% accelerometer, gyro, orientation, motor commands
figure('Name','Control Effort Graph','Position',[50 50 550 550]);

%XY Error
h(1)=subplot(2,1,1);
plot(RSrun_xyError(:,1),RSrun_xyError(:,2));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,3));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,4));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,5));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,6));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,7));
ylabel('Control Effort');
legend('P_x', 'P_y','I_x', 'I_y','D_x', 'D_y');
%ylim([I_xy_satLimitLow I_xy_satLimitHigh])

%PR Error
h(1)=subplot(2,1,2);
plot(RSrun_prError(:,1),RSrun_prError(:,2));hold all;
plot(RSrun_prError(:,1),RSrun_prError(:,3));hold all;
plot(RSrun_prError(:,1),RSrun_prError(:,4));hold all;
plot(RSrun_prError(:,1),RSrun_prError(:,5));hold all;
plot(RSrun_prError(:,1),RSrun_prError(:,6));hold all;
plot(RSrun_prError(:,1),RSrun_prError(:,7));
ylabel('Control Effort');
legend('P_p', 'P_r','I_p', 'I_r','D_p', 'D_r');
%ylim([I_xy_satLimitLow I_xy_satLimitHigh])

%% Plot State Estimations

figure('Name','XY Estimate Graph','Position',[700 50 550 550]);

%XY
plot(RSrun_stateXYZ(:,2),RSrun_stateXYZ(:,3));hold all;
plot(RSrun_mocapXYZ(:,2),RSrun_mocapXYZ(:,3));hold all;
plot(RSrun_refXYZ(:,2),RSrun_refXYZ(:,3));
xlabel('Estimated X');
ylabel('Estimated Y');
legend('State Estimation', 'Mocap', 'Reference');

%% Plot XY Time

figure('Name','XY Time Graph','Position',[1300 50 550 550]);

%X Graph
h(1)=subplot(2,1,1);
plot(RSrun_stateXYZ(:,1),RSrun_stateXYZ(:,2));hold all;
plot(RSrun_mocapXYZ(:,1),RSrun_mocapXYZ(:,2));hold all;
plot(RSrun_refXYZ(:,1),RSrun_refXYZ(:,2));
ylabel('X(m)');
legend('X State', 'Mocap X', 'X Rref');

%Y graph
h(1)=subplot(2,1,2);
plot(RSrun_stateXYZ(:,1),RSrun_stateXYZ(:,3));hold all;
plot(RSrun_mocapXYZ(:,1),RSrun_mocapXYZ(:,3));hold all;
plot(RSrun_refXYZ(:,1),RSrun_refXYZ(:,3));
ylabel('Y(m)');
legend('Y State', 'Mocap Y', 'Y Ref');


%% Plot x

figure('Name','X Graph','Position',[50 700 550 550]);

%x Graph
h(1)=subplot(3,1,1);
plot(RSrun_stateXYZ(:,1),RSrun_stateXYZ(:,2));hold all;
plot(RSrun_mocapXYZ(:,1),RSrun_mocapXYZ(:,2));hold all;
plot(RSrun_refXYZ(:,1),RSrun_refXYZ(:,2));
ylabel('x(m)');
legend('x State', 'Mocap x', 'x Ref');

%x Error
h(1)=subplot(3,1,2);
plot(RSrun_xyError(:,1),RSrun_xyError(:,2));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,4));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,6));
ylabel('Control Effort');
legend('P_x', 'I_x', 'D_x');
%ylim([I_xy_satLimitLow I_xy_satLimitHigh])

%x vel
h(1)=subplot(3,1,3);
plot(RSrun_statedXYZ(:,1),RSrun_statedXYZ(:,2));hold all;
plot(RSrun_GyroPQR(:,1),RSrun_GyroPQR(:,2));hold all;
% plot(RSrun_AccelXYZ(:,1),RSrun_AccelXYZ(:,2));
ylabel('');
legend('x Velocity State', 'x axis gyro');%, 'x accelerometer');

%% Plot y

figure('Name','Y Graph','Position',[700 700 550 550]);

%Y Graph
h(1)=subplot(3,1,1);
plot(RSrun_stateXYZ(:,1),RSrun_stateXYZ(:,3));hold all;
plot(RSrun_mocapXYZ(:,1),RSrun_mocapXYZ(:,3));hold all;
plot(RSrun_refXYZ(:,1),RSrun_refXYZ(:,3));
ylabel('z(m)');
legend('y State', 'Mocap y', 'y Ref');

%Y Error
h(1)=subplot(3,1,2);
plot(RSrun_xyError(:,1),RSrun_xyError(:,3));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,5));hold all;
plot(RSrun_xyError(:,1),RSrun_xyError(:,7));
ylabel('Control Effort');
legend('P_y', 'I_y', 'D_y');
%ylim([I_xy_satLimitLow I_xy_satLimitHigh])


%x vel
h(1)=subplot(3,1,3);
plot(RSrun_statedXYZ(:,1),RSrun_statedXYZ(:,3));hold all;
plot(RSrun_GyroPQR(:,1),RSrun_GyroPQR(:,3));hold all;
% plot(RSrun_AccelXYZ(:,1),RSrun_AccelXYZ(:,3));
ylabel('');
legend('y Velocity State', 'y axis gyro');%, 'y accelerometer');

%% Plot Z

figure('Name','Z Graph','Position',[1300 700 550 550]);

%Z Graph
h(1)=subplot(3,1,1);
plot(RSrun_stateXYZ(:,1),RSrun_stateXYZ(:,4));hold all;
plot(RSrun_mocapXYZ(:,1),-RSrun_mocapXYZ(:,4));hold all;
plot(RSrun_refXYZ(:,1),RSrun_refXYZ(:,4)); hold all;
plot(RSrun_Alt(:,1), -RSrun_Alt(:,2)); hold all;
plot(RSrun_Alt(:,1), RSrun_Alt(:,3)); hold all;
plot(RSrun_snrFlg(:,1), RSrun_snrFlg(:,2));
ylabel('z(m)');
legend('z State', 'Mocap z', 'z Ref', 'Sonar', 'Pressure', 'Kalman Enable Flag');

%Z Error
h(1)=subplot(3,1,2);
plot(RSrun_zError(:,1),RSrun_zError(:,2));hold all;
plot(RSrun_zError(:,1),RSrun_zError(:,3));hold all;
plot(RSrun_zError(:,1),RSrun_zError(:,4));
ylabel('Control Effort');
legend('P_z','I_z','D_z');
%ylim([I_z_satLimitLow I_z_satLimitHigh])

%x vel
h(1)=subplot(3,1,3);
plot(RSrun_statedXYZ(:,1),RSrun_statedXYZ(:,4));hold all;
% plot(RSrun_AccelXYZ(:,1),RSrun_AccelXYZ(:,4));
ylabel('');
legend('z Velocity State');%, 'z accelerometer');

%% Plot Mocap

% figure('Name','Motion Capture','Position',[1600 700 550 550]);
% plot(mocap_actual.time, -mocap_actual.signals.values(:,1));hold all;
% plot(mocap_actual.time, mocap_actual.signals.values(:,4));hold all;
% %plot(RSrun_mocap(:,1), RSrun_mocap(:,3));hold all;
% plot(RSrun_mocap(:,1), -RSrun_mocap(:,2));
% legend('Z value', 'Data is new', 'Z value Drone');