/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControllerPID_data.c
 *
 * Code generated for Simulink model 'flightControllerPID'.
 *
 * Model version                  : 1.157
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Fri May 24 09:43:22 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightControllerPID.h"
#include "flightControllerPID_private.h"

/* Block parameters (default storage) */
P_flightControllerPID_T flightControllerPID_P = {
  /* Variable: D_pr
   * Referenced by: '<S2>/D_pr'
   */
  { 0.002F, 0.002F },

  /* Variable: D_xy
   * Referenced by: '<S4>/D_xy'
   */
  { 0.1F, -0.1F },

  /* Variable: D_yaw
   * Referenced by: '<S5>/D_yaw'
   */
  0.0012F,

  /* Variable: D_z
   * Referenced by: '<S6>/D_z'
   */
  0.3F,

  /* Variable: I_pr
   * Referenced by: '<S2>/I_pr'
   */
  0.01F,

  /* Variable: I_pr_antiWU
   * Referenced by: '<S2>/antiWU_Gain'
   */
  0.001F,

  /* Variable: I_pr_satLimitHigh
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  2.0F,

  /* Variable: I_pr_satLimitLow
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  -2.0F,

  /* Variable: I_xy_antiWU
   * Referenced by: '<S4>/antiWU_Gain'
   */
  0.001F,

  /* Variable: I_xy_satLimitHigh
   * Referenced by: '<S4>/Saturation1'
   */
  2.0F,

  /* Variable: I_xy_satLimitLow
   * Referenced by: '<S4>/Saturation1'
   */
  -2.0F,

  /* Variable: I_z_antiWU
   * Referenced by: '<S6>/antiWU_Gain'
   */
  0.001F,

  /* Variable: I_z_satLimitHigh
   * Referenced by: '<S6>/Saturation'
   */
  2.0F,

  /* Variable: I_z_satLimitLow
   * Referenced by: '<S6>/Saturation'
   */
  -2.0F,

  /* Variable: P_pr
   * Referenced by: '<S2>/P_pr'
   */
  { 0.013F, 0.013F },

  /* Variable: P_xy
   * Referenced by: '<S4>/P_xy'
   */
  { -0.24F, 0.24F },

  /* Variable: P_yaw
   * Referenced by: '<S5>/P_yaw'
   */
  0.004F,

  /* Variable: P_z
   * Referenced by: '<S6>/P_z'
   */
  0.8F,

  /* Expression: Controller.takeoffGain
   * Referenced by: '<S6>/takeoff_gain'
   */
  0.45F,

  /* Expression: Controller.Q2Ts
   * Referenced by: '<S3>/TorqueTotalThrustToThrustPerMotor'
   */
  { 0.25F, 0.25F, 0.25F, 0.25F, 103.573624F, -103.573624F, 103.573624F,
    -103.573624F, -5.66592F, -5.66592F, 5.66592F, 5.66592F, -5.66592F, 5.66592F,
    5.66592F, -5.66592F },

  /* Computed Parameter: w0_Value
   * Referenced by: '<S6>/w0'
   */
  -0.61803F,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  5.0E-5F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: SaturationThrust_UpperSat
   * Referenced by: '<S6>/SaturationThrust'
   */
  1.20204329F,

  /* Computed Parameter: SaturationThrust_LowerSat
   * Referenced by: '<S6>/SaturationThrust'
   */
  -1.20204329F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S4>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S4>/Saturation'
   */
  3.0F,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S4>/Saturation'
   */
  -3.0F,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval_i
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  5.0E-5F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC_b
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval_n
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC_p
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: ThrustToMotorCommand_Gain
   * Referenced by: '<S7>/ThrustToMotorCommand'
   */
  -1530.72681F,

  /* Expression: Vehicle.Motor.maxLimit
   * Referenced by: '<S7>/Saturation5'
   */
  500.0F,

  /* Expression: Vehicle.Motor.minLimit
   * Referenced by: '<S7>/Saturation5'
   */
  10.0F,

  /* Computed Parameter: MotorDirections_Gain
   * Referenced by: '<S7>/MotorDirections'
   */
  { 1.0F, -1.0F, 1.0F, -1.0F },

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S2>/Delay'
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition_p
   * Referenced by: '<S4>/Delay'
   */
  0.0F,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S5>/Constant'
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition_c
   * Referenced by: '<S6>/Delay'
   */
  0.0F,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S2>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_m
   * Referenced by: '<S4>/Delay'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_a
   * Referenced by: '<S6>/Delay'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
