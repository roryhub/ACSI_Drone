//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: nnROSNode.cpp
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
#include "nnROSNode.h"
#include "nnROSNode_private.h"

// Block signals (default storage)
B_nnROSNode_T nnROSNode_B;

// Block states (default storage)
DW_nnROSNode_T nnROSNode_DW;

// Real-time model
RT_MODEL_nnROSNode_T nnROSNode_M_;
RT_MODEL_nnROSNode_T *const nnROSNode_M = &nnROSNode_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matlabC_ehr(robotics_slros_internal_blo_e_T *obj);
static void nnROSNode_SystemCore_release_e(dsp_simulink_MovingAverage_nn_T *obj);
static void nnROSNode_SystemCore_delete_e(dsp_simulink_MovingAverage_nn_T *obj);
static void matlabCodegenHandle_matlabCod_e(dsp_simulink_MovingAverage_nn_T *obj);
static void nnROSNode_SystemCore_release(dsp_MovingMaximum_nnROSNode_T *obj);
static void nnROSNode_SystemCore_delete(dsp_MovingMaximum_nnROSNode_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_MovingMaximum_nnROSNode_T *obj);
static void matlabCodegenHandle_matlabCo_eh(robotics_slros_internal_block_T *obj);
static void matlabCodegenHandle_matlabC_ehr(robotics_slros_internal_blo_e_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void nnROSNode_SystemCore_release_e(dsp_simulink_MovingAverage_nn_T *obj)
{
  e_dsp_private_SlidingWindowAv_T *obj_0;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1) {
      obj_0->isInitialized = 2;
    }

    obj->NumChannels = -1;
  }
}

static void nnROSNode_SystemCore_delete_e(dsp_simulink_MovingAverage_nn_T *obj)
{
  nnROSNode_SystemCore_release_e(obj);
}

static void matlabCodegenHandle_matlabCod_e(dsp_simulink_MovingAverage_nn_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    nnROSNode_SystemCore_delete_e(obj);
  }
}

static void nnROSNode_SystemCore_release(dsp_MovingMaximum_nnROSNode_T *obj)
{
  e_dsp_private_SlidingWindowMa_T *obj_0;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj->NumChannels = -1;
    obj_0 = obj->pStat;
    if (obj_0->isInitialized == 1) {
      obj_0->isInitialized = 2;
    }
  }
}

static void nnROSNode_SystemCore_delete(dsp_MovingMaximum_nnROSNode_T *obj)
{
  nnROSNode_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_MovingMaximum_nnROSNode_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    nnROSNode_SystemCore_delete(obj);
  }
}

static void matlabCodegenHandle_matlabCo_eh(robotics_slros_internal_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void nnROSNode_step(void)
{
  // local scratch DWork variables
  int32_T ForEach_itr;
  real_T *rtb_Addminx_0;
  boolean_T exitg1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S4>/SourceBlock' incorporates:
  //   Inport: '<S85>/In1'

  nnROSNode_B.b_varargout_1 = Sub_nnROSNode_245.getLatestMessage
    (&nnROSNode_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S85>/Enable'

  if (nnROSNode_B.b_varargout_1) {
    nnROSNode_B.In1 = nnROSNode_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Trigonometry: '<S87>/sincos' incorporates:
  //   DataTypeConversion: '<S5>/Data Type Conversion2'
  //   SignalConversion: '<S5>/ConcatBufferAtVector ConcatenateIn1'

  nnROSNode_B.SumofElements[0] = cos((real_T)nnROSNode_B.In1.Data[11]);

  // DataTypeConversion: '<S5>/Data Type Conversion2' incorporates:
  //   SignalConversion: '<S5>/ConcatBufferAtVector ConcatenateIn1'
  //   Trigonometry: '<S87>/sincos'

  nnROSNode_B.Product[0] = sin((real_T)nnROSNode_B.In1.Data[11]);

  // Trigonometry: '<S87>/sincos' incorporates:
  //   DataTypeConversion: '<S5>/Data Type Conversion2'
  //   SignalConversion: '<S5>/ConcatBufferAtVector ConcatenateIn2'

  nnROSNode_B.SumofElements[1] = cos((real_T)nnROSNode_B.In1.Data[12]);

  // DataTypeConversion: '<S5>/Data Type Conversion2' incorporates:
  //   SignalConversion: '<S5>/ConcatBufferAtVector ConcatenateIn2'
  //   Trigonometry: '<S87>/sincos'

  nnROSNode_B.Product[1] = sin((real_T)nnROSNode_B.In1.Data[12]);

  // Trigonometry: '<S87>/sincos' incorporates:
  //   DataTypeConversion: '<S5>/Data Type Conversion2'
  //   SignalConversion: '<S5>/ConcatBufferAtVector ConcatenateIn3'

  nnROSNode_B.SumofElements[2] = cos((real_T)nnROSNode_B.In1.Data[13]);
  nnROSNode_B.cumRevIndex = sin((real_T)nnROSNode_B.In1.Data[13]);

  // Fcn: '<S87>/Fcn11'
  nnROSNode_B.Addminy[0] = nnROSNode_B.SumofElements[1] *
    nnROSNode_B.SumofElements[0];

  // Fcn: '<S87>/Fcn21' incorporates:
  //   Fcn: '<S87>/Fcn22'

  nnROSNode_B.csum = nnROSNode_B.cumRevIndex * nnROSNode_B.Product[1];
  nnROSNode_B.Addminy[1] = nnROSNode_B.csum * nnROSNode_B.SumofElements[0] -
    nnROSNode_B.SumofElements[2] * nnROSNode_B.Product[0];

  // Fcn: '<S87>/Fcn31' incorporates:
  //   Fcn: '<S87>/Fcn32'

  nnROSNode_B.z = nnROSNode_B.SumofElements[2] * nnROSNode_B.Product[1];
  nnROSNode_B.Addminy[2] = nnROSNode_B.z * nnROSNode_B.SumofElements[0] +
    nnROSNode_B.cumRevIndex * nnROSNode_B.Product[0];

  // Fcn: '<S87>/Fcn12'
  nnROSNode_B.Addminy[3] = nnROSNode_B.SumofElements[1] * nnROSNode_B.Product[0];

  // Fcn: '<S87>/Fcn22'
  nnROSNode_B.Addminy[4] = nnROSNode_B.csum * nnROSNode_B.Product[0] +
    nnROSNode_B.SumofElements[2] * nnROSNode_B.SumofElements[0];

  // Fcn: '<S87>/Fcn32'
  nnROSNode_B.Addminy[5] = nnROSNode_B.z * nnROSNode_B.Product[0] -
    nnROSNode_B.cumRevIndex * nnROSNode_B.SumofElements[0];

  // Fcn: '<S87>/Fcn13'
  nnROSNode_B.Addminy[6] = -nnROSNode_B.Product[1];

  // Fcn: '<S87>/Fcn23'
  nnROSNode_B.Addminy[7] = nnROSNode_B.cumRevIndex * nnROSNode_B.SumofElements[1];

  // Fcn: '<S87>/Fcn33'
  nnROSNode_B.Addminy[8] = nnROSNode_B.SumofElements[2] *
    nnROSNode_B.SumofElements[1];
  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 3;
       nnROSNode_B.placement++) {
    // Math: '<S88>/Transpose' incorporates:
    //   Math: '<S86>/Transpose1'

    nnROSNode_B.rtb_Addminx_tmp[3 * nnROSNode_B.placement] =
      nnROSNode_B.Addminy[nnROSNode_B.placement];
    nnROSNode_B.rtb_Addminx_tmp[1 + 3 * nnROSNode_B.placement] =
      nnROSNode_B.Addminy[nnROSNode_B.placement + 3];
    nnROSNode_B.rtb_Addminx_tmp[2 + 3 * nnROSNode_B.placement] =
      nnROSNode_B.Addminy[nnROSNode_B.placement + 6];
  }

  // Math: '<S88>/Transpose'
  memcpy(&nnROSNode_B.Addminx[0], &nnROSNode_B.rtb_Addminx_tmp[0], 9U * sizeof
         (real_T));

  // DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
  //   SignalConversion: '<S5>/ConcatBufferAtVector Concatenate1In1'
  //   SignalConversion: '<S5>/ConcatBufferAtVector Concatenate1In2'
  //   SignalConversion: '<S5>/ConcatBufferAtVector Concatenate1In3'

  nnROSNode_B.Product[0] = nnROSNode_B.In1.Data[14];
  nnROSNode_B.Product[1] = nnROSNode_B.In1.Data[15];
  nnROSNode_B.Product[2] = nnROSNode_B.In1.Data[16];

  // DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
  //   SignalConversion: '<S5>/ConcatBufferAtVector Concatenate2In1'
  //   SignalConversion: '<S5>/ConcatBufferAtVector Concatenate2In2'
  //   SignalConversion: '<S5>/ConcatBufferAtVector Concatenate2In3'

  nnROSNode_B.DataTypeConversion1[0] = nnROSNode_B.In1.Data[17];
  nnROSNode_B.DataTypeConversion1[1] = nnROSNode_B.In1.Data[18];
  nnROSNode_B.DataTypeConversion1[2] = nnROSNode_B.In1.Data[19];

  // Gain: '<S91>/Motordirections'
  nnROSNode_B.u0 = nnROSNode_P.Motordirections_Gain[0] * nnROSNode_B.In1.Data[7];

  // Saturate: '<S91>/Saturation5'
  if (nnROSNode_B.u0 > nnROSNode_P.Saturation5_UpperSat) {
    nnROSNode_B.u0 = nnROSNode_P.Saturation5_UpperSat;
  } else {
    if (nnROSNode_B.u0 < nnROSNode_P.Saturation5_LowerSat) {
      nnROSNode_B.u0 = nnROSNode_P.Saturation5_LowerSat;
    }
  }

  // Gain: '<S91>/motorsToW2_Gain' incorporates:
  //   Gain: '<S91>/Motordirections1'

  nnROSNode_B.u0 = nnROSNode_P.Motordirections1_Gain[0] * nnROSNode_B.u0 *
    nnROSNode_P.motorsToW2_Gain_Gain;

  // Sqrt: '<S91>/Signed Sqrt'
  //
  //  About '<S91>/Signed Sqrt':
  //   Operator: signedSqrt

  if (nnROSNode_B.u0 < 0.0F) {
    nnROSNode_B.SignedSqrt[0] = -static_cast<real32_T>(sqrt((real_T)(real32_T)
      fabs((real_T)nnROSNode_B.u0)));
  } else {
    nnROSNode_B.SignedSqrt[0] = static_cast<real32_T>(sqrt((real_T)
      nnROSNode_B.u0));
  }

  // Gain: '<S91>/Motordirections'
  nnROSNode_B.u0 = nnROSNode_P.Motordirections_Gain[1] * nnROSNode_B.In1.Data[8];

  // Saturate: '<S91>/Saturation5'
  if (nnROSNode_B.u0 > nnROSNode_P.Saturation5_UpperSat) {
    nnROSNode_B.u0 = nnROSNode_P.Saturation5_UpperSat;
  } else {
    if (nnROSNode_B.u0 < nnROSNode_P.Saturation5_LowerSat) {
      nnROSNode_B.u0 = nnROSNode_P.Saturation5_LowerSat;
    }
  }

  // Gain: '<S91>/motorsToW2_Gain' incorporates:
  //   Gain: '<S91>/Motordirections1'

  nnROSNode_B.u0 = nnROSNode_P.Motordirections1_Gain[1] * nnROSNode_B.u0 *
    nnROSNode_P.motorsToW2_Gain_Gain;

  // Sqrt: '<S91>/Signed Sqrt'
  //
  //  About '<S91>/Signed Sqrt':
  //   Operator: signedSqrt

  if (nnROSNode_B.u0 < 0.0F) {
    nnROSNode_B.SignedSqrt[1] = -static_cast<real32_T>(sqrt((real_T)(real32_T)
      fabs((real_T)nnROSNode_B.u0)));
  } else {
    nnROSNode_B.SignedSqrt[1] = static_cast<real32_T>(sqrt((real_T)
      nnROSNode_B.u0));
  }

  // Gain: '<S91>/Motordirections'
  nnROSNode_B.u0 = nnROSNode_P.Motordirections_Gain[2] * nnROSNode_B.In1.Data[9];

  // Saturate: '<S91>/Saturation5'
  if (nnROSNode_B.u0 > nnROSNode_P.Saturation5_UpperSat) {
    nnROSNode_B.u0 = nnROSNode_P.Saturation5_UpperSat;
  } else {
    if (nnROSNode_B.u0 < nnROSNode_P.Saturation5_LowerSat) {
      nnROSNode_B.u0 = nnROSNode_P.Saturation5_LowerSat;
    }
  }

  // Gain: '<S91>/motorsToW2_Gain' incorporates:
  //   Gain: '<S91>/Motordirections1'

  nnROSNode_B.u0 = nnROSNode_P.Motordirections1_Gain[2] * nnROSNode_B.u0 *
    nnROSNode_P.motorsToW2_Gain_Gain;

  // Sqrt: '<S91>/Signed Sqrt'
  //
  //  About '<S91>/Signed Sqrt':
  //   Operator: signedSqrt

  if (nnROSNode_B.u0 < 0.0F) {
    nnROSNode_B.SignedSqrt[2] = -static_cast<real32_T>(sqrt((real_T)(real32_T)
      fabs((real_T)nnROSNode_B.u0)));
  } else {
    nnROSNode_B.SignedSqrt[2] = static_cast<real32_T>(sqrt((real_T)
      nnROSNode_B.u0));
  }

  // Gain: '<S91>/Motordirections'
  nnROSNode_B.u0 = nnROSNode_P.Motordirections_Gain[3] * nnROSNode_B.In1.Data[10];

  // Saturate: '<S91>/Saturation5'
  if (nnROSNode_B.u0 > nnROSNode_P.Saturation5_UpperSat) {
    nnROSNode_B.u0 = nnROSNode_P.Saturation5_UpperSat;
  } else {
    if (nnROSNode_B.u0 < nnROSNode_P.Saturation5_LowerSat) {
      nnROSNode_B.u0 = nnROSNode_P.Saturation5_LowerSat;
    }
  }

  // Gain: '<S91>/motorsToW2_Gain' incorporates:
  //   Gain: '<S91>/Motordirections1'

  nnROSNode_B.u0 = nnROSNode_P.Motordirections1_Gain[3] * nnROSNode_B.u0 *
    nnROSNode_P.motorsToW2_Gain_Gain;

  // Sqrt: '<S91>/Signed Sqrt'
  //
  //  About '<S91>/Signed Sqrt':
  //   Operator: signedSqrt

  if (nnROSNode_B.u0 < 0.0F) {
    nnROSNode_B.SignedSqrt[3] = -static_cast<real32_T>(sqrt((real_T)(real32_T)
      fabs((real_T)nnROSNode_B.u0)));
  } else {
    nnROSNode_B.SignedSqrt[3] = static_cast<real32_T>(sqrt((real_T)
      nnROSNode_B.u0));
  }

  // Constant: '<S86>/D1'
  nnROSNode_B.VectorConcatenate[0] = nnROSNode_P.D1_Value[0];

  // Constant: '<S86>/D2'
  nnROSNode_B.VectorConcatenate[3] = nnROSNode_P.D2_Value[0];

  // Constant: '<S86>/D3'
  nnROSNode_B.VectorConcatenate[6] = nnROSNode_P.D3_Value[0];

  // Constant: '<S86>/D4'
  nnROSNode_B.VectorConcatenate[9] = nnROSNode_P.D4_Value[0];

  // Constant: '<S86>/D1'
  nnROSNode_B.VectorConcatenate[1] = nnROSNode_P.D1_Value[1];

  // Constant: '<S86>/D2'
  nnROSNode_B.VectorConcatenate[4] = nnROSNode_P.D2_Value[1];

  // Constant: '<S86>/D3'
  nnROSNode_B.VectorConcatenate[7] = nnROSNode_P.D3_Value[1];

  // Constant: '<S86>/D4'
  nnROSNode_B.VectorConcatenate[10] = nnROSNode_P.D4_Value[1];

  // Constant: '<S86>/D1'
  nnROSNode_B.VectorConcatenate[2] = nnROSNode_P.D1_Value[2];

  // Constant: '<S86>/D2'
  nnROSNode_B.VectorConcatenate[5] = nnROSNode_P.D2_Value[2];

  // Constant: '<S86>/D3'
  nnROSNode_B.VectorConcatenate[8] = nnROSNode_P.D3_Value[2];

  // Constant: '<S86>/D4'
  nnROSNode_B.VectorConcatenate[11] = nnROSNode_P.D4_Value[2];

  // Outputs for Iterator SubSystem: '<S86>/For Each Subsystem' incorporates:
  //   ForEach: '<S90>/For Each'

  for (ForEach_itr = 0; ForEach_itr < 4; ForEach_itr++) {
    // ForEachSliceSelector: '<S90>/ImpSel_InsertedFor_D_at_outport_0'
    nnROSNode_B.ImpSel_InsertedFor_D_at_out[0] = nnROSNode_B.VectorConcatenate[3
      * ForEach_itr];
    nnROSNode_B.ImpSel_InsertedFor_D_at_out[1] = nnROSNode_B.VectorConcatenate[3
      * ForEach_itr + 1];
    nnROSNode_B.ImpSel_InsertedFor_D_at_out[2] = nnROSNode_B.VectorConcatenate[3
      * ForEach_itr + 2];

    // Outputs for Atomic SubSystem: '<S90>/Rotor_Dynamics'
    // ForEachSliceAssignment: '<S90>/ImpAsg_InsertedFor_Forces_at_inport_0' incorporates:
    //   Constant: '<S5>/Air Density'
    //   ForEachSliceSelector: '<S90>/ImpSel_InsertedFor_w_at_outport_0'
    //   Math: '<S86>/Transpose'

    nnROSNode_RotorDynamics(nnROSNode_B.Product, nnROSNode_B.DataTypeConversion1,
      nnROSNode_P.rho, nnROSNode_B.SignedSqrt[ForEach_itr],
      nnROSNode_B.ImpSel_InsertedFor_D_at_out,
      &nnROSNode_B.ImpAsg_InsertedFor_Forces_a[3 * ForEach_itr],
      nnROSNode_B.SumofElements, &nnROSNode_P.CoreSubsys.Rotor_Dynamics);

    // End of Outputs for SubSystem: '<S90>/Rotor_Dynamics'
  }

  // End of Outputs for SubSystem: '<S86>/For Each Subsystem'

  // Sum: '<S86>/Sum of Elements'
  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 3;
       nnROSNode_B.placement++) {
    nnROSNode_B.SumofElements[nnROSNode_B.placement] =
      ((nnROSNode_B.ImpAsg_InsertedFor_Forces_a[nnROSNode_B.placement + 3] +
        nnROSNode_B.ImpAsg_InsertedFor_Forces_a[nnROSNode_B.placement]) +
       nnROSNode_B.ImpAsg_InsertedFor_Forces_a[nnROSNode_B.placement + 6]) +
      nnROSNode_B.ImpAsg_InsertedFor_Forces_a[nnROSNode_B.placement + 9];
  }

  // End of Sum: '<S86>/Sum of Elements'

  // Product: '<S88>/Product'
  rtb_Addminx_0 = &nnROSNode_B.Addminx[0];

  // Gain: '<S88>/Mass' incorporates:
  //   Bias: '<S5>/Bias'
  //   SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn1'
  //   SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn2'
  //   SignalConversion: '<S88>/ConcatBufferAtVector ConcatenateIn3'
  //   Sum: '<S88>/Sum'

  nnROSNode_B.u0 = (nnROSNode_B.In1.Data[1] - (nnROSNode_B.In1.Data[4] +
    nnROSNode_P.Bias_Bias[0])) * nnROSNode_P.Mass_Gain;
  nnROSNode_B.unnamed_idx_1 = (nnROSNode_B.In1.Data[2] - (nnROSNode_B.In1.Data[5]
    + nnROSNode_P.Bias_Bias[1])) * nnROSNode_P.Mass_Gain;
  nnROSNode_B.unnamed_idx_2 = (nnROSNode_B.In1.Data[3] - (nnROSNode_B.In1.Data[6]
    + nnROSNode_P.Bias_Bias[2])) * nnROSNode_P.Mass_Gain;
  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 3;
       nnROSNode_B.placement++) {
    // Sum: '<S89>/Add1' incorporates:
    //   Product: '<S86>/Matrix Multiply'
    //   Product: '<S88>/Product'

    nnROSNode_B.Product[nnROSNode_B.placement] =
      ((nnROSNode_B.rtb_Addminx_tmp[nnROSNode_B.placement + 3] *
        nnROSNode_B.SumofElements[1] +
        nnROSNode_B.rtb_Addminx_tmp[nnROSNode_B.placement] *
        nnROSNode_B.SumofElements[0]) +
       nnROSNode_B.rtb_Addminx_tmp[nnROSNode_B.placement + 6] *
       nnROSNode_B.SumofElements[2]) - (rtb_Addminx_0[nnROSNode_B.placement + 6]
      * nnROSNode_B.unnamed_idx_2 + (rtb_Addminx_0[nnROSNode_B.placement + 3] *
      nnROSNode_B.unnamed_idx_1 + rtb_Addminx_0[nnROSNode_B.placement] *
      nnROSNode_B.u0));
  }

  // MATLABSystem: '<S2>/Moving Average'
  if (nnROSNode_DW.obj.TunablePropsChanged) {
    nnROSNode_DW.obj.TunablePropsChanged = false;
  }

  if (nnROSNode_DW.obj.pStatistic->isInitialized != 1) {
    nnROSNode_DW.obj.pStatistic->isSetupComplete = false;
    nnROSNode_DW.obj.pStatistic->isInitialized = 1;
    nnROSNode_DW.obj.pStatistic->pCumSum = 0.0;
    nnROSNode_DW.obj.pStatistic->pCumRevIndex = 1.0;
    nnROSNode_DW.obj.pStatistic->isSetupComplete = true;
    nnROSNode_DW.obj.pStatistic->pCumSum = 0.0;
    memset(&nnROSNode_DW.obj.pStatistic->pCumSumRev[0], 0, 99U * sizeof(real_T));
    nnROSNode_DW.obj.pStatistic->pCumRevIndex = 1.0;
  }

  nnROSNode_B.cumRevIndex = nnROSNode_DW.obj.pStatistic->pCumRevIndex;
  nnROSNode_B.csum = nnROSNode_DW.obj.pStatistic->pCumSum;
  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 99;
       nnROSNode_B.placement++) {
    nnROSNode_B.csumrev[nnROSNode_B.placement] =
      nnROSNode_DW.obj.pStatistic->pCumSumRev[nnROSNode_B.placement];
  }

  for (nnROSNode_B.i = 0; nnROSNode_B.i < 3; nnROSNode_B.i++) {
    nnROSNode_B.csum += nnROSNode_B.Product[nnROSNode_B.i];
    nnROSNode_B.numElements = static_cast<int32_T>(nnROSNode_B.cumRevIndex) - 1;
    nnROSNode_B.z = nnROSNode_B.csumrev[nnROSNode_B.numElements] +
      nnROSNode_B.csum;
    nnROSNode_B.csumrev[nnROSNode_B.numElements] =
      nnROSNode_B.Product[nnROSNode_B.i];
    if (nnROSNode_B.cumRevIndex != 99.0) {
      nnROSNode_B.cumRevIndex++;
    } else {
      nnROSNode_B.cumRevIndex = 1.0;
      nnROSNode_B.csum = 0.0;
      for (nnROSNode_B.numElements = 97; nnROSNode_B.numElements >= 0;
           nnROSNode_B.numElements--) {
        nnROSNode_B.csumrev[nnROSNode_B.numElements] +=
          nnROSNode_B.csumrev[nnROSNode_B.numElements + 1];
      }
    }

    nnROSNode_B.SumofElements[nnROSNode_B.i] = nnROSNode_B.z / 100.0;
  }

  nnROSNode_DW.obj.pStatistic->pCumSum = nnROSNode_B.csum;
  memcpy(&nnROSNode_DW.obj.pStatistic->pCumSumRev[0], &nnROSNode_B.csumrev[0],
         99U * sizeof(real_T));
  nnROSNode_DW.obj.pStatistic->pCumRevIndex = nnROSNode_B.cumRevIndex;

  // SignalConversion: '<S2>/TmpMLSysMemLayoutBufferAtMoving AverageOutport1' incorporates:
  //   MATLABSystem: '<S2>/Moving Average'

  nnROSNode_B.Addminy[0] = nnROSNode_B.SumofElements[0];
  nnROSNode_B.Addminy[1] = nnROSNode_B.SumofElements[1];
  nnROSNode_B.Addminy[2] = nnROSNode_B.SumofElements[2];

  // MATLABSystem: '<S2>/Moving Maximum'
  if (nnROSNode_DW.obj_o.pStat->isInitialized != 1) {
    nnROSNode_DW.obj_o.pStat->isSetupComplete = false;
    nnROSNode_DW.obj_o.pStat->isInitialized = 1;
    nnROSNode_DW.obj_o.pStat->isSetupComplete = true;
    memset(&nnROSNode_DW.obj_o.pStat->pBuffer[0], 0, 100U * sizeof(real_T));
    memset(&nnROSNode_DW.obj_o.pStat->pBufferIdx[0], 0, 100U * sizeof(int32_T));
    nnROSNode_DW.obj_o.pStat->pNumElements = 0;
    nnROSNode_DW.obj_o.pStat->pCount = 1;
    nnROSNode_DW.obj_o.pStat->pTop = 1;
  }

  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 100;
       nnROSNode_B.placement++) {
    nnROSNode_B.buf[nnROSNode_B.placement] = nnROSNode_DW.obj_o.pStat->
      pBuffer[nnROSNode_B.placement];
    nnROSNode_B.bufIdx[nnROSNode_B.placement] =
      nnROSNode_DW.obj_o.pStat->pBufferIdx[nnROSNode_B.placement];
  }

  nnROSNode_B.numElements = nnROSNode_DW.obj_o.pStat->pNumElements;
  nnROSNode_B.cnt = nnROSNode_DW.obj_o.pStat->pCount;
  nnROSNode_B.top = nnROSNode_DW.obj_o.pStat->pTop;
  for (nnROSNode_B.i = 0; nnROSNode_B.i < 3; nnROSNode_B.i++) {
    if (nnROSNode_B.numElements > 0) {
      nnROSNode_B.placement = nnROSNode_B.bufIdx[nnROSNode_B.top - 1];
      if ((nnROSNode_B.cnt >= 0) && (nnROSNode_B.placement < nnROSNode_B.cnt -
           MAX_int32_T)) {
        nnROSNode_B.placement = MAX_int32_T;
      } else if ((nnROSNode_B.cnt < 0) && (nnROSNode_B.placement >
                  nnROSNode_B.cnt - MIN_int32_T)) {
        nnROSNode_B.placement = MIN_int32_T;
      } else {
        nnROSNode_B.placement = nnROSNode_B.cnt - nnROSNode_B.placement;
      }

      if (nnROSNode_B.placement == 100) {
        if (nnROSNode_B.top > 2147483646) {
          nnROSNode_B.top = MAX_int32_T;
        } else {
          nnROSNode_B.top++;
        }

        if (nnROSNode_B.top > 100) {
          nnROSNode_B.top = 1;
        }

        nnROSNode_B.numElements--;
      }
    }

    if ((nnROSNode_B.numElements < 0) && (nnROSNode_B.top < MIN_int32_T
         - nnROSNode_B.numElements)) {
      nnROSNode_B.qY = MIN_int32_T;
    } else if ((nnROSNode_B.numElements > 0) && (nnROSNode_B.top > MAX_int32_T -
                nnROSNode_B.numElements)) {
      nnROSNode_B.qY = MAX_int32_T;
    } else {
      nnROSNode_B.qY = nnROSNode_B.numElements + nnROSNode_B.top;
    }

    if (nnROSNode_B.qY < -2147483647) {
      nnROSNode_B.placement = MIN_int32_T;
    } else {
      nnROSNode_B.placement = nnROSNode_B.qY - 1;
    }

    if (nnROSNode_B.placement >= 100) {
      nnROSNode_B.placement -= 100;
    }

    memset(&nnROSNode_B.ind_vect[0], 0, 100U * sizeof(int32_T));
    nnROSNode_B.N = nnROSNode_B.numElements;
    if (nnROSNode_B.numElements > 0) {
      nnROSNode_B.count = 1;
      nnROSNode_B.qY = nnROSNode_B.numElements - 1;
      if (nnROSNode_B.qY >= 0) {
        if (nnROSNode_B.top < -2147483647) {
          nnROSNode_B.qY_c = MIN_int32_T;
        } else {
          nnROSNode_B.qY_c = nnROSNode_B.top - 1;
        }
      }

      for (nnROSNode_B.b_ind = nnROSNode_B.qY; nnROSNode_B.b_ind >= 0;
           nnROSNode_B.b_ind--) {
        if ((nnROSNode_B.qY_c < 0) && (nnROSNode_B.b_ind < MIN_int32_T
             - nnROSNode_B.qY_c)) {
          nnROSNode_B.indVal = MIN_int32_T;
        } else if ((nnROSNode_B.qY_c > 0) && (nnROSNode_B.b_ind > MAX_int32_T
                    - nnROSNode_B.qY_c)) {
          nnROSNode_B.indVal = MAX_int32_T;
        } else {
          nnROSNode_B.indVal = nnROSNode_B.qY_c + nnROSNode_B.b_ind;
        }

        if (nnROSNode_B.indVal >= 100) {
          nnROSNode_B.indVal -= 100;
        }

        nnROSNode_B.ind_vect[nnROSNode_B.count - 1] = nnROSNode_B.indVal + 1;
        if (nnROSNode_B.count > 2147483646) {
          nnROSNode_B.count = MAX_int32_T;
        } else {
          nnROSNode_B.count++;
        }
      }

      nnROSNode_B.qY = 1;
      exitg1 = false;
      while ((!exitg1) && (nnROSNode_B.qY - 1 <= nnROSNode_B.numElements - 1)) {
        nnROSNode_B.count = nnROSNode_B.qY - 1;
        if (nnROSNode_B.Product[nnROSNode_B.i] <
            nnROSNode_B.buf[nnROSNode_B.ind_vect[nnROSNode_B.count] - 1]) {
          exitg1 = true;
        } else {
          nnROSNode_B.placement = nnROSNode_B.ind_vect[nnROSNode_B.count] - 1;
          if (nnROSNode_B.N < -2147483647) {
            nnROSNode_B.N = MIN_int32_T;
          } else {
            nnROSNode_B.N--;
          }

          nnROSNode_B.qY++;
        }
      }
    }

    nnROSNode_B.buf[nnROSNode_B.placement] = nnROSNode_B.Product[nnROSNode_B.i];
    nnROSNode_B.bufIdx[nnROSNode_B.placement] = nnROSNode_B.cnt;
    if (nnROSNode_B.N > 2147483646) {
      nnROSNode_B.numElements = MAX_int32_T;
    } else {
      nnROSNode_B.numElements = nnROSNode_B.N + 1;
    }

    nnROSNode_B.SumofElements[nnROSNode_B.i] = nnROSNode_B.buf[nnROSNode_B.top -
      1];
    if (nnROSNode_B.cnt > 2147483646) {
      nnROSNode_B.cnt = MAX_int32_T;
    } else {
      nnROSNode_B.cnt++;
    }

    if (nnROSNode_B.cnt > 1000000) {
      nnROSNode_B.cnt -= 1000000;
      for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 100;
           nnROSNode_B.placement++) {
        if (nnROSNode_B.bufIdx[nnROSNode_B.placement] < -2146483648) {
          nnROSNode_B.N = MIN_int32_T;
        } else {
          nnROSNode_B.N = nnROSNode_B.bufIdx[nnROSNode_B.placement] - 1000000;
        }

        nnROSNode_B.bufIdx[nnROSNode_B.placement] = nnROSNode_B.N;
      }
    }
  }

  memcpy(&nnROSNode_DW.obj_o.pStat->pBuffer[0], &nnROSNode_B.buf[0], 100U *
         sizeof(real_T));
  memcpy(&nnROSNode_DW.obj_o.pStat->pBufferIdx[0], &nnROSNode_B.bufIdx[0], 100U *
         sizeof(int32_T));
  nnROSNode_DW.obj_o.pStat->pNumElements = nnROSNode_B.numElements;
  nnROSNode_DW.obj_o.pStat->pCount = nnROSNode_B.cnt;
  nnROSNode_DW.obj_o.pStat->pTop = nnROSNode_B.top;

  // SignalConversion: '<S2>/TmpMLSysMemLayoutBufferAtMoving MaximumOutport1' incorporates:
  //   MATLABSystem: '<S2>/Moving Maximum'

  nnROSNode_B.Addminy[3] = nnROSNode_B.SumofElements[0];

  // Constant: '<S2>/maxDeviation'
  nnROSNode_B.Addminy[6] = nnROSNode_P.maxDeviationTarget[0];

  // SignalConversion: '<S2>/TmpMLSysMemLayoutBufferAtMoving MaximumOutport1' incorporates:
  //   MATLABSystem: '<S2>/Moving Maximum'

  nnROSNode_B.Addminy[4] = nnROSNode_B.SumofElements[1];

  // Constant: '<S2>/maxDeviation'
  nnROSNode_B.Addminy[7] = nnROSNode_P.maxDeviationTarget[1];

  // SignalConversion: '<S2>/TmpMLSysMemLayoutBufferAtMoving MaximumOutport1' incorporates:
  //   MATLABSystem: '<S2>/Moving Maximum'

  nnROSNode_B.Addminy[5] = nnROSNode_B.SumofElements[2];

  // Constant: '<S2>/maxDeviation'
  nnROSNode_B.Addminy[8] = nnROSNode_P.maxDeviationTarget[2];

  // Gain: '<S83>/range y // range x'
  nnROSNode_B.x = nnROSNode_P.mapminmax_ymax - nnROSNode_P.mapminmax_ymin;

  // DotProduct: '<S14>/Dot Product'
  nnROSNode_B.cumRevIndex = 0.0;

  // DotProduct: '<S25>/Dot Product'
  nnROSNode_B.csum = 0.0;

  // DotProduct: '<S36>/Dot Product'
  nnROSNode_B.z = 0.0;

  // DotProduct: '<S47>/Dot Product'
  nnROSNode_B.d0 = 0.0;

  // DotProduct: '<S58>/Dot Product'
  nnROSNode_B.d1 = 0.0;

  // DotProduct: '<S60>/Dot Product'
  nnROSNode_B.d2 = 0.0;

  // DotProduct: '<S61>/Dot Product'
  nnROSNode_B.d3 = 0.0;

  // DotProduct: '<S62>/Dot Product'
  nnROSNode_B.d4 = 0.0;

  // DotProduct: '<S63>/Dot Product'
  nnROSNode_B.d5 = 0.0;

  // DotProduct: '<S15>/Dot Product'
  nnROSNode_B.d6 = 0.0;

  // DotProduct: '<S16>/Dot Product'
  nnROSNode_B.d7 = 0.0;

  // DotProduct: '<S17>/Dot Product'
  nnROSNode_B.d8 = 0.0;

  // DotProduct: '<S18>/Dot Product'
  nnROSNode_B.d9 = 0.0;

  // DotProduct: '<S19>/Dot Product'
  nnROSNode_B.d10 = 0.0;

  // DotProduct: '<S20>/Dot Product'
  nnROSNode_B.d11 = 0.0;

  // DotProduct: '<S21>/Dot Product'
  nnROSNode_B.d12 = 0.0;

  // DotProduct: '<S22>/Dot Product'
  nnROSNode_B.d13 = 0.0;

  // DotProduct: '<S23>/Dot Product'
  nnROSNode_B.d14 = 0.0;

  // DotProduct: '<S24>/Dot Product'
  nnROSNode_B.d15 = 0.0;

  // DotProduct: '<S26>/Dot Product'
  nnROSNode_B.d16 = 0.0;

  // DotProduct: '<S27>/Dot Product'
  nnROSNode_B.d17 = 0.0;

  // DotProduct: '<S28>/Dot Product'
  nnROSNode_B.d18 = 0.0;

  // DotProduct: '<S29>/Dot Product'
  nnROSNode_B.d19 = 0.0;

  // DotProduct: '<S30>/Dot Product'
  nnROSNode_B.d20 = 0.0;

  // DotProduct: '<S31>/Dot Product'
  nnROSNode_B.d21 = 0.0;

  // DotProduct: '<S32>/Dot Product'
  nnROSNode_B.d22 = 0.0;

  // DotProduct: '<S33>/Dot Product'
  nnROSNode_B.d23 = 0.0;

  // DotProduct: '<S34>/Dot Product'
  nnROSNode_B.d24 = 0.0;

  // DotProduct: '<S35>/Dot Product'
  nnROSNode_B.d25 = 0.0;

  // DotProduct: '<S37>/Dot Product'
  nnROSNode_B.d26 = 0.0;

  // DotProduct: '<S38>/Dot Product'
  nnROSNode_B.d27 = 0.0;

  // DotProduct: '<S39>/Dot Product'
  nnROSNode_B.d28 = 0.0;

  // DotProduct: '<S40>/Dot Product'
  nnROSNode_B.d29 = 0.0;

  // DotProduct: '<S41>/Dot Product'
  nnROSNode_B.d30 = 0.0;

  // DotProduct: '<S42>/Dot Product'
  nnROSNode_B.d31 = 0.0;

  // DotProduct: '<S43>/Dot Product'
  nnROSNode_B.d32 = 0.0;

  // DotProduct: '<S44>/Dot Product'
  nnROSNode_B.d33 = 0.0;

  // DotProduct: '<S45>/Dot Product'
  nnROSNode_B.d34 = 0.0;

  // DotProduct: '<S46>/Dot Product'
  nnROSNode_B.d35 = 0.0;

  // DotProduct: '<S48>/Dot Product'
  nnROSNode_B.d36 = 0.0;

  // DotProduct: '<S49>/Dot Product'
  nnROSNode_B.d37 = 0.0;

  // DotProduct: '<S50>/Dot Product'
  nnROSNode_B.d38 = 0.0;

  // DotProduct: '<S51>/Dot Product'
  nnROSNode_B.d39 = 0.0;

  // DotProduct: '<S52>/Dot Product'
  nnROSNode_B.d40 = 0.0;

  // DotProduct: '<S53>/Dot Product'
  nnROSNode_B.d41 = 0.0;

  // DotProduct: '<S54>/Dot Product'
  nnROSNode_B.d42 = 0.0;

  // DotProduct: '<S55>/Dot Product'
  nnROSNode_B.d43 = 0.0;

  // DotProduct: '<S56>/Dot Product'
  nnROSNode_B.d44 = 0.0;

  // DotProduct: '<S57>/Dot Product'
  nnROSNode_B.d45 = 0.0;

  // DotProduct: '<S59>/Dot Product'
  nnROSNode_B.d46 = 0.0;
  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 9;
       nnROSNode_B.placement++) {
    // Bias: '<S83>/Add min y' incorporates:
    //   Bias: '<S83>/Subtract min x'
    //   Gain: '<S83>/range y // range x'

    nnROSNode_B.rtb_Addminy_m = nnROSNode_B.x /
      (nnROSNode_P.mapminmax_xmax[nnROSNode_B.placement] -
       nnROSNode_P.mapminmax_xmin[nnROSNode_B.placement]) *
      (nnROSNode_B.Addminy[nnROSNode_B.placement] +
       -nnROSNode_P.mapminmax_xmin[nnROSNode_B.placement]) +
      nnROSNode_P.mapminmax_ymin;

    // DotProduct: '<S14>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(1,:)''

    nnROSNode_B.cumRevIndex += nnROSNode_P.IW111_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S25>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(2,:)''

    nnROSNode_B.csum += nnROSNode_P.IW112_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S36>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(3,:)''

    nnROSNode_B.z += nnROSNode_P.IW113_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S47>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(4,:)''

    nnROSNode_B.d0 += nnROSNode_P.IW114_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S58>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(5,:)''

    nnROSNode_B.d1 += nnROSNode_P.IW115_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S60>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(6,:)''

    nnROSNode_B.d2 += nnROSNode_P.IW116_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S61>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(7,:)''

    nnROSNode_B.d3 += nnROSNode_P.IW117_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S62>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(8,:)''

    nnROSNode_B.d4 += nnROSNode_P.IW118_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S63>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(9,:)''

    nnROSNode_B.d5 += nnROSNode_P.IW119_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S15>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(10,:)''

    nnROSNode_B.d6 += nnROSNode_P.IW1110_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S16>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(11,:)''

    nnROSNode_B.d7 += nnROSNode_P.IW1111_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S17>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(12,:)''

    nnROSNode_B.d8 += nnROSNode_P.IW1112_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S18>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(13,:)''

    nnROSNode_B.d9 += nnROSNode_P.IW1113_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S19>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(14,:)''

    nnROSNode_B.d10 += nnROSNode_P.IW1114_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S20>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(15,:)''

    nnROSNode_B.d11 += nnROSNode_P.IW1115_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S21>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(16,:)''

    nnROSNode_B.d12 += nnROSNode_P.IW1116_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S22>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(17,:)''

    nnROSNode_B.d13 += nnROSNode_P.IW1117_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S23>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(18,:)''

    nnROSNode_B.d14 += nnROSNode_P.IW1118_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S24>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(19,:)''

    nnROSNode_B.d15 += nnROSNode_P.IW1119_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S26>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(20,:)''

    nnROSNode_B.d16 += nnROSNode_P.IW1120_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S27>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(21,:)''

    nnROSNode_B.d17 += nnROSNode_P.IW1121_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S28>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(22,:)''

    nnROSNode_B.d18 += nnROSNode_P.IW1122_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S29>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(23,:)''

    nnROSNode_B.d19 += nnROSNode_P.IW1123_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S30>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(24,:)''

    nnROSNode_B.d20 += nnROSNode_P.IW1124_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S31>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(25,:)''

    nnROSNode_B.d21 += nnROSNode_P.IW1125_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S32>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(26,:)''

    nnROSNode_B.d22 += nnROSNode_P.IW1126_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S33>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(27,:)''

    nnROSNode_B.d23 += nnROSNode_P.IW1127_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S34>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(28,:)''

    nnROSNode_B.d24 += nnROSNode_P.IW1128_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S35>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(29,:)''

    nnROSNode_B.d25 += nnROSNode_P.IW1129_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S37>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(30,:)''

    nnROSNode_B.d26 += nnROSNode_P.IW1130_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S38>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(31,:)''

    nnROSNode_B.d27 += nnROSNode_P.IW1131_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S39>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(32,:)''

    nnROSNode_B.d28 += nnROSNode_P.IW1132_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S40>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(33,:)''

    nnROSNode_B.d29 += nnROSNode_P.IW1133_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S41>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(34,:)''

    nnROSNode_B.d30 += nnROSNode_P.IW1134_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S42>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(35,:)''

    nnROSNode_B.d31 += nnROSNode_P.IW1135_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S43>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(36,:)''

    nnROSNode_B.d32 += nnROSNode_P.IW1136_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S44>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(37,:)''

    nnROSNode_B.d33 += nnROSNode_P.IW1137_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S45>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(38,:)''

    nnROSNode_B.d34 += nnROSNode_P.IW1138_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S46>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(39,:)''

    nnROSNode_B.d35 += nnROSNode_P.IW1139_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S48>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(40,:)''

    nnROSNode_B.d36 += nnROSNode_P.IW1140_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S49>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(41,:)''

    nnROSNode_B.d37 += nnROSNode_P.IW1141_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S50>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(42,:)''

    nnROSNode_B.d38 += nnROSNode_P.IW1142_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S51>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(43,:)''

    nnROSNode_B.d39 += nnROSNode_P.IW1143_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S52>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(44,:)''

    nnROSNode_B.d40 += nnROSNode_P.IW1144_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S53>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(45,:)''

    nnROSNode_B.d41 += nnROSNode_P.IW1145_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S54>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(46,:)''

    nnROSNode_B.d42 += nnROSNode_P.IW1146_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S55>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(47,:)''

    nnROSNode_B.d43 += nnROSNode_P.IW1147_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S56>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(48,:)''

    nnROSNode_B.d44 += nnROSNode_P.IW1148_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S57>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(49,:)''

    nnROSNode_B.d45 += nnROSNode_P.IW1149_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // DotProduct: '<S59>/Dot Product' incorporates:
    //   Constant: '<S12>/IW{1,1}(50,:)''

    nnROSNode_B.d46 += nnROSNode_P.IW1150_Value[nnROSNode_B.placement] *
      nnROSNode_B.rtb_Addminy_m;

    // Bias: '<S83>/Add min y' incorporates:
    //   Gain: '<S83>/range y // range x'

    nnROSNode_B.Addminy[nnROSNode_B.placement] = nnROSNode_B.rtb_Addminy_m;
  }

  // Sum: '<S7>/netsum' incorporates:
  //   DotProduct: '<S14>/Dot Product'
  //   DotProduct: '<S15>/Dot Product'
  //   DotProduct: '<S16>/Dot Product'
  //   DotProduct: '<S17>/Dot Product'
  //   DotProduct: '<S18>/Dot Product'
  //   DotProduct: '<S19>/Dot Product'
  //   DotProduct: '<S20>/Dot Product'
  //   DotProduct: '<S21>/Dot Product'
  //   DotProduct: '<S22>/Dot Product'
  //   DotProduct: '<S23>/Dot Product'
  //   DotProduct: '<S24>/Dot Product'
  //   DotProduct: '<S25>/Dot Product'
  //   DotProduct: '<S26>/Dot Product'
  //   DotProduct: '<S27>/Dot Product'
  //   DotProduct: '<S28>/Dot Product'
  //   DotProduct: '<S29>/Dot Product'
  //   DotProduct: '<S30>/Dot Product'
  //   DotProduct: '<S31>/Dot Product'
  //   DotProduct: '<S32>/Dot Product'
  //   DotProduct: '<S33>/Dot Product'
  //   DotProduct: '<S34>/Dot Product'
  //   DotProduct: '<S35>/Dot Product'
  //   DotProduct: '<S36>/Dot Product'
  //   DotProduct: '<S37>/Dot Product'
  //   DotProduct: '<S38>/Dot Product'
  //   DotProduct: '<S39>/Dot Product'
  //   DotProduct: '<S40>/Dot Product'
  //   DotProduct: '<S41>/Dot Product'
  //   DotProduct: '<S42>/Dot Product'
  //   DotProduct: '<S43>/Dot Product'
  //   DotProduct: '<S44>/Dot Product'
  //   DotProduct: '<S45>/Dot Product'
  //   DotProduct: '<S46>/Dot Product'
  //   DotProduct: '<S47>/Dot Product'
  //   DotProduct: '<S48>/Dot Product'
  //   DotProduct: '<S49>/Dot Product'
  //   DotProduct: '<S50>/Dot Product'
  //   DotProduct: '<S51>/Dot Product'
  //   DotProduct: '<S52>/Dot Product'
  //   DotProduct: '<S53>/Dot Product'
  //   DotProduct: '<S54>/Dot Product'
  //   DotProduct: '<S55>/Dot Product'
  //   DotProduct: '<S56>/Dot Product'
  //   DotProduct: '<S57>/Dot Product'
  //   DotProduct: '<S58>/Dot Product'
  //   DotProduct: '<S59>/Dot Product'
  //   DotProduct: '<S60>/Dot Product'
  //   DotProduct: '<S61>/Dot Product'
  //   DotProduct: '<S62>/Dot Product'
  //   DotProduct: '<S63>/Dot Product'

  nnROSNode_B.dv0[0] = nnROSNode_B.cumRevIndex;
  nnROSNode_B.dv0[1] = nnROSNode_B.csum;
  nnROSNode_B.dv0[2] = nnROSNode_B.z;
  nnROSNode_B.dv0[3] = nnROSNode_B.d0;
  nnROSNode_B.dv0[4] = nnROSNode_B.d1;
  nnROSNode_B.dv0[5] = nnROSNode_B.d2;
  nnROSNode_B.dv0[6] = nnROSNode_B.d3;
  nnROSNode_B.dv0[7] = nnROSNode_B.d4;
  nnROSNode_B.dv0[8] = nnROSNode_B.d5;
  nnROSNode_B.dv0[9] = nnROSNode_B.d6;
  nnROSNode_B.dv0[10] = nnROSNode_B.d7;
  nnROSNode_B.dv0[11] = nnROSNode_B.d8;
  nnROSNode_B.dv0[12] = nnROSNode_B.d9;
  nnROSNode_B.dv0[13] = nnROSNode_B.d10;
  nnROSNode_B.dv0[14] = nnROSNode_B.d11;
  nnROSNode_B.dv0[15] = nnROSNode_B.d12;
  nnROSNode_B.dv0[16] = nnROSNode_B.d13;
  nnROSNode_B.dv0[17] = nnROSNode_B.d14;
  nnROSNode_B.dv0[18] = nnROSNode_B.d15;
  nnROSNode_B.dv0[19] = nnROSNode_B.d16;
  nnROSNode_B.dv0[20] = nnROSNode_B.d17;
  nnROSNode_B.dv0[21] = nnROSNode_B.d18;
  nnROSNode_B.dv0[22] = nnROSNode_B.d19;
  nnROSNode_B.dv0[23] = nnROSNode_B.d20;
  nnROSNode_B.dv0[24] = nnROSNode_B.d21;
  nnROSNode_B.dv0[25] = nnROSNode_B.d22;
  nnROSNode_B.dv0[26] = nnROSNode_B.d23;
  nnROSNode_B.dv0[27] = nnROSNode_B.d24;
  nnROSNode_B.dv0[28] = nnROSNode_B.d25;
  nnROSNode_B.dv0[29] = nnROSNode_B.d26;
  nnROSNode_B.dv0[30] = nnROSNode_B.d27;
  nnROSNode_B.dv0[31] = nnROSNode_B.d28;
  nnROSNode_B.dv0[32] = nnROSNode_B.d29;
  nnROSNode_B.dv0[33] = nnROSNode_B.d30;
  nnROSNode_B.dv0[34] = nnROSNode_B.d31;
  nnROSNode_B.dv0[35] = nnROSNode_B.d32;
  nnROSNode_B.dv0[36] = nnROSNode_B.d33;
  nnROSNode_B.dv0[37] = nnROSNode_B.d34;
  nnROSNode_B.dv0[38] = nnROSNode_B.d35;
  nnROSNode_B.dv0[39] = nnROSNode_B.d36;
  nnROSNode_B.dv0[40] = nnROSNode_B.d37;
  nnROSNode_B.dv0[41] = nnROSNode_B.d38;
  nnROSNode_B.dv0[42] = nnROSNode_B.d39;
  nnROSNode_B.dv0[43] = nnROSNode_B.d40;
  nnROSNode_B.dv0[44] = nnROSNode_B.d41;
  nnROSNode_B.dv0[45] = nnROSNode_B.d42;
  nnROSNode_B.dv0[46] = nnROSNode_B.d43;
  nnROSNode_B.dv0[47] = nnROSNode_B.d44;
  nnROSNode_B.dv0[48] = nnROSNode_B.d45;
  nnROSNode_B.dv0[49] = nnROSNode_B.d46;

  // Gain: '<S84>/Divide by range y'
  nnROSNode_B.cumRevIndex = nnROSNode_P.mapminmax_reverse_ymax -
    nnROSNode_P.mapminmax_reverse_ymin;

  // DotProduct: '<S67>/Dot Product'
  nnROSNode_B.csum = 0.0;

  // DotProduct: '<S75>/Dot Product'
  nnROSNode_B.z = 0.0;

  // DotProduct: '<S76>/Dot Product'
  nnROSNode_B.d0 = 0.0;

  // DotProduct: '<S77>/Dot Product'
  nnROSNode_B.d1 = 0.0;

  // DotProduct: '<S78>/Dot Product'
  nnROSNode_B.d2 = 0.0;

  // DotProduct: '<S79>/Dot Product'
  nnROSNode_B.d3 = 0.0;

  // DotProduct: '<S80>/Dot Product'
  nnROSNode_B.d4 = 0.0;

  // DotProduct: '<S81>/Dot Product'
  nnROSNode_B.d5 = 0.0;

  // DotProduct: '<S82>/Dot Product'
  nnROSNode_B.d6 = 0.0;

  // DotProduct: '<S68>/Dot Product'
  nnROSNode_B.d7 = 0.0;

  // DotProduct: '<S69>/Dot Product'
  nnROSNode_B.d8 = 0.0;

  // DotProduct: '<S70>/Dot Product'
  nnROSNode_B.d9 = 0.0;

  // DotProduct: '<S71>/Dot Product'
  nnROSNode_B.d10 = 0.0;

  // DotProduct: '<S72>/Dot Product'
  nnROSNode_B.d11 = 0.0;

  // DotProduct: '<S73>/Dot Product'
  nnROSNode_B.d12 = 0.0;

  // DotProduct: '<S74>/Dot Product'
  nnROSNode_B.d13 = 0.0;
  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 50;
       nnROSNode_B.placement++) {
    // Sum: '<S13>/Sum1' incorporates:
    //   Constant: '<S13>/one'
    //   Constant: '<S13>/one1'
    //   Constant: '<S7>/b{1}'
    //   Gain: '<S13>/Gain'
    //   Gain: '<S13>/Gain1'
    //   Math: '<S13>/Exp'
    //   Math: '<S13>/Reciprocal'
    //   Sum: '<S13>/Sum'
    //   Sum: '<S7>/netsum'
    //
    //  About '<S13>/Exp':
    //   Operator: exp
    //
    //  About '<S13>/Reciprocal':
    //   Operator: reciprocal

    nnROSNode_B.x = 1.0 / (exp((nnROSNode_B.dv0[nnROSNode_B.placement] +
      nnROSNode_P.b1_Value[nnROSNode_B.placement]) * nnROSNode_P.Gain_Gain) +
      nnROSNode_P.one_Value) * nnROSNode_P.Gain1_Gain - nnROSNode_P.one1_Value;

    // DotProduct: '<S67>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(1,:)''

    nnROSNode_B.csum += nnROSNode_P.IW211_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S75>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(2,:)''

    nnROSNode_B.z += nnROSNode_P.IW212_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S76>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(3,:)''

    nnROSNode_B.d0 += nnROSNode_P.IW213_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S77>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(4,:)''

    nnROSNode_B.d1 += nnROSNode_P.IW214_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S78>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(5,:)''

    nnROSNode_B.d2 += nnROSNode_P.IW215_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S79>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(6,:)''

    nnROSNode_B.d3 += nnROSNode_P.IW216_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S80>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(7,:)''

    nnROSNode_B.d4 += nnROSNode_P.IW217_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S81>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(8,:)''

    nnROSNode_B.d5 += nnROSNode_P.IW218_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S82>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(9,:)''

    nnROSNode_B.d6 += nnROSNode_P.IW219_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S68>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(10,:)''

    nnROSNode_B.d7 += nnROSNode_P.IW2110_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S69>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(11,:)''

    nnROSNode_B.d8 += nnROSNode_P.IW2111_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S70>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(12,:)''

    nnROSNode_B.d9 += nnROSNode_P.IW2112_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S71>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(13,:)''

    nnROSNode_B.d10 += nnROSNode_P.IW2113_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S72>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(14,:)''

    nnROSNode_B.d11 += nnROSNode_P.IW2114_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S73>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(15,:)''

    nnROSNode_B.d12 += nnROSNode_P.IW2115_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;

    // DotProduct: '<S74>/Dot Product' incorporates:
    //   Constant: '<S65>/IW{2,1}(16,:)''

    nnROSNode_B.d13 += nnROSNode_P.IW2116_Value[nnROSNode_B.placement] *
      nnROSNode_B.x;
  }

  // Sum: '<S8>/netsum' incorporates:
  //   DotProduct: '<S67>/Dot Product'
  //   DotProduct: '<S68>/Dot Product'
  //   DotProduct: '<S69>/Dot Product'
  //   DotProduct: '<S70>/Dot Product'
  //   DotProduct: '<S71>/Dot Product'
  //   DotProduct: '<S72>/Dot Product'
  //   DotProduct: '<S73>/Dot Product'
  //   DotProduct: '<S74>/Dot Product'
  //   DotProduct: '<S75>/Dot Product'
  //   DotProduct: '<S76>/Dot Product'
  //   DotProduct: '<S77>/Dot Product'
  //   DotProduct: '<S78>/Dot Product'
  //   DotProduct: '<S79>/Dot Product'
  //   DotProduct: '<S80>/Dot Product'
  //   DotProduct: '<S81>/Dot Product'
  //   DotProduct: '<S82>/Dot Product'

  nnROSNode_B.Addminx[0] = nnROSNode_B.csum;
  nnROSNode_B.Addminx[1] = nnROSNode_B.z;
  nnROSNode_B.Addminx[2] = nnROSNode_B.d0;
  nnROSNode_B.Addminx[3] = nnROSNode_B.d1;
  nnROSNode_B.Addminx[4] = nnROSNode_B.d2;
  nnROSNode_B.Addminx[5] = nnROSNode_B.d3;
  nnROSNode_B.Addminx[6] = nnROSNode_B.d4;
  nnROSNode_B.Addminx[7] = nnROSNode_B.d5;
  nnROSNode_B.Addminx[8] = nnROSNode_B.d6;
  nnROSNode_B.Addminx[9] = nnROSNode_B.d7;
  nnROSNode_B.Addminx[10] = nnROSNode_B.d8;
  nnROSNode_B.Addminx[11] = nnROSNode_B.d9;
  nnROSNode_B.Addminx[12] = nnROSNode_B.d10;
  nnROSNode_B.Addminx[13] = nnROSNode_B.d11;
  nnROSNode_B.Addminx[14] = nnROSNode_B.d12;
  nnROSNode_B.Addminx[15] = nnROSNode_B.d13;

  // DataTypeConversion: '<S2>/Cast To Single' incorporates:
  //   Bias: '<S84>/Add min x'
  //   Bias: '<S84>/Subtract min y'
  //   Constant: '<S66>/one'
  //   Constant: '<S8>/b{2}'
  //   Gain: '<S66>/Gain'
  //   Gain: '<S84>/Divide by range y'
  //   Math: '<S66>/Exp'
  //   Math: '<S66>/Reciprocal'
  //   Sum: '<S66>/Sum'
  //   Sum: '<S8>/netsum'
  //
  //  About '<S66>/Exp':
  //   Operator: exp
  //
  //  About '<S66>/Reciprocal':
  //   Operator: reciprocal

  for (nnROSNode_B.placement = 0; nnROSNode_B.placement < 16;
       nnROSNode_B.placement++) {
    nnROSNode_B.CastToSingle[nnROSNode_B.placement] = static_cast<real32_T>
      (((1.0 / (exp((nnROSNode_B.Addminx[nnROSNode_B.placement] +
                     nnROSNode_P.b2_Value[nnROSNode_B.placement]) *
                    nnROSNode_P.Gain_Gain_g) + nnROSNode_P.one_Value_c) +
         -nnROSNode_P.mapminmax_reverse_ymin) *
        ((nnROSNode_P.mapminmax_reverse_xmax[nnROSNode_B.placement] -
          nnROSNode_P.mapminmax_reverse_xmin[nnROSNode_B.placement]) /
         nnROSNode_B.cumRevIndex) +
        nnROSNode_P.mapminmax_reverse_xmin[nnROSNode_B.placement]));
  }

  // End of DataTypeConversion: '<S2>/Cast To Single'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Gain: '<S2>/Multiply'
  //   Gain: '<S2>/Multiply1'

  nnROSNode_B.BusAssignment.Data[5] = nnROSNode_P.Multiply_Gain *
    nnROSNode_B.CastToSingle[5];
  nnROSNode_B.BusAssignment.Data[6] = nnROSNode_B.CastToSingle[6];
  nnROSNode_B.BusAssignment.Data[7] = nnROSNode_B.CastToSingle[7];
  nnROSNode_B.BusAssignment.Data[8] = nnROSNode_B.CastToSingle[8];
  nnROSNode_B.BusAssignment.Data[9] = nnROSNode_B.CastToSingle[9];
  nnROSNode_B.BusAssignment.Data[10] = nnROSNode_P.Multiply1_Gain *
    nnROSNode_B.CastToSingle[10];
  for (nnROSNode_B.i = 0; nnROSNode_B.i < 5; nnROSNode_B.i++) {
    nnROSNode_B.BusAssignment.Data[nnROSNode_B.i] =
      nnROSNode_B.CastToSingle[nnROSNode_B.i];
    nnROSNode_B.BusAssignment.Data[nnROSNode_B.i + 11] =
      nnROSNode_B.CastToSingle[nnROSNode_B.i + 11];
  }

  nnROSNode_B.BusAssignment.Data_SL_Info.CurrentLength =
    nnROSNode_P.Constant1_Value;
  nnROSNode_B.BusAssignment.Data_SL_Info.ReceivedLength =
    nnROSNode_P.Constant1_Value;

  // End of BusAssignment: '<Root>/Bus Assignment'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_nnROSNode_247.publish(&nnROSNode_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void nnROSNode_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(nnROSNode_M, (NULL));

  // block I/O
  (void) memset(((void *) &nnROSNode_B), 0,
                sizeof(B_nnROSNode_T));

  // states (dwork)
  (void) memset((void *)&nnROSNode_DW, 0,
                sizeof(DW_nnROSNode_T));

  {
    static const char_T tmp[10] = { '/', 'p', 'i', 'd', '_', 'g', 'a', 'i', 'n',
      's' };

    static const char_T tmp_0[20] = { '/', 'd', 'r', 'o', 'n', 'e', '_', 'd',
      'a', 't', 'a', '_', 'r', 'e', 'c', 'i', 'e', 'v', 'e', 'd' };

    char_T tmp_1[11];
    char_T tmp_2[21];
    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    nnROSNode_DW.obj_e.matlabCodegenIsDeleted = true;
    nnROSNode_DW.obj_e.isInitialized = 0;
    nnROSNode_DW.obj_e.matlabCodegenIsDeleted = false;
    nnROSNode_DW.objisempty = true;
    nnROSNode_DW.obj_e.isSetupComplete = false;
    nnROSNode_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 20; i++) {
      tmp_2[i] = tmp_0[i];
    }

    tmp_2[20] = '\x00';
    Sub_nnROSNode_245.createSubscriber(tmp_2, 1);
    nnROSNode_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for MATLABSystem: '<S2>/Moving Average'
    nnROSNode_DW.obj.matlabCodegenIsDeleted = true;
    nnROSNode_DW.obj.isInitialized = 0;
    nnROSNode_DW.obj.NumChannels = -1;
    nnROSNode_DW.obj.matlabCodegenIsDeleted = false;
    nnROSNode_DW.objisempty_d = true;
    nnROSNode_DW.obj.isSetupComplete = false;
    nnROSNode_DW.obj.isInitialized = 1;
    nnROSNode_DW.obj.NumChannels = 1;
    nnROSNode_DW.gobj_0_a.isInitialized = 0;
    nnROSNode_DW.obj.pStatistic = &nnROSNode_DW.gobj_0_a;
    nnROSNode_DW.obj.isSetupComplete = true;
    nnROSNode_DW.obj.TunablePropsChanged = false;

    // Start for MATLABSystem: '<S2>/Moving Maximum'
    nnROSNode_DW.obj_o.matlabCodegenIsDeleted = true;
    nnROSNode_DW.obj_o.isInitialized = 0;
    nnROSNode_DW.obj_o.NumChannels = -1;
    nnROSNode_DW.obj_o.matlabCodegenIsDeleted = false;
    nnROSNode_DW.objisempty_o = true;
    nnROSNode_DW.obj_o.isSetupComplete = false;
    nnROSNode_DW.obj_o.isInitialized = 1;
    nnROSNode_DW.obj_o.NumChannels = 1;
    nnROSNode_DW.gobj_0.isInitialized = 0;
    nnROSNode_DW.obj_o.pStat = &nnROSNode_DW.gobj_0;
    nnROSNode_DW.obj_o.pStat->isSetupComplete = false;
    nnROSNode_DW.obj_o.pStat->isInitialized = 1;
    nnROSNode_DW.obj_o.pStat->isSetupComplete = true;
    nnROSNode_DW.obj_o.isSetupComplete = true;

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    nnROSNode_DW.obj_k.matlabCodegenIsDeleted = true;
    nnROSNode_DW.obj_k.isInitialized = 0;
    nnROSNode_DW.obj_k.matlabCodegenIsDeleted = false;
    nnROSNode_DW.objisempty_j = true;
    nnROSNode_DW.obj_k.isSetupComplete = false;
    nnROSNode_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_1[i] = tmp[i];
    }

    tmp_1[10] = '\x00';
    Pub_nnROSNode_247.createPublisher(tmp_1, 1);
    nnROSNode_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S85>/Out1'
    nnROSNode_B.In1 = nnROSNode_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // InitializeConditions for MATLABSystem: '<S2>/Moving Average'
    if (nnROSNode_DW.obj.pStatistic->isInitialized == 1) {
      nnROSNode_DW.obj.pStatistic->pCumSum = 0.0;
      memset(&nnROSNode_DW.obj.pStatistic->pCumSumRev[0], 0, 99U * sizeof(real_T));
      nnROSNode_DW.obj.pStatistic->pCumRevIndex = 1.0;
    }

    // End of InitializeConditions for MATLABSystem: '<S2>/Moving Average'

    // InitializeConditions for MATLABSystem: '<S2>/Moving Maximum'
    if (nnROSNode_DW.obj_o.pStat->isInitialized == 1) {
      memset(&nnROSNode_DW.obj_o.pStat->pBuffer[0], 0, 100U * sizeof(real_T));
      memset(&nnROSNode_DW.obj_o.pStat->pBufferIdx[0], 0, 100U * sizeof(int32_T));
      nnROSNode_DW.obj_o.pStat->pNumElements = 0;
      nnROSNode_DW.obj_o.pStat->pCount = 1;
      nnROSNode_DW.obj_o.pStat->pTop = 1;
    }

    // End of InitializeConditions for MATLABSystem: '<S2>/Moving Maximum'
  }
}

// Model terminate function
void nnROSNode_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  matlabCodegenHandle_matlabC_ehr(&nnROSNode_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for MATLABSystem: '<S2>/Moving Average'
  matlabCodegenHandle_matlabCod_e(&nnROSNode_DW.obj);

  // Terminate for MATLABSystem: '<S2>/Moving Maximum'
  matlabCodegenHandle_matlabCodeg(&nnROSNode_DW.obj_o);

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  matlabCodegenHandle_matlabCo_eh(&nnROSNode_DW.obj_k);

  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
