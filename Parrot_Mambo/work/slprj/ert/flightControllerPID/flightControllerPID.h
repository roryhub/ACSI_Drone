/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControllerPID.h
 *
 * Code generated for Simulink model 'flightControllerPID'.
 *
 * Model version                  : 1.170
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Tue Jun 11 16:07:05 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_flightControllerPID_h_
#define RTW_HEADER_flightControllerPID_h_
#include <math.h>
#include <string.h>
#ifndef flightControllerPID_COMMON_INCLUDES_
# define flightControllerPID_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                /* flightControllerPID_COMMON_INCLUDES_ */

#include "flightControllerPID_types.h"

/* Block signals for model 'flightControllerPID' */
#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T pitchrollerror[2];          /* '<S2>/Sum19' */
  real32_T XYerror[2];                 /* '<S4>/Sum17' */
  real32_T DiscreteTimeIntegrator_h;   /* '<S6>/Discrete-Time Integrator' */
  real32_T P_z;                        /* '<S6>/P_z' */
  real32_T Saturation;                 /* '<S6>/Saturation' */
  real32_T dz;                         /* '<S6>/D_z' */
  real32_T SaturationThrust;           /* '<S6>/SaturationThrust' */
  real32_T P_yaw;                      /* '<S5>/P_yaw' */
  real32_T Delay_d;                    /* '<S6>/Delay' */
  real32_T rtb_I_xy_m;
  real32_T rtb_D_pr_idx_0;
  real32_T rtb_D_pr_idx_1;
  real32_T rtb_SaturationThrust_idx_1;
  real32_T rtb_P_xy_idx_0;
  int32_T i0;
} B_flightControllerPID_c_T;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'flightControllerPID' */
#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

typedef struct {
  struct {
    void *LoggedData;
  } AttitudeError_PWORK;               /* '<S2>/Attitude Error' */

  struct {
    void *LoggedData;
  } XYError_PWORK;                     /* '<S4>/XY Error' */

  struct {
    void *LoggedData;
  } ZError_PWORK;                      /* '<S6>/Z Error' */

  real32_T DiscreteTimeIntegrator_DSTATE[2];/* '<S4>/Discrete-Time Integrator' */
  real32_T Delay_x_DSTATE[2];          /* '<S9>/Delay_x' */
  real32_T DiscreteTimeIntegrator_DSTATE_m[2];/* '<S2>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator_DSTATE_a;/* '<S6>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE[2];            /* '<S2>/Delay' */
  real32_T Delay_DSTATE_g[2];          /* '<S4>/Delay' */
  real32_T Delay_DSTATE_m;             /* '<S6>/Delay' */
} DW_flightControllerPID_f_T;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_flightControllerPID_T_ {
  real32_T takeoff_gain_Gain;          /* Expression: Controller.takeoffGain
                                        * Referenced by: '<S6>/takeoff_gain'
                                        */
  real32_T TorqueTotalThrustToThrustPerMotor_Value[16];/* Expression: Controller.Q2Ts
                                                        * Referenced by: '<S3>/TorqueTotalThrustToThrustPerMotor'
                                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S4>/Gain'
                                        */
  real32_T Saturation_UpperSat;       /* Computed Parameter: Saturation_UpperSat
                                       * Referenced by: '<S4>/Saturation'
                                       */
  real32_T Saturation_LowerSat;       /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S4>/Saturation'
                                       */
  real32_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S4>/Discrete-Time Integrator'
                            */
  real32_T DiscreteTimeIntegrator_IC;
                                /* Computed Parameter: DiscreteTimeIntegrator_IC
                                 * Referenced by: '<S4>/Discrete-Time Integrator'
                                 */
  real32_T D_Gain;                     /* Computed Parameter: D_Gain
                                        * Referenced by: '<S9>/D'
                                        */
  real32_T Delay_x_InitialCondition;
                                 /* Computed Parameter: Delay_x_InitialCondition
                                  * Referenced by: '<S9>/Delay_x'
                                  */
  real32_T C_Gain;                     /* Computed Parameter: C_Gain
                                        * Referenced by: '<S9>/C'
                                        */
  real32_T DiscreteTimeIntegrator_gainval_n;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_n
                          * Referenced by: '<S2>/Discrete-Time Integrator'
                          */
  real32_T DiscreteTimeIntegrator_IC_p;
                              /* Computed Parameter: DiscreteTimeIntegrator_IC_p
                               * Referenced by: '<S2>/Discrete-Time Integrator'
                               */
  real32_T w0_Value;                   /* Computed Parameter: w0_Value
                                        * Referenced by: '<S6>/w0'
                                        */
  real32_T DiscreteTimeIntegrator_gainval_h;
                         /* Computed Parameter: DiscreteTimeIntegrator_gainval_h
                          * Referenced by: '<S6>/Discrete-Time Integrator'
                          */
  real32_T DiscreteTimeIntegrator_IC_m;
                              /* Computed Parameter: DiscreteTimeIntegrator_IC_m
                               * Referenced by: '<S6>/Discrete-Time Integrator'
                               */
  real32_T SaturationThrust_UpperSat;
                                /* Computed Parameter: SaturationThrust_UpperSat
                                 * Referenced by: '<S6>/SaturationThrust'
                                 */
  real32_T SaturationThrust_LowerSat;
                                /* Computed Parameter: SaturationThrust_LowerSat
                                 * Referenced by: '<S6>/SaturationThrust'
                                 */
  real32_T ThrustToMotorCommand_Gain;
                                /* Computed Parameter: ThrustToMotorCommand_Gain
                                 * Referenced by: '<S7>/ThrustToMotorCommand'
                                 */
  real32_T Saturation5_UpperSat;       /* Expression: Vehicle.Motor.maxLimit
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real32_T Saturation5_LowerSat;       /* Expression: Vehicle.Motor.minLimit
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real32_T MotorDirections_Gain[4];  /* Computed Parameter: MotorDirections_Gain
                                      * Referenced by: '<S7>/MotorDirections'
                                      */
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S2>/Delay'
                                    */
  real32_T A_Gain;                     /* Computed Parameter: A_Gain
                                        * Referenced by: '<S9>/A'
                                        */
  real32_T B_Gain;                     /* Computed Parameter: B_Gain
                                        * Referenced by: '<S9>/B'
                                        */
  real32_T Delay_InitialCondition_p;
                                 /* Computed Parameter: Delay_InitialCondition_p
                                  * Referenced by: '<S4>/Delay'
                                  */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S5>/Constant'
                                        */
  real32_T Delay_InitialCondition_c;
                                 /* Computed Parameter: Delay_InitialCondition_c
                                  * Referenced by: '<S6>/Delay'
                                  */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S2>/Delay'
                                        */
  uint32_T Delay_DelayLength_m;       /* Computed Parameter: Delay_DelayLength_m
                                       * Referenced by: '<S4>/Delay'
                                       */
  uint32_T Delay_DelayLength_a;       /* Computed Parameter: Delay_DelayLength_a
                                       * Referenced by: '<S6>/Delay'
                                       */
};

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_flightControllerPID_T {
  const char_T **errorStatus;
};

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_flightControllerPID_T rtm;
} MdlrefDW_flightControllerPID_T;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern real32_T rtP_D_pr[2];           /* Variable: D_pr
                                        * Referenced by: '<S2>/D_pr'
                                        */
extern real32_T rtP_D_xy[2];           /* Variable: D_xy
                                        * Referenced by: '<S4>/D_xy'
                                        */
extern real32_T rtP_D_yaw;             /* Variable: D_yaw
                                        * Referenced by: '<S5>/D_yaw'
                                        */
extern real32_T rtP_D_z;               /* Variable: D_z
                                        * Referenced by: '<S6>/D_z'
                                        */
extern real32_T rtP_I_pr_antiWU;       /* Variable: I_pr_antiWU
                                        * Referenced by: '<S2>/antiWU_Gain'
                                        */
extern real32_T rtP_I_pr_satLimitHigh; /* Variable: I_pr_satLimitHigh
                                        * Referenced by: '<S2>/Saturation'
                                        */
extern real32_T rtP_I_pr_satLimitLow;  /* Variable: I_pr_satLimitLow
                                        * Referenced by: '<S2>/Saturation'
                                        */
extern real32_T rtP_I_xy[2];           /* Variable: I_xy
                                        * Referenced by: '<S4>/I_xy'
                                        */
extern real32_T rtP_I_xy_antiWU;       /* Variable: I_xy_antiWU
                                        * Referenced by: '<S4>/antiWU_Gain'
                                        */
extern real32_T rtP_I_xy_satLimitHigh; /* Variable: I_xy_satLimitHigh
                                        * Referenced by: '<S4>/Saturation1'
                                        */
extern real32_T rtP_I_xy_satLimitLow;  /* Variable: I_xy_satLimitLow
                                        * Referenced by: '<S4>/Saturation1'
                                        */
extern real32_T rtP_I_z_antiWU;        /* Variable: I_z_antiWU
                                        * Referenced by: '<S6>/antiWU_Gain'
                                        */
extern real32_T rtP_I_z_satLimitHigh;  /* Variable: I_z_satLimitHigh
                                        * Referenced by: '<S6>/Saturation'
                                        */
extern real32_T rtP_I_z_satLimitLow;   /* Variable: I_z_satLimitLow
                                        * Referenced by: '<S6>/Saturation'
                                        */
extern real32_T rtP_P_pr[2];           /* Variable: P_pr
                                        * Referenced by: '<S2>/P_pr'
                                        */
extern real32_T rtP_P_xy[2];           /* Variable: P_xy
                                        * Referenced by: '<S4>/P_xy'
                                        */
extern real32_T rtP_P_yaw;             /* Variable: P_yaw
                                        * Referenced by: '<S5>/P_yaw'
                                        */
extern real32_T rtP_P_z;               /* Variable: P_z
                                        * Referenced by: '<S6>/P_z'
                                        */
extern void flightControllerPID_Init(void);
extern void flightController_run(const CommandBus *arg_ReferenceValueServerBus,
  const statesEstim_t *arg_states_estim, real32_T arg_motors_refout[4], real32_T
  arg_pose_refout[8], ErrorBus *arg_error_refout);

/* Model reference registration function */
extern void flightControllerPID_initialize(const char_T **rt_errorStatus);

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

extern MdlrefDW_flightControllerPID_T flightControllerPID_MdlrefDW;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

#ifndef flightControllerPID_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_flightControllerPID_c_T flightControllerPID_B;

/* Block states (default storage) */
extern DW_flightControllerPID_f_T flightControllerPID_DW;

#endif                                /*flightControllerPID_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'flightControllerPID'
 * '<S1>'   : 'flightControllerPID/Flight Controller'
 * '<S2>'   : 'flightControllerPID/Flight Controller/Attitude'
 * '<S3>'   : 'flightControllerPID/Flight Controller/ControlMixer'
 * '<S4>'   : 'flightControllerPID/Flight Controller/XY-to-reference-orientation'
 * '<S5>'   : 'flightControllerPID/Flight Controller/Yaw'
 * '<S6>'   : 'flightControllerPID/Flight Controller/gravity feedforward//equilibrium thrust'
 * '<S7>'   : 'flightControllerPID/Flight Controller/thrustsToMotorCommands'
 * '<S8>'   : 'flightControllerPID/Flight Controller/XY-to-reference-orientation/Lead-Lag Filter'
 * '<S9>'   : 'flightControllerPID/Flight Controller/XY-to-reference-orientation/Lead-Lag Filter/Model'
 */
#endif                                 /* RTW_HEADER_flightControllerPID_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
