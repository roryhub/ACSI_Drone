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
  geometry_msgs
  std_msgs
)

catkin_package(
    CATKIN_DEPENDS rospy geometry_msgs rospy message_runtime
)

install(PROGRAMS
  nodes/crazyflie_comms_node
  scripts/test/ramp
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
