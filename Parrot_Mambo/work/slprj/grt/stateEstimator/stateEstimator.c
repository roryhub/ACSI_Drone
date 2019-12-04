/*
 * Code generation for system model 'stateEstimator'
 *
 * Model                      : stateEstimator
 * Model version              : 1.49
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 13:06:18 2019
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "stateEstimator.h"
#include "stateEstimator_private.h"
#include "rt_powf_snf.h"

MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

/* Block signals (default storage) */
B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
DW_stateEstimator_f_T stateEstimator_DW;

/*
 * System initialize for enable system:
 *    '<S107>/MeasurementUpdate'
 *    '<S154>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Init(B_MeasurementUpdate_stateEstimator_T *
  localB)
{
  /* SystemInitialize for Outport: '<S132>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[0] = 0.0F;
  localB->Product3[1] = 0.0F;
}

/*
 * Disable for enable system:
 *    '<S107>/MeasurementUpdate'
 *    '<S154>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Disable
  (B_MeasurementUpdate_stateEstimator_T *localB,
   DW_MeasurementUpdate_stateEstimator_T *localDW)
{
  /* Disable for Outport: '<S132>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[0] = 0.0F;
  localB->Product3[1] = 0.0F;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S107>/MeasurementUpdate'
 *    '<S154>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const real32_T
  rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2],
  B_MeasurementUpdate_stateEstimator_T *localB,
  DW_MeasurementUpdate_stateEstimator_T *localDW)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S107>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S132>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->MeasurementUpdate_MODE) {
      localDW->MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S132>/Sum' incorporates:
     *  Product: '<S132>/C[k]*xhat[k|k-1]'
     *  Product: '<S132>/D[k]*u[k]'
     *  Sum: '<S132>/Add1'
     */
    rtu_yk_idx_0 = rtu_yk[0] - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1]) + (rtu_Dk[0] * rtu_uk[0] + rtu_Dk[2] * rtu_uk[1]));
    rtu_yk_idx_1 = rtu_yk[1] - ((rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1]) + (rtu_Dk[1] * rtu_uk[0] + rtu_Dk[3] * rtu_uk[1]));

    /* Product: '<S132>/Product3' */
    localB->Product3[0] = 0.0F;
    localB->Product3[0] += rtu_Lk[0] * rtu_yk_idx_0;
    localB->Product3[0] += rtu_Lk[2] * rtu_yk_idx_1;
    localB->Product3[1] = 0.0F;
    localB->Product3[1] += rtu_Lk[1] * rtu_yk_idx_0;
    localB->Product3[1] += rtu_Lk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->MeasurementUpdate_MODE) {
      stateEstimator_MeasurementUpdate_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S107>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S112>/Enabled Subsystem'
 *    '<S159>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Init(B_EnabledSubsystem_stateEstimator_T
  *localB)
{
  /* SystemInitialize for Outport: '<S133>/deltax' */
  localB->Product2[0] = 0.0F;
  localB->Product2[1] = 0.0F;
}

/*
 * Disable for enable system:
 *    '<S112>/Enabled Subsystem'
 *    '<S159>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Disable(B_EnabledSubsystem_stateEstimator_T
  *localB, DW_EnabledSubsystem_stateEstimator_T *localDW)
{
  /* Disable for Outport: '<S133>/deltax' */
  localB->Product2[0] = 0.0F;
  localB->Product2[1] = 0.0F;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S112>/Enabled Subsystem'
 *    '<S159>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[4], const real32_T rtu_Ck[4], const real32_T rtu_yk[2], const real32_T
  rtu_xhatkk1[2], B_EnabledSubsystem_stateEstimator_T *localB,
  DW_EnabledSubsystem_stateEstimator_T *localDW)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S112>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S133>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->EnabledSubsystem_MODE) {
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S133>/Add1' incorporates:
     *  Product: '<S133>/Product'
     */
    rtu_yk_idx_0 = rtu_yk[0] - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1]);
    rtu_yk_idx_1 = rtu_yk[1] - (rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1]);

    /* Product: '<S133>/Product2' */
    localB->Product2[0] = 0.0F;
    localB->Product2[0] += rtu_Mk[0] * rtu_yk_idx_0;
    localB->Product2[0] += rtu_Mk[2] * rtu_yk_idx_1;
    localB->Product2[1] = 0.0F;
    localB->Product2[1] += rtu_Mk[1] * rtu_yk_idx_0;
    localB->Product2[1] += rtu_Mk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->EnabledSubsystem_MODE) {
      stateEstimator_EnabledSubsystem_Disable(localB, localDW);
    }
  }

  /* End of Outputs for SubSystem: '<S112>/Enabled Subsystem' */
}

/* System initialize for referenced model: 'stateEstimator' */
void stateEstimator_Init(void)
{
  int32_T i;

  /* InitializeConditions for Delay: '<S134>/MemoryX' */
  stateEstimator_DW.icLoad = 1U;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  stateEstimator_DW.Memory_PreviousInput[0] = 0.0F;
  stateEstimator_DW.Memory_PreviousInput[1] = 0.0F;
  stateEstimator_DW.Memory_PreviousInput[2] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S6>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    stateEstimator_DW.IIR_IMUgyro_r_states[i] = 0.0F;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S6>/IIR_IMUgyro_r' */

  /* InitializeConditions for DiscreteFir: '<S6>/FIR_IMUaccel' */
  stateEstimator_DW.FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    stateEstimator_DW.FIR_IMUaccel_states[i] = 0.0F;
  }

  /* End of InitializeConditions for DiscreteFir: '<S6>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] = 0.0F;
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Delay: '<S4>/Delay2' */
  stateEstimator_DW.Delay2_DSTATE = 0.0;

  /* InitializeConditions for Delay: '<S15>/MemoryX' */
  stateEstimator_DW.icLoad_p = 1U;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[0] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] = 0.0;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] = 0.0;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] = 0.0;

  /* InitializeConditions for Delay: '<S72>/MemoryX' */
  stateEstimator_DW.icLoad_i = 1U;

  /* InitializeConditions for DiscreteFilter: '<S71>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    stateEstimator_DW.IIRgyroz_states[i] = 0.0F;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S71>/IIRgyroz' */

  /* InitializeConditions for UnitDelay: '<S78>/UD' */
  stateEstimator_DW.UD_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE_g[0] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[0] = 0.0F;

  /* SystemInitialize for Merge: '<S3>/Merge' */
  stateEstimator_B.Merge[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S78>/UD' */
  stateEstimator_DW.UD_DSTATE[1] = 0.0F;

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE_g[1] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[1] = 0.0F;

  /* SystemInitialize for Merge: '<S3>/Merge' */
  stateEstimator_B.Merge[1] = 0.0F;

  /* SystemInitialize for Enabled SubSystem: '<S159>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(&stateEstimator_B.EnabledSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S159>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S41>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S62>/deltax' */
  stateEstimator_B.Product2[0] = 0.0;
  stateEstimator_B.Product2[1] = 0.0;

  /* End of SystemInitialize for SubSystem: '<S41>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S112>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(&stateEstimator_B.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S112>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S36>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S61>/L*(y[k]-yhat[k|k-1])' */
  stateEstimator_B.Product3[0] = 0.0;
  stateEstimator_B.Product3[1] = 0.0;

  /* End of SystemInitialize for SubSystem: '<S36>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S107>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(&stateEstimator_B.MeasurementUpdate_e);

  /* End of SystemInitialize for SubSystem: '<S107>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S154>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(&stateEstimator_B.MeasurementUpdate_b);

  /* End of SystemInitialize for SubSystem: '<S154>/MeasurementUpdate' */
}

/* System reset for referenced model: 'stateEstimator' */
void stateEstimator_Reset(void)
{
  int32_T i;

  /* InitializeConditions for Delay: '<S134>/MemoryX' */
  stateEstimator_DW.icLoad = 1U;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  stateEstimator_DW.Memory_PreviousInput[0] = 0.0F;
  stateEstimator_DW.Memory_PreviousInput[1] = 0.0F;
  stateEstimator_DW.Memory_PreviousInput[2] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S6>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    stateEstimator_DW.IIR_IMUgyro_r_states[i] = 0.0F;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S6>/IIR_IMUgyro_r' */

  /* InitializeConditions for DiscreteFir: '<S6>/FIR_IMUaccel' */
  stateEstimator_DW.FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    stateEstimator_DW.FIR_IMUaccel_states[i] = 0.0F;
  }

  /* End of InitializeConditions for DiscreteFir: '<S6>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE[0] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE[1] = 0.0F;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] = 0.0F;
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Delay: '<S4>/Delay2' */
  stateEstimator_DW.Delay2_DSTATE = 0.0;

  /* InitializeConditions for Delay: '<S15>/MemoryX' */
  stateEstimator_DW.icLoad_p = 1U;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[0] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] = 0.0;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] = 0.0;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] = 0.0F;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] = 0.0;

  /* InitializeConditions for Delay: '<S72>/MemoryX' */
  stateEstimator_DW.icLoad_i = 1U;

  /* InitializeConditions for DiscreteFilter: '<S71>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    stateEstimator_DW.IIRgyroz_states[i] = 0.0F;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S71>/IIRgyroz' */

  /* InitializeConditions for UnitDelay: '<S78>/UD' */
  stateEstimator_DW.UD_DSTATE[0] = 0.0F;

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE_g[0] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[0] = 0.0F;

  /* InitializeConditions for UnitDelay: '<S78>/UD' */
  stateEstimator_DW.UD_DSTATE[1] = 0.0F;

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE_g[1] = 0.0F;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[1] = 0.0F;
}

/* Disable for referenced model: 'stateEstimator' */
void stateEstimator_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S159>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_m.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(&stateEstimator_B.EnabledSubsystem_m,
      &stateEstimator_DW.EnabledSubsystem_m);
  }

  /* End of Disable for SubSystem: '<S159>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S41>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_MODE) {
    /* Disable for Outport: '<S62>/deltax' */
    stateEstimator_B.Product2[0] = 0.0;
    stateEstimator_B.Product2[1] = 0.0;
    stateEstimator_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S41>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S112>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_f.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(&stateEstimator_B.EnabledSubsystem_f,
      &stateEstimator_DW.EnabledSubsystem_f);
  }

  /* End of Disable for SubSystem: '<S112>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S36>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_MODE) {
    /* Disable for Outport: '<S61>/L*(y[k]-yhat[k|k-1])' */
    stateEstimator_B.Product3[0] = 0.0;
    stateEstimator_B.Product3[1] = 0.0;
    stateEstimator_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S107>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_e.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable
      (&stateEstimator_B.MeasurementUpdate_e,
       &stateEstimator_DW.MeasurementUpdate_e);
  }

  /* End of Disable for SubSystem: '<S107>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S154>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_b.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable
      (&stateEstimator_B.MeasurementUpdate_b,
       &stateEstimator_DW.MeasurementUpdate_b);
  }

  /* End of Disable for SubSystem: '<S154>/MeasurementUpdate' */
}

/* Output and update for referenced model: 'stateEstimator' */
void stateEstimator(const boolean_T *rtu_controlModePosVSOrient_flagin, const
                    sensordata_t *rtu_sensordata_datin, const real32_T
                    *rtu_usePosVIS_flagin, const real32_T rtu_opticalFlow_datin
                    [3], const real32_T rtu_posVIS_datin[4], const real32_T
                    rtu_sensorCalibration_datin[8], statesEstim_t
                    *rty_states_estimout)
{
  /* local block i/o variables */
  real_T rtb_ManualSwitchPZ[4];
  real32_T rtb_Reshapey_a[2];
  real32_T rtb_MemoryX_f[2];
  real32_T rtb_Reshapey_o[2];
  real32_T rtb_MemoryX_m[2];
  real32_T rtb_Conversion_j[2];
  real32_T rtb_ManualSwitchPZ_m[4];
  real32_T rtb_Reshapeu_h[2];
  real32_T rtb_Conversion_p[2];
  real32_T rtb_ManualSwitchPZ_p[4];
  real32_T rtb_Reshapeu_i[2];
  boolean_T rtb_DataTypeConversionEnable;
  boolean_T rtb_DataTypeConversionEnable_i;
  real32_T acc1;
  int32_T denIdx;
  real32_T rtb_VectorConcatenate[9];
  real32_T rtb_Product_n[3];
  real32_T rtb_FIR_IMUaccel[3];
  int32_T i;
  real32_T rtb_Sqrt;
  int32_T i_0;
  int32_T tmp;
  real32_T rtb_TSamp[2];
  real32_T rtb_Diff[2];
  real32_T rtb_Add_hi[2];
  real32_T rtb_Add_m[2];
  real32_T rtb_VectorConcatenate_i[9];
  real32_T rtb_VectorConcatenate_h[9];
  boolean_T rtb_Compare_i;
  boolean_T rtb_LogicalOperator_cg;
  real32_T rtb_VectorConcatenate_p[9];
  real32_T rtb_Merge1;
  real_T rtb_Add1_g;
  real_T rtb_Sum;
  real32_T rtb_VectorConcatenate_3[9];
  real_T rtb_VectorConcatenate_h_0[3];
  real32_T rtb_TrigonometricFunction_o2_idx_1;
  real32_T rtb_TrigonometricFunction_o1_idx_0;
  real32_T rtb_TrigonometricFunction_o2_idx_0;
  real32_T rtb_TrigonometricFunction_o1_idx_1;
  real_T rtb_Add_a_idx_0;
  real32_T rtb_UseIPPosSwitch_idx_1;
  real_T rtb_Add_a_idx_1;
  real32_T LogicalOperator3_tmp;
  real32_T LogicalOperator3_tmp_0;
  real32_T LogicalOperator3_a_tmp;
  real32_T rtb_VectorConcatenate_h_tmp;
  real32_T rtb_VectorConcatenate_h_tmp_0;
  real32_T rtb_sincos_o1_idx_2_tmp;
  real32_T rtb_sincos_o2_idx_2_tmp;

  /* Reshape: '<S134>/Reshapey' */
  rtb_Reshapey_a[0] = rtu_posVIS_datin[0];
  rtb_Reshapey_a[1] = rtu_posVIS_datin[1];

  /* Delay: '<S134>/MemoryX' */
  if (stateEstimator_DW.icLoad != 0) {
    stateEstimator_DW.MemoryX_DSTATE_d[0] = stateEstimator_ConstB.ReshapeX0_b[0];
    stateEstimator_DW.MemoryX_DSTATE_d[1] = stateEstimator_ConstB.ReshapeX0_b[1];
  }

  rtb_MemoryX_f[0] = stateEstimator_DW.MemoryX_DSTATE_d[0];
  rtb_MemoryX_f[1] = stateEstimator_DW.MemoryX_DSTATE_d[1];

  /* End of Delay: '<S134>/MemoryX' */

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  Constant: '<S13>/Constant'
   */
  rtb_VectorConcatenate[0] = 0.0F;

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  Constant: '<S13>/Constant'
   */
  rtb_VectorConcatenate[1] = 0.0F;

  /* Trigonometry: '<S13>/Trigonometric Function' incorporates:
   *  Memory: '<S3>/Memory'
   *  SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   */
  rtb_TrigonometricFunction_o1_idx_0 = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_TrigonometricFunction_o2_idx_0 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_TrigonometricFunction_o1_idx_1 = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_TrigonometricFunction_o2_idx_1 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[1]);

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn3' */
  rtb_VectorConcatenate[2] = rtb_TrigonometricFunction_o2_idx_1;

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn4' */
  rtb_VectorConcatenate[3] = rtb_TrigonometricFunction_o1_idx_0;

  /* Product: '<S13>/Product1' */
  rtb_VectorConcatenate[4] = rtb_TrigonometricFunction_o2_idx_0 *
    rtb_TrigonometricFunction_o2_idx_1;

  /* Product: '<S13>/Product3' */
  rtb_VectorConcatenate[5] = rtb_TrigonometricFunction_o1_idx_0 *
    rtb_TrigonometricFunction_o1_idx_1;

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn7' */
  rtb_VectorConcatenate[6] = rtb_TrigonometricFunction_o2_idx_0;

  /* Product: '<S13>/Product2' incorporates:
   *  Gain: '<S13>/Gain'
   */
  rtb_VectorConcatenate[7] = (-1.0F) * rtb_TrigonometricFunction_o1_idx_0 *
    rtb_TrigonometricFunction_o2_idx_1;

  /* Product: '<S13>/Product4' */
  rtb_VectorConcatenate[8] = rtb_TrigonometricFunction_o2_idx_0 *
    rtb_TrigonometricFunction_o1_idx_1;

  /* Gain: '<S6>/inverseIMU_gain' incorporates:
   *  Bias: '<S6>/Assuming that calib was done level!'
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Sum: '<S6>/Sum1'
   */
  stateEstimator_B.inverseIMU_gain[0] = (rtu_sensordata_datin->ddx -
    (rtu_sensorCalibration_datin[0] + 0.0F)) * 0.994075298F;
  stateEstimator_B.inverseIMU_gain[1] = (rtu_sensordata_datin->ddy -
    (rtu_sensorCalibration_datin[1] + 0.0F)) * 0.996184587F;
  stateEstimator_B.inverseIMU_gain[2] = (rtu_sensordata_datin->ddz -
    (rtu_sensorCalibration_datin[2] + 9.81F)) * 1.00549F;
  stateEstimator_B.inverseIMU_gain[3] = (rtu_sensordata_datin->p -
    (rtu_sensorCalibration_datin[3] + 0.0F)) * 1.00139189F;
  stateEstimator_B.inverseIMU_gain[4] = (rtu_sensordata_datin->q -
    (rtu_sensorCalibration_datin[4] + 0.0F)) * 0.993601203F;
  stateEstimator_B.inverseIMU_gain[5] = (rtu_sensordata_datin->r -
    (rtu_sensorCalibration_datin[5] + 0.0F)) * 1.00003F;

  /* DiscreteFilter: '<S6>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_tmp = 0.0F;
  acc1 = stateEstimator_B.inverseIMU_gain[5];
  denIdx = 1;
  for (i_0 = 0; i_0 < 5; i_0++) {
    acc1 -= rtCP_IIR_IMUgyro_r_DenCoef[denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[i_0];
    denIdx++;
  }

  stateEstimator_DW.IIR_IMUgyro_r_tmp = acc1 / 1.0F;
  acc1 = 0.282124132F * stateEstimator_DW.IIR_IMUgyro_r_tmp;
  denIdx = 1;
  for (i_0 = 0; i_0 < 5; i_0++) {
    acc1 += rtCP_IIR_IMUgyro_r_NumCoef[denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[i_0];
    denIdx++;
  }

  /* SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2' incorporates:
   *  DiscreteFilter: '<S6>/IIR_IMUgyro_r'
   */
  rtb_TrigonometricFunction_o1_idx_0 = acc1;

  /* Product: '<S13>/Divide' incorporates:
   *  Reshape: '<S14>/Reshape (9) to [3x3] column-major'
   */
  for (i_0 = 0; i_0 < 9; i_0++) {
    rtb_VectorConcatenate_3[i_0] = rtb_VectorConcatenate[i_0] /
      rtb_TrigonometricFunction_o2_idx_1;
  }

  /* End of Product: '<S13>/Divide' */

  /* Product: '<S3>/Product' incorporates:
   *  DiscreteFilter: '<S6>/IIR_IMUgyro_r'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_Product_n[i_0] = rtb_VectorConcatenate_3[i_0 + 6] * acc1 +
      (rtb_VectorConcatenate_3[i_0 + 3] * stateEstimator_B.inverseIMU_gain[4] +
       rtb_VectorConcatenate_3[i_0] * stateEstimator_B.inverseIMU_gain[3]);
  }

  /* End of Product: '<S3>/Product' */

  /* If: '<S3>/If1' incorporates:
   *  Constant: '<S186>/Constant'
   *  Gain: '<S3>/Gain'
   *  Inport: '<S12>/yawin'
   *  Logic: '<S6>/Logical Operator'
   *  Memory: '<S3>/Memory'
   *  RelationalOperator: '<S186>/Compare'
   *  SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   *  Sum: '<S3>/Sum'
   */
  if ((rtu_posVIS_datin[0] != (-99.0F)) && (*rtu_usePosVIS_flagin != 0.0F)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Sum: '<S10>/Sum' incorporates:
     *  Gain: '<S10>/Gain'
     *  Gain: '<S10>/Gain1'
     *  Gain: '<S3>/Gain'
     *  Memory: '<S3>/Memory'
     *  SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1'
     *  Sum: '<S3>/Sum'
     */
    rtb_Merge1 = 0.8F * (0.005F * rtb_Product_n[0] +
                         stateEstimator_DW.Memory_PreviousInput[0]) + 0.2F *
      rtu_posVIS_datin[3];

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    rtb_Merge1 = 0.005F * rtb_Product_n[0] +
      stateEstimator_DW.Memory_PreviousInput[0];

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem3' */
  }

  /* End of If: '<S3>/If1' */

  /* DiscreteFir: '<S6>/FIR_IMUaccel' */
  acc1 = stateEstimator_B.inverseIMU_gain[0] * 0.0264077242F;
  denIdx = 1;
  for (i_0 = stateEstimator_DW.FIR_IMUaccel_circBuf; i_0 < 5; i_0++) {
    acc1 += stateEstimator_DW.FIR_IMUaccel_states[i_0] *
      rtCP_FIR_IMUaccel_Coefficients[denIdx];
    denIdx++;
  }

  for (i_0 = 0; i_0 < stateEstimator_DW.FIR_IMUaccel_circBuf; i_0++) {
    acc1 += stateEstimator_DW.FIR_IMUaccel_states[i_0] *
      rtCP_FIR_IMUaccel_Coefficients[denIdx];
    denIdx++;
  }

  rtb_FIR_IMUaccel[0] = acc1;

  /* Math: '<S3>/Math Function' incorporates:
   *  DiscreteFir: '<S6>/FIR_IMUaccel'
   */
  rtb_TrigonometricFunction_o2_idx_1 = (real32_T)floor(2.0F);
  if ((acc1 < 0.0F) && (2.0F > rtb_TrigonometricFunction_o2_idx_1)) {
    rtb_TrigonometricFunction_o2_idx_0 = -rt_powf_snf(-acc1, 2.0F);
  } else {
    rtb_TrigonometricFunction_o2_idx_0 = rt_powf_snf(acc1, 2.0F);
  }

  /* DiscreteFir: '<S6>/FIR_IMUaccel' */
  acc1 = stateEstimator_B.inverseIMU_gain[1] * 0.0264077242F;
  denIdx = 1;
  for (i_0 = stateEstimator_DW.FIR_IMUaccel_circBuf; i_0 < 5; i_0++) {
    acc1 += stateEstimator_DW.FIR_IMUaccel_states[5 + i_0] *
      rtCP_FIR_IMUaccel_Coefficients[denIdx];
    denIdx++;
  }

  for (i_0 = 0; i_0 < stateEstimator_DW.FIR_IMUaccel_circBuf; i_0++) {
    acc1 += stateEstimator_DW.FIR_IMUaccel_states[5 + i_0] *
      rtCP_FIR_IMUaccel_Coefficients[denIdx];
    denIdx++;
  }

  rtb_FIR_IMUaccel[1] = acc1;

  /* Math: '<S3>/Math Function' incorporates:
   *  DiscreteFir: '<S6>/FIR_IMUaccel'
   */
  if ((acc1 < 0.0F) && (2.0F > rtb_TrigonometricFunction_o2_idx_1)) {
    rtb_TrigonometricFunction_o1_idx_1 = -rt_powf_snf(-acc1, 2.0F);
  } else {
    rtb_TrigonometricFunction_o1_idx_1 = rt_powf_snf(acc1, 2.0F);
  }

  /* DiscreteFir: '<S6>/FIR_IMUaccel' */
  acc1 = stateEstimator_B.inverseIMU_gain[2] * 0.0264077242F;
  denIdx = 1;
  for (i_0 = stateEstimator_DW.FIR_IMUaccel_circBuf; i_0 < 5; i_0++) {
    acc1 += stateEstimator_DW.FIR_IMUaccel_states[10 + i_0] *
      rtCP_FIR_IMUaccel_Coefficients[denIdx];
    denIdx++;
  }

  for (i_0 = 0; i_0 < stateEstimator_DW.FIR_IMUaccel_circBuf; i_0++) {
    acc1 += stateEstimator_DW.FIR_IMUaccel_states[10 + i_0] *
      rtCP_FIR_IMUaccel_Coefficients[denIdx];
    denIdx++;
  }

  rtb_FIR_IMUaccel[2] = acc1;

  /* Math: '<S3>/Math Function' incorporates:
   *  DiscreteFir: '<S6>/FIR_IMUaccel'
   */
  if ((acc1 < 0.0F) && (2.0F > rtb_TrigonometricFunction_o2_idx_1)) {
    rtb_TrigonometricFunction_o2_idx_1 = -rt_powf_snf(-acc1, 2.0F);
  } else {
    rtb_TrigonometricFunction_o2_idx_1 = rt_powf_snf(acc1, 2.0F);
  }

  /* Sqrt: '<S3>/Sqrt' incorporates:
   *  Sum: '<S3>/Sum of Elements'
   */
  rtb_Sqrt = (real32_T)sqrt((rtb_TrigonometricFunction_o2_idx_0 +
    rtb_TrigonometricFunction_o1_idx_1) + rtb_TrigonometricFunction_o2_idx_1);

  /* If: '<S3>/If' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Gain: '<S3>/Gain'
   *  Inport: '<S11>/prin'
   *  Logic: '<S3>/Logical Operator'
   *  Memory: '<S3>/Memory'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   *  Sum: '<S3>/Sum'
   */
  if ((rtb_Sqrt > 9.79038F) && (rtb_Sqrt < 9.82962F)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Sum: '<S9>/Sum' incorporates:
     *  DiscreteFir: '<S6>/FIR_IMUaccel'
     *  Gain: '<S3>/Gain'
     *  Gain: '<S9>/Gain'
     *  Gain: '<S9>/Gain1'
     *  Memory: '<S3>/Memory'
     *  Product: '<S9>/Divide'
     *  SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1'
     *  Sum: '<S3>/Sum'
     *  Trigonometry: '<S9>/Trigonometric Function'
     */
    stateEstimator_B.Merge[1] = (0.005F * rtb_Product_n[2] +
      stateEstimator_DW.Memory_PreviousInput[2]) * 0.999F + (real32_T)atan
      (rtb_FIR_IMUaccel[1] / acc1) * 0.001F;

    /* Gain: '<S9>/Gain2' */
    rtb_TrigonometricFunction_o2_idx_0 = 0.101936802F * rtb_FIR_IMUaccel[0];

    /* Trigonometry: '<S9>/Trigonometric Function1' */
    if (rtb_TrigonometricFunction_o2_idx_0 > 1.0F) {
      rtb_TrigonometricFunction_o2_idx_0 = 1.0F;
    } else {
      if (rtb_TrigonometricFunction_o2_idx_0 < -1.0F) {
        rtb_TrigonometricFunction_o2_idx_0 = -1.0F;
      }
    }

    /* Sum: '<S9>/Sum1' incorporates:
     *  Gain: '<S3>/Gain'
     *  Gain: '<S9>/Gain3'
     *  Gain: '<S9>/Gain4'
     *  Memory: '<S3>/Memory'
     *  SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1'
     *  Sum: '<S3>/Sum'
     *  Trigonometry: '<S9>/Trigonometric Function1'
     */
    stateEstimator_B.Merge[0] = (0.005F * rtb_Product_n[1] +
      stateEstimator_DW.Memory_PreviousInput[1]) * 0.999F + 0.001F * (real32_T)
      asin(rtb_TrigonometricFunction_o2_idx_0);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    stateEstimator_B.Merge[0] = 0.005F * rtb_Product_n[1] +
      stateEstimator_DW.Memory_PreviousInput[1];
    stateEstimator_B.Merge[1] = 0.005F * rtb_Product_n[2] +
      stateEstimator_DW.Memory_PreviousInput[2];

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
  }

  /* End of If: '<S3>/If' */

  /* Sum: '<S135>/Add1' incorporates:
   *  Delay: '<S69>/Delay'
   */
  rtb_TrigonometricFunction_o2_idx_0 = rtu_posVIS_datin[0] -
    stateEstimator_DW.Delay_DSTATE[0];
  rtb_TrigonometricFunction_o1_idx_1 = rtu_posVIS_datin[1] -
    stateEstimator_DW.Delay_DSTATE[1];

  /* Math: '<S135>/Math Function' */
  rtb_TrigonometricFunction_o2_idx_1 = (real32_T)floor(2.0F);
  if ((rtb_TrigonometricFunction_o2_idx_0 < 0.0F) && (2.0F >
       rtb_TrigonometricFunction_o2_idx_1)) {
    rtb_TrigonometricFunction_o2_idx_0 = -rt_powf_snf
      (-rtb_TrigonometricFunction_o2_idx_0, 2.0F);
  } else {
    rtb_TrigonometricFunction_o2_idx_0 = rt_powf_snf
      (rtb_TrigonometricFunction_o2_idx_0, 2.0F);
  }

  if ((rtb_TrigonometricFunction_o1_idx_1 < 0.0F) && (2.0F >
       rtb_TrigonometricFunction_o2_idx_1)) {
    rtb_TrigonometricFunction_o1_idx_1 = -rt_powf_snf
      (-rtb_TrigonometricFunction_o1_idx_1, 2.0F);
  } else {
    rtb_TrigonometricFunction_o1_idx_1 = rt_powf_snf
      (rtb_TrigonometricFunction_o1_idx_1, 2.0F);
  }

  /* End of Math: '<S135>/Math Function' */

  /* Abs: '<S135>/Abs' incorporates:
   *  Abs: '<S71>/Abs2'
   *  DataTypeConversion: '<S3>/Data Type Conversion3'
   */
  LogicalOperator3_tmp = (real32_T)fabs(stateEstimator_B.Merge[0]);

  /* Abs: '<S135>/Abs1' incorporates:
   *  Abs: '<S71>/Abs3'
   *  DataTypeConversion: '<S3>/Data Type Conversion3'
   */
  LogicalOperator3_tmp_0 = (real32_T)fabs(stateEstimator_B.Merge[1]);

  /* Logic: '<S135>/Logical Operator3' incorporates:
   *  Abs: '<S135>/Abs'
   *  Abs: '<S135>/Abs1'
   *  Constant: '<S181>/Constant'
   *  Constant: '<S182>/Constant'
   *  Constant: '<S183>/Constant'
   *  Constant: '<S184>/Constant'
   *  RelationalOperator: '<S181>/Compare'
   *  RelationalOperator: '<S182>/Compare'
   *  RelationalOperator: '<S183>/Compare'
   *  RelationalOperator: '<S184>/Compare'
   *  Sqrt: '<S135>/Sqrt'
   *  Sum: '<S135>/Sum of Elements'
   */
  stateEstimator_B.LogicalOperator3 = ((rtu_posVIS_datin[0] != (-99.0F)) &&
    (LogicalOperator3_tmp <= 0.18F) && (LogicalOperator3_tmp_0 <= 0.18F) &&
    ((real32_T)sqrt(rtb_TrigonometricFunction_o2_idx_0 +
                    rtb_TrigonometricFunction_o1_idx_1) < 1.0F));

  /* DataTypeConversion: '<S134>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable = stateEstimator_B.LogicalOperator3;

  /* Outputs for Enabled SubSystem: '<S159>/Enabled Subsystem' */
  /* Constant: '<S134>/C' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable,
    stateEstimator_ConstB.Conversion_g, rtCP_C_Value_p, rtb_Reshapey_a,
    rtb_MemoryX_f, &stateEstimator_B.EnabledSubsystem_m,
    &stateEstimator_DW.EnabledSubsystem_m);

  /* End of Outputs for SubSystem: '<S159>/Enabled Subsystem' */

  /* Sum: '<S159>/Add' */
  rtb_TrigonometricFunction_o2_idx_1 =
    stateEstimator_B.EnabledSubsystem_m.Product2[0] + rtb_MemoryX_f[0];
  rtb_TrigonometricFunction_o2_idx_0 =
    stateEstimator_B.EnabledSubsystem_m.Product2[1] + rtb_MemoryX_f[1];

  /* DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  if ((*rtu_controlModePosVSOrient_flagin) &&
      (stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState <= 0)) {
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] = 0.0F;
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] = 0.0F;
  }

  /* Switch: '<S69>/UseIPPosSwitch' incorporates:
   *  DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity'
   *  Reshape: '<S134>/Reshapexhat'
   */
  if (*rtu_usePosVIS_flagin > 0.0F) {
    rtb_TrigonometricFunction_o1_idx_1 = rtb_TrigonometricFunction_o2_idx_1;
    rtb_UseIPPosSwitch_idx_1 = rtb_TrigonometricFunction_o2_idx_0;
  } else {
    rtb_TrigonometricFunction_o1_idx_1 =
      stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0];
    rtb_UseIPPosSwitch_idx_1 = stateEstimator_DW.SimplyIntegrateVelocity_DSTATE
      [1];
  }

  /* End of Switch: '<S69>/UseIPPosSwitch' */

  /* Gain: '<S4>/invertzaxisGain' */
  stateEstimator_B.invertzaxisGain = (real_T)(-1.0F) *
    rtu_sensordata_datin->altitude_sonar;

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   *  Delay: '<S4>/Delay2'
   */
  stateEstimator_B.Compare = (stateEstimator_DW.Delay2_DSTATE > 0.0);

  /* Delay: '<S15>/MemoryX' incorporates:
   *  DataTypeConversion: '<S15>/DataTypeConversionReset'
   */
  if (stateEstimator_B.Compare) {
    stateEstimator_DW.icLoad_p = 1U;
  }

  if (stateEstimator_DW.icLoad_p != 0) {
    stateEstimator_DW.MemoryX_DSTATE[0] = stateEstimator_ConstB.ReshapeX0[0];
    stateEstimator_DW.MemoryX_DSTATE[1] = stateEstimator_ConstB.ReshapeX0[1];
  }

  /* DiscreteFilter: '<S16>/pressureFilter_IIR' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Gain: '<S4>/prsToAltGain'
   *  Sum: '<S6>/Sum2'
   */
  stateEstimator_DW.pressureFilter_IIR_tmp = ((((rtu_sensordata_datin->prs -
    rtu_sensorCalibration_datin[6]) * 0.0832137167F - (-2.93717074F) *
    stateEstimator_DW.pressureFilter_IIR_states[0]) - 2.87629962F *
    stateEstimator_DW.pressureFilter_IIR_states[1]) - (-0.939098954F) *
    stateEstimator_DW.pressureFilter_IIR_states[2]) / 1.0F;

  /* DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_tmp = (((stateEstimator_B.invertzaxisGain -
    (-2.9371707284498911) * stateEstimator_DW.soonarFilter_IIR_states[0]) -
    2.8762997234793324 * stateEstimator_DW.soonarFilter_IIR_states[1]) -
    (-0.93909894032528318) * stateEstimator_DW.soonarFilter_IIR_states[2]) / 1.0;

  /* Saturate: '<S16>/SaturationSonar' */
  if ((stateEstimator_B.invertzaxisGain >= (-0.44)) || rtIsNaN(-0.44)) {
    rtb_Add_a_idx_0 = (-0.44);
  } else {
    rtb_Add_a_idx_0 = stateEstimator_B.invertzaxisGain;
  }

  /* End of Saturate: '<S16>/SaturationSonar' */

  /* Logic: '<S16>/nicemeasurementor newupdateneeded' incorporates:
   *  Abs: '<S16>/Absestdiff'
   *  Abs: '<S16>/Absestdiff1'
   *  Abs: '<S16>/Absestdiff2'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  Constant: '<S65>/Constant'
   *  Constant: '<S66>/Constant'
   *  Delay: '<S4>/Delay2'
   *  DiscreteFilter: '<S16>/pressureFilter_IIR'
   *  DiscreteFilter: '<S16>/soonarFilter_IIR'
   *  Logic: '<S16>/findingoutliers'
   *  Logic: '<S16>/newupdateneeded'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  RelationalOperator: '<S65>/Compare'
   *  RelationalOperator: '<S66>/Compare'
   *  Sum: '<S16>/Add'
   *  Sum: '<S16>/Add1'
   *  Sum: '<S16>/Add2'
   */
  stateEstimator_B.nicemeasurementornewupdateneeded = (((fabs
    (stateEstimator_DW.Delay2_DSTATE - rtb_Add_a_idx_0) <= 0.3) &&
    (stateEstimator_B.invertzaxisGain < (-0.44))) || ((fabs((((3.75683794E-6F *
    stateEstimator_DW.pressureFilter_IIR_tmp + 1.12705138E-5F *
    stateEstimator_DW.pressureFilter_IIR_states[0]) + 1.12705138E-5F *
    stateEstimator_DW.pressureFilter_IIR_states[1]) + 3.75683794E-6F *
    stateEstimator_DW.pressureFilter_IIR_states[2]) -
    stateEstimator_DW.Delay2_DSTATE) >= 0.8) && (fabs((((3.7568380197305906E-6 *
    stateEstimator_DW.soonarFilter_IIR_tmp + 1.1270514059191772E-5 *
    stateEstimator_DW.soonarFilter_IIR_states[0]) + 1.1270514059191772E-5 *
    stateEstimator_DW.soonarFilter_IIR_states[1]) + 3.7568380197305906E-6 *
    stateEstimator_DW.soonarFilter_IIR_states[2]) -
    stateEstimator_DW.Delay2_DSTATE) >= 0.4)));

  /* Outputs for Enabled SubSystem: '<S41>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S62>/Enable'
   */
  /* DataTypeConversion: '<S15>/DataTypeConversionEnable' */
  if (stateEstimator_B.nicemeasurementornewupdateneeded) {
    if (!stateEstimator_DW.EnabledSubsystem_MODE) {
      stateEstimator_DW.EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S62>/Add1' incorporates:
     *  Constant: '<S15>/C'
     *  Delay: '<S15>/MemoryX'
     *  Product: '<S62>/Product'
     *  Reshape: '<S15>/Reshapey'
     */
    rtb_Add1_g = stateEstimator_B.invertzaxisGain - (1.0 *
      stateEstimator_DW.MemoryX_DSTATE[0] + 0.0 *
      stateEstimator_DW.MemoryX_DSTATE[1]);

    /* Product: '<S62>/Product2' */
    stateEstimator_B.Product2[0] = stateEstimator_ConstB.Conversion[0] *
      rtb_Add1_g;
    stateEstimator_B.Product2[1] = stateEstimator_ConstB.Conversion[1] *
      rtb_Add1_g;
  } else {
    if (stateEstimator_DW.EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S62>/deltax' */
      stateEstimator_B.Product2[0] = 0.0;
      stateEstimator_B.Product2[1] = 0.0;
      stateEstimator_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S41>/Enabled Subsystem' */

  /* Sum: '<S41>/Add' incorporates:
   *  Delay: '<S15>/MemoryX'
   */
  rtb_Add_a_idx_0 = stateEstimator_B.Product2[0] +
    stateEstimator_DW.MemoryX_DSTATE[0];
  rtb_Add_a_idx_1 = stateEstimator_B.Product2[1] +
    stateEstimator_DW.MemoryX_DSTATE[1];

  /* Gain: '<S68>/opticalFlowToVelocity_gain' */
  stateEstimator_B.opticalFlowToVelocity_gain[0] = 1.0F * rtu_opticalFlow_datin
    [0];
  stateEstimator_B.opticalFlowToVelocity_gain[1] = 1.0F * rtu_opticalFlow_datin
    [1];
  stateEstimator_B.opticalFlowToVelocity_gain[2] = 1.0F * rtu_opticalFlow_datin
    [2];

  /* Reshape: '<S72>/Reshapey' */
  rtb_Reshapey_o[0] = stateEstimator_B.opticalFlowToVelocity_gain[0];
  rtb_Reshapey_o[1] = stateEstimator_B.opticalFlowToVelocity_gain[1];

  /* Delay: '<S72>/MemoryX' */
  if (stateEstimator_DW.icLoad_i != 0) {
    stateEstimator_DW.MemoryX_DSTATE_d5[0] = stateEstimator_ConstB.ReshapeX0_k[0];
    stateEstimator_DW.MemoryX_DSTATE_d5[1] = stateEstimator_ConstB.ReshapeX0_k[1];
  }

  rtb_MemoryX_m[0] = stateEstimator_DW.MemoryX_DSTATE_d5[0];
  rtb_MemoryX_m[1] = stateEstimator_DW.MemoryX_DSTATE_d5[1];

  /* End of Delay: '<S72>/MemoryX' */
  for (i = 0; i < 2; i++) {
    /* DiscreteFilter: '<S71>/IIRgyroz' */
    tmp = i * 5;
    acc1 = stateEstimator_B.inverseIMU_gain[i + 3];
    denIdx = 1;
    for (i_0 = 0; i_0 < 5; i_0++) {
      acc1 -= stateEstimator_DW.IIRgyroz_states[tmp + i_0] *
        rtCP_IIRgyroz_DenCoef[denIdx];
      denIdx++;
    }

    stateEstimator_DW.IIRgyroz_tmp[i] = acc1 / 1.0F;
    acc1 = 0.282124132F * stateEstimator_DW.IIRgyroz_tmp[i];
    denIdx = 1;
    for (i_0 = 0; i_0 < 5; i_0++) {
      acc1 += stateEstimator_DW.IIRgyroz_states[tmp + i_0] *
        rtCP_IIRgyroz_NumCoef[denIdx];
      denIdx++;
    }

    /* SampleTimeMath: '<S78>/TSamp' incorporates:
     *  DiscreteFilter: '<S71>/IIRgyroz'
     *
     * About '<S78>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    acc1 *= 200.0F;

    /* Sum: '<S78>/Diff' incorporates:
     *  UnitDelay: '<S78>/UD'
     */
    rtb_Diff[i] = acc1 - stateEstimator_DW.UD_DSTATE[i];

    /* Sum: '<S71>/Add' incorporates:
     *  Delay: '<S68>/Delay'
     */
    rtb_Add_hi[i] = stateEstimator_B.opticalFlowToVelocity_gain[i] -
      stateEstimator_DW.Delay_DSTATE_g[i];

    /* SampleTimeMath: '<S78>/TSamp'
     *
     * About '<S78>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    rtb_TSamp[i] = acc1;
  }

  /* Abs: '<S71>/Abs' incorporates:
   *  Abs: '<S71>/Abs4'
   */
  acc1 = (real32_T)fabs(stateEstimator_B.inverseIMU_gain[3]);

  /* Abs: '<S71>/Abs1' incorporates:
   *  Abs: '<S71>/Abs5'
   */
  LogicalOperator3_a_tmp = (real32_T)fabs(stateEstimator_B.inverseIMU_gain[4]);

  /* Logic: '<S71>/Logical Operator3' incorporates:
   *  Abs: '<S71>/Abs'
   *  Abs: '<S71>/Abs1'
   *  Abs: '<S71>/Abs6'
   *  Abs: '<S71>/Abs7'
   *  Abs: '<S71>/Abs8'
   *  Abs: '<S71>/Abs9'
   *  Constant: '<S79>/Constant'
   *  Constant: '<S80>/Constant'
   *  Constant: '<S81>/Constant'
   *  Constant: '<S82>/Constant'
   *  Constant: '<S83>/Constant'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  Constant: '<S89>/Constant'
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Logic: '<S71>/Logical Operator'
   *  Logic: '<S71>/Logical Operator1'
   *  Logic: '<S71>/Logical Operator2'
   *  RelationalOperator: '<S79>/Compare'
   *  RelationalOperator: '<S80>/Compare'
   *  RelationalOperator: '<S81>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  RelationalOperator: '<S89>/Compare'
   *  Reshape: '<S15>/Reshapexhat'
   */
  stateEstimator_B.LogicalOperator3_a = ((((LogicalOperator3_tmp <= 0.6F) &&
    (LogicalOperator3_tmp_0 <= 0.6F) && (acc1 <= 7.0F) &&
    (LogicalOperator3_a_tmp <= 7.0F) && ((real32_T)fabs(rtb_Diff[0]) <= 80.0F) &&
    ((real32_T)fabs(rtb_Diff[1]) <= 80.0F)) || ((acc1 <= 0.5F) &&
    (LogicalOperator3_a_tmp <= 0.5F))) && ((real32_T)fabs(rtb_Add_hi[0]) <= 5.0F)
    && ((real32_T)fabs(rtb_Add_hi[1]) <= 5.0F) && ((real32_T)rtb_Add_a_idx_0 <=
    (-0.4F)));

  /* DataTypeConversion: '<S72>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_i = stateEstimator_B.LogicalOperator3_a;

  /* Outputs for Enabled SubSystem: '<S112>/Enabled Subsystem' */
  /* Constant: '<S72>/C' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable_i,
    stateEstimator_ConstB.Conversion_p, rtCP_C_Value_f, rtb_Reshapey_o,
    rtb_MemoryX_m, &stateEstimator_B.EnabledSubsystem_f,
    &stateEstimator_DW.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S112>/Enabled Subsystem' */

  /* Sum: '<S112>/Add' */
  rtb_Add_m[0] = stateEstimator_B.EnabledSubsystem_f.Product2[0] +
    rtb_MemoryX_m[0];
  rtb_Add_m[1] = stateEstimator_B.EnabledSubsystem_f.Product2[1] +
    rtb_MemoryX_m[1];

  /* Trigonometry: '<S17>/sincos' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion3'
   *  Trigonometry: '<S136>/sincos'
   *  Trigonometry: '<S74>/sincos'
   */
  acc1 = (real32_T)sin(rtb_Merge1);
  LogicalOperator3_tmp = (real32_T)cos(rtb_Merge1);
  LogicalOperator3_tmp_0 = (real32_T)sin(stateEstimator_B.Merge[0]);
  LogicalOperator3_a_tmp = (real32_T)cos(stateEstimator_B.Merge[0]);
  rtb_sincos_o1_idx_2_tmp = (real32_T)sin(stateEstimator_B.Merge[1]);
  rtb_sincos_o2_idx_2_tmp = (real32_T)cos(stateEstimator_B.Merge[1]);

  /* Fcn: '<S17>/Fcn11' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_i[0] = LogicalOperator3_a_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S17>/Fcn21' incorporates:
   *  Fcn: '<S17>/Fcn22'
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_h_tmp = rtb_sincos_o1_idx_2_tmp * LogicalOperator3_tmp_0;
  rtb_VectorConcatenate_i[1] = rtb_VectorConcatenate_h_tmp *
    LogicalOperator3_tmp - rtb_sincos_o2_idx_2_tmp * acc1;

  /* Fcn: '<S17>/Fcn31' incorporates:
   *  Fcn: '<S17>/Fcn32'
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_h_tmp_0 = rtb_sincos_o2_idx_2_tmp *
    LogicalOperator3_tmp_0;
  rtb_VectorConcatenate_i[2] = rtb_VectorConcatenate_h_tmp_0 *
    LogicalOperator3_tmp + rtb_sincos_o1_idx_2_tmp * acc1;

  /* Fcn: '<S17>/Fcn12' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_i[3] = LogicalOperator3_a_tmp * acc1;

  /* Fcn: '<S17>/Fcn22' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_i[4] = rtb_VectorConcatenate_h_tmp * acc1 +
    rtb_sincos_o2_idx_2_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S17>/Fcn32' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_i[5] = rtb_VectorConcatenate_h_tmp_0 * acc1 -
    rtb_sincos_o1_idx_2_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S17>/Fcn13' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_i[6] = -LogicalOperator3_tmp_0;

  /* Fcn: '<S17>/Fcn23' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_i[7] = rtb_sincos_o1_idx_2_tmp * LogicalOperator3_a_tmp;

  /* Fcn: '<S17>/Fcn33' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_i[8] = rtb_sincos_o2_idx_2_tmp * LogicalOperator3_a_tmp;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_states_estimout_at_inport_0' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion3'
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Reshape: '<S15>/Reshapexhat'
   *  Reshape: '<S72>/Reshapexhat'
   */
  rty_states_estimout->X = rtb_TrigonometricFunction_o1_idx_1;
  rty_states_estimout->Y = rtb_UseIPPosSwitch_idx_1;
  rty_states_estimout->Z = (real32_T)rtb_Add_a_idx_0;
  rty_states_estimout->yaw = rtb_Merge1;
  rty_states_estimout->pitch = stateEstimator_B.Merge[0];
  rty_states_estimout->roll = stateEstimator_B.Merge[1];
  rty_states_estimout->dx = rtb_Add_m[0];
  rty_states_estimout->dy = rtb_Add_m[1];

  /* Product: '<S4>/Product1' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion1'
   *  Delay: '<S2>/Delay1'
   *  Reshape: '<S15>/Reshapexhat'
   *  Reshape: '<S67>/Reshape (9) to [3x3] column-major'
   *  SignalConversion: '<S4>/TmpSignal ConversionAtProduct1Inport2'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_VectorConcatenate_h_0[i_0] = rtb_VectorConcatenate_i[i_0 + 6] *
      rtb_Add_a_idx_1 + ((real_T)rtb_VectorConcatenate_i[i_0 + 3] *
                         stateEstimator_DW.Delay1_DSTATE[1] + (real_T)
                         rtb_VectorConcatenate_i[i_0] *
                         stateEstimator_DW.Delay1_DSTATE[0]);
  }

  /* BusCreator: '<Root>/BusConversion_InsertedFor_states_estimout_at_inport_0' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
   */
  rty_states_estimout->dz = (real32_T)rtb_VectorConcatenate_h_0[2];
  rty_states_estimout->p = stateEstimator_B.inverseIMU_gain[3];
  rty_states_estimout->q = stateEstimator_B.inverseIMU_gain[4];
  rty_states_estimout->r = rtb_TrigonometricFunction_o1_idx_0;

  /* ManualSwitch: '<S15>/ManualSwitchPZ' incorporates:
   *  Constant: '<S15>/P0'
   */
  if (((uint8_T)1U) == 1) {
    rtb_ManualSwitchPZ[0] = stateEstimator_ConstB.Conversion_c[0];
    rtb_ManualSwitchPZ[1] = stateEstimator_ConstB.Conversion_c[1];
    rtb_ManualSwitchPZ[2] = stateEstimator_ConstB.Conversion_c[2];
    rtb_ManualSwitchPZ[3] = stateEstimator_ConstB.Conversion_c[3];
  } else {
    rtb_ManualSwitchPZ[0] = 0.0026948589925820132;
    rtb_ManualSwitchPZ[1] = 0.0071657120718244052;
    rtb_ManualSwitchPZ[2] = 0.0071657120718244052;
    rtb_ManualSwitchPZ[3] = 0.03810769293505243;
  }

  /* End of ManualSwitch: '<S15>/ManualSwitchPZ' */

  /* Sum: '<S4>/Sum' incorporates:
   *  Constant: '<S4>/gravity'
   *  Math: '<S4>/Math Function'
   *  Product: '<S4>/Product'
   *  Reshape: '<S67>/Reshape (9) to [3x3] column-major'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    stateEstimator_B.Sum[i_0] = ((rtb_VectorConcatenate_i[3 * i_0 + 1] *
      rtb_FIR_IMUaccel[1] + rtb_VectorConcatenate_i[3 * i_0] * rtb_FIR_IMUaccel
      [0]) + rtb_VectorConcatenate_i[3 * i_0 + 2] * rtb_FIR_IMUaccel[2]) +
      rtCP_gravity_Value[i_0];
  }

  /* End of Sum: '<S4>/Sum' */

  /* Outputs for Enabled SubSystem: '<S36>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S61>/Enable'
   */
  /* DataTypeConversion: '<S15>/DataTypeConversionEnable' */
  if (stateEstimator_B.nicemeasurementornewupdateneeded) {
    if (!stateEstimator_DW.MeasurementUpdate_MODE) {
      stateEstimator_DW.MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S61>/Sum' incorporates:
     *  Constant: '<S15>/C'
     *  Constant: '<S15>/D'
     *  Delay: '<S15>/MemoryX'
     *  Product: '<S61>/C[k]*xhat[k|k-1]'
     *  Product: '<S61>/D[k]*u[k]'
     *  Reshape: '<S15>/Reshapeu'
     *  Reshape: '<S15>/Reshapey'
     *  Sum: '<S61>/Add1'
     */
    rtb_Sum = stateEstimator_B.invertzaxisGain - ((1.0 *
      stateEstimator_DW.MemoryX_DSTATE[0] + 0.0 *
      stateEstimator_DW.MemoryX_DSTATE[1]) + 0.0 * stateEstimator_B.Sum[2]);

    /* Product: '<S61>/Product3' */
    stateEstimator_B.Product3[0] = stateEstimator_ConstB.Conversion_n[0] *
      rtb_Sum;
    stateEstimator_B.Product3[1] = stateEstimator_ConstB.Conversion_n[1] *
      rtb_Sum;
  } else {
    if (stateEstimator_DW.MeasurementUpdate_MODE) {
      /* Disable for Outport: '<S61>/L*(y[k]-yhat[k|k-1])' */
      stateEstimator_B.Product3[0] = 0.0;
      stateEstimator_B.Product3[1] = 0.0;
      stateEstimator_DW.MeasurementUpdate_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S36>/MeasurementUpdate' */

  /* Fcn: '<S74>/Fcn11' */
  rtb_VectorConcatenate_h[0] = LogicalOperator3_a_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S74>/Fcn21' incorporates:
   *  Fcn: '<S74>/Fcn22'
   */
  rtb_TrigonometricFunction_o1_idx_0 = rtb_sincos_o1_idx_2_tmp *
    LogicalOperator3_tmp_0;
  rtb_VectorConcatenate_h[1] = rtb_TrigonometricFunction_o1_idx_0 *
    LogicalOperator3_tmp - rtb_sincos_o2_idx_2_tmp * acc1;

  /* Fcn: '<S74>/Fcn31' incorporates:
   *  Fcn: '<S74>/Fcn32'
   */
  rtb_TrigonometricFunction_o1_idx_1 = rtb_sincos_o2_idx_2_tmp *
    LogicalOperator3_tmp_0;
  rtb_VectorConcatenate_h[2] = rtb_TrigonometricFunction_o1_idx_1 *
    LogicalOperator3_tmp + rtb_sincos_o1_idx_2_tmp * acc1;

  /* Fcn: '<S74>/Fcn12' */
  rtb_VectorConcatenate_h[3] = LogicalOperator3_a_tmp * acc1;

  /* Fcn: '<S74>/Fcn22' */
  rtb_VectorConcatenate_h[4] = rtb_TrigonometricFunction_o1_idx_0 * acc1 +
    rtb_sincos_o2_idx_2_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S74>/Fcn32' */
  rtb_VectorConcatenate_h[5] = rtb_TrigonometricFunction_o1_idx_1 * acc1 -
    rtb_sincos_o1_idx_2_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S74>/Fcn13' */
  rtb_VectorConcatenate_h[6] = -LogicalOperator3_tmp_0;

  /* Fcn: '<S74>/Fcn23' */
  rtb_VectorConcatenate_h[7] = rtb_sincos_o1_idx_2_tmp * LogicalOperator3_a_tmp;

  /* Fcn: '<S74>/Fcn33' */
  rtb_VectorConcatenate_h[8] = rtb_sincos_o2_idx_2_tmp * LogicalOperator3_a_tmp;

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Reshape: '<S15>/Reshapexhat'
   */
  rtb_Compare_i = ((real32_T)rtb_Add_a_idx_0 <= (-0.4F));

  /* Logic: '<S70>/Logical Operator' incorporates:
   *  Constant: '<S75>/Constant'
   *  Constant: '<S76>/Constant'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S76>/Compare'
   */
  rtb_LogicalOperator_cg = ((stateEstimator_B.opticalFlowToVelocity_gain[0] !=
    0.0F) || (stateEstimator_B.opticalFlowToVelocity_gain[1] != 0.0F));

  /* Sum: '<S70>/Add' incorporates:
   *  Constant: '<S70>/gravity'
   *  Product: '<S70>/Product1'
   *  Reshape: '<S77>/Reshape (9) to [3x3] column-major'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_VectorConcatenate_h_0[i_0] = rtb_FIR_IMUaccel[i_0] -
      ((rtb_VectorConcatenate_h[i_0 + 3] * 0.0 + rtb_VectorConcatenate_h[i_0] *
        0.0) + rtb_VectorConcatenate_h[i_0 + 6] * (-9.81));
  }

  /* End of Sum: '<S70>/Add' */

  /* Product: '<S70>/Product' incorporates:
   *  Gain: '<S70>/gainaccinput'
   */
  stateEstimator_B.Product[0] = (real32_T)(0.2 * rtb_VectorConcatenate_h_0[0]) *
    (real32_T)rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;
  stateEstimator_B.Product[1] = (real32_T)(0.2 * rtb_VectorConcatenate_h_0[1]) *
    (real32_T)rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;

  /* DataTypeConversion: '<S103>/Conversion' */
  rtb_Conversion_j[0] = rtb_MemoryX_m[0];
  rtb_Conversion_j[1] = rtb_MemoryX_m[1];

  /* ManualSwitch: '<S72>/ManualSwitchPZ' incorporates:
   *  Constant: '<S72>/P0'
   */
  if (((uint8_T)1U) == 1) {
    rtb_ManualSwitchPZ_m[0] = stateEstimator_ConstB.Conversion_i[0];
    rtb_ManualSwitchPZ_m[1] = stateEstimator_ConstB.Conversion_i[1];
    rtb_ManualSwitchPZ_m[2] = stateEstimator_ConstB.Conversion_i[2];
    rtb_ManualSwitchPZ_m[3] = stateEstimator_ConstB.Conversion_i[3];
  } else {
    rtb_ManualSwitchPZ_m[0] = 0.717328072F;
    rtb_ManualSwitchPZ_m[1] = 0.0F;
    rtb_ManualSwitchPZ_m[2] = 0.0F;
    rtb_ManualSwitchPZ_m[3] = 0.717328072F;
  }

  /* End of ManualSwitch: '<S72>/ManualSwitchPZ' */

  /* Reshape: '<S72>/Reshapeu' */
  rtb_Reshapeu_h[0] = stateEstimator_B.Product[0];
  rtb_Reshapeu_h[1] = stateEstimator_B.Product[1];

  /* Outputs for Enabled SubSystem: '<S107>/MeasurementUpdate' */
  /* Constant: '<S72>/C' incorporates:
   *  Constant: '<S72>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_i,
    stateEstimator_ConstB.Conversion_n4, rtb_Reshapey_o, rtCP_C_Value_f,
    rtb_Conversion_j, rtCP_D_Value_f, rtb_Reshapeu_h,
    &stateEstimator_B.MeasurementUpdate_e,
    &stateEstimator_DW.MeasurementUpdate_e);

  /* End of Outputs for SubSystem: '<S107>/MeasurementUpdate' */

  /* DataTypeConversion: '<S150>/Conversion' */
  rtb_Conversion_p[0] = rtb_MemoryX_f[0];
  rtb_Conversion_p[1] = rtb_MemoryX_f[1];

  /* ManualSwitch: '<S134>/ManualSwitchPZ' incorporates:
   *  Constant: '<S134>/P0'
   */
  if (((uint8_T)1U) == 1) {
    rtb_ManualSwitchPZ_p[0] = stateEstimator_ConstB.Conversion_ao[0];
    rtb_ManualSwitchPZ_p[1] = stateEstimator_ConstB.Conversion_ao[1];
    rtb_ManualSwitchPZ_p[2] = stateEstimator_ConstB.Conversion_ao[2];
    rtb_ManualSwitchPZ_p[3] = stateEstimator_ConstB.Conversion_ao[3];
  } else {
    rtb_ManualSwitchPZ_p[0] = 0.00173705805F;
    rtb_ManualSwitchPZ_p[1] = 0.0F;
    rtb_ManualSwitchPZ_p[2] = 0.0F;
    rtb_ManualSwitchPZ_p[3] = 0.00173705805F;
  }

  /* End of ManualSwitch: '<S134>/ManualSwitchPZ' */

  /* Fcn: '<S136>/Fcn11' */
  rtb_VectorConcatenate_p[0] = LogicalOperator3_a_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S136>/Fcn21' incorporates:
   *  Fcn: '<S136>/Fcn22'
   */
  rtb_TrigonometricFunction_o1_idx_0 = rtb_sincos_o1_idx_2_tmp *
    LogicalOperator3_tmp_0;
  rtb_VectorConcatenate_p[1] = rtb_TrigonometricFunction_o1_idx_0 *
    LogicalOperator3_tmp - rtb_sincos_o2_idx_2_tmp * acc1;

  /* Fcn: '<S136>/Fcn31' incorporates:
   *  Fcn: '<S136>/Fcn32'
   */
  rtb_TrigonometricFunction_o1_idx_1 = rtb_sincos_o2_idx_2_tmp *
    LogicalOperator3_tmp_0;
  rtb_VectorConcatenate_p[2] = rtb_TrigonometricFunction_o1_idx_1 *
    LogicalOperator3_tmp + rtb_sincos_o1_idx_2_tmp * acc1;

  /* Fcn: '<S136>/Fcn12' */
  rtb_VectorConcatenate_p[3] = LogicalOperator3_a_tmp * acc1;

  /* Fcn: '<S136>/Fcn22' */
  rtb_VectorConcatenate_p[4] = rtb_TrigonometricFunction_o1_idx_0 * acc1 +
    rtb_sincos_o2_idx_2_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S136>/Fcn32' */
  rtb_VectorConcatenate_p[5] = rtb_TrigonometricFunction_o1_idx_1 * acc1 -
    rtb_sincos_o1_idx_2_tmp * LogicalOperator3_tmp;

  /* Fcn: '<S136>/Fcn13' */
  rtb_VectorConcatenate_p[6] = -LogicalOperator3_tmp_0;

  /* Fcn: '<S136>/Fcn23' */
  rtb_VectorConcatenate_p[7] = rtb_sincos_o1_idx_2_tmp * LogicalOperator3_a_tmp;

  /* Fcn: '<S136>/Fcn33' */
  rtb_VectorConcatenate_p[8] = rtb_sincos_o2_idx_2_tmp * LogicalOperator3_a_tmp;

  /* Product: '<S4>/Product1' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion1'
   *  Delay: '<S2>/Delay1'
   *  Reshape: '<S15>/Reshapexhat'
   *  Reshape: '<S67>/Reshape (9) to [3x3] column-major'
   *  SignalConversion: '<S4>/TmpSignal ConversionAtProduct1Inport2'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    rtb_VectorConcatenate_h_0[i_0] = rtb_VectorConcatenate_i[i_0 + 6] *
      rtb_Add_a_idx_1 + ((real_T)rtb_VectorConcatenate_i[i_0 + 3] *
                         stateEstimator_DW.Delay1_DSTATE[1] + (real_T)
                         rtb_VectorConcatenate_i[i_0] *
                         stateEstimator_DW.Delay1_DSTATE[0]);
  }

  /* Product: '<S69>/Product' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   *  Math: '<S69>/Math Function'
   *  Reshape: '<S185>/Reshape (9) to [3x3] column-major'
   *  Reshape: '<S72>/Reshapexhat'
   *  SignalConversion: '<S69>/TmpSignal ConversionAtProductInport2'
   */
  for (i_0 = 0; i_0 < 3; i_0++) {
    stateEstimator_B.Product_l[i_0] = 0.0F;
    stateEstimator_B.Product_l[i_0] += rtb_VectorConcatenate_p[3 * i_0] *
      rtb_Add_m[0];
    stateEstimator_B.Product_l[i_0] += rtb_VectorConcatenate_p[3 * i_0 + 1] *
      rtb_Add_m[1];
    stateEstimator_B.Product_l[i_0] += rtb_VectorConcatenate_p[3 * i_0 + 2] *
      (real32_T)rtb_VectorConcatenate_h_0[2];
  }

  /* End of Product: '<S69>/Product' */

  /* Reshape: '<S134>/Reshapeu' */
  rtb_Reshapeu_i[0] = stateEstimator_B.Product_l[0];
  rtb_Reshapeu_i[1] = stateEstimator_B.Product_l[1];

  /* Outputs for Enabled SubSystem: '<S154>/MeasurementUpdate' */
  /* Constant: '<S134>/C' incorporates:
   *  Constant: '<S134>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable,
    stateEstimator_ConstB.Conversion_a, rtb_Reshapey_a, rtCP_C_Value_p,
    rtb_Conversion_p, rtCP_D_Value_b, rtb_Reshapeu_i,
    &stateEstimator_B.MeasurementUpdate_b,
    &stateEstimator_DW.MeasurementUpdate_b);

  /* End of Outputs for SubSystem: '<S154>/MeasurementUpdate' */

  /* Update for Delay: '<S134>/MemoryX' incorporates:
   *  Constant: '<S134>/A'
   *  Constant: '<S134>/B'
   *  Product: '<S154>/A[k]*xhat[k|k-1]'
   *  Product: '<S154>/B[k]*u[k]'
   *  Sum: '<S154>/Add'
   */
  stateEstimator_DW.icLoad = 0U;
  stateEstimator_DW.MemoryX_DSTATE_d[0] = ((0.005F * rtb_Reshapeu_i[0] + 0.0F *
    rtb_Reshapeu_i[1]) + (1.0F * rtb_Conversion_p[0] + 0.0F * rtb_Conversion_p[1]))
    + stateEstimator_B.MeasurementUpdate_b.Product3[0];
  stateEstimator_DW.MemoryX_DSTATE_d[1] = ((0.0F * rtb_Reshapeu_i[0] + 0.005F *
    rtb_Reshapeu_i[1]) + (0.0F * rtb_Conversion_p[0] + 1.0F * rtb_Conversion_p[1]))
    + stateEstimator_B.MeasurementUpdate_b.Product3[1];

  /* Update for Memory: '<S3>/Memory' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion3'
   */
  stateEstimator_DW.Memory_PreviousInput[0] = rtb_Merge1;
  stateEstimator_DW.Memory_PreviousInput[1] = stateEstimator_B.Merge[0];
  stateEstimator_DW.Memory_PreviousInput[2] = stateEstimator_B.Merge[1];

  /* Update for DiscreteFilter: '<S6>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_states[4] =
    stateEstimator_DW.IIR_IMUgyro_r_states[3];
  stateEstimator_DW.IIR_IMUgyro_r_states[3] =
    stateEstimator_DW.IIR_IMUgyro_r_states[2];
  stateEstimator_DW.IIR_IMUgyro_r_states[2] =
    stateEstimator_DW.IIR_IMUgyro_r_states[1];
  stateEstimator_DW.IIR_IMUgyro_r_states[1] =
    stateEstimator_DW.IIR_IMUgyro_r_states[0];
  stateEstimator_DW.IIR_IMUgyro_r_states[0] =
    stateEstimator_DW.IIR_IMUgyro_r_tmp;

  /* Update for DiscreteFir: '<S6>/FIR_IMUaccel' */
  /* Update circular buffer index */
  stateEstimator_DW.FIR_IMUaccel_circBuf--;
  if (stateEstimator_DW.FIR_IMUaccel_circBuf < 0) {
    stateEstimator_DW.FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf] =
    stateEstimator_B.inverseIMU_gain[0];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    5] = stateEstimator_B.inverseIMU_gain[1];
  stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_DW.FIR_IMUaccel_circBuf +
    10] = stateEstimator_B.inverseIMU_gain[2];

  /* End of Update for DiscreteFir: '<S6>/FIR_IMUaccel' */

  /* Update for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = (int8_T)
    *rtu_controlModePosVSOrient_flagin;

  /* Update for Delay: '<S4>/Delay2' incorporates:
   *  Reshape: '<S15>/Reshapexhat'
   */
  stateEstimator_DW.Delay2_DSTATE = rtb_Add_a_idx_0;

  /* Update for Delay: '<S15>/MemoryX' */
  stateEstimator_DW.icLoad_p = 0U;

  /* Update for Delay: '<S69>/Delay' incorporates:
   *  Reshape: '<S134>/Reshapexhat'
   */
  stateEstimator_DW.Delay_DSTATE[0] = rtb_TrigonometricFunction_o2_idx_1;

  /* Update for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] += 0.005F *
    stateEstimator_B.Product_l[0];

  /* Update for Delay: '<S69>/Delay' incorporates:
   *  Reshape: '<S134>/Reshapexhat'
   */
  stateEstimator_DW.Delay_DSTATE[1] = rtb_TrigonometricFunction_o2_idx_0;

  /* Update for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] += 0.005F *
    stateEstimator_B.Product_l[1];

  /* Product: '<S36>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S15>/A'
   *  Delay: '<S15>/MemoryX'
   */
  rtb_Add_a_idx_0 = 0.0 * stateEstimator_DW.MemoryX_DSTATE[0] + 1.0 *
    stateEstimator_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S15>/MemoryX' incorporates:
   *  Constant: '<S15>/A'
   *  Constant: '<S15>/B'
   *  Product: '<S36>/A[k]*xhat[k|k-1]'
   *  Product: '<S36>/B[k]*u[k]'
   *  Reshape: '<S15>/Reshapeu'
   *  Sum: '<S36>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[0] = ((1.0 *
    stateEstimator_DW.MemoryX_DSTATE[0] + 0.005 *
    stateEstimator_DW.MemoryX_DSTATE[1]) + 0.0 * stateEstimator_B.Sum[2]) +
    stateEstimator_B.Product3[0];

  /* Update for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_DW.pressureFilter_IIR_states[1];

  /* Update for Delay: '<S15>/MemoryX' incorporates:
   *  Constant: '<S15>/B'
   *  Product: '<S36>/B[k]*u[k]'
   *  Reshape: '<S15>/Reshapeu'
   *  Sum: '<S36>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[1] = (0.005 * stateEstimator_B.Sum[2] +
    rtb_Add_a_idx_0) + stateEstimator_B.Product3[1];

  /* Update for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_DW.pressureFilter_IIR_states[0];
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_DW.pressureFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_DW.soonarFilter_IIR_states[1];
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_DW.soonarFilter_IIR_states[0];
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_DW.soonarFilter_IIR_tmp;

  /* Update for Delay: '<S72>/MemoryX' incorporates:
   *  Constant: '<S72>/A'
   *  Constant: '<S72>/B'
   *  Product: '<S107>/A[k]*xhat[k|k-1]'
   *  Product: '<S107>/B[k]*u[k]'
   *  Sum: '<S107>/Add'
   */
  stateEstimator_DW.icLoad_i = 0U;
  stateEstimator_DW.MemoryX_DSTATE_d5[0] = ((0.005F * rtb_Reshapeu_h[0] + 0.0F *
    rtb_Reshapeu_h[1]) + (1.0F * rtb_Conversion_j[0] + 0.0F * rtb_Conversion_j[1]))
    + stateEstimator_B.MeasurementUpdate_e.Product3[0];
  stateEstimator_DW.MemoryX_DSTATE_d5[1] = ((0.0F * rtb_Reshapeu_h[0] + 0.005F *
    rtb_Reshapeu_h[1]) + (0.0F * rtb_Conversion_j[0] + 1.0F * rtb_Conversion_j[1]))
    + stateEstimator_B.MeasurementUpdate_e.Product3[1];
  for (i = 0; i < 2; i++) {
    /* Update for DiscreteFilter: '<S71>/IIRgyroz' */
    tmp = i * 5;
    stateEstimator_DW.IIRgyroz_states[tmp + 4] =
      stateEstimator_DW.IIRgyroz_states[tmp + 3];
    stateEstimator_DW.IIRgyroz_states[tmp + 3] =
      stateEstimator_DW.IIRgyroz_states[tmp + 2];
    stateEstimator_DW.IIRgyroz_states[tmp + 2] =
      stateEstimator_DW.IIRgyroz_states[tmp + 1];
    stateEstimator_DW.IIRgyroz_states[tmp + 1] =
      stateEstimator_DW.IIRgyroz_states[tmp];
    stateEstimator_DW.IIRgyroz_states[tmp] = stateEstimator_DW.IIRgyroz_tmp[i];

    /* Update for UnitDelay: '<S78>/UD' */
    stateEstimator_DW.UD_DSTATE[i] = rtb_TSamp[i];

    /* Update for Delay: '<S68>/Delay' incorporates:
     *  Reshape: '<S72>/Reshapexhat'
     */
    stateEstimator_DW.Delay_DSTATE_g[i] = rtb_Add_m[i];

    /* Update for Delay: '<S2>/Delay1' incorporates:
     *  Reshape: '<S72>/Reshapexhat'
     */
    stateEstimator_DW.Delay1_DSTATE[i] = rtb_Add_m[i];
  }
}

/* Model initialize function */
void stateEstimator_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_stateEstimator_T *const stateEstimator_M =
    &(stateEstimator_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(stateEstimator_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &stateEstimator_B), 0,
                sizeof(B_stateEstimator_c_T));

  /* states (dwork) */
  (void) memset((void *)&stateEstimator_DW, 0,
                sizeof(DW_stateEstimator_f_T));
}
