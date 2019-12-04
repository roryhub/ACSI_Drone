/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem.h
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 1.531
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Jul 25 12:21:03 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include <float.h>
#ifndef flightControlSystem_COMMON_INCLUDES_
# define flightControlSystem_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rt_logging.h"
#include "DAHostLib_Network.h"
#endif                                /* flightControlSystem_COMMON_INCLUDES_ */

#include "flightControlSystem_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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

/* Block signals for system '<S1>/Logging' */
typedef struct {
  real32_T TmpSignalConversionAtToWorkspace4Inport1[25];
  real32_T TmpSignalConversionAtToWorkspace7Inport1[18];
  real32_T TmpSignalConversionAtToWorkspace1Inport1[12];
  real32_T TmpSignalConversionAtToWorkspace3Inport1[9];
} B_Logging_flightControlSystem_T;

/* Block states (default storage) for system '<S1>/Logging' */
typedef struct {
  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S4>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                /* '<S4>/To Workspace7' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S4>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S4>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S4>/To Workspace6' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S4>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S4>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace10_PWORK;               /* '<S4>/To Workspace10' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S4>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                /* '<S4>/To Workspace8' */

  struct {
    void *LoggedData;
  } ToWorkspace9_PWORK;                /* '<S4>/To Workspace9' */
} DW_Logging_flightControlSystem_T;

/* Block signals for system '<Root>/Flight Control System' */
typedef struct {
  real32_T VectorConcatenate[9];       /* '<S42>/Vector Concatenate' */
  real32_T Reshape9to3x3columnmajor[9];
                                /* '<S107>/Reshape (9) to [3x3] column-major' */
  real32_T MathFunction[9];            /* '<S97>/Math Function' */
  real32_T rtb_VectorConcatenate_m[9];
  real32_T SensorCalibration[8];
  real_T Sum[3];                       /* '<S34>/Sum' */
  real_T rtb_VectorConcatenate_c[3];
  real32_T inverseIMU_gain_k[6];
  real_T Product2[2];                  /* '<S90>/Product2' */
  real_T Product3[2];                  /* '<S89>/Product3' */
  real32_T Switch[3];                  /* '<S96>/Switch' */
  real32_T sincos_o2[3];               /* '<S166>/sincos' */
  real32_T rtb_DataTypeConversion3_c[3];
  real32_T rtb_DataTypeConversion1_b[3];
  real32_T rtb_FIR_IMUaccel_p[3];
  real_T invertzaxisGain;              /* '<S34>/invertzaxisGain' */
  real_T u_h;                          /* '<S3>/   ' */
  real_T rtb_Compare_mp_c;
  real_T rtb_Reshapexhat_idx_1;
  real_T rtb_Reshapexhat_idx_0;
  real32_T Merge[2];                   /* '<S33>/Merge' */
  real32_T Product[2];                 /* '<S98>/Product' */
  real32_T Product2_j[2];              /* '<S165>/Product2' */
  real32_T Product3_i[2];              /* '<S164>/Product3' */
  real32_T TSamp[2];                   /* '<S110>/TSamp' */
  real32_T rtb_P_xy_f[2];
  real32_T rtb_Saturation1_m_g[2];
  real32_T rtb_D_xy_g[2];
  real32_T rtb_P_pr_m[2];
  real32_T rtb_Saturation_n[2];
  real32_T rtb_D_pr_p[2];
  real32_T rtb_SimplyIntegrateVelocity_l[2];
  real32_T fv0[2];
  real32_T fv1[2];
  real32_T IIRgyroz_tmp[2];
  real32_T Add_i[2];                   /* '<S7>/Add' */
  real32_T Add_p[2];                   /* '<S9>/Add' */
  real32_T TmpSignalConversionAtLoggingInport9[2];
  boolean_T TmpSignalConversionAtLoggingInport5[5];/* '<S1>/State Estimator' */
  boolean_T TmpSignalConversionAtLoggingInport7[5];/* '<S1>/State Estimator' */
  real32_T acc1;
  real32_T numAccum;
  real32_T Sum2_b;                     /* '<S36>/Sum2' */
  real32_T Add1;                       /* '<S11>/Add1' */
  real32_T Delay1;                     /* '<S11>/Delay1' */
  real32_T Gain;                       /* '<S96>/Gain' */
  real32_T rtb_DataTypeConversion2_j;
  real32_T rtb_DataTypeConversion_d;
  real32_T rtb_Saturation1_g;
  real32_T rtb_P_z_l;
  real32_T rtb_dz_d;
  real32_T rtb_P_yaw_d;
  real32_T rtb_D_yaw_l;
  real32_T rtb_r_o;
  real32_T rtb_sincos_o1_idx_1;
  real32_T rtb_sincos_o1_idx_2;
  real32_T rtb_sincos_o1_idx_0;
  real32_T unnamed_idx_0;
  real32_T unnamed_idx_1;
  real32_T rtb_DiscreteTimeIntegrator_idx_0;
  real32_T rtb_DiscreteTimeIntegrator_idx_1;
  real32_T rtb_DiscreteTimeIntegrator_d_idx_0;
  real32_T rtb_DiscreteTimeIntegrator_d_idx_1;
  real32_T rtb_Sum2_b_idx_3;
  real32_T rtb_FIR_IMUaccel_b;
  real32_T rtb_FIR_IMUaccel_n;
  int32_T cff;
  int32_T denIdx;
  int32_T memOffset;
  int32_T rtb_size_b;
  int32_T i;
  boolean_T Compare;                   /* '<S46>/Compare' */
  boolean_T LogicalOperator3;          /* '<S101>/Logical Operator3' */
  B_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} B_FlightControlSystem_flightControlSystem_T;

/* Block states (default storage) for system '<Root>/Flight Control System' */
typedef struct {
  real_T Delay2_DSTATE;                /* '<S34>/Delay2' */
  real_T MemoryX_DSTATE[2];            /* '<S43>/MemoryX' */
  real_T soonarFilter_IIR_states[3];   /* '<S44>/soonarFilter_IIR' */
  real_T DelayOneStep_DSTATE;          /* '<S3>/Delay One Step' */
  struct {
    void *LoggedData;
  } AttitudeError_PWORK;               /* '<S7>/Attitude Error' */

  struct {
    void *LoggedData;
  } XYError_PWORK;                     /* '<S9>/XY Error' */

  real32_T FIR_IMUaccel_states[15];    /* '<S36>/FIR_IMUaccel' */
  real32_T IIR_IMUgyro_r_states[5];    /* '<S36>/IIR_IMUgyro_r' */
  real32_T Delay1_DSTATE[2];           /* '<S6>/Delay1' */
  real32_T MemoryX_DSTATE_h[2];        /* '<S102>/MemoryX' */
  real32_T IIRgyroz_states[10];        /* '<S101>/IIRgyroz' */
  real32_T UD_DSTATE[2];               /* '<S110>/UD' */
  real32_T Delay_DSTATE[2];            /* '<S96>/Delay' */
  real32_T DiscreteTimeIntegrator2_DSTATE;/* '<S11>/Discrete-Time Integrator2' */
  real32_T DiscreteTimeIntegrator_DSTATE[2];/* '<S9>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_m[2];/* '<S7>/Discrete-Time Integrator' */
  real32_T SimplyIntegrateVelocity_DSTATE[2];/* '<S97>/SimplyIntegrateVelocity' */
  real32_T pressureFilter_IIR_states[3];/* '<S44>/pressureFilter_IIR' */
  real32_T Delay_DSTATE_k[2];          /* '<S7>/Delay' */
  real32_T Delay_DSTATE_l[2];          /* '<S9>/Delay' */
  real32_T Delay1_DSTATE_d;            /* '<S11>/Delay1' */
  int32_T FIR_IMUaccel_circBuf;        /* '<S36>/FIR_IMUaccel' */
  uint32_T Output_DSTATE;              /* '<S100>/Output' */
  uint32_T Output_DSTATE_i;            /* '<S25>/Output' */
  real32_T Memory_PreviousInput[3];    /* '<S33>/Memory' */
  uint16_T Output_DSTATE_b;            /* '<S14>/Output' */
  int8_T DiscreteTimeIntegrator2_PrevResetState;/* '<S11>/Discrete-Time Integrator2' */
  int8_T SimplyIntegrateVelocity_PrevResetState;/* '<S97>/SimplyIntegrateVelocity' */
  uint8_T icLoad;                      /* '<S43>/MemoryX' */
  uint8_T icLoad_k;                    /* '<S102>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S144>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S139>/MeasurementUpdate' */
  boolean_T EnabledSubsystem_MODE_m;   /* '<S69>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE_h;  /* '<S64>/MeasurementUpdate' */
  DW_Logging_flightControlSystem_T Logging;/* '<S1>/Logging' */
} DW_FlightControlSystem_flightControlSystem_T;

/* Block signals (default storage) */
typedef struct {
  real32_T UDPReceiveZ_o1[24];         /* '<Root>/UDP Receive Z' */
  real32_T BufferToMakeInportVirtual_InsertedFor_SendUDP_at_inport_0[20];
         /* '<S5>/BufferToMakeInportVirtual_InsertedFor_Send UDP_at_inport_0' */
  real32_T MotorDirections[4];         /* '<S12>/MotorDirections' */
  int32_T samplesRead;
  uint16_T UDPReceiveZ_o2_m;
  uint8_T rtb_Constant_c;
  B_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} B_flightControlSystem_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UDPReceiveZ_NetworkLib[137];  /* '<Root>/UDP Receive Z' */
  real_T UDPSend_NetworkLib[137];      /* '<Root>/UDP Send' */
  DW_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
} DW_flightControlSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Actuators[4];               /* '<Root>/Actuators' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_flightControlSystem_T;

/* Parameters for system: '<S3>/Geofencing error' */
struct P_Geofencingerror_flightControlSystem_T_ {
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S26>/Constant'
                                        */
};

/* Parameters for system: '<S1>/Send' */
struct P_Send_flightControlSystem_T_ {
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S5>/Constant'
                                        */
};

/* Parameters for system: '<Root>/Flight Control System' */
struct P_FlightControlSystem_flightControlSystem_T_ {
  real_T outlierBelowFloor_const;     /* Mask Parameter: outlierBelowFloor_const
                                       * Referenced by: '<S46>/Constant'
                                       */
  real_T outlierJump_const;            /* Mask Parameter: outlierJump_const
                                        * Referenced by: '<S94>/Constant'
                                        */
  real_T currentEstimateVeryOffFromPressure_const;
                     /* Mask Parameter: currentEstimateVeryOffFromPressure_const
                      * Referenced by: '<S92>/Constant'
                      */
  real_T currentStateVeryOffsonarflt_const;
                            /* Mask Parameter: currentStateVeryOffsonarflt_const
                             * Referenced by: '<S93>/Constant'
                             */
  real_T Checkerrorcondition_const; /* Mask Parameter: Checkerrorcondition_const
                                     * Referenced by: '<S18>/Constant'
                                     */
  real_T u0continuousOFerrors_const;
                                   /* Mask Parameter: u0continuousOFerrors_const
                                    * Referenced by: '<S17>/Constant'
                                    */
  real32_T DiscreteDerivative_ICPrevScaledInput;
                         /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
                          * Referenced by: '<S110>/UD'
                          */
  real32_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S37>/Constant'
                                       */
  real32_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S38>/Constant'
                                      */
  real32_T maxp_const;                 /* Mask Parameter: maxp_const
                                        * Referenced by: '<S113>/Constant'
                                        */
  real32_T maxq_const;                 /* Mask Parameter: maxq_const
                                        * Referenced by: '<S115>/Constant'
                                        */
  real32_T maxw1_const;                /* Mask Parameter: maxw1_const
                                        * Referenced by: '<S117>/Constant'
                                        */
  real32_T maxw2_const;                /* Mask Parameter: maxw2_const
                                        * Referenced by: '<S118>/Constant'
                                        */
  real32_T maxdw1_const;               /* Mask Parameter: maxdw1_const
                                        * Referenced by: '<S111>/Constant'
                                        */
  real32_T maxdw2_const;               /* Mask Parameter: maxdw2_const
                                        * Referenced by: '<S112>/Constant'
                                        */
  real32_T maxp2_const;                /* Mask Parameter: maxp2_const
                                        * Referenced by: '<S114>/Constant'
                                        */
  real32_T maxq2_const;                /* Mask Parameter: maxq2_const
                                        * Referenced by: '<S116>/Constant'
                                        */
  real32_T maxw3_const;                /* Mask Parameter: maxw3_const
                                        * Referenced by: '<S119>/Constant'
                                        */
  real32_T maxw4_const;                /* Mask Parameter: maxw4_const
                                        * Referenced by: '<S120>/Constant'
                                        */
  real32_T minHeightforOF_const;       /* Mask Parameter: minHeightforOF_const
                                        * Referenced by: '<S121>/Constant'
                                        */
  real32_T DeactivateAccelerationIfOFisnotusedduetolowaltitude_const;
    /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
     * Referenced by: '<S103>/Constant'
     */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S105>/Constant'
   */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S106>/Constant'
   */
  real32_T CompareToConstant_const_o;
                                    /* Mask Parameter: CompareToConstant_const_o
                                     * Referenced by: '<S19>/Constant'
                                     */
  real32_T CompareToConstant1_const_m;
                                   /* Mask Parameter: CompareToConstant1_const_m
                                    * Referenced by: '<S20>/Constant'
                                    */
  real32_T CompareToConstant2_const; /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S21>/Constant'
                                      */
  real32_T CompareToConstant4_const; /* Mask Parameter: CompareToConstant4_const
                                      * Referenced by: '<S23>/Constant'
                                      */
  real32_T CompareToConstant3_const; /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S22>/Constant'
                                      */
  real32_T CompareToConstant5_const; /* Mask Parameter: CompareToConstant5_const
                                      * Referenced by: '<S24>/Constant'
                                      */
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S32>/FixPt Switch'
                                        */
  uint32_T WrapToZero_Threshold_e;     /* Mask Parameter: WrapToZero_Threshold_e
                                        * Referenced by: '<S109>/FixPt Switch'
                                        */
  uint32_T CompareToConstant_const_a;
                                    /* Mask Parameter: CompareToConstant_const_a
                                     * Referenced by: '<S99>/Constant'
                                     */
  uint16_T WrapToZero_Threshold_g;     /* Mask Parameter: WrapToZero_Threshold_g
                                        * Referenced by: '<S16>/FixPt Switch'
                                        */
  uint16_T CompareToConstant_const_ao;
                                   /* Mask Parameter: CompareToConstant_const_ao
                                    * Referenced by: '<S13>/Constant'
                                    */
  real_T _Value;                       /* Expression: 0
                                        * Referenced by: '<S3>/ '
                                        */
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S89>/L*(y[k]-yhat[k|k-1])'
                                        */
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S90>/deltax'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S34>/Delay2'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S43>/X0'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S34>/Constant'
                                        */
  real_T KalmanGainM_Value[2];         /* Expression: pInitialization.M
                                        * Referenced by: '<S47>/KalmanGainM'
                                        */
  real_T C_Value[2];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S43>/C'
                                        */
  real_T KalmanGainM_Value_o[4];       /* Expression: pInitialization.M
                                        * Referenced by: '<S122>/KalmanGainM'
                                        */
  real_T SaturationSonar_LowerSat;     /* Expression: -inf
                                        * Referenced by: '<S44>/SaturationSonar'
                                        */
  real_T soonarFilter_IIR_NumCoef[4];/* Expression: Estimator.alt.filterSonarNum
                                      * Referenced by: '<S44>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_DenCoef[4];/* Expression: Estimator.alt.filterSonarDen
                                      * Referenced by: '<S44>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_InitialStates;/* Expression: 0
                                         * Referenced by: '<S44>/soonarFilter_IIR'
                                         */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S43>/A'
                                        */
  real_T KalmanGainL_Value[4];         /* Expression: pInitialization.L
                                        * Referenced by: '<S122>/KalmanGainL'
                                        */
  real_T gravity_Value[3];             /* Expression: [0 0 -g]
                                        * Referenced by: '<S98>/gravity'
                                        */
  real_T gravity_Value_k[3];           /* Expression: [0 0 g]
                                        * Referenced by: '<S34>/gravity'
                                        */
  real_T gainaccinput_Gain;   /* Expression: Estimator.pos.accelerationInputGain
                               * Referenced by: '<S98>/gainaccinput'
                               */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S43>/B'
                                        */
  real_T D_Value;                      /* Expression: pInitialization.D
                                        * Referenced by: '<S43>/D'
                                        */
  real_T KalmanGainL_Value_k[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S47>/KalmanGainL'
                                        */
  real_T Wait3Seconds_Value;           /* Expression: 200*3
                                        * Referenced by: '<S3>/Wait  3 Seconds'
                                        */
  real_T u5meters_Value;               /* Expression: 0.5
                                        * Referenced by: '<S3>/0.5 meters'
                                        */
  real_T DelayOneStep_InitialCondition;/* Expression: 0.0
                                        * Referenced by: '<S3>/Delay One Step'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S47>/CovarianceZ'
                                        */
  real_T P0_Value[4];                  /* Expression: pInitialization.P0
                                        * Referenced by: '<S43>/P0'
                                        */
  real_T CovarianceZ_Value_i[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S122>/CovarianceZ'
                                        */
  real_T G_Value[2];                   /* Expression: pInitialization.G
                                        * Referenced by: '<S43>/G'
                                        */
  real_T ConstantP_Value;              /* Expression: 0
                                        * Referenced by: '<S47>/ConstantP'
                                        */
  real_T H_Value;                      /* Expression: pInitialization.H
                                        * Referenced by: '<S43>/H'
                                        */
  real_T N_Value;                      /* Expression: pInitialization.N
                                        * Referenced by: '<S43>/N'
                                        */
  real_T Q_Value;                      /* Expression: pInitialization.Q
                                        * Referenced by: '<S43>/Q'
                                        */
  real_T R_Value;                      /* Expression: pInitialization.R
                                        * Referenced by: '<S43>/R'
                                        */
  real_T ConstantP_Value_d;            /* Expression: 0
                                        * Referenced by: '<S122>/ConstantP'
                                        */
  real32_T takeoff_gain1_Gain;         /* Expression: Controller.takeoffGain
                                        * Referenced by: '<S11>/takeoff_gain1'
                                        */
  real32_T _Value_j;                   /* Computed Parameter: _Value_j
                                        * Referenced by: '<S3>/    '
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S39>/Gain1'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S39>/Gain'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S39>/Gain2'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S39>/Gain3'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S39>/Gain4'
                                        */
  real32_T Gain_Gain_l;                /* Computed Parameter: Gain_Gain_l
                                        * Referenced by: '<S96>/Gain'
                                        */
  real32_T opticalFlowErrorCorrect_Gain;
                             /* Computed Parameter: opticalFlowErrorCorrect_Gain
                              * Referenced by: '<S96>/opticalFlowErrorCorrect'
                              */
  real32_T Lykyhatkk1_Y0_o;            /* Computed Parameter: Lykyhatkk1_Y0_o
                                        * Referenced by: '<S164>/L*(y[k]-yhat[k|k-1])'
                                        */
  real32_T deltax_Y0_g;                /* Computed Parameter: deltax_Y0_g
                                        * Referenced by: '<S165>/deltax'
                                        */
  real32_T Assumingthatcalibwasdonelevel_Bias[6];
                       /* Computed Parameter: Assumingthatcalibwasdonelevel_Bias
                        * Referenced by: '<S36>/Assuming that calib was done level!'
                        */
  real32_T inverseIMU_gain_Gain[6];  /* Computed Parameter: inverseIMU_gain_Gain
                                      * Referenced by: '<S36>/inverseIMU_gain'
                                      */
  real32_T FIR_IMUaccel_InitialStates;
                               /* Computed Parameter: FIR_IMUaccel_InitialStates
                                * Referenced by: '<S36>/FIR_IMUaccel'
                                */
  real32_T FIR_IMUaccel_Coefficients[6];
                                /* Computed Parameter: FIR_IMUaccel_Coefficients
                                 * Referenced by: '<S36>/FIR_IMUaccel'
                                 */
  real32_T Memory_InitialCondition[3];
                        /* Expression: single(Estimator.complementaryFilterInit)
                         * Referenced by: '<S33>/Memory'
                         */
  real32_T Constant_Value_n;           /* Expression: single(0)
                                        * Referenced by: '<S41>/Constant'
                                        */
  real32_T Gain_Gain_d;                /* Computed Parameter: Gain_Gain_d
                                        * Referenced by: '<S41>/Gain'
                                        */
  real32_T IIR_IMUgyro_r_NumCoef[6];/* Computed Parameter: IIR_IMUgyro_r_NumCoef
                                     * Referenced by: '<S36>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_DenCoef[6];/* Computed Parameter: IIR_IMUgyro_r_DenCoef
                                     * Referenced by: '<S36>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_InitialStates;
                              /* Computed Parameter: IIR_IMUgyro_r_InitialStates
                               * Referenced by: '<S36>/IIR_IMUgyro_r'
                               */
  real32_T Gain_Gain_o;                /* Computed Parameter: Gain_Gain_o
                                        * Referenced by: '<S33>/Gain'
                                        */
  real32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S33>/Constant'
                                        */
  real32_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S33>/Merge'
                                       */
  real32_T invertzaxisGain_Gain;     /* Computed Parameter: invertzaxisGain_Gain
                                      * Referenced by: '<S34>/invertzaxisGain'
                                      */
  real32_T Delay1_InitialCondition;
                                  /* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<S6>/Delay1'
                                   */
  real32_T X0_Value_a[2];              /* Computed Parameter: X0_Value_a
                                        * Referenced by: '<S102>/X0'
                                        */
  real32_T C_Value_g[4];               /* Computed Parameter: C_Value_g
                                        * Referenced by: '<S102>/C'
                                        */
  real32_T IIRgyroz_NumCoef[6];        /* Computed Parameter: IIRgyroz_NumCoef
                                        * Referenced by: '<S101>/IIRgyroz'
                                        */
  real32_T IIRgyroz_DenCoef[6];        /* Computed Parameter: IIRgyroz_DenCoef
                                        * Referenced by: '<S101>/IIRgyroz'
                                        */
  real32_T IIRgyroz_InitialStates; /* Computed Parameter: IIRgyroz_InitialStates
                                    * Referenced by: '<S101>/IIRgyroz'
                                    */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S110>/TSamp'
                                        */
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S96>/Delay'
                                    */
  real32_T TorqueTotalThrustToThrustPerMotor_Value[16];/* Expression: Controller.Q2Ts
                                                        * Referenced by: '<S8>/TorqueTotalThrustToThrustPerMotor'
                                                        */
  real32_T w1_Value;                   /* Computed Parameter: w1_Value
                                        * Referenced by: '<S11>/w1'
                                        */
  real32_T DiscreteTimeIntegrator2_gainval;
                          /* Computed Parameter: DiscreteTimeIntegrator2_gainval
                           * Referenced by: '<S11>/Discrete-Time Integrator2'
                           */
  real32_T DiscreteTimeIntegrator2_IC;
                               /* Computed Parameter: DiscreteTimeIntegrator2_IC
                                * Referenced by: '<S11>/Discrete-Time Integrator2'
                                */
  real32_T Zero_Value;                 /* Computed Parameter: Zero_Value
                                        * Referenced by: '<S1>/Zero'
                                        */
  real32_T SaturationThrust1_UpperSat;
                               /* Computed Parameter: SaturationThrust1_UpperSat
                                * Referenced by: '<S11>/SaturationThrust1'
                                */
  real32_T SaturationThrust1_LowerSat;
                               /* Computed Parameter: SaturationThrust1_LowerSat
                                * Referenced by: '<S11>/SaturationThrust1'
                                */
  real32_T Gain_Gain_k;                /* Computed Parameter: Gain_Gain_k
                                        * Referenced by: '<S9>/Gain'
                                        */
  real32_T Saturation_UpperSat;       /* Computed Parameter: Saturation_UpperSat
                                       * Referenced by: '<S9>/Saturation'
                                       */
  real32_T Saturation_LowerSat;       /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S9>/Saturation'
                                       */
  real32_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S9>/Discrete-Time Integrator'
                            */
  real32_T DiscreteTimeIntegrator_IC;
                                /* Computed Parameter: DiscreteTimeIntegrator_IC
                                 * Referenced by: '<S9>/Discrete-Time Integrator'
                                 */
  real32_T DiscreteTimeIntegrator_gainval_k;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_k
                          * Referenced by: '<S7>/Discrete-Time Integrator'
                          */
  real32_T DiscreteTimeIntegrator_IC_p;
                              /* Computed Parameter: DiscreteTimeIntegrator_IC_p
                               * Referenced by: '<S7>/Discrete-Time Integrator'
                               */
  real32_T ThrustToMotorCommand_Gain;
                                /* Computed Parameter: ThrustToMotorCommand_Gain
                                 * Referenced by: '<S12>/ThrustToMotorCommand'
                                 */
  real32_T Saturation5_UpperSat;       /* Expression: Vehicle.Motor.maxLimit
                                        * Referenced by: '<S12>/Saturation5'
                                        */
  real32_T Saturation5_LowerSat;       /* Expression: Vehicle.Motor.minLimit
                                        * Referenced by: '<S12>/Saturation5'
                                        */
  real32_T MotorDirections_Gain[4];  /* Computed Parameter: MotorDirections_Gain
                                      * Referenced by: '<S12>/MotorDirections'
                                      */
  real32_T Constant_Value_hq;          /* Computed Parameter: Constant_Value_hq
                                        * Referenced by: '<S10>/Constant'
                                        */
  real32_T SimplyIntegrateVelocity_gainval;
                          /* Computed Parameter: SimplyIntegrateVelocity_gainval
                           * Referenced by: '<S97>/SimplyIntegrateVelocity'
                           */
  real32_T SimplyIntegrateVelocity_IC;
                               /* Computed Parameter: SimplyIntegrateVelocity_IC
                                * Referenced by: '<S97>/SimplyIntegrateVelocity'
                                */
  real32_T prsToAltGain_Gain;          /* Computed Parameter: prsToAltGain_Gain
                                        * Referenced by: '<S34>/prsToAltGain'
                                        */
  real32_T pressureFilter_IIR_NumCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_NumCoef
                                * Referenced by: '<S44>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_DenCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_DenCoef
                                * Referenced by: '<S44>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_InitialStates;
                         /* Computed Parameter: pressureFilter_IIR_InitialStates
                          * Referenced by: '<S44>/pressureFilter_IIR'
                          */
  real32_T A_Value_c[4];               /* Computed Parameter: A_Value_c
                                        * Referenced by: '<S102>/A'
                                        */
  real32_T B_Value_m[4];               /* Computed Parameter: B_Value_m
                                        * Referenced by: '<S102>/B'
                                        */
  real32_T D_Value_l[4];               /* Computed Parameter: D_Value_l
                                        * Referenced by: '<S102>/D'
                                        */
  real32_T Delay_InitialCondition_e;
                                 /* Computed Parameter: Delay_InitialCondition_e
                                  * Referenced by: '<S7>/Delay'
                                  */
  real32_T Delay_InitialCondition_d;
                                 /* Computed Parameter: Delay_InitialCondition_d
                                  * Referenced by: '<S9>/Delay'
                                  */
  real32_T Gain_Gain_dj;               /* Computed Parameter: Gain_Gain_dj
                                        * Referenced by: '<S3>/Gain'
                                        */
  real32_T Gain1_Gain_p;               /* Computed Parameter: Gain1_Gain_p
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real32_T Delay1_InitialCondition_b;
                                /* Computed Parameter: Delay1_InitialCondition_b
                                 * Referenced by: '<S11>/Delay1'
                                 */
  real32_T P0_Value_g[4];              /* Computed Parameter: P0_Value_g
                                        * Referenced by: '<S102>/P0'
                                        */
  real32_T G_Value_l[4];               /* Computed Parameter: G_Value_l
                                        * Referenced by: '<S102>/G'
                                        */
  real32_T H_Value_e[4];               /* Computed Parameter: H_Value_e
                                        * Referenced by: '<S102>/H'
                                        */
  real32_T N_Value_b[4];               /* Computed Parameter: N_Value_b
                                        * Referenced by: '<S102>/N'
                                        */
  real32_T Q_Value_p[4];               /* Computed Parameter: Q_Value_p
                                        * Referenced by: '<S102>/Q'
                                        */
  real32_T R_Value_d[4];               /* Computed Parameter: R_Value_d
                                        * Referenced by: '<S102>/R'
                                        */
  real32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S65>/Constant'
                                        */
  real32_T Constant_Value_hb;          /* Computed Parameter: Constant_Value_hb
                                        * Referenced by: '<S140>/Constant'
                                        */
  uint32_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S34>/Delay2'
                                        */
  uint32_T MemoryX_DelayLength;       /* Computed Parameter: MemoryX_DelayLength
                                       * Referenced by: '<S43>/MemoryX'
                                       */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S6>/Delay1'
                                        */
  uint32_T MemoryX_DelayLength_h;   /* Computed Parameter: MemoryX_DelayLength_h
                                     * Referenced by: '<S102>/MemoryX'
                                     */
  uint32_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S100>/Output'
                                   */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S96>/Delay'
                                        */
  uint32_T Delay_DelayLength_c;       /* Computed Parameter: Delay_DelayLength_c
                                       * Referenced by: '<S7>/Delay'
                                       */
  uint32_T Delay_DelayLength_p;       /* Computed Parameter: Delay_DelayLength_p
                                       * Referenced by: '<S9>/Delay'
                                       */
  uint32_T Output_InitialCondition_f;
                                /* Computed Parameter: Output_InitialCondition_f
                                 * Referenced by: '<S25>/Output'
                                 */
  uint32_T DelayOneStep_DelayLength;
                                 /* Computed Parameter: DelayOneStep_DelayLength
                                  * Referenced by: '<S3>/Delay One Step'
                                  */
  uint32_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S31>/FixPt Constant'
                                       */
  uint32_T Constant_Value_pd;          /* Computed Parameter: Constant_Value_pd
                                        * Referenced by: '<S32>/Constant'
                                        */
  uint32_T Delay1_DelayLength_c;     /* Computed Parameter: Delay1_DelayLength_c
                                      * Referenced by: '<S11>/Delay1'
                                      */
  uint32_T FixPtConstant_Value_c;   /* Computed Parameter: FixPtConstant_Value_c
                                     * Referenced by: '<S108>/FixPt Constant'
                                     */
  uint32_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S109>/Constant'
                                        */
  uint16_T Output_InitialCondition_m;
                                /* Computed Parameter: Output_InitialCondition_m
                                 * Referenced by: '<S14>/Output'
                                 */
  uint16_T FixPtConstant_Value_h;   /* Computed Parameter: FixPtConstant_Value_h
                                     * Referenced by: '<S15>/FixPt Constant'
                                     */
  uint16_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S16>/Constant'
                                        */
  boolean_T controlModePosVsOrient_Value;
                             /* Computed Parameter: controlModePosVsOrient_Value
                              * Referenced by: '<S1>/controlModePosVsOrient'
                              */
  boolean_T Constant_Value_j;          /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S48>/Constant'
                                        */
  boolean_T Constant_Value_g;          /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S123>/Constant'
                                        */
  boolean_T Reset_Value;               /* Expression: false()
                                        * Referenced by: '<S102>/Reset'
                                        */
  uint8_T Merge_InitialOutput_f;    /* Computed Parameter: Merge_InitialOutput_f
                                     * Referenced by: '<S3>/Merge'
                                     */
  uint8_T ManualSwitchPZ_CurrentSetting;
                            /* Computed Parameter: ManualSwitchPZ_CurrentSetting
                             * Referenced by: '<S43>/ManualSwitchPZ'
                             */
  uint8_T ManualSwitchPZ_CurrentSetting_m;
                          /* Computed Parameter: ManualSwitchPZ_CurrentSetting_m
                           * Referenced by: '<S102>/ManualSwitchPZ'
                           */
  uint8_T Constant_Value_ac;           /* Computed Parameter: Constant_Value_ac
                                        * Referenced by: '<S1>/Constant'
                                        */
  P_Send_flightControlSystem_T Send;   /* '<S1>/Send' */
  P_Geofencingerror_flightControlSystem_T Normalcondition;/* '<S3>/Normal condition' */
  P_Geofencingerror_flightControlSystem_T Ultrasoundimproper;/* '<S3>/Ultrasound improper' */
  P_Geofencingerror_flightControlSystem_T Noopticalflow;/* '<S3>/No optical flow ' */
  P_Geofencingerror_flightControlSystem_T estimatorOpticalflowerror;
                                      /* '<S3>/estimator//Optical flow error' */
  P_Geofencingerror_flightControlSystem_T Geofencingerror;/* '<S3>/Geofencing error' */
};

/* Parameters (default storage) */
struct P_flightControlSystem_T_ {
  struct_8SSZ93PxvPkADZcA4gG8MD Sensors;/* Variable: Sensors
                                         * Referenced by:
                                         *   '<S44>/SaturationSonar'
                                         *   '<S91>/Constant'
                                         */
  real32_T I_pr_antiWU;                /* Variable: I_pr_antiWU
                                        * Referenced by: '<S7>/antiWU_Gain'
                                        */
  real32_T I_pr_satLimitHigh;          /* Variable: I_pr_satLimitHigh
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real32_T I_pr_satLimitLow;           /* Variable: I_pr_satLimitLow
                                        * Referenced by: '<S7>/Saturation'
                                        */
  real32_T I_xy_antiWU;                /* Variable: I_xy_antiWU
                                        * Referenced by: '<S9>/antiWU_Gain'
                                        */
  real32_T I_xy_satLimitHigh;          /* Variable: I_xy_satLimitHigh
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  real32_T I_xy_satLimitLow;           /* Variable: I_xy_satLimitLow
                                        * Referenced by: '<S9>/Saturation1'
                                        */
  real32_T I_z_antiWU;                 /* Variable: I_z_antiWU
                                        * Referenced by: '<S11>/antiWU_Gain1'
                                        */
  real32_T I_z_satLimitHigh;           /* Variable: I_z_satLimitHigh
                                        * Referenced by: '<S11>/Saturation1'
                                        */
  real32_T I_z_satLimitLow;            /* Variable: I_z_satLimitLow
                                        * Referenced by: '<S11>/Saturation1'
                                        */
  int32_T UDPReceiveZ_Port;            /* Computed Parameter: UDPReceiveZ_Port
                                        * Referenced by: '<Root>/UDP Receive Z'
                                        */
  int32_T UDPSend_Port;                /* Computed Parameter: UDPSend_Port
                                        * Referenced by: '<Root>/UDP Send'
                                        */
  P_FlightControlSystem_flightControlSystem_T FlightControlSystem;/* '<Root>/Flight Control System' */
};

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
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_flightControlSystem_T flightControlSystem_P;

/* Block signals (default storage) */
extern B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
extern DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_flightControlSystem_T flightControlSystem_Y;

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
extern real32_T motors_outport[4];     /* '<Root>/Flight Control System' */
extern uint8_T flag_outport;           /* '<Root>/Flight Control System' */

/* Model entry point functions */
extern void flightControlSystem_initialize(void);
extern void flightControlSystem_step(void);
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
 * '<S2>'   : 'flightControlSystem/Flight Control System/Controller'
 * '<S3>'   : 'flightControlSystem/Flight Control System/Crash Predictor Flags'
 * '<S4>'   : 'flightControlSystem/Flight Control System/Logging'
 * '<S5>'   : 'flightControlSystem/Flight Control System/Send'
 * '<S6>'   : 'flightControlSystem/Flight Control System/State Estimator'
 * '<S7>'   : 'flightControlSystem/Flight Control System/Controller/Attitude1'
 * '<S8>'   : 'flightControlSystem/Flight Control System/Controller/ControlMixer'
 * '<S9>'   : 'flightControlSystem/Flight Control System/Controller/XY-to-reference-orientation1'
 * '<S10>'  : 'flightControlSystem/Flight Control System/Controller/Yaw'
 * '<S11>'  : 'flightControlSystem/Flight Control System/Controller/gravity feedforward//equilibrium thrust'
 * '<S12>'  : 'flightControlSystem/Flight Control System/Controller/thrustsToMotorCommands'
 * '<S13>'  : 'flightControlSystem/Flight Control System/Controller/gravity feedforward//equilibrium thrust/Compare To Constant'
 * '<S14>'  : 'flightControlSystem/Flight Control System/Controller/gravity feedforward//equilibrium thrust/Counter Free-Running'
 * '<S15>'  : 'flightControlSystem/Flight Control System/Controller/gravity feedforward//equilibrium thrust/Counter Free-Running/Increment Real World'
 * '<S16>'  : 'flightControlSystem/Flight Control System/Controller/gravity feedforward//equilibrium thrust/Counter Free-Running/Wrap To Zero'
 * '<S17>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/50 continuous  OF errors '
 * '<S18>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Check error condition'
 * '<S19>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant'
 * '<S20>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant1'
 * '<S21>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant2'
 * '<S22>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant3'
 * '<S23>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant4'
 * '<S24>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Compare To Constant5'
 * '<S25>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Counter Free-Running'
 * '<S26>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Geofencing error'
 * '<S27>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/No optical flow '
 * '<S28>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Normal condition'
 * '<S29>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Ultrasound improper'
 * '<S30>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/estimator//Optical flow error'
 * '<S31>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Counter Free-Running/Increment Real World'
 * '<S32>'  : 'flightControlSystem/Flight Control System/Crash Predictor Flags/Counter Free-Running/Wrap To Zero'
 * '<S33>'  : 'flightControlSystem/Flight Control System/State Estimator/Complementary Filter'
 * '<S34>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude'
 * '<S35>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition'
 * '<S36>'  : 'flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing'
 * '<S37>'  : 'flightControlSystem/Flight Control System/State Estimator/Complementary Filter/Compare To Constant'
 * '<S38>'  : 'flightControlSystem/Flight Control System/State Estimator/Complementary Filter/Compare To Constant1'
 * '<S39>'  : 'flightControlSystem/Flight Control System/State Estimator/Complementary Filter/If Action Subsystem'
 * '<S40>'  : 'flightControlSystem/Flight Control System/State Estimator/Complementary Filter/If Action Subsystem2'
 * '<S41>'  : 'flightControlSystem/Flight Control System/State Estimator/Complementary Filter/Wbe'
 * '<S42>'  : 'flightControlSystem/Flight Control System/State Estimator/Complementary Filter/Wbe/Create 3x3 Matrix'
 * '<S43>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude'
 * '<S44>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/OutlierHandling'
 * '<S45>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix'
 * '<S46>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/outlierBelowFloor'
 * '<S47>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL'
 * '<S48>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculateYhat'
 * '<S49>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionA'
 * '<S50>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionB'
 * '<S51>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionC'
 * '<S52>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionD'
 * '<S53>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionG'
 * '<S54>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionH'
 * '<S55>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionN'
 * '<S56>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP'
 * '<S57>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP0'
 * '<S58>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionQ'
 * '<S59>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionR'
 * '<S60>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX'
 * '<S61>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX0'
 * '<S62>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionu'
 * '<S63>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/MemoryP'
 * '<S64>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer'
 * '<S65>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ReducedQRN'
 * '<S66>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionP0'
 * '<S67>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionQ'
 * '<S68>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionR'
 * '<S69>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator'
 * '<S70>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkA'
 * '<S71>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkB'
 * '<S72>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkC'
 * '<S73>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkD'
 * '<S74>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkEnable'
 * '<S75>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkG'
 * '<S76>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkH'
 * '<S77>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkN'
 * '<S78>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkP0'
 * '<S79>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkQ'
 * '<S80>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkR'
 * '<S81>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkReset'
 * '<S82>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkX0'
 * '<S83>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checku'
 * '<S84>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checky'
 * '<S85>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionL'
 * '<S86>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionM'
 * '<S87>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionP'
 * '<S88>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionZ'
 * '<S89>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer/MeasurementUpdate'
 * '<S90>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator/Enabled Subsystem'
 * '<S91>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/OutlierHandling/check for min altitude'
 * '<S92>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/OutlierHandling/currentEstimateVeryOffFromPressure'
 * '<S93>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/OutlierHandling/currentStateVeryOffsonarflt'
 * '<S94>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/OutlierHandling/outlierJump'
 * '<S95>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S96>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity'
 * '<S97>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorXYPosition'
 * '<S98>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling'
 * '<S99>'  : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/Compare To Constant'
 * '<S100>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/Counter Free-Running'
 * '<S101>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling'
 * '<S102>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy'
 * '<S103>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Deactivate Acceleration If OF is not used due to low altitude'
 * '<S104>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix'
 * '<S105>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)'
 * '<S106>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)1'
 * '<S107>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S108>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/Counter Free-Running/Increment Real World'
 * '<S109>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/Counter Free-Running/Wrap To Zero'
 * '<S110>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/DiscreteDerivative'
 * '<S111>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw1'
 * '<S112>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw2'
 * '<S113>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp'
 * '<S114>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp2'
 * '<S115>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq'
 * '<S116>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq2'
 * '<S117>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw1'
 * '<S118>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw2'
 * '<S119>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw3'
 * '<S120>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw4'
 * '<S121>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/minHeightforOF'
 * '<S122>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL'
 * '<S123>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculateYhat'
 * '<S124>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionA'
 * '<S125>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionB'
 * '<S126>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionC'
 * '<S127>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionD'
 * '<S128>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionG'
 * '<S129>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionH'
 * '<S130>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionN'
 * '<S131>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP'
 * '<S132>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP0'
 * '<S133>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionQ'
 * '<S134>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionR'
 * '<S135>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX'
 * '<S136>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX0'
 * '<S137>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionu'
 * '<S138>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/MemoryP'
 * '<S139>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer'
 * '<S140>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ReducedQRN'
 * '<S141>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionP0'
 * '<S142>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionQ'
 * '<S143>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionR'
 * '<S144>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator'
 * '<S145>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkA'
 * '<S146>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkB'
 * '<S147>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkC'
 * '<S148>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkD'
 * '<S149>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkEnable'
 * '<S150>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkG'
 * '<S151>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkH'
 * '<S152>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkN'
 * '<S153>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkP0'
 * '<S154>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkQ'
 * '<S155>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkR'
 * '<S156>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkReset'
 * '<S157>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkX0'
 * '<S158>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checku'
 * '<S159>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checky'
 * '<S160>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionL'
 * '<S161>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionM'
 * '<S162>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionP'
 * '<S163>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionZ'
 * '<S164>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer/MeasurementUpdate'
 * '<S165>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator/Enabled Subsystem'
 * '<S166>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix'
 * '<S167>' : 'flightControlSystem/Flight Control System/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S168>' : 'flightControlSystem/Flight Control System/State Estimator/SensorPreprocessing/sensordata_group'
 */
#endif                                 /* RTW_HEADER_flightControlSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
