;; Auto-generated. Do not edit!


(when (boundp 'ros_calc::Result1)
  (if (not (find-package "ROS_CALC"))
    (make-package "ROS_CALC"))
  (shadow 'Result1 (find-package "ROS_CALC")))
(unless (find-package "ROS_CALC::RESULT1")
  (make-package "ROS_CALC::RESULT1"))

(in-package "ROS")
;;//! \htmlinclude Result1.msg.html


(defclass ros_calc::Result1
  :super ros::object
  :slots (_data ))

(defmethod ros_calc::Result1
  (:init
   (&key
    ((:data __data) 0.0)
    )
   (send-super :init)
   (setq _data (float __data))
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; float64 _data
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _data
       (sys::poke _data (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _data
     (setq _data (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get ros_calc::Result1 :md5sum-) "fdb28210bfa9d7c91146260178d9a584")
(setf (get ros_calc::Result1 :datatype-) "ros_calc/Result1")
(setf (get ros_calc::Result1 :definition-)
      "float64 data

")



(provide :ros_calc/Result1 "fdb28210bfa9d7c91146260178d9a584")


