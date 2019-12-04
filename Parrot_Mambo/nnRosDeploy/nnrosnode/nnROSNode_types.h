//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: nnROSNode_types.h
//
// Code generated for Simulink model 'nnROSNode'.
//
// Model version                  : 1.43
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Mon Aug 19 10:32:25 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_nnROSNode_types_h_
#define RTW_HEADER_nnROSNode_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nnROSNode_dronecomms_pidIn32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nnROSNode_dronecomms_pidIn32_

// MsgType=dronecomms/pidIn32
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real32_T Data[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_nnROSNode_dronecomms_pidIn32;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nnROSNode_dronecomms_droneOut32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nnROSNode_dronecomms_droneOut32_

// MsgType=dronecomms/droneOut32
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real32_T Data[20];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_nnROSNode_dronecomms_droneOut32;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_
#define DEFINED_TYPEDEF_FOR_struct_XRMsui9C07VjBvdq1msujB_

typedef struct {
  real_T initGreenwich;
  real_T quatGain;
} struct_XRMsui9C07VjBvdq1msujB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_
#define DEFINED_TYPEDEF_FOR_struct_hxsmtt0xTZOLDNa2Rz7GAF_

typedef struct {
  real_T xAxis;
} struct_hxsmtt0xTZOLDNa2Rz7GAF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_
#define DEFINED_TYPEDEF_FOR_struct_IZWOW0zYvpphl7qLgSfN7E_

typedef struct {
  real_T href;
  struct_hxsmtt0xTZOLDNa2Rz7GAF FlatEarthToLLA;
} struct_IZWOW0zYvpphl7qLgSfN7E;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_
#define DEFINED_TYPEDEF_FOR_struct_q6UUpnZ4gTjFvULFx6Rxa_

typedef struct {
  real_T mass;
  real_T inertia[9];
  real_T d;
  real_T xy;
  real_T h;
  real_T Cdx;
  real_T Cdy;
  real_T diameter;
} struct_q6UUpnZ4gTjFvULFx6Rxa;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_
#define DEFINED_TYPEDEF_FOR_struct_OMRgDnJcZuQneKEj9vdTyD_

typedef struct {
  real_T blades;
  real_T radius;
  real_T chord;
  real_T flappingOffset;
  real_T bladeMass;
  real_T bladeInertia;
  real_T hubMass;
  real_T hubInertia;
  real_T inertia;
  real_T Ct;
  real_T Cq;
  real_T solidity;
  real_T theta0;
  real_T thetaTip;
  real_T theta1;
  real_T theta34;
  real_T a;
  real_T area;
  real_T lock;
  real_T b;
  real_T k;
  real_T w2ToThrustGain;
} struct_OMRgDnJcZuQneKEj9vdTyD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_
#define DEFINED_TYPEDEF_FOR_struct_p3FXZIgqtjF2uqDpmYjb6C_

typedef struct {
  real_T maxLimit;
  real_T minLimit;
  real_T commandToW2Gain;
  real_T thrustToMotorCommand;
} struct_p3FXZIgqtjF2uqDpmYjb6C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_
#define DEFINED_TYPEDEF_FOR_struct_OSJpyIZcrpXqReVWwh9iuG_

typedef struct {
  struct_XRMsui9C07VjBvdq1msujB SixDOF;
  struct_IZWOW0zYvpphl7qLgSfN7E PositionOnEarth;
  struct_q6UUpnZ4gTjFvULFx6Rxa Airframe;
  struct_OMRgDnJcZuQneKEj9vdTyD Rotor;
  struct_p3FXZIgqtjF2uqDpmYjb6C Motor;
} struct_OSJpyIZcrpXqReVWwh9iuG;

#endif

#ifndef typedef_e_dsp_private_SlidingWindowMa_T
#define typedef_e_dsp_private_SlidingWindowMa_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pBuffer[100];
  int32_T pBufferIdx[100];
  int32_T pNumElements;
  int32_T pCount;
  int32_T pTop;
} e_dsp_private_SlidingWindowMa_T;

#endif                                 //typedef_e_dsp_private_SlidingWindowMa_T

#ifndef typedef_e_dsp_private_SlidingWindowAv_T
#define typedef_e_dsp_private_SlidingWindowAv_T

typedef struct {
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pCumSum;
  real_T pCumSumRev[99];
  real_T pCumRevIndex;
} e_dsp_private_SlidingWindowAv_T;

#endif                                 //typedef_e_dsp_private_SlidingWindowAv_T

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef typedef_robotics_slros_internal_blo_e_T
#define typedef_robotics_slros_internal_blo_e_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_blo_e_T;

#endif                                 //typedef_robotics_slros_internal_blo_e_T

#ifndef typedef_c_cell_wrap_nnROSNode_T
#define typedef_c_cell_wrap_nnROSNode_T

typedef struct {
  uint32_T f1[8];
} c_cell_wrap_nnROSNode_T;

#endif                                 //typedef_c_cell_wrap_nnROSNode_T

#ifndef typedef_dsp_MovingMaximum_nnROSNode_T
#define typedef_dsp_MovingMaximum_nnROSNode_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_cell_wrap_nnROSNode_T inputVarSize;
  int32_T NumChannels;
  e_dsp_private_SlidingWindowMa_T *pStat;
} dsp_MovingMaximum_nnROSNode_T;

#endif                                 //typedef_dsp_MovingMaximum_nnROSNode_T

#ifndef typedef_dsp_simulink_MovingAverage_nn_T
#define typedef_dsp_simulink_MovingAverage_nn_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  c_cell_wrap_nnROSNode_T inputVarSize;
  e_dsp_private_SlidingWindowAv_T *pStatistic;
  int32_T NumChannels;
} dsp_simulink_MovingAverage_nn_T;

#endif                                 //typedef_dsp_simulink_MovingAverage_nn_T

// Parameters for system: '<S90>/Rotor_Dynamics'
typedef struct P_RotorDynamics_nnROSNode_T_ P_RotorDynamics_nnROSNode_T;

// Parameters for system: '<S86>/For Each Subsystem'
typedef struct P_CoreSubsys_nnROSNode_T_ P_CoreSubsys_nnROSNode_T;

// Parameters (default storage)
typedef struct P_nnROSNode_T_ P_nnROSNode_T;

// Forward declaration for rtModel
typedef struct tag_RTM_nnROSNode_T RT_MODEL_nnROSNode_T;

#endif                                 // RTW_HEADER_nnROSNode_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
