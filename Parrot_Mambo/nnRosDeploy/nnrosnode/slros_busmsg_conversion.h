#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <dronecomms/droneOut32.h>
#include <dronecomms/pidIn32.h>
#include "nnROSNode_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(dronecomms::droneOut32* msgPtr, SL_Bus_nnROSNode_dronecomms_droneOut32 const* busPtr);
void convertToBus(SL_Bus_nnROSNode_dronecomms_droneOut32* busPtr, dronecomms::droneOut32 const* msgPtr);

void convertFromBus(dronecomms::pidIn32* msgPtr, SL_Bus_nnROSNode_dronecomms_pidIn32 const* busPtr);
void convertToBus(SL_Bus_nnROSNode_dronecomms_pidIn32* busPtr, dronecomms::pidIn32 const* msgPtr);


#endif
