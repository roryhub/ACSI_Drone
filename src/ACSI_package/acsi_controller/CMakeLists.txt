cmake_minimum_required(VERSION 2.8.3)
project(acsi_controller)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  rospy
  std_msgs
  message_generation
)

add_message_files(
  FILES
  Attitude_Setpoint.msg
  Attitude_Error.msg
  Pid_Gains.msg
  Drone_Pid_Settings.msg
)

catkin_python_setup()

# Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  geometry_msgs
  std_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES acsi_controller
    CATKIN_DEPENDS rospy geometry_msgs rospy message_runtime
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
# include
 ${catkin_INCLUDE_DIRS}
)

# catkin_add_nosetests(test)

install(PROGRAMS
  nodes/position_control_node
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
