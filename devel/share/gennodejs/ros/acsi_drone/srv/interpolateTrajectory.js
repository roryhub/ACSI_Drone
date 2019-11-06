// Auto-generated. Do not edit!

// (in-package acsi_drone.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------


//-----------------------------------------------------------

class interpolateTrajectoryRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.waypoints_in = null;
      this.step_size = null;
    }
    else {
      if (initObj.hasOwnProperty('waypoints_in')) {
        this.waypoints_in = initObj.waypoints_in
      }
      else {
        this.waypoints_in = new geometry_msgs.msg.PoseArray();
      }
      if (initObj.hasOwnProperty('step_size')) {
        this.step_size = initObj.step_size
      }
      else {
        this.step_size = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type interpolateTrajectoryRequest
    // Serialize message field [waypoints_in]
    bufferOffset = geometry_msgs.msg.PoseArray.serialize(obj.waypoints_in, buffer, bufferOffset);
    // Serialize message field [step_size]
    bufferOffset = _serializer.float32(obj.step_size, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type interpolateTrajectoryRequest
    let len;
    let data = new interpolateTrajectoryRequest(null);
    // Deserialize message field [waypoints_in]
    data.waypoints_in = geometry_msgs.msg.PoseArray.deserialize(buffer, bufferOffset);
    // Deserialize message field [step_size]
    data.step_size = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += geometry_msgs.msg.PoseArray.getMessageSize(object.waypoints_in);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'acsi_drone/interpolateTrajectoryRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd9daa1918082ed01fee550a545f09692';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/PoseArray waypoints_in
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new interpolateTrajectoryRequest(null);
    if (msg.waypoints_in !== undefined) {
      resolved.waypoints_in = geometry_msgs.msg.PoseArray.Resolve(msg.waypoints_in)
    }
    else {
      resolved.waypoints_in = new geometry_msgs.msg.PoseArray()
    }

    if (msg.step_size !== undefined) {
      resolved.step_size = msg.step_size;
    }
    else {
      resolved.step_size = 0.0
    }

    return resolved;
    }
};

class interpolateTrajectoryResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.waypoints_out = null;
    }
    else {
      if (initObj.hasOwnProperty('waypoints_out')) {
        this.waypoints_out = initObj.waypoints_out
      }
      else {
        this.waypoints_out = new geometry_msgs.msg.PoseArray();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type interpolateTrajectoryResponse
    // Serialize message field [waypoints_out]
    bufferOffset = geometry_msgs.msg.PoseArray.serialize(obj.waypoints_out, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type interpolateTrajectoryResponse
    let len;
    let data = new interpolateTrajectoryResponse(null);
    // Deserialize message field [waypoints_out]
    data.waypoints_out = geometry_msgs.msg.PoseArray.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += geometry_msgs.msg.PoseArray.getMessageSize(object.waypoints_out);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'acsi_drone/interpolateTrajectoryResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4d0a813e5a2d3ea1bf241f0061112bd5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new interpolateTrajectoryResponse(null);
    if (msg.waypoints_out !== undefined) {
      resolved.waypoints_out = geometry_msgs.msg.PoseArray.Resolve(msg.waypoints_out)
    }
    else {
      resolved.waypoints_out = new geometry_msgs.msg.PoseArray()
    }

    return resolved;
    }
};

module.exports = {
  Request: interpolateTrajectoryRequest,
  Response: interpolateTrajectoryResponse,
  md5sum() { return '08c65d36e588352eeb9023eb41c1137c'; },
  datatype() { return 'acsi_drone/interpolateTrajectory'; }
};
