/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LQRController.h
 *
 * Code generated for Simulink model 'LQRController'.
 *
 * Model version                  : 1.131
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Tue Apr 30 14:37:55 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LQRController_h_
#define RTW_HEADER_LQRController_h_
#include <math.h>
#include <string.h>
#ifndef LQRController_COMMON_INCLUDES_
# define LQRController_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LQRController_COMMON_INCLUDES_ */

#include "LQRController_types.h"

/* Block states (default storage) for model 'LQRController' */
#ifndef LQRController_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T DiscreteTimeIntegrator_DSTATE[2];/* '<S2>/Discrete-Time Integrator' */
  real32_T Delay_DSTATE[2];            /* '<S2>/Delay' */
} DW_LQRController_f_T;

#endif                                 /*LQRController_MDLREF_HIDE_CHILD_*/

#ifndef LQRController_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_LQRController_T_ {
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S4>/Gain'
                                        */
  real32_T Saturation_UpperSat;       /* Computed Parameter: Saturation_UpperSat
                                       * Referenced by: '<S4>/Saturation'
                                       */
  real32_T Saturation_LowerSat;       /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S4>/Saturation'
                                       */
  real32_T takeoff_gain_Gain;          /* Expression: Controller.takeoffGain
                                        * Referenced by: '<S6>/takeoff_gain'
                                        */
  real32_T TorqueTotalThrustToThrustPerMotor_Value[16];/* Expression: Controller.Q2Ts
                                                        * Referenced by: '<S3>/TorqueTotalThrustToThrustPerMotor'
                                                        */
  real32_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S2>/Discrete-Time Integrator'
                            */
  real32_T DiscreteTimeIntegrator_IC;
                                /* Computed Parameter: DiscreteTimeIntegrator_IC
                                 * Referenced by: '<S2>/Discrete-Time Integrator'
                                 */
  real32_T w0_Value;                   /* Computed Parameter: w0_Value
                                        * Referenced by: '<S6>/w0'
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
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S2>/Delay'
                                        */
};

#endif                                 /*LQRController_MDLREF_HIDE_CHILD_*/

#ifndef LQRController_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_LQRController_T {
  const char_T **errorStatus;
};

#endif                                 /*LQRController_MDLREF_HIDE_CHILD_*/

#ifndef LQRController_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_LQRController_T rtm;
} MdlrefDW_LQRController_T;

#endif                                 /*LQRController_MDLREF_HIDE_CHILD_*/

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
extern real32_T rtP_I_antiWU;          /* Variable: I_antiWU
                                        * Referenced by: '<S2>/antiWU_Gain'
                                        */
extern real32_T rtP_I_pr;              /* Variable: I_pr
                                        * Referenced by: '<S2>/I_pr'
                                        */
extern real32_T rtP_I_satLimitHigh;    /* Variable: I_satLimitHigh
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
                                        */
extern real32_T rtP_I_satLimitLow;     /* Variable: I_satLimitLow
                                        * Referenced by: '<S2>/Discrete-Time Integrator'
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
extern void LQRController_Init(void);
extern void flightController_run(const CommandBus *arg_ReferenceValueServerBus,
  const statesEstim_t *arg_states_estim, real32_T arg_motors_refout[4], real32_T
  arg_pose_refout[8]);

/* Model reference registration function */
extern void LQRController_initialize(const char_T **rt_errorStatus);

#ifndef LQRController_MDLREF_HIDE_CHILD_

extern MdlrefDW_LQRController_T LQRController_MdlrefDW;

#endif                                 /*LQRController_MDLREF_HIDE_CHILD_*/

#ifndef LQRController_MDLREF_HIDE_CHILD_

/* Block states (default storage) */
extern DW_LQRController_f_T LQRController_DW;

#endif                                 /*LQRController_MDLREF_HIDE_CHILD_*/

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
 * '<Root>' : 'LQRController'
 * '<S1>'   : 'LQRController/Flight Controller'
 * '<S2>'   : 'LQRController/Flight Controller/Attitude'
 * '<S3>'   : 'LQRController/Flight Controller/ControlMixer'
 * '<S4>'   : 'LQRController/Flight Controller/XY-to-reference-orientation'
 * '<S5>'   : 'LQRController/Flight Controller/Yaw'
 * '<S6>'   : 'LQRController/Flight Controller/gravity feedforward//equilibrium thrust'
 * '<S7>'   : 'LQRController/Flight Controller/thrustsToMotorCommands'
 */
#endif                                 /* RTW_HEADER_LQRController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
