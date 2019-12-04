#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block nnROSNode/Subscribe
extern SimulinkSubscriber<dronecomms::droneOut32, SL_Bus_nnROSNode_dronecomms_droneOut32> Sub_nnROSNode_245;

// For Block nnROSNode/Publish
extern SimulinkPublisher<dronecomms::pidIn32, SL_Bus_nnROSNode_dronecomms_pidIn32> Pub_nnROSNode_247;

void slros_node_init(int argc, char** argv);

#endif
