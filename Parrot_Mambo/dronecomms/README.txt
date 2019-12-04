ROS package to listen to vrpn_client_node and then broadcast data over to parrot drone over BLE

make a ros package and put dronecomms in src
cd to main directory of the workspace (in this case ~/catkin_ws)
run "catkin_make"
run "source devel/setup.bash"


First run vrpn client node: roslaunch vrpn_client_ros sample.launch server:=10.0.0.2
Then run this node: rosrun dronecomms droneComms.py
