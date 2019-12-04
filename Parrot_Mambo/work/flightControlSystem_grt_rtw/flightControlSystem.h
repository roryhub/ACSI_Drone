/*
 * flightControlSystem.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystem".
 *
 * Model version              : 1.151
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 14:15:22 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include <float.h>
#ifndef flightControlSystem_COMMON_INCLUDES_
# define flightControlSystem_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "MW_TCPSendReceive.h"
#endif                                /* flightControlSystem_COMMON_INCLUDES_ */

#include "flightControlSystem_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "conversionYUV.h"
#define stateEstimator_MDLREF_HIDE_CHILD_
#include "stateEstimator.h"
#define flightControllerPID_MDLREF_HIDE_CHILD_
#include "flightControllerPID.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmCounterLimit
# define rtmCounterLimit(rtm, idx)     ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block states (default storage) for system '<S1>/Logging' */
typedef struct {
  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S5>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S5>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S5>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S5>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S5>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S5>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S5>/To Workspace1' */
} DW_Logging_flightControlSystem_T;

/* Block states (default storage) for system '<Root>/Flight Control System' */
typedef struct {
  statesEstim_t Memory_PreviousInput;  /* '<S7>/Memory' */
  DW_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} DW_FlightControlSystem_flightControlSystem_T;

/* Block signals (default storage) */
typedef struct {
  uint8_T ColorSpaceConversion_o1[19200];/* '<S2>/Color Space  Conversion' */
  uint8_T ColorSpaceConversion_o2[19200];/* '<S2>/Color Space  Conversion' */
  uint8_T ColorSpaceConversion_o3[19200];/* '<S2>/Color Space  Conversion' */
  uint8_T Y1UY2VtoYUV_o2[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T Y1UY2VtoYUV_o3[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T Y1UY2VtoYUV_o1[19200];       /* '<S2>/Y1UY2V to YUV' */
  SensorsBus BusAssignment;            /* '<Root>/Bus Assignment' */
  boolean_T RelationalOperator1[19200];/* '<S2>/Relational Operator1' */
} B_flightControlSystem_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T BlobAnalysis_STACK_DW[19200];/* '<S2>/Blob Analysis' */
  int16_T BlobAnalysis_M_PIXLIST_DW[19200];/* '<S2>/Blob Analysis' */
  int16_T BlobAnalysis_N_PIXLIST_DW[19200];/* '<S2>/Blob Analysis' */
  uint8_T BlobAnalysis_PAD_DW[19764];  /* '<S2>/Blob Analysis' */
  parrot_TCPReceive_flightControlSystem_T obj;/* '<Root>/ROS Input Sonar' */
  parrot_TCPReceive_flightControlSystem_T obj_c;/* '<Root>/ROS Input x' */
  parrot_TCPReceive_flightControlSystem_T obj_f;/* '<Root>/ROS Input y' */
  volatile real_T RateTransition_Buffer[2];/* '<Root>/Rate Transition' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } fromWS_Signal1_PWORK;              /* '<S20>/fromWS_Signal 1' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<S20>/From Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<Root>/To Workspace2' */

  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
  real32_T UnitDelay1_DSTATE;          /* '<Root>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<Root>/Unit Delay2' */
  struct {
    int_T PrevIndex;
  } fromWS_Signal1_IWORK;              /* '<S20>/fromWS_Signal 1' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<S20>/From Workspace' */

  volatile int8_T RateTransition_ActiveBufIdx;/* '<Root>/Rate Transition' */
  uint8_T ColorSpaceConversion_DWORK1[19200];/* '<S2>/Color Space  Conversion' */
  boolean_T objisempty;                /* '<Root>/ROS Input Sonar' */
  boolean_T objisempty_a;              /* '<Root>/ROS Input x' */
  boolean_T objisempty_l;              /* '<Root>/ROS Input y' */
  MdlrefDW_conversionYUV_T Y1UY2VtoYUV_InstanceData;/* '<S2>/Y1UY2V to YUV' */
  DW_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} DW_flightControlSystem_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Y1UY2V[38400];               /* '<Root>/Image Data' */
} ExtU_flightControlSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Actuators[4];               /* '<Root>/Actuators' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_flightControlSystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_flightControlSystem_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    struct {
      uint32_T TID[2];
      uint32_T cLimit[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
extern DW_flightControlSystem_T flightControlSystem_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_flightControlSystem_T flightControlSystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_flightControlSystem_T flightControlSystem_Y;

/* External data declarations for dependent source files */
extern const statesEstim_t flightControlSystem_rtZstatesEstim_t;/* statesEstim_t ground */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern CommandBus cmd_inport;          /* '<Root>/AC cmd' */
extern SensorsBus sensor_inport;       /* '<Root>/Sensors' */
extern real32_T motors_outport[4];     /* '<S6>/PID Controller' */
extern uint8_T flag_outport;           /* '<S4>/Merge' */

/* Model entry point functions */
extern void flightControlSystem_initialize(void);
extern void flightControlSystem_step(int_T tid);
extern void flightControlSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_flightControlSystem_T *const flightControlSystem_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'flightControlSystem'
 * '<S1>'   : 'flightControlSystem/Flight Control System'
 * '<S2>'   : 'flightControlSystem/Image Processing System'
 * '<S3>'   : 'flightControlSystem/Variant Subsystem'
 * '<S4>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags'
 * '<S5>'   : 'flightControlSystem/Flight Control System/Logging'
 * '<S6>'   : 'flightControlSystem/Flight Control System/controller'
 * '<S7>'   : 'flightControlSystem/Flight Control System/landing logic'
 * '<S8>'   : 'flightControlSystem/Flight Control System/sensordata_group'
 * '<S9>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant'
 * '<S10>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant1'
 * '<S11>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant2'
 * '<S12>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant3'
 * '<S13>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant4'
 * '<S14>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant5'
 * '<S15>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Geofencing error'
 * '<S16>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Normal condition'
 * '<S17>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/estimator//Optical flow error'
 * '<S18>'  : 'flightControlSystem/Flight Control System/landing logic/Compare To Constant'
 * '<S19>'  : 'flightControlSystem/Variant Subsystem/Hardware Deployment'
 * '<S20>'  : 'flightControlSystem/Variant Subsystem/Hardware Deployment/Position//Attitude Reference1'
 */
#endif                                 /* RTW_HEADER_flightControlSystem_h_ */
