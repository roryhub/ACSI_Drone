;; Auto-generated. Do not edit!


(when (boundp 'acsi_drone::interpolateTrajectory)
  (if (not (find-package "ACSI_DRONE"))
    (make-package "ACSI_DRONE"))
  (shadow 'interpolateTrajectory (find-package "ACSI_DRONE")))
(unless (find-package "ACSI_DRONE::INTERPOLATETRAJECTORY")
  (make-package "ACSI_DRONE::INTERPOLATETRAJECTORY"))
(unless (find-package "ACSI_DRONE::INTERPOLATETRAJECTORYREQUEST")
  (make-package "ACSI_DRONE::INTERPOLATETRAJECTORYREQUEST"))
(unless (find-package "ACSI_DRONE::INTERPOLATETRAJECTORYRESPONSE")
  (make-package "ACSI_DRONE::INTERPOLATETRAJECTORYRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass acsi_drone::interpolateTrajectoryRequest
  :super ros::object
  :slots (_waypoints_in _step_size ))

(defmethod acsi_drone::interpolateTrajectoryRequest
  (:init
   (&key
    ((:waypoints_in __waypoints_in) (instance geometry_msgs::PoseArray :init))
    ((:step_size __step_size) 0.0)
    )
   (send-super :init)
   (setq _waypoints_in __waypoints_in)
   (setq _step_size (float __step_size))
   self)
  (:waypoints_in
   (&rest __waypoints_in)
   (if (keywordp (car __waypoints_in))
       (send* _waypoints_in __waypoints_in)
     (progn
       (if __waypoints_in (setq _waypoints_in (car __waypoints_in)))
       _waypoints_in)))
  (:step_size
   (&optional __step_size)
   (if __step_size (setq _step_size __step_size)) _step_size)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseArray _waypoints_in
    (send _waypoints_in :serialization-length)
    ;; float32 _step_size
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseArray _waypoints_in
       (send _waypoints_in :serialize s)
     ;; float32 _step_size
       (sys::poke _step_size (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseArray _waypoints_in
     (send _waypoints_in :deserialize buf ptr-) (incf ptr- (send _waypoints_in :serialization-length))
   ;; float32 _step_size
     (setq _step_size (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(defclass acsi_drone::interpolateTrajectoryResponse
  :super ros::object
  :slots (_waypoints_out ))

(defmethod acsi_drone::interpolateTrajectoryResponse
  (:init
   (&key
    ((:waypoints_out __waypoints_out) (instance geometry_msgs::PoseArray :init))
    )
   (send-super :init)
   (setq _waypoints_out __waypoints_out)
   self)
  (:waypoints_out
   (&rest __waypoints_out)
   (if (keywordp (car __waypoints_out))
       (send* _waypoints_out __waypoints_out)
     (progn
       (if __waypoints_out (setq _waypoints_out (car __waypoints_out)))
       _waypoints_out)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseArray _waypoints_out
    (send _waypoints_out :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseArray _waypoints_out
       (send _waypoints_out :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseArray _waypoints_out
     (send _waypoints_out :deserialize buf ptr-) (incf ptr- (send _waypoints_out :serialization-length))
   ;;
   self)
  )

(defclass acsi_drone::interpolateTrajectory
  :super ros::object
  :slots ())

(setf (get acsi_drone::interpolateTrajectory :md5sum-) "08c65d36e588352eeb9023eb41c1137c")
(setf (get acsi_drone::interpolateTrajectory :datatype-) "acsi_drone/interpolateTrajectory")
(setf (get acsi_drone::interpolateTrajectory :request) acsi_drone::interpolateTrajectoryRequest)
(setf (get acsi_drone::interpolateTrajectory :response) acsi_drone::interpolateTrajectoryResponse)

(defmethod acsi_drone::interpolateTrajectoryRequest
  (:response () (instance acsi_drone::interpolateTrajectoryResponse :init)))

(setf (get acsi_drone::interpolateTrajectoryRequest :md5sum-) "08c65d36e588352eeb9023eb41c1137c")
(setf (get acsi_drone::interpolateTrajectoryRequest :datatype-) "acsi_drone/interpolateTrajectoryRequest")
(setf (get acsi_drone::interpolateTrajectoryRequest :definition-)
      "geometry_msgs/PoseArray waypoints_in
float32 step_size

================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
---
geometry_msgs/PoseArray waypoints_out


================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
")

(setf (get acsi_drone::interpolateTrajectoryResponse :md5sum-) "08c65d36e588352eeb9023eb41c1137c")
(setf (get acsi_drone::interpolateTrajectoryResponse :datatype-) "acsi_drone/interpolateTrajectoryResponse")
(setf (get acsi_drone::interpolateTrajectoryResponse :definition-)
      "geometry_msgs/PoseArray waypoints_in
float32 step_size

================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
---
geometry_msgs/PoseArray waypoints_out


================================================================================
MSG: geometry_msgs/PoseArray
# An array of poses with a header for global reference.

Header header

Pose[] poses

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
")



(provide :acsi_drone/interpolateTrajectory "08c65d36e588352eeb9023eb41c1137c")


