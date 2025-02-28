/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightController.c
 *
 * Code generated for Simulink model 'flightController'.
 *
 * Model version                  : 1.131
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Wed May 22 13:32:57 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightController.h"
#include "flightController_private.h"

P_flightController_T flightController_P_g = {
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

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegrator_IC
   * Referenced by: '<S2>/Discrete-Time Integrator'
   */
  0.0F,

  /* Computed Parameter: w0_Value
   * Referenced by: '<S6>/w0'
   */
  -0.61803F,

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

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S2>/Delay'
   */
  1U
};

MdlrefDW_flightController_T flightController_MdlrefDW;

/* Block states (default storage) */
DW_flightController_f_T flightController_DW;

/* System initialize for referenced model: 'flightController' */
void flightController_Init(void)
{
  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[0] =
    flightController_P_g.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[0] =
    flightController_P_g.Delay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[1] =
    flightController_P_g.DiscreteTimeIntegrator_IC;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[1] =
    flightController_P_g.Delay_InitialCondition;
}

/* Output and update for referenced model: 'flightController' */
void flightController_run(const CommandBus *arg_ReferenceValueServerBus, const
  statesEstim_t *arg_states_estim, real32_T arg_motors_refout[4], real32_T
  arg_pose_refout[8])
{
  real32_T rtb_SaturationThrust;
  real32_T rtb_TrigonometricFunction_o2;
  real32_T rtb_TrigonometricFunction_o1;
  int32_T i;
  real32_T rtb_MatrixConcatenate_0;
  real32_T rtb_pitchrollerror_idx_0;
  real32_T rtb_pitchrollerror_idx_1;
  real32_T rtb_SaturationThrust_idx_2;
  real32_T rtb_SaturationThrust_idx_3;
  real32_T u0;

  /* Switch: '<S1>/Switch_refAtt' incorporates:
   *  Gain: '<S4>/D_xy'
   *  Gain: '<S4>/P_xy'
   *  Sum: '<S4>/Sum18'
   */
  if (arg_ReferenceValueServerBus->controlModePosVSOrient) {
    /* Trigonometry: '<S4>/Trigonometric Function' */
    rtb_TrigonometricFunction_o1 = (real32_T)sin(arg_states_estim->yaw);
    rtb_TrigonometricFunction_o2 = (real32_T)cos(arg_states_estim->yaw);

    /* Sum: '<S4>/Sum17' */
    rtb_pitchrollerror_idx_1 = arg_ReferenceValueServerBus->pos_ref[0] -
      arg_states_estim->X;
    rtb_SaturationThrust = arg_ReferenceValueServerBus->pos_ref[1] -
      arg_states_estim->Y;

    /* Product: '<S4>/Product' incorporates:
     *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In1'
     *  SignalConversion: '<S4>/ConcatBufferAtVector ConcatenateIn1'
     */
    rtb_MatrixConcatenate_0 = rtb_TrigonometricFunction_o2 *
      rtb_pitchrollerror_idx_1 + rtb_TrigonometricFunction_o1 *
      rtb_SaturationThrust;

    /* Saturate: '<S4>/Saturation' */
    if (rtb_MatrixConcatenate_0 > flightController_P_g.Saturation_UpperSat) {
      rtb_MatrixConcatenate_0 = flightController_P_g.Saturation_UpperSat;
    } else {
      if (rtb_MatrixConcatenate_0 < flightController_P_g.Saturation_LowerSat) {
        rtb_MatrixConcatenate_0 = flightController_P_g.Saturation_LowerSat;
      }
    }

    rtb_pitchrollerror_idx_0 = rtP_P_xy[0] * rtb_MatrixConcatenate_0 + rtP_D_xy
      [0] * arg_states_estim->dx;

    /* Product: '<S4>/Product' incorporates:
     *  Gain: '<S4>/D_xy'
     *  Gain: '<S4>/Gain'
     *  Gain: '<S4>/P_xy'
     *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In2'
     *  Sum: '<S4>/Sum18'
     */
    rtb_MatrixConcatenate_0 = flightController_P_g.Gain_Gain *
      rtb_TrigonometricFunction_o1 * rtb_pitchrollerror_idx_1 +
      rtb_TrigonometricFunction_o2 * rtb_SaturationThrust;

    /* Saturate: '<S4>/Saturation' */
    if (rtb_MatrixConcatenate_0 > flightController_P_g.Saturation_UpperSat) {
      rtb_MatrixConcatenate_0 = flightController_P_g.Saturation_UpperSat;
    } else {
      if (rtb_MatrixConcatenate_0 < flightController_P_g.Saturation_LowerSat) {
        rtb_MatrixConcatenate_0 = flightController_P_g.Saturation_LowerSat;
      }
    }

    rtb_pitchrollerror_idx_1 = rtP_P_xy[1] * rtb_MatrixConcatenate_0 + rtP_D_xy
      [1] * arg_states_estim->dy;
  } else {
    rtb_pitchrollerror_idx_0 = arg_ReferenceValueServerBus->orient_ref[1];
    rtb_pitchrollerror_idx_1 = arg_ReferenceValueServerBus->orient_ref[2];
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
  arg_pose_refout[6] = rtb_pitchrollerror_idx_0;

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_TrigonometricFunction_o1 =
    flightController_DW.DiscreteTimeIntegrator_DSTATE[0];

  /* Sum: '<S2>/Sum19' incorporates:
   *  SignalConversion: '<Root>/TmpSignal ConversionAtpose_refoutInport1'
   */
  rtb_pitchrollerror_idx_0 -= arg_states_estim->pitch;

  /* SignalConversion: '<Root>/TmpSignal ConversionAtpose_refoutInport1' */
  arg_pose_refout[7] = rtb_pitchrollerror_idx_1;

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_TrigonometricFunction_o2 =
    flightController_DW.DiscreteTimeIntegrator_DSTATE[1];

  /* Sum: '<S2>/Sum19' incorporates:
   *  SignalConversion: '<Root>/TmpSignal ConversionAtpose_refoutInport1'
   */
  rtb_pitchrollerror_idx_1 -= arg_states_estim->roll;

  /* Switch: '<S6>/TakeoffOrControl_Switch' incorporates:
   *  Constant: '<S6>/w0'
   *  Gain: '<S6>/D_z'
   *  Gain: '<S6>/P_z'
   *  Gain: '<S6>/takeoff_gain'
   *  Sum: '<S6>/Sum15'
   *  Sum: '<S6>/Sum3'
   */
  if (arg_ReferenceValueServerBus->takeoff_flag) {
    rtb_SaturationThrust = flightController_P_g.takeoff_gain_Gain *
      flightController_P_g.w0_Value;
  } else {
    rtb_SaturationThrust = (arg_ReferenceValueServerBus->pos_ref[2] -
      arg_states_estim->Z) * rtP_P_z - rtP_D_z * arg_states_estim->dz;
  }

  /* End of Switch: '<S6>/TakeoffOrControl_Switch' */

  /* Sum: '<S6>/Sum4' incorporates:
   *  Constant: '<S6>/w0'
   */
  rtb_SaturationThrust += flightController_P_g.w0_Value;

  /* Saturate: '<S6>/SaturationThrust' */
  if (rtb_SaturationThrust > flightController_P_g.SaturationThrust_UpperSat) {
    rtb_SaturationThrust = flightController_P_g.SaturationThrust_UpperSat;
  } else {
    if (rtb_SaturationThrust < flightController_P_g.SaturationThrust_LowerSat) {
      rtb_SaturationThrust = flightController_P_g.SaturationThrust_LowerSat;
    }
  }

  /* End of Saturate: '<S6>/SaturationThrust' */

  /* SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   *  Gain: '<S2>/D_pr'
   *  Gain: '<S2>/I_pr'
   *  Gain: '<S2>/P_pr'
   *  Gain: '<S5>/D_yaw'
   *  Gain: '<S5>/P_yaw'
   *  Sum: '<S2>/Sum16'
   *  Sum: '<S5>/Sum1'
   *  Sum: '<S5>/Sum2'
   */
  rtb_MatrixConcatenate_0 = (arg_ReferenceValueServerBus->orient_ref[0] -
    arg_states_estim->yaw) * rtP_P_yaw - rtP_D_yaw * arg_states_estim->r;
  rtb_SaturationThrust_idx_2 = (rtP_P_pr[0] * rtb_pitchrollerror_idx_0 +
    rtP_I_pr * flightController_DW.DiscreteTimeIntegrator_DSTATE[0]) - rtP_D_pr
    [0] * arg_states_estim->q;
  rtb_SaturationThrust_idx_3 = (rtP_P_pr[1] * rtb_pitchrollerror_idx_1 +
    rtP_I_pr * flightController_DW.DiscreteTimeIntegrator_DSTATE[1]) - rtP_D_pr
    [1] * arg_states_estim->p;
  for (i = 0; i < 4; i++) {
    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/TorqueTotalThrustToThrustPerMotor'
     *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
     */
    u0 = flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i + 12] *
      rtb_SaturationThrust_idx_3 +
      (flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i + 8] *
       rtb_SaturationThrust_idx_2 +
       (flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i + 4] *
        rtb_MatrixConcatenate_0 +
        flightController_P_g.TorqueTotalThrustToThrustPerMotor_Value[i] *
        rtb_SaturationThrust));

    /* Saturate: '<S7>/Saturation5' incorporates:
     *  Gain: '<S7>/ThrustToMotorCommand'
     */
    u0 *= flightController_P_g.ThrustToMotorCommand_Gain;
    if (u0 > flightController_P_g.Saturation5_UpperSat) {
      u0 = flightController_P_g.Saturation5_UpperSat;
    } else {
      if (u0 < flightController_P_g.Saturation5_LowerSat) {
        u0 = flightController_P_g.Saturation5_LowerSat;
      }
    }

    /* End of Saturate: '<S7>/Saturation5' */

    /* Gain: '<S7>/MotorDirections' */
    arg_motors_refout[i] = flightController_P_g.MotorDirections_Gain[i] * u0;
  }

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/antiWU_Gain'
   *  Sum: '<S2>/Add'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[0] +=
    (rtb_pitchrollerror_idx_0 - rtP_I_antiWU * flightController_DW.Delay_DSTATE
     [0]) * flightController_P_g.DiscreteTimeIntegrator_gainval;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE[0] >= rtP_I_satLimitHigh)
  {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[0] = rtP_I_satLimitHigh;
  } else {
    if (flightController_DW.DiscreteTimeIntegrator_DSTATE[0] <=
        rtP_I_satLimitLow) {
      flightController_DW.DiscreteTimeIntegrator_DSTATE[0] = rtP_I_satLimitLow;
    }
  }

  /* Update for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[0] = rtb_TrigonometricFunction_o1;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/antiWU_Gain'
   *  Sum: '<S2>/Add'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[1] +=
    (rtb_pitchrollerror_idx_1 - rtP_I_antiWU * flightController_DW.Delay_DSTATE
     [1]) * flightController_P_g.DiscreteTimeIntegrator_gainval;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE[1] >= rtP_I_satLimitHigh)
  {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[1] = rtP_I_satLimitHigh;
  } else {
    if (flightController_DW.DiscreteTimeIntegrator_DSTATE[1] <=
        rtP_I_satLimitLow) {
      flightController_DW.DiscreteTimeIntegrator_DSTATE[1] = rtP_I_satLimitLow;
    }
  }

  /* Update for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[1] = rtb_TrigonometricFunction_o2;
}

/* Model initialize function */
void flightController_g_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_flightController_T *const flightController_M =
    &(flightController_MdlrefDW.rtm);

  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(flightController_M, rt_errorStatus);

  /* states (dwork) */
  (void) memset((void *)&flightController_DW, 0,
                sizeof(DW_flightController_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
