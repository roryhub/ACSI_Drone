; Auto-generated. Do not edit!


(cl:in-package acsi_drone-srv)


;//! \htmlinclude interpolateTrajectory-request.msg.html

(cl:defclass <interpolateTrajectory-request> (roslisp-msg-protocol:ros-message)
  ((waypoints_in
    :reader waypoints_in
    :initarg :waypoints_in
    :type geometry_msgs-msg:PoseArray
    :initform (cl:make-instance 'geometry_msgs-msg:PoseArray))
   (step_size
    :reader step_size
    :initarg :step_size
    :type cl:float
    :initform 0.0))
)

(cl:defclass interpolateTrajectory-request (<interpolateTrajectory-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <interpolateTrajectory-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'interpolateTrajectory-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name acsi_drone-srv:<interpolateTrajectory-request> is deprecated: use acsi_drone-srv:interpolateTrajectory-request instead.")))

(cl:ensure-generic-function 'waypoints_in-val :lambda-list '(m))
(cl:defmethod waypoints_in-val ((m <interpolateTrajectory-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader acsi_drone-srv:waypoints_in-val is deprecated.  Use acsi_drone-srv:waypoints_in instead.")
  (waypoints_in m))

(cl:ensure-generic-function 'step_size-val :lambda-list '(m))
(cl:defmethod step_size-val ((m <interpolateTrajectory-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader acsi_drone-srv:step_size-val is deprecated.  Use acsi_drone-srv:step_size instead.")
  (step_size m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <interpolateTrajectory-request>) ostream)
  "Serializes a message object of type '<interpolateTrajectory-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'waypoints_in) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'step_size))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <interpolateTrajectory-request>) istream)
  "Deserializes a message object of type '<interpolateTrajectory-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'waypoints_in) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'step_size) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<interpolateTrajectory-request>)))
  "Returns string type for a service object of type '<interpolateTrajectory-request>"
  "acsi_drone/interpolateTrajectoryRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'interpolateTrajectory-request)))
  "Returns string type for a service object of type 'interpolateTrajectory-request"
  "acsi_drone/interpolateTrajectoryRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<interpolateTrajectory-request>)))
  "Returns md5sum for a message object of type '<interpolateTrajectory-request>"
  "08c65d36e588352eeb9023eb41c1137c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'interpolateTrajectory-request)))
  "Returns md5sum for a message object of type 'interpolateTrajectory-request"
  "08c65d36e588352eeb9023eb41c1137c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<interpolateTrajectory-request>)))
  "Returns full string definition for message of type '<interpolateTrajectory-request>"
  (cl:format cl:nil "geometry_msgs/PoseArray waypoints_in~%float32 step_size~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'interpolateTrajectory-request)))
  "Returns full string definition for message of type 'interpolateTrajectory-request"
  (cl:format cl:nil "geometry_msgs/PoseArray waypoints_in~%float32 step_size~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <interpolateTrajectory-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'waypoints_in))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <interpolateTrajectory-request>))
  "Converts a ROS message object to a list"
  (cl:list 'interpolateTrajectory-request
    (cl:cons ':waypoints_in (waypoints_in msg))
    (cl:cons ':step_size (step_size msg))
))
;//! \htmlinclude interpolateTrajectory-response.msg.html

(cl:defclass <interpolateTrajectory-response> (roslisp-msg-protocol:ros-message)
  ((waypoints_out
    :reader waypoints_out
    :initarg :waypoints_out
    :type geometry_msgs-msg:PoseArray
    :initform (cl:make-instance 'geometry_msgs-msg:PoseArray)))
)

(cl:defclass interpolateTrajectory-response (<interpolateTrajectory-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <interpolateTrajectory-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'interpolateTrajectory-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name acsi_drone-srv:<interpolateTrajectory-response> is deprecated: use acsi_drone-srv:interpolateTrajectory-response instead.")))

(cl:ensure-generic-function 'waypoints_out-val :lambda-list '(m))
(cl:defmethod waypoints_out-val ((m <interpolateTrajectory-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader acsi_drone-srv:waypoints_out-val is deprecated.  Use acsi_drone-srv:waypoints_out instead.")
  (waypoints_out m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <interpolateTrajectory-response>) ostream)
  "Serializes a message object of type '<interpolateTrajectory-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'waypoints_out) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <interpolateTrajectory-response>) istream)
  "Deserializes a message object of type '<interpolateTrajectory-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'waypoints_out) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<interpolateTrajectory-response>)))
  "Returns string type for a service object of type '<interpolateTrajectory-response>"
  "acsi_drone/interpolateTrajectoryResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'interpolateTrajectory-response)))
  "Returns string type for a service object of type 'interpolateTrajectory-response"
  "acsi_drone/interpolateTrajectoryResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<interpolateTrajectory-response>)))
  "Returns md5sum for a message object of type '<interpolateTrajectory-response>"
  "08c65d36e588352eeb9023eb41c1137c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'interpolateTrajectory-response)))
  "Returns md5sum for a message object of type 'interpolateTrajectory-response"
  "08c65d36e588352eeb9023eb41c1137c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<interpolateTrajectory-response>)))
  "Returns full string definition for message of type '<interpolateTrajectory-response>"
  (cl:format cl:nil "geometry_msgs/PoseArray waypoints_out~%~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'interpolateTrajectory-response)))
  "Returns full string definition for message of type 'interpolateTrajectory-response"
  (cl:format cl:nil "geometry_msgs/PoseArray waypoints_out~%~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <interpolateTrajectory-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'waypoints_out))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <interpolateTrajectory-response>))
  "Converts a ROS message object to a list"
  (cl:list 'interpolateTrajectory-response
    (cl:cons ':waypoints_out (waypoints_out msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'interpolateTrajectory)))
  'interpolateTrajectory-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'interpolateTrajectory)))
  'interpolateTrajectory-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'interpolateTrajectory)))
  "Returns string type for a service object of type '<interpolateTrajectory>"
  "acsi_drone/interpolateTrajectory")