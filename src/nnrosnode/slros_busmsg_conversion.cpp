#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_nnROSNode_dronecomms_droneOut32 and dronecomms::droneOut32

void convertFromBus(dronecomms::droneOut32* msgPtr, SL_Bus_nnROSNode_dronecomms_droneOut32 const* busPtr)
{
  const std::string rosMessageType("dronecomms/droneOut32");

  convertFromBusVariablePrimitiveArray(msgPtr->data, busPtr->Data, busPtr->Data_SL_Info);
}

void convertToBus(SL_Bus_nnROSNode_dronecomms_droneOut32* busPtr, dronecomms::droneOut32 const* msgPtr)
{
  const std::string rosMessageType("dronecomms/droneOut32");

  convertToBusVariablePrimitiveArray(busPtr->Data, busPtr->Data_SL_Info, msgPtr->data, slros::EnabledWarning(rosMessageType, "data"));
}


// Conversions between SL_Bus_nnROSNode_dronecomms_pidIn32 and dronecomms::pidIn32

void convertFromBus(dronecomms::pidIn32* msgPtr, SL_Bus_nnROSNode_dronecomms_pidIn32 const* busPtr)
{
  const std::string rosMessageType("dronecomms/pidIn32");

  convertFromBusVariablePrimitiveArray(msgPtr->data, busPtr->Data, busPtr->Data_SL_Info);
}

void convertToBus(SL_Bus_nnROSNode_dronecomms_pidIn32* busPtr, dronecomms::pidIn32 const* msgPtr)
{
  const std::string rosMessageType("dronecomms/pidIn32");

  convertToBusVariablePrimitiveArray(busPtr->Data, busPtr->Data_SL_Info, msgPtr->data, slros::EnabledWarning(rosMessageType, "data"));
}

