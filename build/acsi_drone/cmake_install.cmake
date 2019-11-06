# Install script for directory: /home/cerlabcontrol/Desktop/Drone Rewrite/src/acsi_drone

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cerlabcontrol/Desktop/Drone Rewrite/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/acsi_drone/msg" TYPE FILE FILES
    "/home/cerlabcontrol/Desktop/Drone Rewrite/src/acsi_drone/msg/droneOut32.msg"
    "/home/cerlabcontrol/Desktop/Drone Rewrite/src/acsi_drone/msg/pidIn32.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/acsi_drone/srv" TYPE FILE FILES
    "/home/cerlabcontrol/Desktop/Drone Rewrite/src/acsi_drone/srv/readCSV.srv"
    "/home/cerlabcontrol/Desktop/Drone Rewrite/src/acsi_drone/srv/interpolateTrajectory.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/acsi_drone/cmake" TYPE FILE FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/build/acsi_drone/catkin_generated/installspace/acsi_drone-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/devel/include/acsi_drone")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/devel/share/roseus/ros/acsi_drone")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/devel/share/common-lisp/ros/acsi_drone")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/devel/share/gennodejs/ros/acsi_drone")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/cerlabcontrol/Desktop/Drone Rewrite/devel/lib/python2.7/dist-packages/acsi_drone")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/devel/lib/python2.7/dist-packages/acsi_drone")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/build/acsi_drone/catkin_generated/installspace/acsi_drone.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/acsi_drone/cmake" TYPE FILE FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/build/acsi_drone/catkin_generated/installspace/acsi_drone-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/acsi_drone/cmake" TYPE FILE FILES
    "/home/cerlabcontrol/Desktop/Drone Rewrite/build/acsi_drone/catkin_generated/installspace/acsi_droneConfig.cmake"
    "/home/cerlabcontrol/Desktop/Drone Rewrite/build/acsi_drone/catkin_generated/installspace/acsi_droneConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/acsi_drone" TYPE FILE FILES "/home/cerlabcontrol/Desktop/Drone Rewrite/src/acsi_drone/package.xml")
endif()

