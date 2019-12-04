/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControllerPID.c
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

/* Block signals (default storage) */
B_flightControllerPID_T flightControllerPID_B;

/* Block states (default storage) */
DW_flightControllerPID_T flightControllerPID_DW;

/* Real-time model */
RT_MODEL_flightControllerPID_T flightControllerPID_M_;
RT_MODEL_flightControllerPID_T *const flightControllerPID_M =
  &flightControllerPID_M_;

/* Model step function */
void flightController_run(const CommandBus *arg_ReferenceValueServerBus, const
  statesEstim_t *arg_states_estim, real32_T arg_motors_refout[4], real32_T
  arg_pose_refout[8], ErrorBus *arg_error_refout)
{
  /* local block i/o variables */
  real32_T rtb_errZ;
  real32_T rtb_D_xy_idx_1;
  real32_T rtb_Switch_refAtt_idx_1;
  real32_T rtb_D_pr_idx_0;
  real32_T rtb_D_pr_idx_1;
  real32_T rtb_SaturationThrust_idx_1;
  real32_T rtb_P_xy_idx_0;
  real32_T rtb_P_xy_idx_1;
  real32_T rtb_Saturation1_idx_1;
  real32_T rtb_P_pr_b_idx_0;
  real32_T rtb_P_pr_b_idx_1;
  real32_T rtb_DiscreteTimeIntegrator_idx_0;
  real32_T rtb_SaturationThrust_idx_2;
  real32_T rtb_DiscreteTimeIntegrator_idx_1;
  real32_T rtb_SaturationThrust_idx_3;
  real32_T u0;

  /* Sum: '<S6>/Sum3' incorporates:
   *  Inport: '<Root>/ReferenceValueServerBus'
   *  Inport: '<Root>/states_estim'
   */
  rtb_errZ = arg_ReferenceValueServerBus->pos_ref[2] - arg_states_estim->Z;

  /* Gain: '<S6>/P_z' */
  flightControllerPID_B.P_z = flightControllerPID_P.P_z * rtb_errZ;

  /* Saturate: '<S6>/Saturation' */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE >
      flightControllerPID_P.I_z_satLimitHigh) {
    flightControllerPID_B.Saturation = flightControllerPID_P.I_z_satLimitHigh;
  } else if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE <
             flightControllerPID_P.I_z_satLimitLow) {
    flightControllerPID_B.Saturation = flightControllerPID_P.I_z_satLimitLow;
  } else {
    flightControllerPID_B.Saturation =
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE;
  }

  /* End of Saturate: '<S6>/Saturation' */

  /* Gain: '<S6>/D_z' incorporates:
   *  Inport: '<Root>/states_estim'
   */
  flightControllerPID_B.dz = flightControllerPID_P.D_z * arg_states_estim->dz;

  /* Switch: '<S6>/TakeoffOrControl_Switch' incorporates:
   *  Constant: '<S6>/w0'
   *  Gain: '<S6>/takeoff_gain'
   *  Inport: '<Root>/ReferenceValueServerBus'
   *  Sum: '<S6>/Sum15'
   */
  if (arg_ReferenceValueServerBus->takeoff_flag) {
    u0 = flightControllerPID_P.takeoff_gain_Gain *
      flightControllerPID_P.w0_Value;
  } else {
    u0 = (flightControllerPID_B.P_z + flightControllerPID_B.Saturation) -
      flightControllerPID_B.dz;
  }

  /* End of Switch: '<S6>/TakeoffOrControl_Switch' */

  /* Sum: '<S6>/Sum4' incorporates:
   *  Constant: '<S6>/w0'
   */
  flightControllerPID_B.SaturationThrust = flightControllerPID_P.w0_Value + u0;

  /* Saturate: '<S6>/SaturationThrust' */
  if (flightControllerPID_B.SaturationThrust >
      flightControllerPID_P.SaturationThrust_UpperSat) {
    flightControllerPID_B.SaturationThrust =
      flightControllerPID_P.SaturationThrust_UpperSat;
  } else {
    if (flightControllerPID_B.SaturationThrust <
        flightControllerPID_P.SaturationThrust_LowerSat) {
      flightControllerPID_B.SaturationThrust =
        flightControllerPID_P.SaturationThrust_LowerSat;
    }
  }

  /* End of Saturate: '<S6>/SaturationThrust' */

  /* Gain: '<S5>/P_yaw' incorporates:
   *  Inport: '<Root>/ReferenceValueServerBus'
   *  Inport: '<Root>/states_estim'
   *  Sum: '<S5>/Sum1'
   */
  flightControllerPID_B.P_yaw = (arg_ReferenceValueServerBus->orient_ref[0] -
    arg_states_estim->yaw) * flightControllerPID_P.P_yaw;

  /* Gain: '<S5>/D_yaw' incorporates:
   *  Inport: '<Root>/states_estim'
   */
  flightControllerPID_B.D_yaw = flightControllerPID_P.D_yaw *
    arg_states_estim->r;

  /* Trigonometry: '<S4>/Trigonometric Function' incorporates:
   *  Inport: '<Root>/states_estim'
   */
  flightControllerPID_B.TrigonometricFunction_o1 = (real32_T)sin
    (arg_states_estim->yaw);
  flightControllerPID_B.TrigonometricFunction_o2 = (real32_T)cos
    (arg_states_estim->yaw);

  /* Sum: '<S4>/Sum17' incorporates:
   *  Inport: '<Root>/ReferenceValueServerBus'
   *  Inport: '<Root>/states_estim'
   */
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
  rtb_P_xy_idx_0 = flightControllerPID_B.TrigonometricFunction_o2 *
    flightControllerPID_B.XYerror[0] +
    flightControllerPID_B.TrigonometricFunction_o1 *
    flightControllerPID_B.XYerror[1];
  flightControllerPID_B.TrigonometricFunction_o2 =
    flightControllerPID_P.Gain_Gain *
    flightControllerPID_B.TrigonometricFunction_o1 *
    flightControllerPID_B.XYerror[0] +
    flightControllerPID_B.TrigonometricFunction_o2 *
    flightControllerPID_B.XYerror[1];

  /* Saturate: '<S4>/Saturation' */
  if (rtb_P_xy_idx_0 > flightControllerPID_P.Saturation_UpperSat) {
    rtb_P_xy_idx_0 = flightControllerPID_P.Saturation_UpperSat;
  } else {
    if (rtb_P_xy_idx_0 < flightControllerPID_P.Saturation_LowerSat) {
      rtb_P_xy_idx_0 = flightControllerPID_P.Saturation_LowerSat;
    }
  }

  /* Gain: '<S4>/P_xy' */
  rtb_P_xy_idx_0 *= flightControllerPID_P.P_xy[0];

  /* Saturate: '<S4>/Saturation1' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[0] >
      flightControllerPID_P.I_xy_satLimitHigh) {
    flightControllerPID_B.TrigonometricFunction_o1 =
      flightControllerPID_P.I_xy_satLimitHigh;
  } else if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[0] <
             flightControllerPID_P.I_xy_satLimitLow) {
    flightControllerPID_B.TrigonometricFunction_o1 =
      flightControllerPID_P.I_xy_satLimitLow;
  } else {
    flightControllerPID_B.TrigonometricFunction_o1 =
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[0];
  }

  /* Saturate: '<S4>/Saturation' */
  if (flightControllerPID_B.TrigonometricFunction_o2 >
      flightControllerPID_P.Saturation_UpperSat) {
    flightControllerPID_B.TrigonometricFunction_o2 =
      flightControllerPID_P.Saturation_UpperSat;
  } else {
    if (flightControllerPID_B.TrigonometricFunction_o2 <
        flightControllerPID_P.Saturation_LowerSat) {
      flightControllerPID_B.TrigonometricFunction_o2 =
        flightControllerPID_P.Saturation_LowerSat;
    }
  }

  /* Gain: '<S4>/P_xy' */
  rtb_P_xy_idx_1 = flightControllerPID_P.P_xy[1] *
    flightControllerPID_B.TrigonometricFunction_o2;

  /* Saturate: '<S4>/Saturation1' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[1] >
      flightControllerPID_P.I_xy_satLimitHigh) {
    rtb_Saturation1_idx_1 = flightControllerPID_P.I_xy_satLimitHigh;
  } else if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[1] <
             flightControllerPID_P.I_xy_satLimitLow) {
    rtb_Saturation1_idx_1 = flightControllerPID_P.I_xy_satLimitLow;
  } else {
    rtb_Saturation1_idx_1 =
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[1];
  }

  /* Gain: '<S4>/D_xy' incorporates:
   *  Inport: '<Root>/states_estim'
   */
  flightControllerPID_B.rtb_D_xy_idx_0 = flightControllerPID_P.D_xy[0] *
    arg_states_estim->dx;
  rtb_D_xy_idx_1 = flightControllerPID_P.D_xy[1] * arg_states_estim->dy;

  /* Switch: '<S1>/Switch_refAtt' incorporates:
   *  Inport: '<Root>/ReferenceValueServerBus'
   *  Sum: '<S4>/Sum18'
   */
  if (arg_ReferenceValueServerBus->controlModePosVSOrient) {
    flightControllerPID_B.TrigonometricFunction_o2 = (rtb_P_xy_idx_0 -
      flightControllerPID_B.TrigonometricFunction_o1) +
      flightControllerPID_B.rtb_D_xy_idx_0;
    rtb_Switch_refAtt_idx_1 = (rtb_P_xy_idx_1 - rtb_Saturation1_idx_1) +
      rtb_D_xy_idx_1;
  } else {
    flightControllerPID_B.TrigonometricFunction_o2 =
      arg_ReferenceValueServerBus->orient_ref[1];
    rtb_Switch_refAtt_idx_1 = arg_ReferenceValueServerBus->orient_ref[2];
  }

  /* End of Switch: '<S1>/Switch_refAtt' */

  /* Sum: '<S2>/Sum19' incorporates:
   *  Inport: '<Root>/states_estim'
   */
  flightControllerPID_B.pitchrollerror[0] =
    flightControllerPID_B.TrigonometricFunction_o2 - arg_states_estim->pitch;
  flightControllerPID_B.pitchrollerror[1] = rtb_Switch_refAtt_idx_1 -
    arg_states_estim->roll;

  /* Gain: '<S2>/P_pr' */
  rtb_P_pr_b_idx_0 = flightControllerPID_P.P_pr[0] *
    flightControllerPID_B.pitchrollerror[0];
  rtb_P_pr_b_idx_1 = flightControllerPID_P.P_pr[1] *
    flightControllerPID_B.pitchrollerror[1];

  /* Gain: '<S2>/D_pr' incorporates:
   *  Inport: '<Root>/states_estim'
   */
  rtb_D_pr_idx_0 = flightControllerPID_P.D_pr[0] * arg_states_estim->q;
  rtb_D_pr_idx_1 = flightControllerPID_P.D_pr[1] * arg_states_estim->p;

  /* SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2' incorporates:
   *  Sum: '<S5>/Sum2'
   */
  rtb_SaturationThrust_idx_1 = flightControllerPID_B.P_yaw -
    flightControllerPID_B.D_yaw;

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_idx_0 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0];

  /* Gain: '<S2>/I_pr' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   */
  flightControllerPID_B.rtb_I_pr_m = flightControllerPID_P.I_pr *
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0];

  /* SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2' incorporates:
   *  Sum: '<S2>/Sum16'
   */
  rtb_SaturationThrust_idx_2 = (rtb_P_pr_b_idx_0 +
    flightControllerPID_B.rtb_I_pr_m) - rtb_D_pr_idx_0;

  /* Outport: '<Root>/error_refout' */
  arg_error_refout->pr.i[0] = flightControllerPID_B.rtb_I_pr_m;

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_idx_1 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1];

  /* Gain: '<S2>/I_pr' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   */
  flightControllerPID_B.rtb_I_pr_m = flightControllerPID_P.I_pr *
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1];

  /* SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2' incorporates:
   *  Sum: '<S2>/Sum16'
   */
  rtb_SaturationThrust_idx_3 = (rtb_P_pr_b_idx_1 +
    flightControllerPID_B.rtb_I_pr_m) - rtb_D_pr_idx_1;
  for (flightControllerPID_B.i0 = 0; flightControllerPID_B.i0 < 4;
       flightControllerPID_B.i0++) {
    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/TorqueTotalThrustToThrustPerMotor'
     *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
     */
    u0 =
      flightControllerPID_P.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0
      + 12] * rtb_SaturationThrust_idx_3 +
      (flightControllerPID_P.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0
       + 8] * rtb_SaturationThrust_idx_2 +
       (flightControllerPID_P.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0
        + 4] * rtb_SaturationThrust_idx_1 +
        flightControllerPID_P.TorqueTotalThrustToThrustPerMotor_Value[flightControllerPID_B.i0]
        * flightControllerPID_B.SaturationThrust));

    /* Saturate: '<S7>/Saturation5' incorporates:
     *  Gain: '<S7>/ThrustToMotorCommand'
     */
    u0 *= flightControllerPID_P.ThrustToMotorCommand_Gain;
    if (u0 > flightControllerPID_P.Saturation5_UpperSat) {
      u0 = flightControllerPID_P.Saturation5_UpperSat;
    } else {
      if (u0 < flightControllerPID_P.Saturation5_LowerSat) {
        u0 = flightControllerPID_P.Saturation5_LowerSat;
      }
    }

    /* End of Saturate: '<S7>/Saturation5' */

    /* Outport: '<Root>/motors_refout' incorporates:
     *  Gain: '<S7>/MotorDirections'
     */
    arg_motors_refout[flightControllerPID_B.i0] =
      flightControllerPID_P.MotorDirections_Gain[flightControllerPID_B.i0] * u0;
  }

  /* Outport: '<Root>/pose_refout' incorporates:
   *  Inport: '<Root>/ReferenceValueServerBus'
   */
  arg_pose_refout[0] = arg_ReferenceValueServerBus->pos_ref[0];
  arg_pose_refout[3] = arg_ReferenceValueServerBus->orient_ref[0];
  arg_pose_refout[1] = arg_ReferenceValueServerBus->pos_ref[1];
  arg_pose_refout[4] = arg_ReferenceValueServerBus->orient_ref[1];
  arg_pose_refout[2] = arg_ReferenceValueServerBus->pos_ref[2];
  arg_pose_refout[5] = arg_ReferenceValueServerBus->orient_ref[2];
  arg_pose_refout[6] = flightControllerPID_B.TrigonometricFunction_o2;

  /* Sum: '<S4>/Sum' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  flightControllerPID_B.TrigonometricFunction_o2 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[0] -
    flightControllerPID_B.TrigonometricFunction_o1;

  /* Outport: '<Root>/pose_refout' */
  arg_pose_refout[7] = rtb_Switch_refAtt_idx_1;

  /* Sum: '<S4>/Sum' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   */
  flightControllerPID_B.SaturationThrust =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[1] -
    rtb_Saturation1_idx_1;

  /* Outport: '<Root>/error_refout' incorporates:
   *  BusCreator: '<Root>/BusConversion_InsertedFor_error_refout_at_inport_0'
   *  Constant: '<S5>/Constant'
   */
  arg_error_refout->yaw.p = flightControllerPID_B.P_yaw;
  arg_error_refout->yaw.i = flightControllerPID_P.Constant_Value;
  arg_error_refout->yaw.d = flightControllerPID_B.D_yaw;
  arg_error_refout->pr.p[0] = rtb_P_pr_b_idx_0;
  arg_error_refout->pr.d[0] = rtb_D_pr_idx_0;
  arg_error_refout->xy.p[0] = rtb_P_xy_idx_0;
  arg_error_refout->xy.i[0] = flightControllerPID_B.TrigonometricFunction_o1;
  arg_error_refout->xy.d[0] = flightControllerPID_B.rtb_D_xy_idx_0;
  arg_error_refout->pr.p[1] = rtb_P_pr_b_idx_1;
  arg_error_refout->pr.i[1] = flightControllerPID_B.rtb_I_pr_m;
  arg_error_refout->pr.d[1] = rtb_D_pr_idx_1;
  arg_error_refout->xy.p[1] = rtb_P_xy_idx_1;
  arg_error_refout->xy.i[1] = rtb_Saturation1_idx_1;
  arg_error_refout->xy.d[1] = rtb_D_xy_idx_1;
  arg_error_refout->z.p = flightControllerPID_B.P_z;
  arg_error_refout->z.i = flightControllerPID_B.Saturation;
  arg_error_refout->z.d = flightControllerPID_B.dz;

  /* Sum: '<S6>/Sum' incorporates:
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
   */
  flightControllerPID_B.P_z =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE -
    flightControllerPID_B.Saturation;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S6>/Delay'
   *  Gain: '<S6>/antiWU_Gain'
   *  Sum: '<S6>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE += (rtb_errZ -
    flightControllerPID_P.I_z_antiWU * flightControllerPID_DW.Delay_DSTATE_m) *
    flightControllerPID_P.DiscreteTimeIntegrator_gainval;

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S4>/Delay'
   *  Gain: '<S4>/antiWU_Gain'
   *  Sum: '<S4>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[0] +=
    (flightControllerPID_B.XYerror[0] - flightControllerPID_P.I_xy_antiWU *
     flightControllerPID_DW.Delay_DSTATE_g[0]) *
    flightControllerPID_P.DiscreteTimeIntegrator_gainval_i;
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[1] +=
    (flightControllerPID_B.XYerror[1] - flightControllerPID_P.I_xy_antiWU *
     flightControllerPID_DW.Delay_DSTATE_g[1]) *
    flightControllerPID_P.DiscreteTimeIntegrator_gainval_i;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/antiWU_Gain'
   *  Sum: '<S2>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] +=
    (flightControllerPID_B.pitchrollerror[0] - flightControllerPID_P.I_pr_antiWU
     * flightControllerPID_DW.Delay_DSTATE[0]) *
    flightControllerPID_P.DiscreteTimeIntegrator_gainval_n;
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] +=
    (flightControllerPID_B.pitchrollerror[1] - flightControllerPID_P.I_pr_antiWU
     * flightControllerPID_DW.Delay_DSTATE[1]) *
    flightControllerPID_P.DiscreteTimeIntegrator_gainval_n;
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] >=
      flightControllerPID_P.I_pr_satLimitHigh) {
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] =
      flightControllerPID_P.I_pr_satLimitHigh;
  } else {
    if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] <=
        flightControllerPID_P.I_pr_satLimitLow) {
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] =
        flightControllerPID_P.I_pr_satLimitLow;
    }
  }

  /* Update for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[0] = rtb_DiscreteTimeIntegrator_idx_0;

  /* Update for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[0] =
    flightControllerPID_B.TrigonometricFunction_o2;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] >=
      flightControllerPID_P.I_pr_satLimitHigh) {
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] =
      flightControllerPID_P.I_pr_satLimitHigh;
  } else {
    if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] <=
        flightControllerPID_P.I_pr_satLimitLow) {
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] =
        flightControllerPID_P.I_pr_satLimitLow;
    }
  }

  /* Update for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[1] = rtb_DiscreteTimeIntegrator_idx_1;

  /* Update for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[1] =
    flightControllerPID_B.SaturationThrust;

  /* Update for Delay: '<S6>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_m = flightControllerPID_B.P_z;
}

/* Model initialize function */
void flightController_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(flightControllerPID_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&flightControllerPID_DW, 0,
                sizeof(DW_flightControllerPID_T));

  /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE =
    flightControllerPID_P.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[0] =
    flightControllerPID_P.DiscreteTimeIntegrator_IC_b;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] =
    flightControllerPID_P.DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[0] =
    flightControllerPID_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[0] =
    flightControllerPID_P.Delay_InitialCondition_p;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_p[1] =
    flightControllerPID_P.DiscreteTimeIntegrator_IC_b;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] =
    flightControllerPID_P.DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[1] =
    flightControllerPID_P.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[1] =
    flightControllerPID_P.Delay_InitialCondition_p;

  /* InitializeConditions for Delay: '<S6>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_m =
    flightControllerPID_P.Delay_InitialCondition_c;
}

/* Model terminate function */
void flightControllerPID_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
