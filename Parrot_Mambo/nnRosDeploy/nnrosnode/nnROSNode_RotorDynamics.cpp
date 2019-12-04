//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: nnROSNode_RotorDynamics.cpp
//
// Code generated for Simulink model 'nnROSNode'.
//
// Model version                  : 1.43
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Mon Aug 19 10:32:25 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "nnROSNode_RotorDynamics.h"

// Include model header file for global data
#include "nnROSNode.h"
#include "nnROSNode_private.h"

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2((real_T)u0_0, (real_T)u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Output and update for atomic system: '<S90>/Rotor_Dynamics'
void nnROSNode_RotorDynamics(const real_T rtu_Vb[3], const real_T rtu_pqr[3],
  real_T rtu_rho, real32_T rtu_w, const real_T rtu_Arm[3], real_T rty_Fxyz[3],
  real_T rty_Mxyz[3], P_RotorDynamics_nnROSNode_T *localP)
{
  real_T rtb_ixj;
  real32_T rtb_R4;
  real_T rtb_MathFunction2_idx_1;
  real_T rtb_MathFunction2_idx_2;
  real_T rtb_Sum_d_idx_0;
  real_T rtb_Sum_d_idx_1;
  real_T rtb_Sum3_idx_1;
  real32_T rtb_Abs_tmp;

  // Sum: '<S92>/Sum' incorporates:
  //   Product: '<S95>/j x k'
  //   Product: '<S95>/k x i'
  //   Product: '<S96>/i x k'
  //   Product: '<S96>/k x j'
  //   Sum: '<S93>/Sum'

  rtb_Sum_d_idx_0 = (rtu_pqr[1] * rtu_Arm[2] - rtu_pqr[2] * rtu_Arm[1]) +
    rtu_Vb[0];
  rtb_Sum_d_idx_1 = (rtu_pqr[2] * rtu_Arm[0] - rtu_pqr[0] * rtu_Arm[2]) +
    rtu_Vb[1];

  // Trigonometry: '<S92>/Trigonometric Function1'
  rtb_ixj = rt_atan2d_snf(rtb_Sum_d_idx_1, rtb_Sum_d_idx_0);

  // Trigonometry: '<S92>/Trigonometric Function2'
  rtb_Sum3_idx_1 = cos(rtb_ixj);
  rtb_ixj = sin(rtb_ixj);

  // Math: '<S92>/Math Function2' incorporates:
  //   Gain: '<S92>/Gain'
  //   SignalConversion: '<S92>/ConcatBufferAtVector ConcatenateIn2'

  rtb_MathFunction2_idx_1 = localP->Gain_Gain * rtb_ixj;
  rtb_MathFunction2_idx_2 = rtb_ixj;

  // Abs: '<S92>/Abs' incorporates:
  //   Abs: '<S92>/Abs1'

  rtb_Abs_tmp = static_cast<real32_T>(fabs((real_T)rtu_w));

  // Gain: '<S92>/R' incorporates:
  //   Abs: '<S92>/Abs'

  rtb_R4 = localP->R_Gain * rtb_Abs_tmp;

  // Sum: '<S92>/Sum of Elements' incorporates:
  //   Math: '<S92>/Math Function'

  rtb_ixj = rtb_Sum_d_idx_0 * rtb_Sum_d_idx_0 + rtb_Sum_d_idx_1 *
    rtb_Sum_d_idx_1;

  // Sqrt: '<S92>/Sqrt' incorporates:
  //   Sum: '<S92>/Sum of Elements'

  if (rtb_ixj < 0.0) {
    rtb_ixj = 0.0;
  } else {
    rtb_ixj = sqrt(rtb_ixj);
  }

  // End of Sqrt: '<S92>/Sqrt'

  // Product: '<S92>/Divide'
  rtb_ixj /= rtb_R4;

  // Switch: '<S92>/Switch' incorporates:
  //   Constant: '<S92>/Constant4'

  if (rtb_ixj != 0.0) {
    rtb_Sum_d_idx_0 = rtb_ixj;
  } else {
    rtb_Sum_d_idx_0 = localP->Constant4_Value;
  }

  // End of Switch: '<S92>/Switch'

  // Product: '<S92>/Divide2' incorporates:
  //   Constant: '<S92>/Constant'
  //   Gain: '<S92>/R1'
  //   Gain: '<S92>/R2'
  //   Math: '<S92>/Math Function1'
  //   Product: '<S92>/Divide1'
  //   Product: '<S95>/i x j'
  //   Product: '<S96>/j x i'
  //   Sum: '<S92>/Sum'
  //   Sum: '<S92>/Sum1'
  //   Sum: '<S92>/Sum2'
  //   Sum: '<S93>/Sum'
  //
  //  About '<S92>/Math Function1':
  //   Operator: reciprocal

  rtb_Sum_d_idx_0 = ((2.6666666666666665 * nnROSNode_P.Vehicle.Rotor.theta0 +
                      2.0 * nnROSNode_P.Vehicle.Rotor.theta1) - ((rtu_pqr[0] *
    rtu_Arm[1] - rtu_pqr[1] * rtu_Arm[0]) + rtu_Vb[2]) / rtb_R4 *
                     localP->R1_Gain) / (1.0 / rtb_Sum_d_idx_0 - localP->R2_Gain
    * rtb_ixj);

  // Product: '<S92>/Divide3' incorporates:
  //   Abs: '<S92>/Abs'
  //   Constant: '<S92>/Constant2'

  rtb_ixj = 16.0 / nnROSNode_P.Vehicle.Rotor.lock / rtb_Abs_tmp;

  // Sum: '<S92>/Sum3' incorporates:
  //   Constant: '<S92>/Constant1'
  //   Product: '<S92>/Product'
  //   Product: '<S92>/Product1'
  //   Trigonometry: '<S92>/Trigonometric Function2'

  rtb_MathFunction2_idx_2 = (rtb_Sum3_idx_1 * rtb_Sum_d_idx_0 +
    rtb_MathFunction2_idx_2 * localP->Constant1_Value) - rtb_ixj * rtu_pqr[1];
  rtb_Sum3_idx_1 = (rtb_MathFunction2_idx_1 * rtb_Sum_d_idx_0 + rtb_Sum3_idx_1 *
                    localP->Constant1_Value) - rtb_ixj * rtu_pqr[0];

  // Trigonometry: '<S92>/Trigonometric Function4'
  rtb_ixj = cos(rtb_Sum3_idx_1);

  // Product: '<S92>/Product2' incorporates:
  //   Gain: '<S92>/Gain1'
  //   Trigonometry: '<S92>/Trigonometric Function3'

  rtb_MathFunction2_idx_1 = localP->Gain1_Gain * rtb_ixj * sin
    (rtb_MathFunction2_idx_2);

  // Product: '<S92>/Product3' incorporates:
  //   Gain: '<S92>/Gain2'
  //   Trigonometry: '<S92>/Trigonometric Function3'

  rtb_ixj *= localP->Gain2_Gain * cos(rtb_MathFunction2_idx_2);

  // Product: '<S92>/Product6' incorporates:
  //   Gain: '<S92>/R3'
  //   Math: '<S92>/Math Function3'

  rtb_MathFunction2_idx_2 = rtu_w * rtu_w * localP->R3_Gain * rtu_rho;

  // Product: '<S92>/Product4' incorporates:
  //   Trigonometry: '<S92>/Trigonometric Function4'

  rty_Fxyz[0] = rtb_MathFunction2_idx_1 * rtb_MathFunction2_idx_2;
  rty_Fxyz[1] = sin(rtb_Sum3_idx_1) * rtb_MathFunction2_idx_2;
  rty_Fxyz[2] = rtb_ixj * rtb_MathFunction2_idx_2;

  // Sum: '<S92>/Sum4' incorporates:
  //   Constant: '<S92>/Constant3'
  //   Gain: '<S92>/R4'
  //   Product: '<S92>/Product5'
  //   Product: '<S92>/Product7'
  //   Product: '<S97>/i x j'
  //   Product: '<S97>/j x k'
  //   Product: '<S97>/k x i'
  //   Product: '<S98>/i x k'
  //   Product: '<S98>/j x i'
  //   Product: '<S98>/k x j'
  //   Sum: '<S94>/Sum'

  rty_Mxyz[0] = (rtu_Arm[1] * rty_Fxyz[2] - rtu_Arm[2] * rty_Fxyz[1]) +
    localP->Constant3_Value[0];
  rty_Mxyz[1] = (rtu_Arm[2] * rty_Fxyz[0] - rtu_Arm[0] * rty_Fxyz[2]) +
    localP->Constant3_Value[1];
  rty_Mxyz[2] = rtu_w * rtb_Abs_tmp * localP->R4_Gain * rtu_rho + (rtu_Arm[0] *
    rty_Fxyz[1] - rtu_Arm[1] * rty_Fxyz[0]);
}

//
// File trailer for generated code.
//
// [EOF]
//
