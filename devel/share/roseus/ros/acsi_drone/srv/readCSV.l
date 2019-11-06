;; Auto-generated. Do not edit!


(when (boundp 'acsi_drone::readCSV)
  (if (not (find-package "ACSI_DRONE"))
    (make-package "ACSI_DRONE"))
  (shadow 'readCSV (find-package "ACSI_DRONE")))
(unless (find-package "ACSI_DRONE::READCSV")
  (make-package "ACSI_DRONE::READCSV"))
(unless (find-package "ACSI_DRONE::READCSVREQUEST")
  (make-package "ACSI_DRONE::READCSVREQUEST"))
(unless (find-package "ACSI_DRONE::READCSVRESPONSE")
  (make-package "ACSI_DRONE::READCSVRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass acsi_drone::readCSVRequest
  :super ros::object
  :slots (_filename ))

(defmethod acsi_drone::readCSVRequest
  (:init
   (&key
    ((:filename __filename) "")
    )
   (send-super :init)
   (setq _filename (string __filename))
   self)
  (:filename
   (&optional __filename)
   (if __filename (setq _filename __filename)) _filename)
  (:serialization-length
   ()
   (+
    ;; string _filename
    4 (length _filename)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _filename
       (write-long (length _filename) s) (princ _filename s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _filename
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _filename (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass acsi_drone::readCSVResponse
  :super ros::object
  :slots (_waypoints ))

(defmethod acsi_drone::readCSVResponse
  (:init
   (&key
    ((:waypoints __waypoints) (instance geometry_msgs::PoseArray :init))
    )
   (send-super :init)
   (setq _waypoints __waypoints)
   self)
  (:waypoints
   (&rest __waypoints)
   (if (keywordp (car __waypoints))
       (send* _waypoints __waypoints)
     (progn
       (if __waypoints (setq _waypoints (car __waypoints)))
       _waypoints)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PoseArray _waypoints
    (send _waypoints :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PoseArray _waypoints
       (send _waypoints :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PoseArray _waypoints
     (send _waypoints :deserialize buf ptr-) (incf ptr- (send _waypoints :serialization-length))
   ;;
   self)
  )

(defclass acsi_drone::readCSV
  :super ros::object
  :slots ())

(setf (get acsi_drone::readCSV :md5sum-) "6a2d01face071aecad4ab5f349e87b14")
(setf (get acsi_drone::readCSV :datatype-) "acsi_drone/readCSV")
(setf (get acsi_drone::readCSV :request) acsi_drone::readCSVRequest)
(setf (get acsi_drone::readCSV :response) acsi_drone::readCSVResponse)

(defmethod acsi_drone::readCSVRequest
  (:response () (instance acsi_drone::readCSVResponse :init)))

(setf (get acsi_drone::readCSVRequest :md5sum-) "6a2d01face071aecad4ab5f349e87b14")
(setf (get acsi_drone::readCSVRequest :datatype-) "acsi_drone/readCSVRequest")
(setf (get acsi_drone::readCSVRequest :definition-)
      "string filename
---
geometry_msgs/PoseArray waypoints


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

(setf (get acsi_drone::readCSVResponse :md5sum-) "6a2d01face071aecad4ab5f349e87b14")
(setf (get acsi_drone::readCSVResponse :datatype-) "acsi_drone/readCSVResponse")
(setf (get acsi_drone::readCSVResponse :definition-)
      "string filename
---
geometry_msgs/PoseArray waypoints


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



(provide :acsi_drone/readCSV "6a2d01face071aecad4ab5f349e87b14")


