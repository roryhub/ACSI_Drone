; Auto-generated. Do not edit!


(cl:in-package acsi_drone-srv)


;//! \htmlinclude readCSV-request.msg.html

(cl:defclass <readCSV-request> (roslisp-msg-protocol:ros-message)
  ((filename
    :reader filename
    :initarg :filename
    :type cl:string
    :initform ""))
)

(cl:defclass readCSV-request (<readCSV-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <readCSV-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'readCSV-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name acsi_drone-srv:<readCSV-request> is deprecated: use acsi_drone-srv:readCSV-request instead.")))

(cl:ensure-generic-function 'filename-val :lambda-list '(m))
(cl:defmethod filename-val ((m <readCSV-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader acsi_drone-srv:filename-val is deprecated.  Use acsi_drone-srv:filename instead.")
  (filename m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <readCSV-request>) ostream)
  "Serializes a message object of type '<readCSV-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'filename))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'filename))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <readCSV-request>) istream)
  "Deserializes a message object of type '<readCSV-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'filename) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'filename) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<readCSV-request>)))
  "Returns string type for a service object of type '<readCSV-request>"
  "acsi_drone/readCSVRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'readCSV-request)))
  "Returns string type for a service object of type 'readCSV-request"
  "acsi_drone/readCSVRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<readCSV-request>)))
  "Returns md5sum for a message object of type '<readCSV-request>"
  "6a2d01face071aecad4ab5f349e87b14")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'readCSV-request)))
  "Returns md5sum for a message object of type 'readCSV-request"
  "6a2d01face071aecad4ab5f349e87b14")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<readCSV-request>)))
  "Returns full string definition for message of type '<readCSV-request>"
  (cl:format cl:nil "string filename~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'readCSV-request)))
  "Returns full string definition for message of type 'readCSV-request"
  (cl:format cl:nil "string filename~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <readCSV-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'filename))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <readCSV-request>))
  "Converts a ROS message object to a list"
  (cl:list 'readCSV-request
    (cl:cons ':filename (filename msg))
))
;//! \htmlinclude readCSV-response.msg.html

(cl:defclass <readCSV-response> (roslisp-msg-protocol:ros-message)
  ((waypoints
    :reader waypoints
    :initarg :waypoints
    :type geometry_msgs-msg:PoseArray
    :initform (cl:make-instance 'geometry_msgs-msg:PoseArray)))
)

(cl:defclass readCSV-response (<readCSV-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <readCSV-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'readCSV-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name acsi_drone-srv:<readCSV-response> is deprecated: use acsi_drone-srv:readCSV-response instead.")))

(cl:ensure-generic-function 'waypoints-val :lambda-list '(m))
(cl:defmethod waypoints-val ((m <readCSV-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader acsi_drone-srv:waypoints-val is deprecated.  Use acsi_drone-srv:waypoints instead.")
  (waypoints m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <readCSV-response>) ostream)
  "Serializes a message object of type '<readCSV-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'waypoints) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <readCSV-response>) istream)
  "Deserializes a message object of type '<readCSV-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'waypoints) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<readCSV-response>)))
  "Returns string type for a service object of type '<readCSV-response>"
  "acsi_drone/readCSVResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'readCSV-response)))
  "Returns string type for a service object of type 'readCSV-response"
  "acsi_drone/readCSVResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<readCSV-response>)))
  "Returns md5sum for a message object of type '<readCSV-response>"
  "6a2d01face071aecad4ab5f349e87b14")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'readCSV-response)))
  "Returns md5sum for a message object of type 'readCSV-response"
  "6a2d01face071aecad4ab5f349e87b14")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<readCSV-response>)))
  "Returns full string definition for message of type '<readCSV-response>"
  (cl:format cl:nil "geometry_msgs/PoseArray waypoints~%~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'readCSV-response)))
  "Returns full string definition for message of type 'readCSV-response"
  (cl:format cl:nil "geometry_msgs/PoseArray waypoints~%~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <readCSV-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'waypoints))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <readCSV-response>))
  "Converts a ROS message object to a list"
  (cl:list 'readCSV-response
    (cl:cons ':waypoints (waypoints msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'readCSV)))
  'readCSV-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'readCSV)))
  'readCSV-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'readCSV)))
  "Returns string type for a service object of type '<readCSV>"
  "acsi_drone/readCSV")