/*
 * Code generation for system model 'flightController'
 *
 * Model                      : flightController
 * Model version              : 1.126
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 13:06:12 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "flightController.h"
#include "flightController_private.h"

MdlrefDW_flightController_T flightController_MdlrefDW;

/* Block states (default storage) */
DW_flightController_f_T flightController_DW;

/* System initialize for referenced model: 'flightController' */
void flightController_Init(void)
{
  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[1] = 0.0F;
}

/* System reset for referenced model: 'flightController' */
void flightController_Reset(void)
{
  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay' */
  flightController_DW.Delay_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[1] = 0.0F;
}

/* Output and update for referenced model: 'flightController' */
void flightController(const CommandBus *rtu_ReferenceValueServerBus, const
                      statesEstim_t *rtu_states_estim, real32_T
                      rty_motors_refout[4], real32_T rty_pose_refout[8])
{
  real32_T rtb_TrigonometricFunction_o2;
  real32_T rtb_TrigonometricFunction_o1;
  int32_T i;
  real32_T rtb_Switch_refAtt_idx_0;
  real32_T rtb_pitchrollerror_idx_0;
  real32_T rtb_Switch_refAtt_idx_1;
  real32_T rtb_pitchrollerror_idx_1;
  real32_T tmp;
  real32_T rtb_antiWU_Gain_idx_0;
  real32_T rtb_antiWU_Gain_idx_1;
  real32_T tmp_0;
  real32_T tmp_1;
  real32_T u0;
  real32_T rtu_ReferenceValueServerBus_0;

  /* Switch: '<S1>/Switch_refAtt' incorporates:
   *  Gain: '<S4>/D_xy'
   *  Gain: '<S4>/P_xy'
   *  Sum: '<S4>/Sum18'
   */
  if (rtu_ReferenceValueServerBus->controlModePosVSOrient) {
    /* Trigonometry: '<S4>/Trigonometric Function' */
    rtb_TrigonometricFunction_o1 = (real32_T)sin(rtu_states_estim->yaw);
    rtb_TrigonometricFunction_o2 = (real32_T)cos(rtu_states_estim->yaw);

    /* Sum: '<S4>/Sum17' */
    rtb_Switch_refAtt_idx_1 = rtu_ReferenceValueServerBus->pos_ref[0] -
      rtu_states_estim->X;
    rtb_pitchrollerror_idx_0 = rtu_ReferenceValueServerBus->pos_ref[1] -
      rtu_states_estim->Y;

    /* Product: '<S4>/Product' incorporates:
     *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In1'
     *  SignalConversion: '<S4>/ConcatBufferAtVector ConcatenateIn1'
     */
    rtb_pitchrollerror_idx_1 = rtb_TrigonometricFunction_o2 *
      rtb_Switch_refAtt_idx_1 + rtb_TrigonometricFunction_o1 *
      rtb_pitchrollerror_idx_0;

    /* Saturate: '<S4>/Saturation' */
    if (rtb_pitchrollerror_idx_1 > 3.0F) {
      rtb_pitchrollerror_idx_1 = 3.0F;
    } else {
      if (rtb_pitchrollerror_idx_1 < (-3.0F)) {
        rtb_pitchrollerror_idx_1 = (-3.0F);
      }
    }

    rtb_Switch_refAtt_idx_0 = (-0.24F) * rtb_pitchrollerror_idx_1 + 0.1F *
      rtu_states_estim->dx;

    /* Product: '<S4>/Product' incorporates:
     *  Gain: '<S4>/D_xy'
     *  Gain: '<S4>/Gain'
     *  Gain: '<S4>/P_xy'
     *  SignalConversion: '<S4>/ConcatBufferAtVector Concatenate1In2'
     *  Sum: '<S4>/Sum18'
     */
    rtb_pitchrollerror_idx_1 = (-1.0F) * rtb_TrigonometricFunction_o1 *
      rtb_Switch_refAtt_idx_1 + rtb_TrigonometricFunction_o2 *
      rtb_pitchrollerror_idx_0;

    /* Saturate: '<S4>/Saturation' */
    if (rtb_pitchrollerror_idx_1 > 3.0F) {
      rtb_pitchrollerror_idx_1 = 3.0F;
    } else {
      if (rtb_pitchrollerror_idx_1 < (-3.0F)) {
        rtb_pitchrollerror_idx_1 = (-3.0F);
      }
    }

    rtb_Switch_refAtt_idx_1 = 0.24F * rtb_pitchrollerror_idx_1 + (-0.1F) *
      rtu_states_estim->dy;
  } else {
    rtb_Switch_refAtt_idx_0 = rtu_ReferenceValueServerBus->orient_ref[1];
    rtb_Switch_refAtt_idx_1 = rtu_ReferenceValueServerBus->orient_ref[2];
  }

  /* End of Switch: '<S1>/Switch_refAtt' */

  /* Sum: '<S2>/Sum19' */
  rtb_pitchrollerror_idx_0 = rtb_Switch_refAtt_idx_0 - rtu_states_estim->pitch;
  rtb_pitchrollerror_idx_1 = rtb_Switch_refAtt_idx_1 - rtu_states_estim->roll;

  /* Gain: '<S2>/antiWU_Gain' incorporates:
   *  Delay: '<S2>/Delay'
   */
  rtb_antiWU_Gain_idx_0 = 0.001F * flightController_DW.Delay_DSTATE[0];
  rtb_antiWU_Gain_idx_1 = 0.001F * flightController_DW.Delay_DSTATE[1];

  /* Switch: '<S6>/TakeoffOrControl_Switch' incorporates:
   *  Constant: '<S6>/w0'
   *  Gain: '<S6>/D_z'
   *  Gain: '<S6>/P_z'
   *  Gain: '<S6>/takeoff_gain'
   *  Sum: '<S6>/Sum15'
   *  Sum: '<S6>/Sum3'
   */
  if (rtu_ReferenceValueServerBus->takeoff_flag) {
    rtu_ReferenceValueServerBus_0 = 0.45F * (-0.61803F);
  } else {
    rtu_ReferenceValueServerBus_0 = (rtu_ReferenceValueServerBus->pos_ref[2] -
      rtu_states_estim->Z) * 0.8F - 0.3F * rtu_states_estim->dz;
  }

  /* End of Switch: '<S6>/TakeoffOrControl_Switch' */

  /* Sum: '<S6>/Sum4' incorporates:
   *  Constant: '<S6>/w0'
   */
  rtu_ReferenceValueServerBus_0 += (-0.61803F);

  /* Saturate: '<S6>/SaturationThrust' */
  if (rtu_ReferenceValueServerBus_0 > 1.20204329F) {
    rtu_ReferenceValueServerBus_0 = 1.20204329F;
  } else {
    if (rtu_ReferenceValueServerBus_0 < (-1.20204329F)) {
      rtu_ReferenceValueServerBus_0 = (-1.20204329F);
    }
  }

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
  tmp = (rtu_ReferenceValueServerBus->orient_ref[0] - rtu_states_estim->yaw) *
    0.004F - 0.0012F * rtu_states_estim->r;
  tmp_0 = (0.013F * rtb_pitchrollerror_idx_0 + 0.01F *
           flightController_DW.DiscreteTimeIntegrator_DSTATE[0]) - 0.002F *
    rtu_states_estim->q;
  tmp_1 = (0.013F * rtb_pitchrollerror_idx_1 + 0.01F *
           flightController_DW.DiscreteTimeIntegrator_DSTATE[1]) - 0.002F *
    rtu_states_estim->p;
  for (i = 0; i < 4; i++) {
    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/TorqueTotalThrustToThrustPerMotor'
     *  Saturate: '<S6>/SaturationThrust'
     *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
     */
    u0 = rtCP_TorqueTotalThrustToThrustPerMotor_Value[i + 12] * tmp_1 +
      (rtCP_TorqueTotalThrustToThrustPerMotor_Value[i + 8] * tmp_0 +
       (rtCP_TorqueTotalThrustToThrustPerMotor_Value[i + 4] * tmp +
        rtCP_TorqueTotalThrustToThrustPerMotor_Value[i] *
        rtu_ReferenceValueServerBus_0));

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

  /* SignalConversion: '<Root>/TmpSignal ConversionAtpose_refoutInport1' incorporates:
   *  SignalConversion: '<S1>/ReferenceValueServerBus_BusSelector'
   */
  rty_pose_refout[0] = rtu_ReferenceValueServerBus->pos_ref[0];
  rty_pose_refout[3] = rtu_ReferenceValueServerBus->orient_ref[0];
  rty_pose_refout[1] = rtu_ReferenceValueServerBus->pos_ref[1];
  rty_pose_refout[4] = rtu_ReferenceValueServerBus->orient_ref[1];
  rty_pose_refout[2] = rtu_ReferenceValueServerBus->pos_ref[2];
  rty_pose_refout[5] = rtu_ReferenceValueServerBus->orient_ref[2];
  rty_pose_refout[6] = rtb_Switch_refAtt_idx_0;

  /* Update for Delay: '<S2>/Delay' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   */
  flightController_DW.Delay_DSTATE[0] =
    flightController_DW.DiscreteTimeIntegrator_DSTATE[0];

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Sum: '<S2>/Add'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[0] +=
    (rtb_pitchrollerror_idx_0 - rtb_antiWU_Gain_idx_0) * 0.005F;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE[0] >= 2.0F) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[0] = 2.0F;
  } else {
    if (flightController_DW.DiscreteTimeIntegrator_DSTATE[0] <= (-2.0F)) {
      flightController_DW.DiscreteTimeIntegrator_DSTATE[0] = (-2.0F);
    }
  }

  /* SignalConversion: '<Root>/TmpSignal ConversionAtpose_refoutInport1' */
  rty_pose_refout[7] = rtb_Switch_refAtt_idx_1;

  /* Update for Delay: '<S2>/Delay' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
   */
  flightController_DW.Delay_DSTATE[1] =
    flightController_DW.DiscreteTimeIntegrator_DSTATE[1];

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' incorporates:
   *  Sum: '<S2>/Add'
   */
  flightController_DW.DiscreteTimeIntegrator_DSTATE[1] +=
    (rtb_pitchrollerror_idx_1 - rtb_antiWU_Gain_idx_1) * 0.005F;
  if (flightController_DW.DiscreteTimeIntegrator_DSTATE[1] >= 2.0F) {
    flightController_DW.DiscreteTimeIntegrator_DSTATE[1] = 2.0F;
  } else {
    if (flightController_DW.DiscreteTimeIntegrator_DSTATE[1] <= (-2.0F)) {
      flightController_DW.DiscreteTimeIntegrator_DSTATE[1] = (-2.0F);
    }
  }
}

/* Model initialize function */
void flightController_initialize(const char_T **rt_errorStatus)
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
