
(cl:in-package :asdf)

(defsystem "acsi_drone-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "interpolateTrajectory" :depends-on ("_package_interpolateTrajectory"))
    (:file "_package_interpolateTrajectory" :depends-on ("_package"))
    (:file "readCSV" :depends-on ("_package_readCSV"))
    (:file "_package_readCSV" :depends-on ("_package"))
  ))