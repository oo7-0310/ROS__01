; Auto-generated. Do not edit!


(cl:in-package ros_calc-msg)


;//! \htmlinclude Result1.msg.html

(cl:defclass <Result1> (roslisp-msg-protocol:ros-message)
  ((data
    :reader data
    :initarg :data
    :type cl:float
    :initform 0.0))
)

(cl:defclass Result1 (<Result1>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Result1>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Result1)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_calc-msg:<Result1> is deprecated: use ros_calc-msg:Result1 instead.")))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <Result1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_calc-msg:data-val is deprecated.  Use ros_calc-msg:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Result1>) ostream)
  "Serializes a message object of type '<Result1>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Result1>) istream)
  "Deserializes a message object of type '<Result1>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'data) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Result1>)))
  "Returns string type for a message object of type '<Result1>"
  "ros_calc/Result1")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Result1)))
  "Returns string type for a message object of type 'Result1"
  "ros_calc/Result1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Result1>)))
  "Returns md5sum for a message object of type '<Result1>"
  "fdb28210bfa9d7c91146260178d9a584")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Result1)))
  "Returns md5sum for a message object of type 'Result1"
  "fdb28210bfa9d7c91146260178d9a584")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Result1>)))
  "Returns full string definition for message of type '<Result1>"
  (cl:format cl:nil "float64 data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Result1)))
  "Returns full string definition for message of type 'Result1"
  (cl:format cl:nil "float64 data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Result1>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Result1>))
  "Converts a ROS message object to a list"
  (cl:list 'Result1
    (cl:cons ':data (data msg))
))
