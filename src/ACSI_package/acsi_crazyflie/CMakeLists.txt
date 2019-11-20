cmake_minimum_required(VERSION 2.8.3)
project(acsi_crazyflie)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  rospy
  std_msgs
  message_generation
)

catkin_python_setup()

generate_messages(
  DEPENDENCIES
  acsi_controller
  geometry_msgs
  std_msgs
)

catkin_package(
    CATKIN_DEPENDS rospy geometry_msgs rospy message_runtime acsi_controller
)

install(PROGRAMS
  nodes/crazyflie_comms_node
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
