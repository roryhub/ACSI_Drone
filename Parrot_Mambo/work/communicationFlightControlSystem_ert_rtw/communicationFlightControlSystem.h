/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: communicationFlightControlSystem.h
 *
 * Code generated for Simulink model 'communicationFlightControlSystem'.
 *
 * Model version                  : 1.214
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Wed May 22 14:02:07 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_communicationFlightControlSystem_h_
#define RTW_HEADER_communicationFlightControlSystem_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#include <float.h>
#ifndef communicationFlightControlSystem_COMMON_INCLUDES_
# define communicationFlightControlSystem_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "MW_TCPSendReceive.h"
#endif                   /* communicationFlightControlSystem_COMMON_INCLUDES_ */

#include "communicationFlightControlSystem_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "conversionYUV.h"
#define stateEstimator_MDLREF_HIDE_CHILD_
#include "stateEstimator.h"
#define flightController_MDLREF_HIDE_CHILD_
#include "flightController.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
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

/* Block signals for system '<S1>/Logging' */
typedef struct {
  real32_T TmpSignalConversionAtToWorkspace2Inport1_h[12];
  real32_T TmpSignalConversionAtToWorkspace6Inport1[10];
  real32_T TmpSignalConversionAtToWorkspace3Inport1[9];
  real32_T TmpSignalConversionAtToWorkspace4Inport1[8];
} B_Logging_communicationFlightControlSystem_T;

/* Block states (default storage) for system '<S1>/Logging' */
typedef struct {
  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S5>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S5>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S5>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S5>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S5>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S5>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S5>/To Workspace1' */
} DW_Logging_communicationFlightControlSystem_T;

/* Block signals for system '<Root>/Flight Control System' */
typedef struct {
  statesEstim_t estimator;             /* '<S1>/estimator' */
  sensordata_t BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1;
  real32_T DefaultController_o2[8];    /* '<S6>/Default Controller' */
  CommandBus Switch_o;                 /* '<S7>/Switch' */
  real32_T rtb_x_m;
  real32_T rtb_y_c;
  real32_T rtb_z_k;
  real32_T rtb_x_c_c;
  real32_T rtb_y_n_b;
  real32_T rtb_z_p_p;
  real32_T rtb_altitude_c;
  real32_T rtb_pressure_f;
  real32_T rtb_vbat_V_g;
  uint32_T rtb_vbat_percentage_g;
  B_Logging_communicationFlightControlSystem_T Logging;/* '<S1>/Logging' */
} B_FlightControlSystem_communicationFlightControlSystem_T;

/* Block states (default storage) for system '<Root>/Flight Control System' */
typedef struct {
  statesEstim_t Memory_PreviousInput;  /* '<S7>/Memory' */
  DW_Logging_communicationFlightControlSystem_T Logging;/* '<S1>/Logging' */
} DW_FlightControlSystem_communicationFlightControlSystem_T;

/* Block signals (default storage) */
typedef struct {
  uint8_T Y1UY2VtoYUV_o2[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T Y1UY2VtoYUV_o3[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T Y1UY2VtoYUV_o1[19200];       /* '<S2>/Y1UY2V to YUV' */
  uint8_T ColorSpaceConversion_o3[19200];
  uint8_T ColorSpaceConversion_o2[19200];
  uint8_T ColorSpaceConversion_o1[19200];
  SensorsBus BusAssignment;            /* '<Root>/Bus Assignment' */
  boolean_T RelationalOperator1[19200];/* '<S2>/Relational Operator1' */
  int32_T rtb_BlobAnalysis_o3_m[200];
  real32_T rtb_BlobAnalysis_o2_c[100];
  int32_T rtb_BlobAnalysis_o1_k[50];
  CommandBus rtb_BusAssignment2_c;
  real32_T TmpSignalConversionAtToWorkspace2Inport1[3];
  real_T Switch;                       /* '<S2>/Switch' */
  real_T rtb_RateTransition_b;
  real_T d0;
  char_T ipaddr[7];
  uint8_T b_x[4];
  uint8_T b_x_p[4];
  uint8_T b_x_c[4];
  real32_T b_varargout_1;
  int32_T k;
  int32_T j;
  int32_T j_pixListNinc;
  int32_T i0;
  uint32_T pos;
  uint32_T neg;
  uint32_T yDiff;
  int16_T errorNo;
  int16_T errorNo_f;
  uint16_T u0;
  uint16_T u1;
  uint8_T xtmp;
  B_FlightControlSystem_communicationFlightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} B_communicationFlightControlSystem_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T BlobAnalysis_STACK_DW[19200];/* '<S2>/Blob Analysis' */
  int16_T BlobAnalysis_M_PIXLIST_DW[19200];/* '<S2>/Blob Analysis' */
  int16_T BlobAnalysis_N_PIXLIST_DW[19200];/* '<S2>/Blob Analysis' */
  uint8_T BlobAnalysis_PAD_DW[19764];  /* '<S2>/Blob Analysis' */
  uint32_T BlobAnalysis_NUM_PIX_DW[50];/* '<S2>/Blob Analysis' */
  parrot_TCPReceive_communicationFlightControlSystem_T obj;/* '<Root>/ROS Input Sonar' */
  parrot_TCPReceive_communicationFlightControlSystem_T obj_a;/* '<Root>/ROS Input x' */
  parrot_TCPReceive_communicationFlightControlSystem_T obj_e;/* '<Root>/ROS Input y' */
  volatile real_T RateTransition_Buffer[2];/* '<Root>/Rate Transition' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } fromWS_Signal1_PWORK;              /* '<S3>/fromWS_Signal 1' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWorkspace_PWORK;               /* '<S3>/From Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<Root>/To Workspace2' */

  real32_T UnitDelay_DSTATE;           /* '<Root>/Unit Delay' */
  real32_T UnitDelay1_DSTATE;          /* '<Root>/Unit Delay1' */
  real32_T UnitDelay2_DSTATE;          /* '<Root>/Unit Delay2' */
  struct {
    int_T PrevIndex;
  } fromWS_Signal1_IWORK;              /* '<S3>/fromWS_Signal 1' */

  struct {
    int_T PrevIndex;
  } FromWorkspace_IWORK;               /* '<S3>/From Workspace' */

  volatile int8_T RateTransition_ActiveBufIdx;/* '<Root>/Rate Transition' */
  uint8_T ColorSpaceConversion_DWORK1[19200];/* '<S2>/Color Space  Conversion' */
  MdlrefDW_conversionYUV_T Y1UY2VtoYUV_InstanceData;/* '<S2>/Y1UY2V to YUV' */
  DW_FlightControlSystem_communicationFlightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} DW_communicationFlightControlSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Actuators[4];               /* '<Root>/Actuators' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_communicationFlightControlSystem_T;

/* Parameters for system: '<S4>/Geofencing error' */
struct P_Geofencingerror_communicationFlightControlSystem_T_ {
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S15>/Constant'
                                        */
};

/* Parameters for system: '<Root>/Flight Control System' */
struct P_FlightControlSystem_communicationFlightControlSystem_T_ {
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S18>/Constant'
                                       */
  real32_T CompareToConstant_const_o;
                                    /* Mask Parameter: CompareToConstant_const_o
                                     * Referenced by: '<S9>/Constant'
                                     */
  real32_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S10>/Constant'
                                      */
  real32_T CompareToConstant2_const; /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S11>/Constant'
                                      */
  real32_T CompareToConstant4_const; /* Mask Parameter: CompareToConstant4_const
                                      * Referenced by: '<S13>/Constant'
                                      */
  real32_T CompareToConstant3_const; /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S12>/Constant'
                                      */
  real32_T CompareToConstant5_const; /* Mask Parameter: CompareToConstant5_const
                                      * Referenced by: '<S14>/Constant'
                                      */
  statesEstim_t Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S7>/Memory'
                                   */
  real32_T Constant3_Value[3];         /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S7>/Constant3'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S4>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S4>/Gain1'
                                        */
  boolean_T Constant1_Value;           /* Expression: true
                                        * Referenced by: '<S7>/Constant1'
                                        */
  uint8_T Merge_InitialOutput;        /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S4>/Merge'
                                       */
  P_Geofencingerror_communicationFlightControlSystem_T Normalcondition;/* '<S4>/Normal condition' */
  P_Geofencingerror_communicationFlightControlSystem_T estimatorOpticalflowerror;
                                      /* '<S4>/estimator//Optical flow error' */
  P_Geofencingerror_communicationFlightControlSystem_T Geofencingerror;/* '<S4>/Geofencing error' */
};

/* Parameters (default storage) */
struct P_communicationFlightControlSystem_T_ {
  real_T One2_Value;                   /* Expression: 0
                                        * Referenced by: '<S2>/One2'
                                        */
  real_T One1_Value;                   /* Expression: 211
                                        * Referenced by: '<S2>/One1'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  real32_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<Root>/Unit Delay'
                                */
  real32_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<Root>/Switch'
                                        */
  real32_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<Root>/Unit Delay1'
                               */
  real32_T Switch1_Threshold;          /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real32_T UnitDelay2_InitialCondition;
                              /* Computed Parameter: UnitDelay2_InitialCondition
                               * Referenced by: '<Root>/Unit Delay2'
                               */
  real32_T Switch2_Threshold;          /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<Root>/Switch2'
                                        */
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint8_T One_Value;                   /* Computed Parameter: One_Value
                                        * Referenced by: '<S2>/One'
                                        */
  P_FlightControlSystem_communicationFlightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
};

/* Real-time Model Data Structure */
struct tag_RTM_communicationFlightControlSystem_T {
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
    time_T stepSize0;
    struct {
      uint32_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_communicationFlightControlSystem_T communicationFlightControlSystem_P;

/* Block signals (default storage) */
extern B_communicationFlightControlSystem_T communicationFlightControlSystem_B;

/* Block states (default storage) */
extern DW_communicationFlightControlSystem_T communicationFlightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_communicationFlightControlSystem_T
  communicationFlightControlSystem_Y;

/* Model block global parameters (default storage) */
extern struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors;/* Variable: Sensors
                                                 * Referenced by: '<S1>/estimator'
                                                 */
extern real32_T rtP_D_pr[2];           /* Variable: D_pr
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_D_xy[2];           /* Variable: D_xy
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_D_yaw;             /* Variable: D_yaw
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_D_z;               /* Variable: D_z
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_I_antiWU;          /* Variable: I_antiWU
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_I_pr;              /* Variable: I_pr
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_I_satLimitHigh;    /* Variable: I_satLimitHigh
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_I_satLimitLow;     /* Variable: I_satLimitLow
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_P_pr[2];           /* Variable: P_pr
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_P_xy[2];           /* Variable: P_xy
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_P_yaw;             /* Variable: P_yaw
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_P_z;               /* Variable: P_z
                                        * Referenced by: '<S6>/Default Controller'
                                        */
extern real32_T rtP_landingAltitude;   /* Variable: landingAltitude
                                        * Referenced by: '<S7>/Constant2'
                                        */
extern boolean_T rtP_enableLanding;    /* Variable: enableLanding
                                        * Referenced by: '<S7>/Constant'
                                        */

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
extern real32_T motors_outport[4];     /* '<S6>/Default Controller' */
extern uint8_T flag_outport;           /* '<S4>/Merge' */

/* External function called from main */
extern void communicationFlightControlSystem_SetEventsForThisBaseStep(boolean_T *
  eventFlags);

/* Model entry point functions */
extern void communicationFlightControlSystem_SetEventsForThisBaseStep(boolean_T *
  eventFlags);
extern void communicationFlightControlSystem_initialize(void);
extern void communicationFlightControlSystem_step0(void);
extern void communicationFlightControlSystem_step1(void);
extern void communicationFlightControlSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_communicationFlightControlSystem_T *const
  communicationFlightControlSystem_M;

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
 * '<Root>' : 'communicationFlightControlSystem'
 * '<S1>'   : 'communicationFlightControlSystem/Flight Control System'
 * '<S2>'   : 'communicationFlightControlSystem/Image Processing System'
 * '<S3>'   : 'communicationFlightControlSystem/Position//Attitude Reference'
 * '<S4>'   : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags'
 * '<S5>'   : 'communicationFlightControlSystem/Flight Control System/Logging'
 * '<S6>'   : 'communicationFlightControlSystem/Flight Control System/controller'
 * '<S7>'   : 'communicationFlightControlSystem/Flight Control System/landing logic'
 * '<S8>'   : 'communicationFlightControlSystem/Flight Control System/sensordata_group'
 * '<S9>'   : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant'
 * '<S10>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant1'
 * '<S11>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant2'
 * '<S12>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant3'
 * '<S13>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant4'
 * '<S14>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant5'
 * '<S15>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Geofencing error'
 * '<S16>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/Normal condition'
 * '<S17>'  : 'communicationFlightControlSystem/Flight Control System/Crash Predictor Flags/estimator//Optical flow error'
 * '<S18>'  : 'communicationFlightControlSystem/Flight Control System/landing logic/Compare To Constant'
 */
#endif                      /* RTW_HEADER_communicationFlightControlSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
