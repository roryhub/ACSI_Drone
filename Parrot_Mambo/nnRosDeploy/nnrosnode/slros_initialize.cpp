#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "nnROSNode";

// For Block nnROSNode/Subscribe
SimulinkSubscriber<dronecomms::droneOut32, SL_Bus_nnROSNode_dronecomms_droneOut32> Sub_nnROSNode_245;

// For Block nnROSNode/Publish
SimulinkPublisher<dronecomms::pidIn32, SL_Bus_nnROSNode_dronecomms_pidIn32> Pub_nnROSNode_247;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

