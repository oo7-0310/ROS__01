
(cl:in-package :asdf)

(defsystem "ros_calc-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Result1" :depends-on ("_package_Result1"))
    (:file "_package_Result1" :depends-on ("_package"))
  ))