clear all
close all
bag = rosbag('test.bag');
bagInfo = rosbag('info','test.bag');

target_select = select(bag, 'Topic', '/vrpn_client_node/Target/pose')
state_select = select(bag, 'Topic', '/controller/state');
goal_select = select(bag, 'Topic', '/controller/goal');

target_structs = readMessages(target_select,'DataFormat','struct');
state_structs = readMessages(state_select,'DataFormat','struct');
goal_structs = readMessages(goal_select,'DataFormat','struct');

cutoffTime = 16;

for i=1:size(state_structs,1)
    if(state_structs{i,1}.Time<cutoffTime)
        state_matrix(1,i) = state_structs{i,1}.Time;
        state_matrix(2,i) = state_structs{i,1}.X;
        state_matrix(3,i) = state_structs{i,1}.Y;
        state_matrix(4,i) = state_structs{i,1}.Z;
        state_matrix(5,i) = state_structs{i,1}.Yaw;
    end
end

for i=1:size(goal_structs,1)
    if(state_structs{i,1}.Time<cutoffTime)
        goal_matrix(1,i) = goal_structs{i,1}.Time;
        goal_matrix(2,i) = goal_structs{i,1}.X;
        goal_matrix(3,i) = goal_structs{i,1}.Y;
        goal_matrix(4,i) = goal_structs{i,1}.Z;
        goal_matrix(5,i) = goal_structs{i,1}.Yaw;
    end
end

for i=1:size(target_structs,1)
    target_matrix(1,i) = target_structs{i,1}.Pose.Position.X;
    target_matrix(2,i) = target_structs{i,1}.Pose.Position.Y;
    target_matrix(3,i) = target_structs{i,1}.Pose.Position.Z;
end

figure()
hold on
plot3(goal_matrix(2,:),goal_matrix(4,:),goal_matrix(3,:),'Color','red','LineWidth',2)
plot3(state_matrix(2,:),state_matrix(4,:),state_matrix(3,:),'Color','blue','LineWidth',2)
plot3(state_matrix(2,3),state_matrix(4,3),state_matrix(3,3),'o','MarkerSize',12,'Color','green','LineWidth',6)
plot3(target_matrix(1,100),target_matrix(3,100),target_matrix(2,100),'o','MarkerSize',12,'Color','black','LineWidth',6)
legend('Drone Command','Drone Location','Starting Position','Target Location')

title('3D Trajectory View')
xlabel('X Axis')
ylabel('Z Axis')
zlabel('Y Axis')

axis([-1.5 1.5, -2.5, .5, -.5, 2.5])
grid on

