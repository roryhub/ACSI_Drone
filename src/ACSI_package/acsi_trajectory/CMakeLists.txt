cmake_minimum_required(VERSION 2.8.3)
project(acsi_trajectory)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  rospy
  std_msgs
  acsi_observer
  message_generation
)

catkin_python_setup()

add_service_files(
  FILES
  Trajectory_Service.srv
)

generate_messages(
  DEPENDENCIES
  geometry_msgs
  std_msgs
  acsi_observer
)

catkin_package(
    CATKIN_DEPENDS rospy geometry_msgs rospy message_runtime
)

include_directories(
# include
# ${catkin_INCLUDE_DIRS}
)

install(PROGRAMS
  nodes/trajectory_node
  nodes/trajectory_service
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
