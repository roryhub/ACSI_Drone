/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControllerPID.c
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

#include "flightControllerPID.h"
#include "flightControllerPID_private.h"

P_flightControllerPID_T flightControllerPID_P_g = {
  /* Expression: Controller.takeoffGain
   * Referenced by: '<S6>/takeoff_gain'
   */
  0.3F,

  /* Expression: Controller.Q2Ts
   * Referenced by: '<S3>/TorqueTotalThrustToThrustPerMotor'
   */
  { 0.25F, 0.25F, 0.25F, 0.25F, 103.573624F, -103.573624F, 103.573624F,
    -103.573624F, -5.66592F, -5.66592F, 5.66592F, 5.66592F, -5.66592F, 5.66592F,
    5.66592F, -5.66592F },

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

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: D_Gain
   * Referenced by: '<S9>/D'
   */
  0.0476190485F,

  /* Computed Parameter: Delay_x_InitialCondition
   * Referenced by: '<S9>/Delay_x'
   */
  0.0F,

  /* Computed Parameter: C_Gain
   * Referenced by: '<S9>/C'
   */
  0.0952381F,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval_n
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  5.0E-5F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC_p
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: w0_Value
   * Referenced by: '<S6>/w0'
   */
  -0.71613F,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval_h
   * Referenced by: '<S6>/Discrete-Time Integrator'
   */
  0.0025F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC_m
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

  /* Computed Parameter: A_Gain
   * Referenced by: '<S9>/A'
   */
  0.90476191F,

  /* Computed Parameter: B_Gain
   * Referenced by: '<S9>/B'
   */
  0.952380955F,

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

MdlrefDW_flightControllerPID_T flightControllerPID_MdlrefDW;

/* Block signals (default storage) */
B_flightControllerPID_c_T flightControllerPID_B;

/* Block states (default storage) */
DW_flightControllerPID_f_T flightControllerPID_DW;

/* System initialize for referenced model: 'flightControllerPID' */
void flightControllerPID_Init(void)
{
  /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a =
    flightControllerPID_P_g.DiscreteTimeIntegrator_IC_m;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] =
    flightControllerPID_P_g.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for UnitDelay: '<S9>/Delay_x' */
  flightControllerPID_DW.Delay_x_DSTATE[0] =
    flightControllerPID_P_g.Delay_x_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] =
    flightControllerPID_P_g.DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[0] =
    flightControllerPID_P_g.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[0] =
    flightControllerPID_P_g.Delay_InitialCondition_p;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] =
    flightControllerPID_P_g.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for UnitDelay: '<S9>/Delay_x' */
  flightControllerPID_DW.Delay_x_DSTATE[1] =
    flightControllerPID_P_g.Delay_x_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] =
    flightControllerPID_P_g.DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[1] =
    flightControllerPID_P_g.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[1] =
    flightControllerPID_P_g.Delay_InitialCondition_p;

  /* InitializeConditions for Delay: '<S6>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_m =
    flightControllerPID_P_g.Delay_InitialCondition_c;
}

/* Output and update for referenced model: 'flightControllerPID' */
void flightController_run(const CommandBus *arg_ReferenceValueServerBus, const
  statesEstim_t *arg_states_estim, real32_T arg_motors_refout[4], real32_T
  arg_pose_refout[8], ErrorBus *arg_error_refout)
{
  /* local block i/o variables */
  real32_T rtb_errZ;
  real32_T rtb_Saturation1_idx_0;
  real32_T rtb_I_xy_idx_0;
  real32_T rtb_P_xy_idx_1;
  real32_T rtb_Saturation1_idx_1;
  real32_T rtb_D_xy_idx_0;
  real32_T rtb_D_xy_idx_1;
  real32_T rtb_P_pr_b_idx_0;
  real32_T rtb_P_pr_b_idx_1;
  real32_T rtb_DiscreteTimeIntegrator_idx_0;
  real32_T rtb_Saturation_i_idx_0;
  real32_T rtb_DiscreteTimeIntegrator_idx_1;
  real32_T rtb_Saturation_i_idx_1;
  real32_T rtb_SaturationThrust_idx_2;
  real32_T rtb_SaturationThrust_idx_3;
  real32_T u0;

  /* Trigonometry: '<S4>/Trigonometric Function' */
  flightControllerPID_B.DiscreteTimeIntegrator_h = (real32_T)sin
    (arg_states_estim->yaw);
  rtb_errZ = (real32_T)cos(arg_states_estim->yaw);

  /* Sum: '<S4>/Sum17' */
  flightControllerPID_B.XYerror[0] = arg_ReferenceValueServerBus->pos_ref[0] -
    arg_states_estim->X;
  flightControllerPID_B.XYerror[1] = arg_ReferenceValueServerBus->pos_ref[1] -
    arg_states_estim->Y;

  /* Product: '<S4>/Product' incorporates:
   *  Gain: '<S4>/Gain'
   *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In1'
   *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In2'
   *  SignalConversion: '<S4>/ConcatBufferAtVector ConcatenateIn1'
   */
  flightControllerPID_B.rtb_P_xy_idx_0 = rtb_errZ *
    flightControllerPID_B.XYerror[0] +
    flightControllerPID_B.DiscreteTimeIntegrator_h *
    flightControllerPID_B.XYerror[1];
  flightControllerPID_B.DiscreteTimeIntegrator_h =
    flightControllerPID_P_g.Gain_Gain *
    flightControllerPID_B.DiscreteTimeIntegrator_h *
    flightControllerPID_B.XYerror[0] + rtb_errZ * flightControllerPID_B.XYerror
    [1];

  /* Saturate: '<S4>/Saturation' */
  if (flightControllerPID_B.rtb_P_xy_idx_0 >
      flightControllerPID_P_g.Saturation_UpperSat) {
    flightControllerPID_B.rtb_P_xy_idx_0 =
      flightControllerPID_P_g.Saturation_UpperSat;
  } else {
    if (flightControllerPID_B.rtb_P_xy_idx_0 <
        flightControllerPID_P_g.Saturation_LowerSat) {
      flightControllerPID_B.rtb_P_xy_idx_0 =
        flightControllerPID_P_g.Saturation_LowerSat;
    }
  }

  /* Gain: '<S4>/P_xy' */
  flightControllerPID_B.rtb_P_xy_idx_0 *= rtP_P_xy[0];

  /* Gain: '<S4>/I_xy' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  flightControllerPID_B.rtb_I_xy_m = rtP_I_xy[0] *
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0];

  /* Saturate: '<S4>/Saturation1' */
  if (flightControllerPID_B.rtb_I_xy_m > rtP_I_xy_satLimitHigh) {
    rtb_Saturation1_idx_0 = rtP_I_xy_satLimitHigh;
  } else if (flightControllerPID_B.rtb_I_xy_m < rtP_I_xy_satLimitLow) {
    rtb_Saturation1_idx_0 = rtP_I_xy_satLimitLow;
  } else {
    rtb_Saturation1_idx_0 = flightControllerPID_B.rtb_I_xy_m;
  }

  /* Gain: '<S4>/I_xy' */
  rtb_I_xy_idx_0 = flightControllerPID_B.rtb_I_xy_m;

  /* Saturate: '<S4>/Saturation' */
  if (flightControllerPID_B.DiscreteTimeIntegrator_h >
      flightControllerPID_P_g.Saturation_UpperSat) {
    flightControllerPID_B.DiscreteTimeIntegrator_h =
      flightControllerPID_P_g.Saturation_UpperSat;
  } else {
    if (flightControllerPID_B.DiscreteTimeIntegrator_h <
        flightControllerPID_P_g.Saturation_LowerSat) {
      flightControllerPID_B.DiscreteTimeIntegrator_h =
        flightControllerPID_P_g.Saturation_LowerSat;
    }
  }

  /* Gain: '<S4>/P_xy' */
  rtb_P_xy_idx_1 = rtP_P_xy[1] * flightControllerPID_B.DiscreteTimeIntegrator_h;

  /* Gain: '<S4>/I_xy' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  flightControllerPID_B.rtb_I_xy_m = rtP_I_xy[1] *
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1];

  /* Saturate: '<S4>/Saturation1' */
  if (flightControllerPID_B.rtb_I_xy_m > rtP_I_xy_satLimitHigh) {
    rtb_Saturation1_idx_1 = rtP_I_xy_satLimitHigh;
  } else if (flightControllerPID_B.rtb_I_xy_m < rtP_I_xy_satLimitLow) {
    rtb_Saturation1_idx_1 = rtP_I_xy_satLimitLow;
  } else {
    rtb_Saturation1_idx_1 = flightControllerPID_B.rtb_I_xy_m;
  }

  /* Gain: '<S9>/D' */
  flightControllerPID_B.pitchrollerror[0] = flightControllerPID_P_g.D_Gain *
    arg_states_estim->dx;
  flightControllerPID_B.pitchrollerror[1] = flightControllerPID_P_g.D_Gain *
    arg_states_estim->dy;

  /* Gain: '<S4>/D_xy' incorporates:
   *  Gain: '<S9>/C'
   *  Sum: '<S9>/sum1'
   *  UnitDelay: '<S9>/Delay_x'
   */
  rtb_D_xy_idx_0 = (flightControllerPID_P_g.C_Gain *
                    flightControllerPID_DW.Delay_x_DSTATE[0] +
                    flightControllerPID_B.pitchrollerror[0]) * rtP_D_xy[0];
  rtb_D_xy_idx_1 = (flightControllerPID_P_g.C_Gain *
                    flightControllerPID_DW.Delay_x_DSTATE[1] +
                    flightControllerPID_B.pitchrollerror[1]) * rtP_D_xy[1];

  /* Switch: '<S1>/Switch_refAtt' incorporates:
   *  Sum: '<S4>/Sum18'
   */
  if (arg_ReferenceValueServerBus->controlModePosVSOrient) {
    flightControllerPID_B.pitchrollerror[0] =
      (flightControllerPID_B.rtb_P_xy_idx_0 + rtb_Saturation1_idx_0) +
      rtb_D_xy_idx_0;
    flightControllerPID_B.pitchrollerror[1] = (rtb_P_xy_idx_1 +
      rtb_Saturation1_idx_1) + rtb_D_xy_idx_1;
  } else {
    flightControllerPID_B.pitchrollerror[0] =
      arg_ReferenceValueServerBus->orient_ref[1];
    flightControllerPID_B.pitchrollerror[1] =
      arg_ReferenceValueServerBus->orient_ref[2];
  }

  /* End of Switch: '<S1>/Switch_refAtt' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtpose_refoutInport1' incorporates:
   *  SignalConversion: '<S1>/ReferenceValueServerBus_BusSelector'
   */
  arg_pose_refout[0] = arg_ReferenceValueServerBus->pos_ref[0];
  arg_pose_refout[3] = arg_ReferenceValueServerBus->orient_ref[0];
  arg_pose_refout[1] = arg_ReferenceValueServerBus->pos_ref[1];
  arg_pose_refout[4] = arg_ReferenceValueServerBus->orient_ref[1];
  arg_pose_refout[2] = arg_ReferenceValueServerBus->pos_ref[2];
  arg_pose_refout[5] = arg_ReferenceValueServerBus->orient_ref[2];
  arg_pose_refout[6] = flightControllerPID_B.pitchrollerror[0];
  arg_pose_refout[7] = flightControllerPID_B.pitchrollerror[1];

  /* Sum: '<S2>/Sum19' */
  flightControllerPID_B.pitchrollerror[0] -= arg_states_estim->pitch;
  flightControllerPID_B.pitchrollerror[1] -= arg_states_estim->roll;

  /* Gain: '<S2>/P_pr' */
  rtb_P_pr_b_idx_0 = rtP_P_pr[0] * flightControllerPID_B.pitchrollerror[0];
  rtb_P_pr_b_idx_1 = rtP_P_pr[1] * flightControllerPID_B.pitchrollerror[1];

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_idx_0 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0];

  /* Saturate: '<S2>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] >
      rtP_I_pr_satLimitHigh) {
    rtb_Saturation_i_idx_0 = rtP_I_pr_satLimitHigh;
  } else if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] <
             rtP_I_pr_satLimitLow) {
    rtb_Saturation_i_idx_0 = rtP_I_pr_satLimitLow;
  } else {
    rtb_Saturation_i_idx_0 =
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0];
  }

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_idx_1 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1];

  /* Saturate: '<S2>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] >
      rtP_I_pr_satLimitHigh) {
    rtb_Saturation_i_idx_1 = rtP_I_pr_satLimitHigh;
  } else if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] <
             rtP_I_pr_satLimitLow) {
    rtb_Saturation_i_idx_1 = rtP_I_pr_satLimitLow;
  } else {
    rtb_Saturation_i_idx_1 =
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1];
  }

  /* Gain: '<S2>/D_pr' */
  flightControllerPID_B.rtb_D_pr_idx_0 = rtP_D_pr[0] * arg_states_estim->q;
  flightControllerPID_B.rtb_D_pr_idx_1 = rtP_D_pr[1] * arg_states_estim->p;

  /* Sum: '<S6>/Sum3' */
  rtb_errZ = arg_ReferenceValueServerBus->pos_ref[2] - arg_states_estim->Z;

  /* Gain: '<S6>/P_z' */
  flightControllerPID_B.P_z = rtP_P_z * rtb_errZ;

  /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  flightControllerPID_B.DiscreteTimeIntegrator_h =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a;

  /* Saturate: '<S6>/Saturation' */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a >
      rtP_I_z_satLimitHigh) {
    flightControllerPID_B.Saturation = rtP_I_z_satLimitHigh;
  } else if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a <
             rtP_I_z_satLimitLow) {
    flightControllerPID_B.Saturation = rtP_I_z_satLimitLow;
  } else {
    flightControllerPID_B.Saturation =
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/D_z' */
  flightControllerPID_B.dz = rtP_D_z * arg_states_estim->dz;

  /* Switch: '<S6>/TakeoffOrControl_Switch' incorporates:
   *  Constant: '<S6>/w0'
   *  Gain: '<S6>/takeoff_gain'
   *  Sum: '<S6>/Sum15'
   */
  if (arg_ReferenceValueServerBus->takeoff_flag) {
    flightControllerPID_B.SaturationThrust =
      flightControllerPID_P_g.takeoff_gain_Gain *
      flightControllerPID_P_g.w0_Value;
  } else {
    flightControllerPID_B.SaturationThrust = (flightControllerPID_B.P_z +
      flightControllerPID_B.Saturation) - flightControllerPID_B.dz;
  }

  /* End of Switch: '<S6>/TakeoffOrControl_Switch' */

  /* Sum: '<S6>/Sum4' incorporates:
   *  Constant: '<S6>/w0'
   */
  flightControllerPID_B.SaturationThrust += flightControllerPID_P_g.w0_Value;

  /* Saturate: '<S6>/SaturationThrust' */
  if (flightControllerPID_B.SaturationThrust >
      flightControllerPID_P_g.SaturationThrust_UpperSat) {
    flightControllerPID_B.SaturationThrust =
      flightControllerPID_P_g.SaturationThrust_UpperSat;
  } else {
    if (flightControllerPID_B.SaturationThrust <
        flightControllerPID_P_g.SaturationThrust_LowerSat) {
      flightControllerPID_B.SaturationThrust =
        flightControllerPID_P_g.SaturationThrust_LowerSat;
    }
  }

  /* End of Saturate: '<S6>/SaturationThrust' */

  /* Gain: '<S5>/P_yaw' incorporates:
   *  Sum: '<S5>/Sum1'
   */
  flightControllerPID_B.P_yaw = (arg_ReferenceValueServerBus->orient_ref[0] -
    arg_states_estim->yaw) * rtP_P_yaw;

  /* Gain: '<S5>/D_yaw' */
  flightControllerPID_B.Delay_d = rtP_D_yaw * arg_states_estim->r;

  /* SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2' incorporates:
   *  Sum: '<S2>/Sum16'
   *  Sum: '<S5>/Sum2'
   */
  flightControllerPID_B.rtb_SaturationThrust_idx_1 = flightControllerPID_B.P_yaw
    - flightControllerPID_B.Delay_d;
  rtb_SaturationThrust_idx_2 = (rtb_P_pr_b_idx_0 + rtb_Saturation_i_idx_0) -
    flightControllerPID_B.rtb_D_pr_idx_0;
  rtb_SaturationThrust_idx_3 = (rtb_P_pr_b_idx_1 + rtb_Saturation_i_idx_1) -
    flightControllerPID_B.rtb_D_pr_idx_1;
  for (flightControllerPID_B.i0 = 0; flightControllerPID_B.i0 < 4;
       flightControllerPID_B.i0++) {
    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/TorqueTotalThrustToThrustPerMotor'
     *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
     */
    u0 =
      flightControllerPID_P_g.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0
      + 12] * rtb_SaturationThrust_idx_3 +
      (flightControllerPID_P_g.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0
       + 8] * rtb_SaturationThrust_idx_2 +
       (flightControllerPID_P_g.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0
        + 4] * flightControllerPID_B.rtb_SaturationThrust_idx_1 +
        flightControllerPID_P_g.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0]
        * flightControllerPID_B.SaturationThrust));

    /* Saturate: '<S7>/Saturation5' incorporates:
     *  Gain: '<S7>/ThrustToMotorCommand'
     */
    u0 *= flightControllerPID_P_g.ThrustToMotorCommand_Gain;
    if (u0 > flightControllerPID_P_g.Saturation5_UpperSat) {
      u0 = flightControllerPID_P_g.Saturation5_UpperSat;
    } else {
      if (u0 < flightControllerPID_P_g.Saturation5_LowerSat) {
        u0 = flightControllerPID_P_g.Saturation5_LowerSat;
      }
    }

    /* End of Saturate: '<S7>/Saturation5' */

    /* Gain: '<S7>/MotorDirections' */
    arg_motors_refout[flightControllerPID_B.i0] =
      flightControllerPID_P_g.MotorDirections_Gain[flightControllerPID_B.i0] *
      u0;
  }

  /* Sum: '<S9>/A*x(k) + B*u(k)' incorporates:
   *  Gain: '<S9>/A'
   *  Gain: '<S9>/B'
   *  UnitDelay: '<S9>/Delay_x'
   */
  flightControllerPID_DW.Delay_x_DSTATE[0] = flightControllerPID_P_g.A_Gain *
    flightControllerPID_DW.Delay_x_DSTATE[0] + flightControllerPID_P_g.B_Gain *
    arg_states_estim->dx;
  flightControllerPID_DW.Delay_x_DSTATE[1] = flightControllerPID_P_g.A_Gain *
    flightControllerPID_DW.Delay_x_DSTATE[1] + flightControllerPID_P_g.B_Gain *
    arg_states_estim->dy;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_error_refout_at_inport_0' incorporates:
   *  Constant: '<S5>/Constant'
   */
  arg_error_refout->yaw.p = flightControllerPID_B.P_yaw;
  arg_error_refout->yaw.i = flightControllerPID_P_g.Constant_Value;
  arg_error_refout->yaw.d = flightControllerPID_B.Delay_d;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_error_refout_at_inport_0' */
  arg_error_refout->pr.p[0] = rtb_P_pr_b_idx_0;
  arg_error_refout->pr.i[0] = rtb_Saturation_i_idx_0;
  arg_error_refout->pr.d[0] = flightControllerPID_B.rtb_D_pr_idx_0;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_error_refout_at_inport_0' */
  arg_error_refout->xy.p[0] = flightControllerPID_B.rtb_P_xy_idx_0;
  arg_error_refout->xy.i[0] = rtb_Saturation1_idx_0;
  arg_error_refout->xy.d[0] = rtb_D_xy_idx_0;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_error_refout_at_inport_0' */
  arg_error_refout->pr.p[1] = rtb_P_pr_b_idx_1;
  arg_error_refout->pr.i[1] = rtb_Saturation_i_idx_1;
  arg_error_refout->pr.d[1] = flightControllerPID_B.rtb_D_pr_idx_1;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_error_refout_at_inport_0' */
  arg_error_refout->xy.p[1] = rtb_P_xy_idx_1;
  arg_error_refout->xy.i[1] = rtb_Saturation1_idx_1;
  arg_error_refout->xy.d[1] = rtb_D_xy_idx_1;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_error_refout_at_inport_0' */
  arg_error_refout->z.p = flightControllerPID_B.P_z;
  arg_error_refout->z.i = flightControllerPID_B.Saturation;
  arg_error_refout->z.d = flightControllerPID_B.dz;

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S4>/Delay'
   *  Gain: '<S4>/antiWU_Gain'
   *  Sum: '<S4>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] +=
    (flightControllerPID_B.XYerror[0] - rtP_I_xy_antiWU *
     flightControllerPID_DW.Delay_DSTATE_g[0]) *
    flightControllerPID_P_g.DiscreteTimeIntegrator_gainval;
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] +=
    (flightControllerPID_B.XYerror[1] - rtP_I_xy_antiWU *
     flightControllerPID_DW.Delay_DSTATE_g[1]) *
    flightControllerPID_P_g.DiscreteTimeIntegrator_gainval;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/antiWU_Gain'
   *  Sum: '<S2>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] +=
    (flightControllerPID_B.pitchrollerror[0] - rtP_I_pr_antiWU *
     flightControllerPID_DW.Delay_DSTATE[0]) *
    flightControllerPID_P_g.DiscreteTimeIntegrator_gainval_n;
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] +=
    (flightControllerPID_B.pitchrollerror[1] - rtP_I_pr_antiWU *
     flightControllerPID_DW.Delay_DSTATE[1]) *
    flightControllerPID_P_g.DiscreteTimeIntegrator_gainval_n;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S6>/Delay'
   *  Gain: '<S6>/antiWU_Gain'
   *  Sum: '<S6>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a += (rtb_errZ -
    rtP_I_z_antiWU * flightControllerPID_DW.Delay_DSTATE_m) *
    flightControllerPID_P_g.DiscreteTimeIntegrator_gainval_h;

  /* Update for Delay: '<S2>/Delay' incorporates:
   *  Sum: '<S2>/Sum'
   */
  flightControllerPID_DW.Delay_DSTATE[0] = rtb_DiscreteTimeIntegrator_idx_0 -
    rtb_Saturation_i_idx_0;

  /* Update for Delay: '<S4>/Delay' incorporates:
   *  Sum: '<S4>/Sum'
   */
  flightControllerPID_DW.Delay_DSTATE_g[0] = rtb_I_xy_idx_0 -
    rtb_Saturation1_idx_0;

  /* Update for Delay: '<S2>/Delay' incorporates:
   *  Sum: '<S2>/Sum'
   */
  flightControllerPID_DW.Delay_DSTATE[1] = rtb_DiscreteTimeIntegrator_idx_1 -
    rtb_Saturation_i_idx_1;

  /* Update for Delay: '<S4>/Delay' incorporates:
   *  Sum: '<S4>/Sum'
   */
  flightControllerPID_DW.Delay_DSTATE_g[1] = flightControllerPID_B.rtb_I_xy_m -
    rtb_Saturation1_idx_1;

  /* Update for Delay: '<S6>/Delay' incorporates:
   *  Sum: '<S6>/Sum'
   */
  flightControllerPID_DW.Delay_DSTATE_m =
    flightControllerPID_B.DiscreteTimeIntegrator_h -
    flightControllerPID_B.Saturation;
}

/* Model initialize function */
void flightControllerPID_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_flightControllerPID_T *const flightControllerPID_M =
    &(flightControllerPID_MdlrefDW.rtm);

  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(flightControllerPID_M, rt_errorStatus);

  /* states (dwork) */
  (void) memset((void *)&flightControllerPID_DW, 0,
                sizeof(DW_flightControllerPID_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
