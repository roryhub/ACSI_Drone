/*
 * Code generation for system model 'flightControllerPID'
 *
 * Model                      : flightControllerPID
 * Model version              : 1.134
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 15:05:08 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "flightControllerPID.h"
#include "flightControllerPID_private.h"

MdlrefDW_flightControllerPID_T flightControllerPID_MdlrefDW;

/* Block states (default storage) */
DW_flightControllerPID_f_T flightControllerPID_DW;

/* System initialize for referenced model: 'flightControllerPID' */
void flightControllerPID_Init(void)
{
  /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[1] = 0.0F;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[1] = 0.0F;

  /* InitializeConditions for Delay: '<S6>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_m = 0.0F;
}

/* System reset for referenced model: 'flightControllerPID' */
void flightControllerPID_Reset(void)
{
  /* InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[1] = 0.0F;

  /* InitializeConditions for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[1] = 0.0F;

  /* InitializeConditions for Delay: '<S6>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_m = 0.0F;
}

/* Output and update for referenced model: 'flightControllerPID' */
void flightControllerPID(const CommandBus *rtu_ReferenceValueServerBus, const
  statesEstim_t *rtu_states_estim, real32_T rty_motors_refout[4], real32_T
  rty_pose_refout[8])
{
  /* local block i/o variables */
  real32_T rtb_XYerror[2];
  real32_T rtb_errZ;
  real32_T rtb_Delay_i[2];
  real32_T rtb_SaturationThrust;
  real32_T rtb_TrigonometricFunction_o2;
  real32_T rtb_TrigonometricFunction_o1;
  int32_T i;
  real32_T rtb_SaturationThrust_idx_1;
  real32_T rtb_DiscreteTimeIntegrator_idx_0;
  real32_T rtb_DiscreteTimeIntegrator_idx_1;
  real32_T rtb_DiscreteTimeIntegrator_l_idx_0;
  real32_T rtb_SaturationThrust_idx_2;
  real32_T rtb_SaturationThrust_idx_3;
  real32_T u0;

  /* Sum: '<S4>/Sum17' */
  rtb_XYerror[0] = rtu_ReferenceValueServerBus->pos_ref[0] - rtu_states_estim->X;
  rtb_XYerror[1] = rtu_ReferenceValueServerBus->pos_ref[1] - rtu_states_estim->Y;

  /* DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_idx_0 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0];
  rtb_DiscreteTimeIntegrator_idx_1 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1];

  /* Switch: '<S1>/Switch_refAtt' incorporates:
   *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
   *  Gain: '<S4>/D_xy'
   *  Gain: '<S4>/I_pr'
   *  Gain: '<S4>/P_xy'
   *  Product: '<S4>/Product'
   *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In1'
   *  SignalConversion: '<S4>/ConcatBufferAtVector ConcatenateIn1'
   *  Sum: '<S4>/Sum18'
   */
  if (rtu_ReferenceValueServerBus->controlModePosVSOrient) {
    /* Trigonometry: '<S4>/Trigonometric Function' */
    rtb_TrigonometricFunction_o1 = (real32_T)sin(rtu_states_estim->yaw);
    rtb_TrigonometricFunction_o2 = (real32_T)cos(rtu_states_estim->yaw);
    rtb_DiscreteTimeIntegrator_l_idx_0 = rtb_TrigonometricFunction_o2 *
      rtb_XYerror[0] + rtb_TrigonometricFunction_o1 * rtb_XYerror[1];

    /* Product: '<S4>/Product' incorporates:
     *  Gain: '<S4>/Gain'
     *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In1'
     *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In2'
     *  SignalConversion: '<S4>/ConcatBufferAtVector ConcatenateIn1'
     */
    rtb_TrigonometricFunction_o1 = (-1.0F) * rtb_TrigonometricFunction_o1 *
      rtb_XYerror[0] + rtb_TrigonometricFunction_o2 * rtb_XYerror[1];

    /* Saturate: '<S4>/Saturation' */
    if (rtb_DiscreteTimeIntegrator_l_idx_0 > 3.0F) {
      rtb_DiscreteTimeIntegrator_l_idx_0 = 3.0F;
    } else {
      if (rtb_DiscreteTimeIntegrator_l_idx_0 < (-3.0F)) {
        rtb_DiscreteTimeIntegrator_l_idx_0 = (-3.0F);
      }
    }

    rtb_Delay_i[0] = ((-0.24F) * rtb_DiscreteTimeIntegrator_l_idx_0 - 0.01F *
                      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0]) +
      0.1F * rtu_states_estim->dx;

    /* Saturate: '<S4>/Saturation' incorporates:
     *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
     *  Gain: '<S4>/D_xy'
     *  Gain: '<S4>/I_pr'
     *  Gain: '<S4>/P_xy'
     *  Sum: '<S4>/Sum18'
     */
    if (rtb_TrigonometricFunction_o1 > 3.0F) {
      rtb_TrigonometricFunction_o1 = 3.0F;
    } else {
      if (rtb_TrigonometricFunction_o1 < (-3.0F)) {
        rtb_TrigonometricFunction_o1 = (-3.0F);
      }
    }

    rtb_Delay_i[1] = (0.24F * rtb_TrigonometricFunction_o1 - 0.01F *
                      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1]) +
      (-0.1F) * rtu_states_estim->dy;
  } else {
    rtb_Delay_i[0] = rtu_ReferenceValueServerBus->orient_ref[1];
    rtb_Delay_i[1] = rtu_ReferenceValueServerBus->orient_ref[2];
  }

  /* End of Switch: '<S1>/Switch_refAtt' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtpose_refoutInport1' incorporates:
   *  SignalConversion: '<S1>/ReferenceValueServerBus_BusSelector'
   */
  rty_pose_refout[0] = rtu_ReferenceValueServerBus->pos_ref[0];
  rty_pose_refout[3] = rtu_ReferenceValueServerBus->orient_ref[0];
  rty_pose_refout[1] = rtu_ReferenceValueServerBus->pos_ref[1];
  rty_pose_refout[4] = rtu_ReferenceValueServerBus->orient_ref[1];
  rty_pose_refout[2] = rtu_ReferenceValueServerBus->pos_ref[2];
  rty_pose_refout[5] = rtu_ReferenceValueServerBus->orient_ref[2];
  rty_pose_refout[6] = rtb_Delay_i[0];
  rty_pose_refout[7] = rtb_Delay_i[1];

  /* DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  rtb_DiscreteTimeIntegrator_l_idx_0 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0];
  rtb_TrigonometricFunction_o1 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1];

  /* Sum: '<S2>/Sum19' */
  rtb_Delay_i[0] -= rtu_states_estim->pitch;
  rtb_Delay_i[1] -= rtu_states_estim->roll;

  /* Sum: '<S6>/Sum3' */
  rtb_errZ = rtu_ReferenceValueServerBus->pos_ref[2] - rtu_states_estim->Z;

  /* DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */
  rtb_TrigonometricFunction_o2 =
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a;

  /* Switch: '<S6>/TakeoffOrControl_Switch' incorporates:
   *  Constant: '<S6>/w0'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
   *  Gain: '<S6>/D_z'
   *  Gain: '<S6>/I_pr'
   *  Gain: '<S6>/P_z'
   *  Gain: '<S6>/takeoff_gain'
   *  Sum: '<S6>/Sum15'
   */
  if (rtu_ReferenceValueServerBus->takeoff_flag) {
    rtb_SaturationThrust = 0.45F * (-0.61803F);
  } else {
    rtb_SaturationThrust = (0.8F * rtb_errZ + 0.01F *
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a) - 0.3F *
      rtu_states_estim->dz;
  }

  /* End of Switch: '<S6>/TakeoffOrControl_Switch' */

  /* Sum: '<S6>/Sum4' incorporates:
   *  Constant: '<S6>/w0'
   */
  rtb_SaturationThrust += (-0.61803F);

  /* Saturate: '<S6>/SaturationThrust' */
  if (rtb_SaturationThrust > 1.20204329F) {
    rtb_SaturationThrust = 1.20204329F;
  } else {
    if (rtb_SaturationThrust < (-1.20204329F)) {
      rtb_SaturationThrust = (-1.20204329F);
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
  rtb_SaturationThrust_idx_1 = (rtu_ReferenceValueServerBus->orient_ref[0] -
    rtu_states_estim->yaw) * 0.004F - 0.0012F * rtu_states_estim->r;
  rtb_SaturationThrust_idx_2 = (0.013F * rtb_Delay_i[0] + 0.01F *
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0]) - 0.002F *
    rtu_states_estim->q;
  rtb_SaturationThrust_idx_3 = (0.013F * rtb_Delay_i[1] + 0.01F *
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1]) - 0.002F *
    rtu_states_estim->p;
  for (i = 0; i < 4; i++) {
    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/TorqueTotalThrustToThrustPerMotor'
     *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
     */
    u0 = rtCP_TorqueTotalThrustToThrustPerMotor_Value[i + 12] *
      rtb_SaturationThrust_idx_3 +
      (rtCP_TorqueTotalThrustToThrustPerMotor_Value[i + 8] *
       rtb_SaturationThrust_idx_2 +
       (rtCP_TorqueTotalThrustToThrustPerMotor_Value[i + 4] *
        rtb_SaturationThrust_idx_1 +
        rtCP_TorqueTotalThrustToThrustPerMotor_Value[i] * rtb_SaturationThrust));

    /* Saturate: '<S7>/Saturation5' incorporates:
     *  Gain: '<S7>/ThrustToMotorCommand'
     */
    u0 *= (-1530.72681F);
    if (u0 > 500.0F) {
      u0 = 500.0F;
    } else {
      if (u0 < 10.0F) {
        u0 = 10.0F;
      }
    }

    /* End of Saturate: '<S7>/Saturation5' */

    /* Gain: '<S7>/MotorDirections' */
    rty_motors_refout[i] = rtCP_MotorDirections_Gain[i] * u0;
  }

  /* Sum: '<S2>/Add' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/antiWU_Gain'
   */
  flightControllerPID_DW.Delay_DSTATE[0] = rtb_Delay_i[0] - 0.001F *
    flightControllerPID_DW.Delay_DSTATE[0];
  flightControllerPID_DW.Delay_DSTATE[1] = rtb_Delay_i[1] - 0.001F *
    flightControllerPID_DW.Delay_DSTATE[1];

  /* Delay: '<S4>/Delay' */
  rtb_Delay_i[0] = flightControllerPID_DW.Delay_DSTATE_g[0];
  rtb_Delay_i[1] = flightControllerPID_DW.Delay_DSTATE_g[1];

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S4>/antiWU_Gain'
   *  Sum: '<S4>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] += (rtb_XYerror[0] -
    0.001F * rtb_Delay_i[0]) * 0.005F;
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] += (rtb_XYerror[1] -
    0.001F * rtb_Delay_i[1]) * 0.005F;
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] >= 2.0F) {
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] = 2.0F;
  } else {
    if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] <= (-2.0F)) {
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[0] = (-2.0F);
    }
  }

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] += 0.005F *
    flightControllerPID_DW.Delay_DSTATE[0];
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] >= 2.0F) {
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] = 2.0F;
  } else {
    if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] <= (-2.0F)) {
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[0] = (-2.0F);
    }
  }

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] >= 2.0F) {
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] = 2.0F;
  } else {
    if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] <= (-2.0F)) {
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE[1] = (-2.0F);
    }
  }

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] += 0.005F *
    flightControllerPID_DW.Delay_DSTATE[1];
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] >= 2.0F) {
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] = 2.0F;
  } else {
    if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] <= (-2.0F)) {
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_m[1] = (-2.0F);
    }
  }

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' incorporates:
   *  Delay: '<S6>/Delay'
   *  Gain: '<S6>/antiWU_Gain'
   *  Sum: '<S6>/Add'
   */
  flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a += (rtb_errZ - 0.001F *
    flightControllerPID_DW.Delay_DSTATE_m) * 0.005F;
  if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a >= 2.0F) {
    flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a = 2.0F;
  } else {
    if (flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a <= (-2.0F)) {
      flightControllerPID_DW.DiscreteTimeIntegrator_DSTATE_a = (-2.0F);
    }
  }

  /* End of Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' */

  /* Update for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[0] = rtb_DiscreteTimeIntegrator_l_idx_0;

  /* Update for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[0] = rtb_DiscreteTimeIntegrator_idx_0;

  /* Update for Delay: '<S2>/Delay' */
  flightControllerPID_DW.Delay_DSTATE[1] = rtb_TrigonometricFunction_o1;

  /* Update for Delay: '<S4>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_g[1] = rtb_DiscreteTimeIntegrator_idx_1;

  /* Update for Delay: '<S6>/Delay' */
  flightControllerPID_DW.Delay_DSTATE_m = rtb_TrigonometricFunction_o2;
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
