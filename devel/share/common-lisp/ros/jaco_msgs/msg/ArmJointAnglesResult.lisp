; Auto-generated. Do not edit!


(cl:in-package jaco_msgs-msg)


;//! \htmlinclude ArmJointAnglesResult.msg.html

(cl:defclass <ArmJointAnglesResult> (roslisp-msg-protocol:ros-message)
  ((angles
    :reader angles
    :initarg :angles
    :type jaco_msgs-msg:JointAngles
    :initform (cl:make-instance 'jaco_msgs-msg:JointAngles)))
)

(cl:defclass ArmJointAnglesResult (<ArmJointAnglesResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ArmJointAnglesResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ArmJointAnglesResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name jaco_msgs-msg:<ArmJointAnglesResult> is deprecated: use jaco_msgs-msg:ArmJointAnglesResult instead.")))

(cl:ensure-generic-function 'angles-val :lambda-list '(m))
(cl:defmethod angles-val ((m <ArmJointAnglesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader jaco_msgs-msg:angles-val is deprecated.  Use jaco_msgs-msg:angles instead.")
  (angles m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ArmJointAnglesResult>) ostream)
  "Serializes a message object of type '<ArmJointAnglesResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'angles) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ArmJointAnglesResult>) istream)
  "Deserializes a message object of type '<ArmJointAnglesResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'angles) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ArmJointAnglesResult>)))
  "Returns string type for a message object of type '<ArmJointAnglesResult>"
  "jaco_msgs/ArmJointAnglesResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ArmJointAnglesResult)))
  "Returns string type for a message object of type 'ArmJointAnglesResult"
  "jaco_msgs/ArmJointAnglesResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ArmJointAnglesResult>)))
  "Returns md5sum for a message object of type '<ArmJointAnglesResult>"
  "d86b424e9a65a92d0fef7f9d22a2b38f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ArmJointAnglesResult)))
  "Returns md5sum for a message object of type 'ArmJointAnglesResult"
  "d86b424e9a65a92d0fef7f9d22a2b38f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ArmJointAnglesResult>)))
  "Returns full string definition for message of type '<ArmJointAnglesResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Result~%JointAngles angles~%~%================================================================================~%MSG: jaco_msgs/JointAngles~%float32 joint1~%float32 joint2~%float32 joint3~%float32 joint4~%float32 joint5~%float32 joint6~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ArmJointAnglesResult)))
  "Returns full string definition for message of type 'ArmJointAnglesResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Result~%JointAngles angles~%~%================================================================================~%MSG: jaco_msgs/JointAngles~%float32 joint1~%float32 joint2~%float32 joint3~%float32 joint4~%float32 joint5~%float32 joint6~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ArmJointAnglesResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'angles))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ArmJointAnglesResult>))
  "Converts a ROS message object to a list"
  (cl:list 'ArmJointAnglesResult
    (cl:cons ':angles (angles msg))
))