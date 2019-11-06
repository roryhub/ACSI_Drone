
(cl:in-package :asdf)

(defsystem "acsi_drone-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "droneOut32" :depends-on ("_package_droneOut32"))
    (:file "_package_droneOut32" :depends-on ("_package"))
    (:file "pidIn32" :depends-on ("_package_pidIn32"))
    (:file "_package_pidIn32" :depends-on ("_package"))
  ))