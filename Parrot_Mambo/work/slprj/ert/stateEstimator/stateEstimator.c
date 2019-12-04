/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator.c
 *
 * Code generated for Simulink model 'stateEstimator'.
 *
 * Model version                  : 1.83
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Tue Jun 11 11:03:43 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stateEstimator.h"
#include "stateEstimator_private.h"
#include "rt_powf_snf.h"

P_stateEstimator_T stateEstimator_P_g = {
  /* Mask Parameter: outlierBelowFloor_const
   * Referenced by: '<S18>/Constant'
   */
  0.0,

  /* Mask Parameter: outlierJump_const
   * Referenced by: '<S66>/Constant'
   */
  0.3,

  /* Mask Parameter: currentEstimateVeryOffFromPressure_const
   * Referenced by: '<S64>/Constant'
   */
  0.8,

  /* Mask Parameter: currentStateVeryOffsonarflt_const
   * Referenced by: '<S65>/Constant'
   */
  0.4,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
   * Referenced by: '<S82>/UD'
   */
  0.0F,

  /* Mask Parameter: Checkifvalidvisualpositionestimateavailable_const
   * Referenced by: '<S190>/Constant'
   */
  -99.0F,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S7>/Constant'
   */
  9.56475F,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S8>/Constant'
   */
  10.0552502F,

  /* Mask Parameter: maxp_const
   * Referenced by: '<S85>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxq_const
   * Referenced by: '<S87>/Constant'
   */
  0.6F,

  /* Mask Parameter: maxw1_const
   * Referenced by: '<S89>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxw2_const
   * Referenced by: '<S90>/Constant'
   */
  7.0F,

  /* Mask Parameter: maxdw1_const
   * Referenced by: '<S83>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxdw2_const
   * Referenced by: '<S84>/Constant'
   */
  80.0F,

  /* Mask Parameter: maxp2_const
   * Referenced by: '<S86>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxq2_const
   * Referenced by: '<S88>/Constant'
   */
  0.5F,

  /* Mask Parameter: maxw3_const
   * Referenced by: '<S91>/Constant'
   */
  5.0F,

  /* Mask Parameter: maxw4_const
   * Referenced by: '<S92>/Constant'
   */
  5.0F,

  /* Mask Parameter: minHeightforOF_const
   * Referenced by: '<S93>/Constant'
   */
  -0.4F,

  /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
   * Referenced by: '<S75>/Constant'
   */
  -0.4F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S77>/Constant'
   */
  0.0F,

  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S78>/Constant'
   */
  0.0F,

  /* Mask Parameter: checkifPosavailable_const
   * Referenced by: '<S185>/Constant'
   */
  -99.0F,

  /* Mask Parameter: maxp3_const
   * Referenced by: '<S186>/Constant'
   */
  0.18F,

  /* Mask Parameter: maxq3_const
   * Referenced by: '<S187>/Constant'
   */
  0.18F,

  /* Mask Parameter: planarjumpsVISPOS_const
   * Referenced by: '<S188>/Constant'
   */
  1.0F,

  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S81>/FixPt Switch'
   */
  4294967295U,

  /* Mask Parameter: CompareToConstant_const_a
   * Referenced by: '<S71>/Constant'
   */
  800U,

  /* Expression: 0
   * Referenced by: '<S61>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S62>/deltax'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S141>/KalmanGainM'
   */
  { 0.0057568600814401931, 0.0, 0.0, 0.0057568600814407785 },

  /* Expression: pInitialization.M
   * Referenced by: '<S94>/KalmanGainM'
   */
  { 0.12546560898608977, 0.0, 0.0, 0.12546560898608977 },

  /* Expression: pInitialization.A
   * Referenced by: '<S15>/A'
   */
  { 1.0, 0.0, 0.005, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S94>/KalmanGainL'
   */
  { 0.12546560898608985, 0.0, -0.0, 0.12546560898608985 },

  /* Expression: pInitialization.L
   * Referenced by: '<S141>/KalmanGainL'
   */
  { 0.0057568600814401957, 0.0, -0.0, 0.0057568600814407794 },

  /* Expression: 0
   * Referenced by: '<S4>/Delay2'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S15>/X0'
   */
  { -0.046, 0.0 },

  /* Expression: -inf
   * Referenced by: '<S16>/SaturationSonar'
   */
  0.0,

  /* Expression: Estimator.alt.filterSonarNum
   * Referenced by: '<S16>/soonarFilter_IIR'
   */
  { 3.7568380197305906E-6, 1.1270514059191772E-5, 1.1270514059191772E-5,
    3.7568380197305906E-6 },

  /* Expression: Estimator.alt.filterSonarDen
   * Referenced by: '<S16>/soonarFilter_IIR'
   */
  { 1.0, -2.9371707284498911, 2.8762997234793324, -0.93909894032528318 },

  /* Expression: 0
   * Referenced by: '<S16>/soonarFilter_IIR'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S19>/KalmanGainM'
   */
  { 0.026241420641871387, 0.069776736071491249 },

  /* Expression: pInitialization.C
   * Referenced by: '<S15>/C'
   */
  { 1.0, 0.0 },

  /* Expression: [0 0 -g]
   * Referenced by: '<S70>/gravity'
   */
  { 0.0, 0.0, -9.81 },

  /* Expression: [0 0 g]
   * Referenced by: '<S4>/gravity'
   */
  { 0.0, 0.0, 9.81 },

  /* Expression: Estimator.pos.accelerationInputGain
   * Referenced by: '<S70>/gainaccinput'
   */
  0.2,

  /* Expression: pInitialization.D
   * Referenced by: '<S15>/D'
   */
  0.0,

  /* Expression: pInitialization.L
   * Referenced by: '<S19>/KalmanGainL'
   */
  { 0.026590304322228774, 0.069776736071487447 },

  /* Expression: pInitialization.B
   * Referenced by: '<S15>/B'
   */
  { 0.0, 0.005 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S19>/CovarianceZ'
   */
  { 0.0026241420641871381, 0.0069776736071491255, 0.0069776736071491255,
    0.037607692935052436 },

  /* Expression: pInitialization.P0
   * Referenced by: '<S15>/P0'
   */
  { 0.0026948589925820132, 0.0071657120718244052, 0.0071657120718244052,
    0.03810769293505243 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S94>/CovarianceZ'
   */
  { 0.627328044930449, 0.0, 0.0, 0.627328044930449 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S141>/CovarianceZ'
   */
  { 0.0017270580244320582, 0.0, 0.0, 0.0017270580244322334 },

  /* Expression: pInitialization.G
   * Referenced by: '<S15>/G'
   */
  { 0.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S19>/ConstantP'
   */
  0.0,

  /* Expression: pInitialization.H
   * Referenced by: '<S15>/H'
   */
  0.0,

  /* Expression: pInitialization.N
   * Referenced by: '<S15>/N'
   */
  0.0,

  /* Expression: pInitialization.Q
   * Referenced by: '<S15>/Q'
   */
  0.0005,

  /* Expression: pInitialization.R
   * Referenced by: '<S15>/R'
   */
  0.1,

  /* Expression: 0
   * Referenced by: '<S94>/ConstantP'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S141>/ConstantP'
   */
  0.0,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S9>/Gain1'
   */
  0.005F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S9>/Gain'
   */
  0.995F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S9>/Gain2'
   */
  0.101936802F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S9>/Gain3'
   */
  0.005F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S9>/Gain4'
   */
  0.995F,

  /* Computed Parameter: Gain_Gain_i
   * Referenced by: '<S10>/Gain'
   */
  0.8F,

  /* Computed Parameter: Gain1_Gain_k
   * Referenced by: '<S10>/Gain1'
   */
  0.2F,

  /* Computed Parameter: Gain_Gain_m
   * Referenced by: '<S68>/Gain'
   */
  -1.0F,

  /* Computed Parameter: opticalFlowErrorCorrect_Gain
   * Referenced by: '<S68>/opticalFlowErrorCorrect'
   */
  1.15F,

  /* Expression: single(0)
   * Referenced by: '<S13>/Constant'
   */
  0.0F,

  /* Expression: single(Estimator.complementaryFilterInit)
   * Referenced by: '<S3>/Memory'
   */
  { 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Gain_Gain_c
   * Referenced by: '<S13>/Gain'
   */
  -1.0F,

  /* Computed Parameter: Assumingthatcalibwasdonelevel_Bias
   * Referenced by: '<S6>/Assuming that calib was done level!'
   */
  { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: inverseIMU_gain_Gain
   * Referenced by: '<S6>/inverseIMU_gain'
   */
  { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F },

  /* Computed Parameter: IIR_IMUgyro_r_NumCoef
   * Referenced by: '<S6>/IIR_IMUgyro_r'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIR_IMUgyro_r_DenCoef
   * Referenced by: '<S6>/IIR_IMUgyro_r'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIR_IMUgyro_r_InitialStates
   * Referenced by: '<S6>/IIR_IMUgyro_r'
   */
  0.0F,

  /* Computed Parameter: Gain_Gain_b
   * Referenced by: '<S3>/Gain'
   */
  0.005F,

  /* Computed Parameter: FIR_IMUaccel_InitialStates
   * Referenced by: '<S6>/FIR_IMUaccel'
   */
  0.0F,

  /* Computed Parameter: FIR_IMUaccel_Coefficients
   * Referenced by: '<S6>/FIR_IMUaccel'
   */
  { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
    0.0264077242F },

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S3>/Constant'
   */
  2.0F,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S3>/Merge'
   */
  0.0F,

  /* Computed Parameter: C_Value_p
   * Referenced by: '<S138>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: C_Value_f
   * Referenced by: '<S74>/C'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: A_Value_c
   * Referenced by: '<S74>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_p
   * Referenced by: '<S74>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: D_Value_f
   * Referenced by: '<S74>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: A_Value_b
   * Referenced by: '<S138>/A'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: B_Value_pu
   * Referenced by: '<S138>/B'
   */
  { 0.005F, 0.0F, 0.0F, 0.005F },

  /* Computed Parameter: D_Value_b
   * Referenced by: '<S138>/D'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: X0_Value_e
   * Referenced by: '<S74>/X0'
   */
  { 0.0F, 0.0F },

  /* Computed Parameter: IIRgyroz_NumCoef
   * Referenced by: '<S73>/IIRgyroz'
   */
  { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
    0.282124132F },

  /* Computed Parameter: IIRgyroz_DenCoef
   * Referenced by: '<S73>/IIRgyroz'
   */
  { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

  /* Computed Parameter: IIRgyroz_InitialStates
   * Referenced by: '<S73>/IIRgyroz'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S82>/TSamp'
   */
  200.0F,

  /* Computed Parameter: invertzaxisGain_Gain
   * Referenced by: '<S4>/invertzaxisGain'
   */
  -1.0F,

  /* Computed Parameter: prsToAltGain_Gain
   * Referenced by: '<S4>/prsToAltGain'
   */
  0.0832137167F,

  /* Computed Parameter: pressureFilter_IIR_NumCoef
   * Referenced by: '<S16>/pressureFilter_IIR'
   */
  { 3.75683794E-6F, 1.12705138E-5F, 1.12705138E-5F, 3.75683794E-6F },

  /* Computed Parameter: pressureFilter_IIR_DenCoef
   * Referenced by: '<S16>/pressureFilter_IIR'
   */
  { 1.0F, -2.93717074F, 2.87629962F, -0.939098954F },

  /* Computed Parameter: pressureFilter_IIR_InitialStates
   * Referenced by: '<S16>/pressureFilter_IIR'
   */
  0.0F,

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S68>/Delay'
   */
  0.0F,

  /* Computed Parameter: Delay1_InitialCondition
   * Referenced by: '<S2>/Delay1'
   */
  0.0F,

  /* Computed Parameter: X0_Value_j
   * Referenced by: '<S138>/X0'
   */
  { 0.1F, 0.0F },

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S139>/Constant'
   */
  2.0F,

  /* Computed Parameter: Delay_InitialCondition_n
   * Referenced by: '<S69>/Delay'
   */
  0.0F,

  /* Computed Parameter: SimplyIntegrateVelocity_gainval
   * Referenced by: '<S69>/SimplyIntegrateVelocity'
   */
  0.005F,

  /* Computed Parameter: SimplyIntegrateVelocity_IC
   * Referenced by: '<S69>/SimplyIntegrateVelocity'
   */
  0.0F,

  /* Computed Parameter: UseIPPosSwitch_Threshold
   * Referenced by: '<S69>/UseIPPosSwitch'
   */
  0.0F,

  /* Computed Parameter: P0_Value_m
   * Referenced by: '<S74>/P0'
   */
  { 0.717328072F, 0.0F, 0.0F, 0.717328072F },

  /* Computed Parameter: G_Value_h
   * Referenced by: '<S74>/G'
   */
  { 1.0F, 0.0F, 0.0F, 1.0F },

  /* Computed Parameter: H_Value_c
   * Referenced by: '<S74>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_g
   * Referenced by: '<S74>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_f
   * Referenced by: '<S74>/Q'
   */
  { 0.09F, 0.0F, 0.0F, 0.09F },

  /* Computed Parameter: R_Value_k
   * Referenced by: '<S74>/R'
   */
  { 5.0F, 0.0F, 0.0F, 5.0F },

  /* Computed Parameter: P0_Value_h
   * Referenced by: '<S138>/P0'
   */
  { 0.00173705805F, 0.0F, 0.0F, 0.00173705805F },

  /* Computed Parameter: G_Value_p
   * Referenced by: '<S138>/G'
   */
  { 0.1F, 0.0F, 0.0F, 0.1F },

  /* Computed Parameter: H_Value_d
   * Referenced by: '<S138>/H'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: N_Value_j
   * Referenced by: '<S138>/N'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F },

  /* Computed Parameter: Q_Value_n
   * Referenced by: '<S138>/Q'
   */
  { 0.001F, 0.0F, 0.0F, 0.001F },

  /* Computed Parameter: R_Value_kf
   * Referenced by: '<S138>/R'
   */
  { 0.3F, 0.0F, 0.0F, 0.3F },

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S37>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S112>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S159>/Constant'
   */
  0.0F,

  /* Computed Parameter: MemoryX_DelayLength
   * Referenced by: '<S74>/MemoryX'
   */
  1U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S72>/Output'
   */
  0U,

  /* Computed Parameter: Delay2_DelayLength
   * Referenced by: '<S4>/Delay2'
   */
  1U,

  /* Computed Parameter: MemoryX_DelayLength_e
   * Referenced by: '<S15>/MemoryX'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength
   * Referenced by: '<S68>/Delay'
   */
  1U,

  /* Computed Parameter: Delay1_DelayLength
   * Referenced by: '<S2>/Delay1'
   */
  1U,

  /* Computed Parameter: MemoryX_DelayLength_ez
   * Referenced by: '<S138>/MemoryX'
   */
  1U,

  /* Computed Parameter: Delay_DelayLength_e
   * Referenced by: '<S69>/Delay'
   */
  1U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S80>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_gi
   * Referenced by: '<S81>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S20>/Constant'
   */
  0,

  /* Computed Parameter: Constant_Value_mn
   * Referenced by: '<S95>/Constant'
   */
  0,

  /* Expression: false()
   * Referenced by: '<S74>/Reset'
   */
  0,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S142>/Constant'
   */
  0,

  /* Expression: false()
   * Referenced by: '<S138>/Reset'
   */
  0,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting
   * Referenced by: '<S15>/ManualSwitchPZ'
   */
  1U,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting_i
   * Referenced by: '<S74>/ManualSwitchPZ'
   */
  1U,

  /* Computed Parameter: ManualSwitchPZ_CurrentSetting_b
   * Referenced by: '<S138>/ManualSwitchPZ'
   */
  1U,

  /* Start of '<S163>/Enabled Subsystem' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S184>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S163>/Enabled Subsystem' */

  /* Start of '<S158>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S183>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  ,

  /* End of '<S158>/MeasurementUpdate' */

  /* Start of '<S116>/Enabled Subsystem' */
  {
    /* Computed Parameter: deltax_Y0
     * Referenced by: '<S137>/deltax'
     */
    0.0F
  }
  ,

  /* End of '<S116>/Enabled Subsystem' */

  /* Start of '<S111>/MeasurementUpdate' */
  {
    /* Computed Parameter: Lykyhatkk1_Y0
     * Referenced by: '<S136>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F
  }
  /* End of '<S111>/MeasurementUpdate' */
};

MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

/* Block signals (default storage) */
B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
DW_stateEstimator_f_T stateEstimator_DW;

/*
 * System initialize for enable system:
 *    '<S111>/MeasurementUpdate'
 *    '<S158>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Init(real32_T rty_Lykyhatkk1[2],
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* SystemInitialize for Outport: '<S136>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S111>/MeasurementUpdate'
 *    '<S158>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate_Disable(real32_T rty_Lykyhatkk1[2],
  DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S111>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  /* Disable for Outport: '<S136>/L*(y[k]-yhat[k|k-1])' */
  rty_Lykyhatkk1[0] = localP->Lykyhatkk1_Y0;
  rty_Lykyhatkk1[1] = localP->Lykyhatkk1_Y0;

  /* End of Outputs for SubSystem: '<S111>/MeasurementUpdate' */
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S111>/MeasurementUpdate'
 *    '<S158>/MeasurementUpdate'
 */
void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const real32_T
  rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const real32_T
  rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2], real32_T
  rty_Lykyhatkk1[2], DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S111>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S136>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->MeasurementUpdate_MODE) {
      localDW->MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S136>/Sum' incorporates:
     *  Product: '<S136>/C[k]*xhat[k|k-1]'
     *  Product: '<S136>/D[k]*u[k]'
     *  Sum: '<S136>/Add1'
     */
    rtu_yk_idx_0 = rtu_yk[0] - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1]) + (rtu_Dk[0] * rtu_uk[0] + rtu_Dk[2] * rtu_uk[1]));
    rtu_yk_idx_1 = rtu_yk[1] - ((rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1]) + (rtu_Dk[1] * rtu_uk[0] + rtu_Dk[3] * rtu_uk[1]));

    /* Product: '<S136>/Product3' */
    rty_Lykyhatkk1[0] = 0.0F;
    rty_Lykyhatkk1[0] += rtu_Lk[0] * rtu_yk_idx_0;
    rty_Lykyhatkk1[0] += rtu_Lk[2] * rtu_yk_idx_1;
    rty_Lykyhatkk1[1] = 0.0F;
    rty_Lykyhatkk1[1] += rtu_Lk[1] * rtu_yk_idx_0;
    rty_Lykyhatkk1[1] += rtu_Lk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->MeasurementUpdate_MODE) {
      stateEstimator_MeasurementUpdate_Disable(rty_Lykyhatkk1, localDW, localP);
    }
  }

  /* End of Outputs for SubSystem: '<S111>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S116>/Enabled Subsystem'
 *    '<S163>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Init(real32_T rty_deltax[2],
  P_EnabledSubsystem_stateEstimator_T *localP)
{
  /* SystemInitialize for Outport: '<S137>/deltax' */
  rty_deltax[0] = localP->deltax_Y0;
  rty_deltax[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S116>/Enabled Subsystem'
 *    '<S163>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem_Disable(real32_T rty_deltax[2],
  DW_EnabledSubsystem_stateEstimator_T *localDW,
  P_EnabledSubsystem_stateEstimator_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S116>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  /* Disable for Outport: '<S137>/deltax' */
  rty_deltax[0] = localP->deltax_Y0;
  rty_deltax[1] = localP->deltax_Y0;

  /* End of Outputs for SubSystem: '<S116>/Enabled Subsystem' */
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S116>/Enabled Subsystem'
 *    '<S163>/Enabled Subsystem'
 */
void stateEstimator_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[4], const real32_T rtu_Ck[4], const real32_T rtu_yk[2], const real32_T
  rtu_xhatkk1[2], real32_T rty_deltax[2], DW_EnabledSubsystem_stateEstimator_T
  *localDW, P_EnabledSubsystem_stateEstimator_T *localP)
{
  real32_T rtu_yk_idx_0;
  real32_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S116>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  if (rtu_Enable) {
    if (!localDW->EnabledSubsystem_MODE) {
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S137>/Add1' incorporates:
     *  Product: '<S137>/Product'
     */
    rtu_yk_idx_0 = rtu_yk[0] - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_Ck[2] *
      rtu_xhatkk1[1]);
    rtu_yk_idx_1 = rtu_yk[1] - (rtu_Ck[1] * rtu_xhatkk1[0] + rtu_Ck[3] *
      rtu_xhatkk1[1]);

    /* Product: '<S137>/Product2' */
    rty_deltax[0] = 0.0F;
    rty_deltax[0] += rtu_Mk[0] * rtu_yk_idx_0;
    rty_deltax[0] += rtu_Mk[2] * rtu_yk_idx_1;
    rty_deltax[1] = 0.0F;
    rty_deltax[1] += rtu_Mk[1] * rtu_yk_idx_0;
    rty_deltax[1] += rtu_Mk[3] * rtu_yk_idx_1;
  } else {
    if (localDW->EnabledSubsystem_MODE) {
      stateEstimator_EnabledSubsystem_Disable(rty_deltax, localDW, localP);
    }
  }

  /* End of Outputs for SubSystem: '<S116>/Enabled Subsystem' */
}

/* System initialize for referenced model: 'stateEstimator' */
void stateEstimator_Init(void)
{
  int32_T i;

  /* InitializeConditions for Memory: '<S3>/Memory' */
  stateEstimator_DW.Memory_PreviousInput[0] =
    stateEstimator_P_g.Memory_InitialCondition[0];
  stateEstimator_DW.Memory_PreviousInput[1] =
    stateEstimator_P_g.Memory_InitialCondition[1];
  stateEstimator_DW.Memory_PreviousInput[2] =
    stateEstimator_P_g.Memory_InitialCondition[2];

  /* InitializeConditions for DiscreteFilter: '<S6>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    stateEstimator_DW.IIR_IMUgyro_r_states[i] =
      stateEstimator_P_g.IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S6>/IIR_IMUgyro_r' */

  /* InitializeConditions for DiscreteFir: '<S6>/FIR_IMUaccel' */
  stateEstimator_DW.FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    stateEstimator_DW.FIR_IMUaccel_states[i] =
      stateEstimator_P_g.FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S6>/FIR_IMUaccel' */

  /* InitializeConditions for Delay: '<S74>/MemoryX' */
  stateEstimator_DW.icLoad = 1U;

  /* InitializeConditions for DiscreteFilter: '<S73>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    stateEstimator_DW.IIRgyroz_states[i] =
      stateEstimator_P_g.IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S73>/IIRgyroz' */

  /* InitializeConditions for UnitDelay: '<S82>/UD'
   *
   * Block description for '<S82>/UD':
   *
   *  Store in Global RAM
   */
  stateEstimator_DW.UD_DSTATE[0] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;
  stateEstimator_DW.UD_DSTATE[1] =
    stateEstimator_P_g.DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for UnitDelay: '<S72>/Output' */
  stateEstimator_DW.Output_DSTATE = stateEstimator_P_g.Output_InitialCondition;

  /* InitializeConditions for Reshape: '<S15>/Reshapexhat' incorporates:
   *  Delay: '<S4>/Delay2'
   */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_P_g.Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S15>/MemoryX' */
  stateEstimator_DW.icLoad_p = 1U;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[2] =
    stateEstimator_P_g.pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_P_g.soonarFilter_IIR_InitialStates;

  /* InitializeConditions for Delay: '<S138>/MemoryX' */
  stateEstimator_DW.icLoad_g = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[0] =
    stateEstimator_P_g.Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE_l[0] =
    stateEstimator_P_g.Delay_InitialCondition_n;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] =
    stateEstimator_P_g.SimplyIntegrateVelocity_IC;

  /* SystemInitialize for Merge: '<S3>/Merge' */
  stateEstimator_B.Merge[0] = stateEstimator_P_g.Merge_InitialOutput;

  /* SystemInitialize for Enabled SubSystem: '<S41>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S62>/deltax' */
  stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S41>/Enabled Subsystem' */

  /* InitializeConditions for Delay: '<S68>/Delay' */
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_P_g.Delay_InitialCondition;

  /* InitializeConditions for Delay: '<S2>/Delay1' */
  stateEstimator_DW.Delay1_DSTATE[1] =
    stateEstimator_P_g.Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S69>/Delay' */
  stateEstimator_DW.Delay_DSTATE_l[1] =
    stateEstimator_P_g.Delay_InitialCondition_n;

  /* InitializeConditions for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] =
    stateEstimator_P_g.SimplyIntegrateVelocity_IC;

  /* SystemInitialize for Merge: '<S3>/Merge' */
  stateEstimator_B.Merge[1] = stateEstimator_P_g.Merge_InitialOutput;

  /* SystemInitialize for Enabled SubSystem: '<S41>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S62>/deltax' */
  stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S41>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S116>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(stateEstimator_B.Product2_k,
    &stateEstimator_P_g.EnabledSubsystem_f);

  /* End of SystemInitialize for SubSystem: '<S116>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S111>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_m,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of SystemInitialize for SubSystem: '<S111>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S158>/MeasurementUpdate' */
  stateEstimator_MeasurementUpdate_Init(stateEstimator_B.Product3_j,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of SystemInitialize for SubSystem: '<S158>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S163>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem_Init(stateEstimator_B.Product2_e,
    &stateEstimator_P_g.EnabledSubsystem_m);

  /* End of SystemInitialize for SubSystem: '<S163>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S36>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S61>/L*(y[k]-yhat[k|k-1])' */
  stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
  stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S36>/MeasurementUpdate' */
}

/* Disable for referenced model: 'stateEstimator' */
void stateEstimator_Disable(void)
{
  /* Disable for Enabled SubSystem: '<S41>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_MODE) {
    /* Disable for Outport: '<S62>/deltax' */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
    stateEstimator_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Disable for SubSystem: '<S41>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S116>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_f.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(stateEstimator_B.Product2_k,
      &stateEstimator_DW.EnabledSubsystem_f,
      &stateEstimator_P_g.EnabledSubsystem_f);
  }

  /* End of Disable for SubSystem: '<S116>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S111>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_e.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_m,
      &stateEstimator_DW.MeasurementUpdate_e,
      &stateEstimator_P_g.MeasurementUpdate_e);
  }

  /* End of Disable for SubSystem: '<S111>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S158>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_b.MeasurementUpdate_MODE) {
    stateEstimator_MeasurementUpdate_Disable(stateEstimator_B.Product3_j,
      &stateEstimator_DW.MeasurementUpdate_b,
      &stateEstimator_P_g.MeasurementUpdate_b);
  }

  /* End of Disable for SubSystem: '<S158>/MeasurementUpdate' */

  /* Disable for Enabled SubSystem: '<S163>/Enabled Subsystem' */
  if (stateEstimator_DW.EnabledSubsystem_m.EnabledSubsystem_MODE) {
    stateEstimator_EnabledSubsystem_Disable(stateEstimator_B.Product2_e,
      &stateEstimator_DW.EnabledSubsystem_m,
      &stateEstimator_P_g.EnabledSubsystem_m);
  }

  /* End of Disable for SubSystem: '<S163>/Enabled Subsystem' */

  /* Disable for Enabled SubSystem: '<S36>/MeasurementUpdate' */
  if (stateEstimator_DW.MeasurementUpdate_MODE) {
    /* Disable for Outport: '<S61>/L*(y[k]-yhat[k|k-1])' */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
    stateEstimator_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Disable for SubSystem: '<S36>/MeasurementUpdate' */
}

/* Output and update for referenced model: 'stateEstimator' */
void stateEstimator_run(const boolean_T arg_controlModePosVSOrient_flagin, const
  sensordata_t *arg_sensordata_datin, const real32_T arg_usePosVIS_flagin, const
  real32_T arg_opticalFlow_datin[3], const real32_T arg_posVIS_datin[4],
  statesEstim_t *arg_states_estimout, const real32_T
  arg_sensorCalibration_datin[8], real32_T arg_accel_use[2], boolean_T
  *arg_flags)
{
  /* local block i/o variables */
  boolean_T rtb_DataTypeConversionEnable_i;
  boolean_T rtb_DataTypeConversionEnable_h;
  boolean_T rtb_Reshapeyhat;
  boolean_T rtb_Reshapeyhat_a;
  boolean_T rtb_DataTypeConversionReset_a;
  boolean_T rtb_Reshapeyhat_l;
  boolean_T rtb_DataTypeConversionReset_i;
  boolean_T rtb_LogicalOperator_cg;
  boolean_T rtb_Compare_i;
  int16_T rtb_LogicalOperator;
  real32_T rtb_sincos_o2_idx_2;
  real32_T rtb_DataTypeConversion1_idx_1;
  real32_T rtb_DataTypeConversion1_idx_0;
  real32_T rtb_Sum_k_idx_2;
  real32_T acc1;
  real32_T rtb_VectorConcatenate_tmp;
  real32_T rtb_VectorConcatenate_tmp_0;
  real32_T rtb_sincos_o1_tmp;
  real32_T rtb_sincos_o2_idx_2_tmp;

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  Constant: '<S13>/Constant'
   */
  stateEstimator_B.VectorConcatenate[0] = stateEstimator_P_g.Constant_Value;

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  Constant: '<S13>/Constant'
   */
  stateEstimator_B.VectorConcatenate[1] = stateEstimator_P_g.Constant_Value;

  /* SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1' incorporates:
   *  Memory: '<S3>/Memory'
   */
  stateEstimator_B.rtb_sincos_o2_idx_0 = stateEstimator_DW.Memory_PreviousInput
    [2];
  stateEstimator_B.rtb_sincos_o2_idx_1 = stateEstimator_DW.Memory_PreviousInput
    [1];
  rtb_sincos_o2_idx_2 = stateEstimator_DW.Memory_PreviousInput[0];

  /* Trigonometry: '<S13>/Trigonometric Function' incorporates:
   *  Memory: '<S3>/Memory'
   *  SignalConversion: '<S13>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   */
  stateEstimator_DW.Memory_PreviousInput[0] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_DataTypeConversion1_idx_0 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);
  stateEstimator_DW.Memory_PreviousInput[1] = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_DataTypeConversion1_idx_1 = (real32_T)cos
    (stateEstimator_B.rtb_sincos_o2_idx_1);
  stateEstimator_DW.Memory_PreviousInput[2] = (real32_T)sin(rtb_sincos_o2_idx_2);

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn3' */
  stateEstimator_B.VectorConcatenate[2] = rtb_DataTypeConversion1_idx_1;

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn4' */
  stateEstimator_B.VectorConcatenate[3] =
    stateEstimator_DW.Memory_PreviousInput[0];

  /* Product: '<S13>/Product1' */
  stateEstimator_B.VectorConcatenate[4] = rtb_DataTypeConversion1_idx_0 *
    rtb_DataTypeConversion1_idx_1;

  /* Product: '<S13>/Product3' */
  stateEstimator_B.VectorConcatenate[5] =
    stateEstimator_DW.Memory_PreviousInput[0] *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* SignalConversion: '<S14>/ConcatBufferAtVector ConcatenateIn7' */
  stateEstimator_B.VectorConcatenate[6] = rtb_DataTypeConversion1_idx_0;

  /* Product: '<S13>/Product2' incorporates:
   *  Gain: '<S13>/Gain'
   */
  stateEstimator_B.VectorConcatenate[7] = stateEstimator_P_g.Gain_Gain_c *
    stateEstimator_DW.Memory_PreviousInput[0] * rtb_DataTypeConversion1_idx_1;

  /* Product: '<S13>/Product4' */
  stateEstimator_B.VectorConcatenate[8] = rtb_DataTypeConversion1_idx_0 *
    stateEstimator_DW.Memory_PreviousInput[1];

  /* Product: '<S13>/Divide' incorporates:
   *  Reshape: '<S14>/Reshape (9) to [3x3] column-major'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 9; stateEstimator_B.j++) {
    stateEstimator_B.VectorConcatenate[stateEstimator_B.j] /=
      rtb_DataTypeConversion1_idx_1;
  }

  /* End of Product: '<S13>/Divide' */

  /* Gain: '<S6>/inverseIMU_gain' incorporates:
   *  Bias: '<S6>/Assuming that calib was done level!'
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Sum: '<S6>/Sum1'
   */
  stateEstimator_B.inverseIMU_gain[0] = (arg_sensordata_datin->ddx -
    (arg_sensorCalibration_datin[0] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[0])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[0];
  stateEstimator_B.inverseIMU_gain[1] = (arg_sensordata_datin->ddy -
    (arg_sensorCalibration_datin[1] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[1])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[1];
  stateEstimator_B.inverseIMU_gain[2] = (arg_sensordata_datin->ddz -
    (arg_sensorCalibration_datin[2] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[2])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[2];
  stateEstimator_B.inverseIMU_gain[3] = (arg_sensordata_datin->p -
    (arg_sensorCalibration_datin[3] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[3])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[3];
  stateEstimator_B.inverseIMU_gain[4] = (arg_sensordata_datin->q -
    (arg_sensorCalibration_datin[4] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[4])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[4];
  stateEstimator_B.inverseIMU_gain[5] = (arg_sensordata_datin->r -
    (arg_sensorCalibration_datin[5] +
     stateEstimator_P_g.Assumingthatcalibwasdonelevel_Bias[5])) *
    stateEstimator_P_g.inverseIMU_gain_Gain[5];

  /* DiscreteFilter: '<S6>/IIR_IMUgyro_r' */
  stateEstimator_DW.IIR_IMUgyro_r_tmp = 0.0F;
  rtb_Sum_k_idx_2 = stateEstimator_B.inverseIMU_gain[5];
  stateEstimator_B.denIdx = 1;
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
    rtb_Sum_k_idx_2 -=
      stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[stateEstimator_B.denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[stateEstimator_B.j];
    stateEstimator_B.denIdx++;
  }

  stateEstimator_DW.IIR_IMUgyro_r_tmp = rtb_Sum_k_idx_2 /
    stateEstimator_P_g.IIR_IMUgyro_r_DenCoef[0];
  rtb_DataTypeConversion1_idx_0 = stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[0] *
    stateEstimator_DW.IIR_IMUgyro_r_tmp;
  stateEstimator_B.denIdx = 1;
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
    rtb_DataTypeConversion1_idx_0 +=
      stateEstimator_P_g.IIR_IMUgyro_r_NumCoef[stateEstimator_B.denIdx] *
      stateEstimator_DW.IIR_IMUgyro_r_states[stateEstimator_B.j];
    stateEstimator_B.denIdx++;
  }

  /* Product: '<S3>/Product' incorporates:
   *  DiscreteFilter: '<S6>/IIR_IMUgyro_r'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.sincos_o1[stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 6] *
      rtb_DataTypeConversion1_idx_0 +
      (stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 3] *
       stateEstimator_B.inverseIMU_gain[4] +
       stateEstimator_B.VectorConcatenate[stateEstimator_B.j] *
       stateEstimator_B.inverseIMU_gain[3]);
  }

  /* End of Product: '<S3>/Product' */

  /* Sum: '<S3>/Sum' incorporates:
   *  Gain: '<S3>/Gain'
   */
  rtb_Sum_k_idx_2 = stateEstimator_P_g.Gain_Gain_b * stateEstimator_B.sincos_o1
    [0] + rtb_sincos_o2_idx_2;

  /* DiscreteFir: '<S6>/FIR_IMUaccel' */
  rtb_sincos_o2_idx_2 = stateEstimator_B.inverseIMU_gain[0] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_sincos_o2_idx_2 +=
      stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_sincos_o2_idx_2 +=
      stateEstimator_DW.FIR_IMUaccel_states[stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[0] = rtb_sincos_o2_idx_2;

  /* Math: '<S3>/Math Function' incorporates:
   *  Constant: '<S3>/Constant'
   *  DiscreteFir: '<S6>/FIR_IMUaccel'
   */
  acc1 = (real32_T)floor(stateEstimator_P_g.Constant_Value_n);
  if ((rtb_sincos_o2_idx_2 < 0.0F) && (stateEstimator_P_g.Constant_Value_n >
       acc1)) {
    stateEstimator_B.sincos_o1[0] = -rt_powf_snf(-rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  } else {
    stateEstimator_B.sincos_o1[0] = rt_powf_snf(rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  }

  /* DiscreteFir: '<S6>/FIR_IMUaccel' */
  rtb_sincos_o2_idx_2 = stateEstimator_B.inverseIMU_gain[1] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[5 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[5 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[1] = rtb_sincos_o2_idx_2;

  /* Math: '<S3>/Math Function' incorporates:
   *  Constant: '<S3>/Constant'
   *  DiscreteFir: '<S6>/FIR_IMUaccel'
   */
  if ((rtb_sincos_o2_idx_2 < 0.0F) && (stateEstimator_P_g.Constant_Value_n >
       acc1)) {
    rtb_DataTypeConversion1_idx_1 = -rt_powf_snf(-rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  } else {
    rtb_DataTypeConversion1_idx_1 = rt_powf_snf(rtb_sincos_o2_idx_2,
      stateEstimator_P_g.Constant_Value_n);
  }

  /* DiscreteFir: '<S6>/FIR_IMUaccel' */
  rtb_sincos_o2_idx_2 = stateEstimator_B.inverseIMU_gain[2] *
    stateEstimator_P_g.FIR_IMUaccel_Coefficients[0];
  stateEstimator_B.cff = 1;
  stateEstimator_B.j = stateEstimator_DW.FIR_IMUaccel_circBuf;
  while (stateEstimator_B.j < 5) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[10 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.j = 0;
  while (stateEstimator_B.j < stateEstimator_DW.FIR_IMUaccel_circBuf) {
    rtb_sincos_o2_idx_2 += stateEstimator_DW.FIR_IMUaccel_states[10 +
      stateEstimator_B.j] *
      stateEstimator_P_g.FIR_IMUaccel_Coefficients[stateEstimator_B.cff];
    stateEstimator_B.cff++;
    stateEstimator_B.j++;
  }

  stateEstimator_B.FIR_IMUaccel[2] = rtb_sincos_o2_idx_2;

  /* Math: '<S3>/Math Function' incorporates:
   *  Constant: '<S3>/Constant'
   *  DiscreteFir: '<S6>/FIR_IMUaccel'
   */
  if ((rtb_sincos_o2_idx_2 < 0.0F) && (stateEstimator_P_g.Constant_Value_n >
       acc1)) {
    acc1 = -rt_powf_snf(-rtb_sincos_o2_idx_2,
                        stateEstimator_P_g.Constant_Value_n);
  } else {
    acc1 = rt_powf_snf(rtb_sincos_o2_idx_2, stateEstimator_P_g.Constant_Value_n);
  }

  /* Sqrt: '<S3>/Sqrt' incorporates:
   *  Math: '<S3>/Math Function'
   *  Sum: '<S3>/Sum of Elements'
   */
  rtb_DataTypeConversion1_idx_1 = (real32_T)sqrt((stateEstimator_B.sincos_o1[0]
    + rtb_DataTypeConversion1_idx_1) + acc1);

  /* Logic: '<S3>/Logical Operator' incorporates:
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   */
  rtb_LogicalOperator = (int16_T)((rtb_DataTypeConversion1_idx_1 >
    stateEstimator_P_g.CompareToConstant_const) &&
    (rtb_DataTypeConversion1_idx_1 < stateEstimator_P_g.CompareToConstant1_const));

  /* If: '<S3>/If' incorporates:
   *  Gain: '<S3>/Gain'
   *  Inport: '<S11>/prin'
   *  Sum: '<S3>/Sum'
   */
  if (rtb_LogicalOperator > 0) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* Sum: '<S9>/Sum' incorporates:
     *  DiscreteFir: '<S6>/FIR_IMUaccel'
     *  Gain: '<S3>/Gain'
     *  Gain: '<S9>/Gain'
     *  Gain: '<S9>/Gain1'
     *  Product: '<S9>/Divide'
     *  Sum: '<S3>/Sum'
     *  Trigonometry: '<S9>/Trigonometric Function'
     */
    stateEstimator_B.Merge[1] = (stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[2] + stateEstimator_B.rtb_sincos_o2_idx_0) *
      stateEstimator_P_g.Gain_Gain + (real32_T)atan
      (stateEstimator_B.FIR_IMUaccel[1] / rtb_sincos_o2_idx_2) *
      stateEstimator_P_g.Gain1_Gain;

    /* Gain: '<S9>/Gain2' */
    stateEstimator_B.rtb_sincos_o2_idx_0 = stateEstimator_P_g.Gain2_Gain *
      stateEstimator_B.FIR_IMUaccel[0];

    /* Trigonometry: '<S9>/Trigonometric Function1' */
    if (stateEstimator_B.rtb_sincos_o2_idx_0 > 1.0F) {
      stateEstimator_B.rtb_sincos_o2_idx_0 = 1.0F;
    } else {
      if (stateEstimator_B.rtb_sincos_o2_idx_0 < -1.0F) {
        stateEstimator_B.rtb_sincos_o2_idx_0 = -1.0F;
      }
    }

    /* Sum: '<S9>/Sum1' incorporates:
     *  Gain: '<S3>/Gain'
     *  Gain: '<S9>/Gain3'
     *  Gain: '<S9>/Gain4'
     *  Sum: '<S3>/Sum'
     *  Trigonometry: '<S9>/Trigonometric Function1'
     */
    stateEstimator_B.Merge[0] = (stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[1] + stateEstimator_B.rtb_sincos_o2_idx_1) *
      stateEstimator_P_g.Gain4_Gain + stateEstimator_P_g.Gain3_Gain * (real32_T)
      asin(stateEstimator_B.rtb_sincos_o2_idx_0);

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    stateEstimator_B.Merge[0] = stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[1] + stateEstimator_B.rtb_sincos_o2_idx_1;
    stateEstimator_B.Merge[1] = stateEstimator_P_g.Gain_Gain_b *
      stateEstimator_B.sincos_o1[2] + stateEstimator_B.rtb_sincos_o2_idx_0;

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
  }

  /* End of If: '<S3>/If' */

  /* If: '<S3>/If1' incorporates:
   *  Constant: '<S190>/Constant'
   *  Logic: '<S6>/Logical Operator'
   *  RelationalOperator: '<S190>/Compare'
   */
  if ((arg_posVIS_datin[0] !=
       stateEstimator_P_g.Checkifvalidvisualpositionestimateavailable_const) &&
      (arg_usePosVIS_flagin != 0.0F)) {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
     *  Gain: '<S10>/Gain'
     *  Gain: '<S10>/Gain1'
     *  Sum: '<S10>/Sum'
     */
    stateEstimator_DW.Memory_PreviousInput[0] = stateEstimator_P_g.Gain_Gain_i *
      rtb_Sum_k_idx_2 + stateEstimator_P_g.Gain1_Gain_k * arg_posVIS_datin[3];

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
     *  Inport: '<S12>/yawin'
     */
    stateEstimator_DW.Memory_PreviousInput[0] = rtb_Sum_k_idx_2;

    /* End of Outputs for SubSystem: '<S3>/If Action Subsystem3' */
  }

  /* End of If: '<S3>/If1' */

  /* DataTypeConversion: '<S3>/Data Type Conversion3' */
  stateEstimator_DW.Memory_PreviousInput[1] = stateEstimator_B.Merge[0];
  stateEstimator_DW.Memory_PreviousInput[2] = stateEstimator_B.Merge[1];

  /* Trigonometry: '<S17>/sincos' incorporates:
   *  Trigonometry: '<S140>/sincos'
   *  Trigonometry: '<S76>/sincos'
   */
  stateEstimator_B.rtb_sincos_o2_idx_1 = (real32_T)sin
    (stateEstimator_DW.Memory_PreviousInput[0]);
  stateEstimator_B.rtb_sincos_o2_idx_0 = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[0]);
  rtb_Sum_k_idx_2 = (real32_T)sin(stateEstimator_DW.Memory_PreviousInput[1]);
  acc1 = (real32_T)cos(stateEstimator_DW.Memory_PreviousInput[1]);
  rtb_sincos_o1_tmp = (real32_T)sin(stateEstimator_DW.Memory_PreviousInput[2]);
  rtb_sincos_o2_idx_2_tmp = (real32_T)cos
    (stateEstimator_DW.Memory_PreviousInput[2]);

  /* Fcn: '<S17>/Fcn11' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  stateEstimator_B.VectorConcatenate[0] = acc1 *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S17>/Fcn21' incorporates:
   *  Fcn: '<S17>/Fcn22'
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_tmp = rtb_sincos_o1_tmp * rtb_Sum_k_idx_2;
  stateEstimator_B.VectorConcatenate[1] = rtb_VectorConcatenate_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0 - rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S17>/Fcn31' incorporates:
   *  Fcn: '<S17>/Fcn32'
   *  Trigonometry: '<S17>/sincos'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_sincos_o2_idx_2_tmp * rtb_Sum_k_idx_2;
  stateEstimator_B.VectorConcatenate[2] = rtb_VectorConcatenate_tmp_0 *
    stateEstimator_B.rtb_sincos_o2_idx_0 + rtb_sincos_o1_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S17>/Fcn12' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  stateEstimator_B.VectorConcatenate[3] = acc1 *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S17>/Fcn22' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  stateEstimator_B.VectorConcatenate[4] = rtb_VectorConcatenate_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1 + rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S17>/Fcn32' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  stateEstimator_B.VectorConcatenate[5] = rtb_VectorConcatenate_tmp_0 *
    stateEstimator_B.rtb_sincos_o2_idx_1 - rtb_sincos_o1_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S17>/Fcn13' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  stateEstimator_B.VectorConcatenate[6] = -rtb_Sum_k_idx_2;

  /* Fcn: '<S17>/Fcn23' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  stateEstimator_B.VectorConcatenate[7] = rtb_sincos_o1_tmp * acc1;

  /* Fcn: '<S17>/Fcn33' incorporates:
   *  Trigonometry: '<S17>/sincos'
   */
  stateEstimator_B.VectorConcatenate[8] = rtb_sincos_o2_idx_2_tmp * acc1;

  /* Fcn: '<S76>/Fcn11' */
  stateEstimator_B.Reshape9to3x3columnmajor[0] = acc1 *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S76>/Fcn21' incorporates:
   *  Fcn: '<S76>/Fcn22'
   */
  rtb_VectorConcatenate_tmp = rtb_sincos_o1_tmp * rtb_Sum_k_idx_2;
  stateEstimator_B.Reshape9to3x3columnmajor[1] = rtb_VectorConcatenate_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0 - rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S76>/Fcn31' incorporates:
   *  Fcn: '<S76>/Fcn32'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_sincos_o2_idx_2_tmp * rtb_Sum_k_idx_2;
  stateEstimator_B.Reshape9to3x3columnmajor[2] = rtb_VectorConcatenate_tmp_0 *
    stateEstimator_B.rtb_sincos_o2_idx_0 + rtb_sincos_o1_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S76>/Fcn12' */
  stateEstimator_B.Reshape9to3x3columnmajor[3] = acc1 *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S76>/Fcn22' */
  stateEstimator_B.Reshape9to3x3columnmajor[4] = rtb_VectorConcatenate_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1 + rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S76>/Fcn32' */
  stateEstimator_B.Reshape9to3x3columnmajor[5] = rtb_VectorConcatenate_tmp_0 *
    stateEstimator_B.rtb_sincos_o2_idx_1 - rtb_sincos_o1_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S76>/Fcn13' */
  stateEstimator_B.Reshape9to3x3columnmajor[6] = -rtb_Sum_k_idx_2;

  /* Fcn: '<S76>/Fcn23' */
  stateEstimator_B.Reshape9to3x3columnmajor[7] = rtb_sincos_o1_tmp * acc1;

  /* Fcn: '<S76>/Fcn33' */
  stateEstimator_B.Reshape9to3x3columnmajor[8] = rtb_sincos_o2_idx_2_tmp * acc1;

  /* Fcn: '<S140>/Fcn11' */
  stateEstimator_B.MathFunction_b[0] = acc1 *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S140>/Fcn21' incorporates:
   *  Fcn: '<S140>/Fcn22'
   */
  rtb_VectorConcatenate_tmp = rtb_sincos_o1_tmp * rtb_Sum_k_idx_2;
  stateEstimator_B.MathFunction_b[1] = rtb_VectorConcatenate_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0 - rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S140>/Fcn31' incorporates:
   *  Fcn: '<S140>/Fcn32'
   */
  rtb_VectorConcatenate_tmp_0 = rtb_sincos_o2_idx_2_tmp * rtb_Sum_k_idx_2;
  stateEstimator_B.MathFunction_b[2] = rtb_VectorConcatenate_tmp_0 *
    stateEstimator_B.rtb_sincos_o2_idx_0 + rtb_sincos_o1_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S140>/Fcn12' */
  stateEstimator_B.MathFunction_b[3] = acc1 *
    stateEstimator_B.rtb_sincos_o2_idx_1;

  /* Fcn: '<S140>/Fcn22' */
  stateEstimator_B.MathFunction_b[4] = rtb_VectorConcatenate_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_1 + rtb_sincos_o2_idx_2_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S140>/Fcn32' */
  stateEstimator_B.MathFunction_b[5] = rtb_VectorConcatenate_tmp_0 *
    stateEstimator_B.rtb_sincos_o2_idx_1 - rtb_sincos_o1_tmp *
    stateEstimator_B.rtb_sincos_o2_idx_0;

  /* Fcn: '<S140>/Fcn13' */
  stateEstimator_B.MathFunction_b[6] = -rtb_Sum_k_idx_2;

  /* Fcn: '<S140>/Fcn23' */
  stateEstimator_B.MathFunction_b[7] = rtb_sincos_o1_tmp * acc1;

  /* Fcn: '<S140>/Fcn33' */
  stateEstimator_B.MathFunction_b[8] = rtb_sincos_o2_idx_2_tmp * acc1;

  /* Math: '<S69>/Math Function' */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_MathFunction_b_m[3 * stateEstimator_B.j] =
      stateEstimator_B.MathFunction_b[stateEstimator_B.j];
    stateEstimator_B.rtb_MathFunction_b_m[1 + 3 * stateEstimator_B.j] =
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 3];
    stateEstimator_B.rtb_MathFunction_b_m[2 + 3 * stateEstimator_B.j] =
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 6];
  }

  for (stateEstimator_B.j = 0; stateEstimator_B.j < 9; stateEstimator_B.j++) {
    stateEstimator_B.MathFunction_b[stateEstimator_B.j] =
      stateEstimator_B.rtb_MathFunction_b_m[stateEstimator_B.j];
  }

  /* End of Math: '<S69>/Math Function' */

  /* DataTypeConversion: '<S180>/Conversion' incorporates:
   *  Constant: '<S141>/KalmanGainM'
   */
  stateEstimator_B.Conversion_g[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[0];
  stateEstimator_B.Conversion_g[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[1];
  stateEstimator_B.Conversion_g[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[2];
  stateEstimator_B.Conversion_g[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value[3];

  /* DataTypeConversion: '<S133>/Conversion' incorporates:
   *  Constant: '<S94>/KalmanGainM'
   */
  stateEstimator_B.Conversion_p[0] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[0];
  stateEstimator_B.Conversion_p[1] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[1];
  stateEstimator_B.Conversion_p[2] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[2];
  stateEstimator_B.Conversion_p[3] = (real32_T)
    stateEstimator_P_g.KalmanGainM_Value_d[3];

  /* DataTypeConversion: '<S132>/Conversion' incorporates:
   *  Constant: '<S94>/KalmanGainL'
   */
  stateEstimator_B.Conversion_n4[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[0];
  stateEstimator_B.Conversion_n4[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[1];
  stateEstimator_B.Conversion_n4[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[2];
  stateEstimator_B.Conversion_n4[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value[3];

  /* DataTypeConversion: '<S179>/Conversion' incorporates:
   *  Constant: '<S141>/KalmanGainL'
   */
  stateEstimator_B.Conversion_a[0] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[0];
  stateEstimator_B.Conversion_a[1] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[1];
  stateEstimator_B.Conversion_a[2] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[2];
  stateEstimator_B.Conversion_a[3] = (real32_T)
    stateEstimator_P_g.KalmanGainL_Value_h[3];

  /* Delay: '<S74>/MemoryX' incorporates:
   *  Constant: '<S74>/X0'
   *  Reshape: '<S74>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad != 0) {
    stateEstimator_DW.MemoryX_DSTATE_d[0] = stateEstimator_P_g.X0_Value_e[0];
    stateEstimator_DW.MemoryX_DSTATE_d[1] = stateEstimator_P_g.X0_Value_e[1];
  }

  stateEstimator_B.MemoryX_m[0] = stateEstimator_DW.MemoryX_DSTATE_d[0];
  stateEstimator_B.MemoryX_m[1] = stateEstimator_DW.MemoryX_DSTATE_d[1];

  /* End of Delay: '<S74>/MemoryX' */
  for (stateEstimator_B.cff = 0; stateEstimator_B.cff < 2; stateEstimator_B.cff
       ++) {
    /* DiscreteFilter: '<S73>/IIRgyroz' */
    stateEstimator_B.memOffset = stateEstimator_B.cff * 5;
    rtb_Sum_k_idx_2 = stateEstimator_B.inverseIMU_gain[stateEstimator_B.cff + 3];
    stateEstimator_B.denIdx = 1;
    for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
      rtb_Sum_k_idx_2 -=
        stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset +
        stateEstimator_B.j] *
        stateEstimator_P_g.IIRgyroz_DenCoef[stateEstimator_B.denIdx];
      stateEstimator_B.denIdx++;
    }

    stateEstimator_DW.IIRgyroz_tmp[stateEstimator_B.cff] = rtb_Sum_k_idx_2 /
      stateEstimator_P_g.IIRgyroz_DenCoef[0];
    stateEstimator_B.rtb_sincos_o2_idx_1 = stateEstimator_P_g.IIRgyroz_NumCoef[0]
      * stateEstimator_DW.IIRgyroz_tmp[stateEstimator_B.cff];
    stateEstimator_B.denIdx = 1;
    for (stateEstimator_B.j = 0; stateEstimator_B.j < 5; stateEstimator_B.j++) {
      stateEstimator_B.rtb_sincos_o2_idx_1 +=
        stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset +
        stateEstimator_B.j] *
        stateEstimator_P_g.IIRgyroz_NumCoef[stateEstimator_B.denIdx];
      stateEstimator_B.denIdx++;
    }

    /* SampleTimeMath: '<S82>/TSamp' incorporates:
     *  DiscreteFilter: '<S73>/IIRgyroz'
     *
     * About '<S82>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    stateEstimator_B.rtb_sincos_o2_idx_1 *= stateEstimator_P_g.TSamp_WtEt;

    /* Sum: '<S82>/Diff' incorporates:
     *  UnitDelay: '<S82>/UD'
     *
     * Block description for '<S82>/Diff':
     *
     *  Add in CPU
     *
     * Block description for '<S82>/UD':
     *
     *  Store in Global RAM
     */
    stateEstimator_DW.UD_DSTATE[stateEstimator_B.cff] =
      stateEstimator_B.rtb_sincos_o2_idx_1 -
      stateEstimator_DW.UD_DSTATE[stateEstimator_B.cff];

    /* SampleTimeMath: '<S82>/TSamp'
     *
     * About '<S82>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    stateEstimator_B.TSamp[stateEstimator_B.cff] =
      stateEstimator_B.rtb_sincos_o2_idx_1;
  }

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   *  Delay: '<S4>/Delay2'
   */
  stateEstimator_B.Compare = (stateEstimator_DW.Delay2_DSTATE >
    stateEstimator_P_g.outlierBelowFloor_const);

  /* Delay: '<S15>/MemoryX' incorporates:
   *  Constant: '<S15>/X0'
   *  DataTypeConversion: '<S15>/DataTypeConversionReset'
   *  Reshape: '<S15>/ReshapeX0'
   */
  if (stateEstimator_B.Compare) {
    stateEstimator_DW.icLoad_p = 1U;
  }

  if (stateEstimator_DW.icLoad_p != 0) {
    stateEstimator_DW.MemoryX_DSTATE[0] = stateEstimator_P_g.X0_Value[0];
    stateEstimator_DW.MemoryX_DSTATE[1] = stateEstimator_P_g.X0_Value[1];
  }

  /* Gain: '<S4>/invertzaxisGain' */
  stateEstimator_B.invertzaxisGain = (real_T)
    stateEstimator_P_g.invertzaxisGain_Gain *
    arg_sensordata_datin->altitude_sonar;

  /* DiscreteFilter: '<S16>/pressureFilter_IIR' incorporates:
   *  DataTypeConversion: '<S6>/Data Type Conversion'
   *  Gain: '<S4>/prsToAltGain'
   *  Sum: '<S6>/Sum2'
   */
  stateEstimator_DW.pressureFilter_IIR_tmp = ((((arg_sensordata_datin->prs -
    arg_sensorCalibration_datin[6]) * stateEstimator_P_g.prsToAltGain_Gain -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[1] *
    stateEstimator_DW.pressureFilter_IIR_states[0]) -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[2] *
    stateEstimator_DW.pressureFilter_IIR_states[1]) -
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[3] *
    stateEstimator_DW.pressureFilter_IIR_states[2]) /
    stateEstimator_P_g.pressureFilter_IIR_DenCoef[0];

  /* DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_tmp = (((stateEstimator_B.invertzaxisGain -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[1] *
    stateEstimator_DW.soonarFilter_IIR_states[0]) -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[2] *
    stateEstimator_DW.soonarFilter_IIR_states[1]) -
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[3] *
    stateEstimator_DW.soonarFilter_IIR_states[2]) /
    stateEstimator_P_g.soonarFilter_IIR_DenCoef[0];

  /* Saturate: '<S16>/SaturationSonar' */
  if (stateEstimator_B.invertzaxisGain > -rtP_Sensors.altSensorMin) {
    stateEstimator_B.Sum_c = -rtP_Sensors.altSensorMin;
  } else if (stateEstimator_B.invertzaxisGain <
             stateEstimator_P_g.SaturationSonar_LowerSat) {
    stateEstimator_B.Sum_c = stateEstimator_P_g.SaturationSonar_LowerSat;
  } else {
    stateEstimator_B.Sum_c = stateEstimator_B.invertzaxisGain;
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
    (stateEstimator_DW.Delay2_DSTATE - stateEstimator_B.Sum_c) <=
    stateEstimator_P_g.outlierJump_const) && (stateEstimator_B.invertzaxisGain <
    -rtP_Sensors.altSensorMin)) || ((fabs
    ((((stateEstimator_P_g.pressureFilter_IIR_NumCoef[0] *
        stateEstimator_DW.pressureFilter_IIR_tmp +
        stateEstimator_P_g.pressureFilter_IIR_NumCoef[1] *
        stateEstimator_DW.pressureFilter_IIR_states[0]) +
       stateEstimator_P_g.pressureFilter_IIR_NumCoef[2] *
       stateEstimator_DW.pressureFilter_IIR_states[1]) +
      stateEstimator_P_g.pressureFilter_IIR_NumCoef[3] *
      stateEstimator_DW.pressureFilter_IIR_states[2]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentEstimateVeryOffFromPressure_const) && (fabs
    ((((stateEstimator_P_g.soonarFilter_IIR_NumCoef[0] *
        stateEstimator_DW.soonarFilter_IIR_tmp +
        stateEstimator_P_g.soonarFilter_IIR_NumCoef[1] *
        stateEstimator_DW.soonarFilter_IIR_states[0]) +
       stateEstimator_P_g.soonarFilter_IIR_NumCoef[2] *
       stateEstimator_DW.soonarFilter_IIR_states[1]) +
      stateEstimator_P_g.soonarFilter_IIR_NumCoef[3] *
      stateEstimator_DW.soonarFilter_IIR_states[2]) -
     stateEstimator_DW.Delay2_DSTATE) >=
    stateEstimator_P_g.currentStateVeryOffsonarflt_const)));

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
    stateEstimator_B.Sum_c = stateEstimator_B.invertzaxisGain -
      (stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
       stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1]);

    /* Product: '<S62>/Product2' incorporates:
     *  Constant: '<S19>/KalmanGainM'
     *  DataTypeConversion: '<S58>/Conversion'
     */
    stateEstimator_B.Product2[0] = stateEstimator_P_g.KalmanGainM_Value_p[0] *
      stateEstimator_B.Sum_c;
    stateEstimator_B.Product2[1] = stateEstimator_P_g.KalmanGainM_Value_p[1] *
      stateEstimator_B.Sum_c;
  } else {
    if (stateEstimator_DW.EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S62>/deltax' */
      stateEstimator_B.Product2[0] = stateEstimator_P_g.deltax_Y0;
      stateEstimator_B.Product2[1] = stateEstimator_P_g.deltax_Y0;
      stateEstimator_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S41>/Enabled Subsystem' */

  /* Reshape: '<S15>/Reshapexhat' incorporates:
   *  Delay: '<S15>/MemoryX'
   *  Sum: '<S41>/Add'
   */
  stateEstimator_DW.Delay2_DSTATE = stateEstimator_B.Product2[0] +
    stateEstimator_DW.MemoryX_DSTATE[0];

  /* Sum: '<S41>/Add' incorporates:
   *  Delay: '<S15>/MemoryX'
   */
  stateEstimator_B.Sum_c = stateEstimator_B.Product2[1] +
    stateEstimator_DW.MemoryX_DSTATE[1];

  /* Switch: '<S68>/Switch' incorporates:
   *  Constant: '<S71>/Constant'
   *  Gain: '<S68>/opticalFlowErrorCorrect'
   *  Product: '<S68>/ '
   *  RelationalOperator: '<S71>/Compare'
   *  UnitDelay: '<S72>/Output'
   */
  if (stateEstimator_DW.Output_DSTATE <
      stateEstimator_P_g.CompareToConstant_const_a) {
    stateEstimator_B.Switch[0] = arg_opticalFlow_datin[0];
    stateEstimator_B.Switch[1] = arg_opticalFlow_datin[1];
    stateEstimator_B.Switch[2] = arg_opticalFlow_datin[2];
  } else {
    /* Gain: '<S68>/Gain' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     *  Reshape: '<S15>/Reshapexhat'
     */
    stateEstimator_B.rtb_sincos_o2_idx_1 = stateEstimator_P_g.Gain_Gain_m *
      (real32_T)stateEstimator_DW.Delay2_DSTATE;
    stateEstimator_B.Switch[0] = arg_opticalFlow_datin[0] *
      stateEstimator_B.rtb_sincos_o2_idx_1 *
      stateEstimator_P_g.opticalFlowErrorCorrect_Gain;
    stateEstimator_B.Switch[1] = arg_opticalFlow_datin[1] *
      stateEstimator_B.rtb_sincos_o2_idx_1 *
      stateEstimator_P_g.opticalFlowErrorCorrect_Gain;
    stateEstimator_B.Switch[2] = arg_opticalFlow_datin[2] *
      stateEstimator_B.rtb_sincos_o2_idx_1 *
      stateEstimator_P_g.opticalFlowErrorCorrect_Gain;
  }

  /* End of Switch: '<S68>/Switch' */

  /* Abs: '<S73>/Abs' incorporates:
   *  Abs: '<S73>/Abs4'
   */
  acc1 = (real32_T)fabs(stateEstimator_B.inverseIMU_gain[3]);

  /* Abs: '<S73>/Abs1' incorporates:
   *  Abs: '<S73>/Abs5'
   */
  stateEstimator_B.rtb_sincos_o2_idx_1 = (real32_T)fabs
    (stateEstimator_B.inverseIMU_gain[4]);

  /* Logic: '<S73>/Logical Operator3' incorporates:
   *  Abs: '<S73>/Abs'
   *  Abs: '<S73>/Abs1'
   *  Abs: '<S73>/Abs2'
   *  Abs: '<S73>/Abs3'
   *  Abs: '<S73>/Abs6'
   *  Abs: '<S73>/Abs7'
   *  Abs: '<S73>/Abs8'
   *  Abs: '<S73>/Abs9'
   *  Constant: '<S83>/Constant'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S85>/Constant'
   *  Constant: '<S86>/Constant'
   *  Constant: '<S87>/Constant'
   *  Constant: '<S88>/Constant'
   *  Constant: '<S89>/Constant'
   *  Constant: '<S90>/Constant'
   *  Constant: '<S91>/Constant'
   *  Constant: '<S92>/Constant'
   *  Constant: '<S93>/Constant'
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Delay: '<S68>/Delay'
   *  Logic: '<S73>/Logical Operator'
   *  Logic: '<S73>/Logical Operator1'
   *  Logic: '<S73>/Logical Operator2'
   *  RelationalOperator: '<S83>/Compare'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S85>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   *  RelationalOperator: '<S87>/Compare'
   *  RelationalOperator: '<S88>/Compare'
   *  RelationalOperator: '<S89>/Compare'
   *  RelationalOperator: '<S90>/Compare'
   *  RelationalOperator: '<S91>/Compare'
   *  RelationalOperator: '<S92>/Compare'
   *  RelationalOperator: '<S93>/Compare'
   *  Reshape: '<S15>/Reshapexhat'
   *  Sum: '<S73>/Add'
   */
  *arg_flags = (((((real32_T)fabs(stateEstimator_DW.Memory_PreviousInput[1]) <=
                   stateEstimator_P_g.maxp_const) && ((real32_T)fabs
    (stateEstimator_DW.Memory_PreviousInput[2]) <= stateEstimator_P_g.maxq_const)
                  && (acc1 <= stateEstimator_P_g.maxw1_const) &&
                  (stateEstimator_B.rtb_sincos_o2_idx_1 <=
                   stateEstimator_P_g.maxw2_const) && ((real32_T)fabs
    (stateEstimator_DW.UD_DSTATE[0]) <= stateEstimator_P_g.maxdw1_const) &&
                  ((real32_T)fabs(stateEstimator_DW.UD_DSTATE[1]) <=
                   stateEstimator_P_g.maxdw2_const)) || ((acc1 <=
    stateEstimator_P_g.maxp2_const) && (stateEstimator_B.rtb_sincos_o2_idx_1 <=
    stateEstimator_P_g.maxq2_const))) && ((real32_T)fabs
    (stateEstimator_B.Switch[0] - stateEstimator_DW.Delay_DSTATE[0]) <=
    stateEstimator_P_g.maxw3_const) && ((real32_T)fabs(stateEstimator_B.Switch[1]
    - stateEstimator_DW.Delay_DSTATE[1]) <= stateEstimator_P_g.maxw4_const) &&
                ((real32_T)stateEstimator_DW.Delay2_DSTATE <=
                 stateEstimator_P_g.minHeightforOF_const));

  /* DataTypeConversion: '<S74>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_i = *arg_flags;

  /* Reshape: '<S74>/Reshapey' */
  stateEstimator_B.Reshapey_o[0] = stateEstimator_B.Switch[0];
  stateEstimator_B.Reshapey_o[1] = stateEstimator_B.Switch[1];

  /* Outputs for Enabled SubSystem: '<S116>/Enabled Subsystem' */
  /* Constant: '<S74>/C' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_p, stateEstimator_P_g.C_Value_f,
    stateEstimator_B.Reshapey_o, stateEstimator_B.MemoryX_m,
    stateEstimator_B.Product2_k, &stateEstimator_DW.EnabledSubsystem_f,
    &stateEstimator_P_g.EnabledSubsystem_f);

  /* End of Outputs for SubSystem: '<S116>/Enabled Subsystem' */

  /* Reshape: '<S74>/Reshapexhat' incorporates:
   *  Delay: '<S68>/Delay'
   *  Sum: '<S116>/Add'
   */
  stateEstimator_DW.Delay_DSTATE[0] = stateEstimator_B.Product2_k[0] +
    stateEstimator_B.MemoryX_m[0];
  stateEstimator_DW.Delay_DSTATE[1] = stateEstimator_B.Product2_k[1] +
    stateEstimator_B.MemoryX_m[1];

  /* Product: '<S4>/Product1' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion1'
   *  Delay: '<S2>/Delay1'
   *  Reshape: '<S15>/Reshapexhat'
   *  SignalConversion: '<S4>/TmpSignal ConversionAtProduct1Inport2'
   */
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    stateEstimator_B.rtb_VectorConcatenate_c[stateEstimator_B.j] =
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 6] *
      stateEstimator_B.Sum_c + ((real_T)
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j + 3] *
      stateEstimator_DW.Delay1_DSTATE[1] + (real_T)
      stateEstimator_B.VectorConcatenate[stateEstimator_B.j] *
      stateEstimator_DW.Delay1_DSTATE[0]);
  }

  /* End of Product: '<S4>/Product1' */

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Reshape: '<S15>/Reshapexhat'
   */
  rtb_Compare_i = ((real32_T)stateEstimator_DW.Delay2_DSTATE <=
                   stateEstimator_P_g.DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Logic: '<S70>/Logical Operator' incorporates:
   *  Constant: '<S77>/Constant'
   *  Constant: '<S78>/Constant'
   *  RelationalOperator: '<S77>/Compare'
   *  RelationalOperator: '<S78>/Compare'
   */
  rtb_LogicalOperator_cg = ((stateEstimator_B.Switch[0] !=
    stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con)
    || (stateEstimator_B.Switch[1] !=
        stateEstimator_P_g.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co));
  for (stateEstimator_B.j = 0; stateEstimator_B.j < 3; stateEstimator_B.j++) {
    /* Product: '<S69>/Product' incorporates:
     *  DataTypeConversion: '<S4>/Data Type Conversion2'
     *  Delay: '<S68>/Delay'
     *  SignalConversion: '<S69>/TmpSignal ConversionAtProductInport2'
     */
    stateEstimator_B.Product[stateEstimator_B.j] = 0.0F;
    stateEstimator_B.Product[stateEstimator_B.j] +=
      stateEstimator_B.MathFunction_b[stateEstimator_B.j] *
      stateEstimator_DW.Delay_DSTATE[0];
    stateEstimator_B.Product[stateEstimator_B.j] +=
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 3] *
      stateEstimator_DW.Delay_DSTATE[1];
    stateEstimator_B.Product[stateEstimator_B.j] +=
      stateEstimator_B.MathFunction_b[stateEstimator_B.j + 6] * (real32_T)
      stateEstimator_B.rtb_VectorConcatenate_c[2];

    /* Sum: '<S4>/Sum' incorporates:
     *  Constant: '<S4>/gravity'
     *  DiscreteFir: '<S6>/FIR_IMUaccel'
     *  Math: '<S4>/Math Function'
     *  Product: '<S4>/Product'
     */
    stateEstimator_B.Sum[stateEstimator_B.j] =
      ((stateEstimator_B.VectorConcatenate[3 * stateEstimator_B.j + 1] *
        stateEstimator_B.FIR_IMUaccel[1] + stateEstimator_B.VectorConcatenate[3 *
        stateEstimator_B.j] * stateEstimator_B.FIR_IMUaccel[0]) +
       stateEstimator_B.VectorConcatenate[3 * stateEstimator_B.j + 2] *
       rtb_sincos_o2_idx_2) +
      stateEstimator_P_g.gravity_Value_k[stateEstimator_B.j];

    /* Sum: '<S70>/Add' incorporates:
     *  Constant: '<S70>/gravity'
     *  Product: '<S70>/Product1'
     */
    stateEstimator_B.rtb_FIR_IMUaccel_k[stateEstimator_B.j] =
      stateEstimator_B.FIR_IMUaccel[stateEstimator_B.j] -
      ((stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 3] *
        stateEstimator_P_g.gravity_Value[1] +
        stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j] *
        stateEstimator_P_g.gravity_Value[0]) +
       stateEstimator_B.Reshape9to3x3columnmajor[stateEstimator_B.j + 6] *
       stateEstimator_P_g.gravity_Value[2]);
  }

  /* Product: '<S70>/Product' incorporates:
   *  Gain: '<S70>/gainaccinput'
   */
  stateEstimator_B.Product_p[0] = (real32_T)
    (stateEstimator_P_g.gainaccinput_Gain * stateEstimator_B.rtb_FIR_IMUaccel_k
     [0]) * (real32_T)rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;
  stateEstimator_B.Product_p[1] = (real32_T)
    (stateEstimator_P_g.gainaccinput_Gain * stateEstimator_B.rtb_FIR_IMUaccel_k
     [1]) * (real32_T)rtb_LogicalOperator_cg * (real32_T)rtb_Compare_i;

  /* Reshape: '<S74>/Reshapeu' */
  stateEstimator_B.Reshapeu_h[0] = stateEstimator_B.Product_p[0];
  stateEstimator_B.Reshapeu_h[1] = stateEstimator_B.Product_p[1];

  /* DataTypeConversion: '<S107>/Conversion' */
  stateEstimator_B.Conversion_j[0] = stateEstimator_B.MemoryX_m[0];
  stateEstimator_B.Conversion_j[1] = stateEstimator_B.MemoryX_m[1];

  /* Outputs for Enabled SubSystem: '<S111>/MeasurementUpdate' */
  /* Constant: '<S74>/C' incorporates:
   *  Constant: '<S74>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_i,
    stateEstimator_B.Conversion_n4, stateEstimator_B.Reshapey_o,
    stateEstimator_P_g.C_Value_f, stateEstimator_B.Conversion_j,
    stateEstimator_P_g.D_Value_f, stateEstimator_B.Reshapeu_h,
    stateEstimator_B.Product3_m, &stateEstimator_DW.MeasurementUpdate_e,
    &stateEstimator_P_g.MeasurementUpdate_e);

  /* End of Outputs for SubSystem: '<S111>/MeasurementUpdate' */

  /* Reshape: '<S138>/Reshapeu' */
  stateEstimator_B.Reshapeu_i[0] = stateEstimator_B.Product[0];
  stateEstimator_B.Reshapeu_i[1] = stateEstimator_B.Product[1];

  /* Delay: '<S138>/MemoryX' incorporates:
   *  Constant: '<S138>/X0'
   *  Reshape: '<S138>/ReshapeX0'
   */
  if (stateEstimator_DW.icLoad_g != 0) {
    stateEstimator_DW.MemoryX_DSTATE_dl[0] = stateEstimator_P_g.X0_Value_j[0];
    stateEstimator_DW.MemoryX_DSTATE_dl[1] = stateEstimator_P_g.X0_Value_j[1];
  }

  stateEstimator_B.MemoryX_f[0] = stateEstimator_DW.MemoryX_DSTATE_dl[0];
  stateEstimator_B.MemoryX_f[1] = stateEstimator_DW.MemoryX_DSTATE_dl[1];

  /* End of Delay: '<S138>/MemoryX' */

  /* DataTypeConversion: '<S154>/Conversion' */
  stateEstimator_B.Conversion_pu[0] = stateEstimator_B.MemoryX_f[0];
  stateEstimator_B.Conversion_pu[1] = stateEstimator_B.MemoryX_f[1];

  /* Sum: '<S139>/Add1' incorporates:
   *  Delay: '<S69>/Delay'
   */
  stateEstimator_DW.Delay_DSTATE_l[0] = arg_posVIS_datin[0] -
    stateEstimator_DW.Delay_DSTATE_l[0];

  /* Math: '<S139>/Math Function' incorporates:
   *  Constant: '<S139>/Constant'
   *  Delay: '<S69>/Delay'
   */
  acc1 = (real32_T)floor(stateEstimator_P_g.Constant_Value_e);
  if ((stateEstimator_DW.Delay_DSTATE_l[0] < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_e > acc1)) {
    stateEstimator_DW.Delay_DSTATE_l[0] = -rt_powf_snf
      (-stateEstimator_DW.Delay_DSTATE_l[0], stateEstimator_P_g.Constant_Value_e);
  } else {
    stateEstimator_DW.Delay_DSTATE_l[0] = rt_powf_snf
      (stateEstimator_DW.Delay_DSTATE_l[0], stateEstimator_P_g.Constant_Value_e);
  }

  /* Sum: '<S139>/Add1' incorporates:
   *  Delay: '<S69>/Delay'
   */
  stateEstimator_DW.Delay_DSTATE_l[1] = arg_posVIS_datin[1] -
    stateEstimator_DW.Delay_DSTATE_l[1];

  /* Math: '<S139>/Math Function' incorporates:
   *  Constant: '<S139>/Constant'
   *  Delay: '<S69>/Delay'
   */
  if ((stateEstimator_DW.Delay_DSTATE_l[1] < 0.0F) &&
      (stateEstimator_P_g.Constant_Value_e > acc1)) {
    stateEstimator_DW.Delay_DSTATE_l[1] = -rt_powf_snf
      (-stateEstimator_DW.Delay_DSTATE_l[1], stateEstimator_P_g.Constant_Value_e);
  } else {
    stateEstimator_DW.Delay_DSTATE_l[1] = rt_powf_snf
      (stateEstimator_DW.Delay_DSTATE_l[1], stateEstimator_P_g.Constant_Value_e);
  }

  /* Logic: '<S139>/Logical Operator3' incorporates:
   *  Abs: '<S139>/Abs'
   *  Abs: '<S139>/Abs1'
   *  Constant: '<S185>/Constant'
   *  Constant: '<S186>/Constant'
   *  Constant: '<S187>/Constant'
   *  Constant: '<S188>/Constant'
   *  Delay: '<S69>/Delay'
   *  RelationalOperator: '<S185>/Compare'
   *  RelationalOperator: '<S186>/Compare'
   *  RelationalOperator: '<S187>/Compare'
   *  RelationalOperator: '<S188>/Compare'
   *  Sqrt: '<S139>/Sqrt'
   *  Sum: '<S139>/Sum of Elements'
   */
  stateEstimator_B.LogicalOperator3 = ((arg_posVIS_datin[0] !=
    stateEstimator_P_g.checkifPosavailable_const) && ((real32_T)fabs
    (stateEstimator_DW.Memory_PreviousInput[1]) <=
    stateEstimator_P_g.maxp3_const) && ((real32_T)fabs
    (stateEstimator_DW.Memory_PreviousInput[2]) <=
    stateEstimator_P_g.maxq3_const) && ((real32_T)sqrt
    (stateEstimator_DW.Delay_DSTATE_l[0] + stateEstimator_DW.Delay_DSTATE_l[1]) <
    stateEstimator_P_g.planarjumpsVISPOS_const));

  /* DataTypeConversion: '<S138>/DataTypeConversionEnable' */
  rtb_DataTypeConversionEnable_h = stateEstimator_B.LogicalOperator3;

  /* Reshape: '<S138>/Reshapey' */
  stateEstimator_B.Reshapey_a[0] = arg_posVIS_datin[0];
  stateEstimator_B.Reshapey_a[1] = arg_posVIS_datin[1];

  /* Outputs for Enabled SubSystem: '<S158>/MeasurementUpdate' */
  /* Constant: '<S138>/C' incorporates:
   *  Constant: '<S138>/D'
   */
  stateEstimator_MeasurementUpdate(rtb_DataTypeConversionEnable_h,
    stateEstimator_B.Conversion_a, stateEstimator_B.Reshapey_a,
    stateEstimator_P_g.C_Value_p, stateEstimator_B.Conversion_pu,
    stateEstimator_P_g.D_Value_b, stateEstimator_B.Reshapeu_i,
    stateEstimator_B.Product3_j, &stateEstimator_DW.MeasurementUpdate_b,
    &stateEstimator_P_g.MeasurementUpdate_b);

  /* End of Outputs for SubSystem: '<S158>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S163>/Enabled Subsystem' */
  stateEstimator_EnabledSubsystem(rtb_DataTypeConversionEnable_h,
    stateEstimator_B.Conversion_g, stateEstimator_P_g.C_Value_p,
    stateEstimator_B.Reshapey_a, stateEstimator_B.MemoryX_f,
    stateEstimator_B.Product2_e, &stateEstimator_DW.EnabledSubsystem_m,
    &stateEstimator_P_g.EnabledSubsystem_m);

  /* End of Outputs for SubSystem: '<S163>/Enabled Subsystem' */

  /* Reshape: '<S138>/Reshapexhat' incorporates:
   *  Delay: '<S69>/Delay'
   *  Sum: '<S163>/Add'
   */
  stateEstimator_DW.Delay_DSTATE_l[0] = stateEstimator_B.Product2_e[0] +
    stateEstimator_B.MemoryX_f[0];
  stateEstimator_DW.Delay_DSTATE_l[1] = stateEstimator_B.Product2_e[1] +
    stateEstimator_B.MemoryX_f[1];

  /* DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  if (arg_controlModePosVSOrient_flagin &&
      (stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState <= 0)) {
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] =
      stateEstimator_P_g.SimplyIntegrateVelocity_IC;
    stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] =
      stateEstimator_P_g.SimplyIntegrateVelocity_IC;
  }

  /* Switch: '<S69>/UseIPPosSwitch' incorporates:
   *  Delay: '<S69>/Delay'
   *  DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity'
   */
  if (arg_usePosVIS_flagin > stateEstimator_P_g.UseIPPosSwitch_Threshold) {
    stateEstimator_B.SimplyIntegrateVelocity[0] =
      stateEstimator_DW.Delay_DSTATE_l[0];
    stateEstimator_B.SimplyIntegrateVelocity[1] =
      stateEstimator_DW.Delay_DSTATE_l[1];
  } else {
    stateEstimator_B.SimplyIntegrateVelocity[0] =
      stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0];
    stateEstimator_B.SimplyIntegrateVelocity[1] =
      stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1];
  }

  /* End of Switch: '<S69>/UseIPPosSwitch' */

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
    stateEstimator_B.Sum_c = stateEstimator_B.invertzaxisGain -
      ((stateEstimator_P_g.C_Value[0] * stateEstimator_DW.MemoryX_DSTATE[0] +
        stateEstimator_P_g.C_Value[1] * stateEstimator_DW.MemoryX_DSTATE[1]) +
       stateEstimator_P_g.D_Value * stateEstimator_B.Sum[2]);

    /* Product: '<S61>/Product3' incorporates:
     *  Constant: '<S19>/KalmanGainL'
     *  DataTypeConversion: '<S57>/Conversion'
     */
    stateEstimator_B.Product3[0] = stateEstimator_P_g.KalmanGainL_Value_e[0] *
      stateEstimator_B.Sum_c;
    stateEstimator_B.Product3[1] = stateEstimator_P_g.KalmanGainL_Value_e[1] *
      stateEstimator_B.Sum_c;
  } else {
    if (stateEstimator_DW.MeasurementUpdate_MODE) {
      /* Disable for Outport: '<S61>/L*(y[k]-yhat[k|k-1])' */
      stateEstimator_B.Product3[0] = stateEstimator_P_g.Lykyhatkk1_Y0;
      stateEstimator_B.Product3[1] = stateEstimator_P_g.Lykyhatkk1_Y0;
      stateEstimator_DW.MeasurementUpdate_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S36>/MeasurementUpdate' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtaccel_useInport1' incorporates:
   *  DataTypeConversion: '<S3>/Cast To Single'
   */
  arg_accel_use[0] = rtb_DataTypeConversion1_idx_1;
  arg_accel_use[1] = rtb_LogicalOperator;

  /* BusCreator: '<Root>/BusConversion_InsertedFor_states_estimout_at_inport_0' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  DataTypeConversion: '<S4>/Data Type Conversion2'
   *  Delay: '<S68>/Delay'
   *  DiscreteFilter: '<S6>/IIR_IMUgyro_r'
   *  Reshape: '<S15>/Reshapexhat'
   *  SignalConversion: '<S3>/TmpSignal ConversionAtProductInport2'
   */
  arg_states_estimout->X = stateEstimator_B.SimplyIntegrateVelocity[0];
  arg_states_estimout->Y = stateEstimator_B.SimplyIntegrateVelocity[1];
  arg_states_estimout->Z = (real32_T)stateEstimator_DW.Delay2_DSTATE;
  arg_states_estimout->yaw = stateEstimator_DW.Memory_PreviousInput[0];
  arg_states_estimout->pitch = stateEstimator_DW.Memory_PreviousInput[1];
  arg_states_estimout->roll = stateEstimator_DW.Memory_PreviousInput[2];
  arg_states_estimout->dx = stateEstimator_DW.Delay_DSTATE[0];
  arg_states_estimout->dy = stateEstimator_DW.Delay_DSTATE[1];
  arg_states_estimout->dz = (real32_T)stateEstimator_B.rtb_VectorConcatenate_c[2];
  arg_states_estimout->p = stateEstimator_B.inverseIMU_gain[3];
  arg_states_estimout->q = stateEstimator_B.inverseIMU_gain[4];
  arg_states_estimout->r = rtb_DataTypeConversion1_idx_0;

  /* Sum: '<S80>/FixPt Sum1' incorporates:
   *  Constant: '<S80>/FixPt Constant'
   *  UnitDelay: '<S72>/Output'
   */
  stateEstimator_DW.Output_DSTATE += stateEstimator_P_g.FixPtConstant_Value;

  /* Switch: '<S81>/FixPt Switch' incorporates:
   *  Constant: '<S81>/Constant'
   *  UnitDelay: '<S72>/Output'
   */
  if (stateEstimator_DW.Output_DSTATE > stateEstimator_P_g.WrapToZero_Threshold)
  {
    stateEstimator_DW.Output_DSTATE = stateEstimator_P_g.Constant_Value_gi;
  }

  /* End of Switch: '<S81>/FixPt Switch' */

  /* ManualSwitch: '<S15>/ManualSwitchPZ' incorporates:
   *  Constant: '<S15>/P0'
   *  Constant: '<S19>/CovarianceZ'
   *  DataTypeConversion: '<S60>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting == 1) {
    stateEstimator_B.ManualSwitchPZ[0] = stateEstimator_P_g.CovarianceZ_Value[0];
    stateEstimator_B.ManualSwitchPZ[1] = stateEstimator_P_g.CovarianceZ_Value[1];
    stateEstimator_B.ManualSwitchPZ[2] = stateEstimator_P_g.CovarianceZ_Value[2];
    stateEstimator_B.ManualSwitchPZ[3] = stateEstimator_P_g.CovarianceZ_Value[3];
  } else {
    stateEstimator_B.ManualSwitchPZ[0] = stateEstimator_P_g.P0_Value[0];
    stateEstimator_B.ManualSwitchPZ[1] = stateEstimator_P_g.P0_Value[1];
    stateEstimator_B.ManualSwitchPZ[2] = stateEstimator_P_g.P0_Value[2];
    stateEstimator_B.ManualSwitchPZ[3] = stateEstimator_P_g.P0_Value[3];
  }

  /* End of ManualSwitch: '<S15>/ManualSwitchPZ' */

  /* ManualSwitch: '<S74>/ManualSwitchPZ' incorporates:
   *  Constant: '<S74>/P0'
   *  Constant: '<S94>/CovarianceZ'
   *  DataTypeConversion: '<S135>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting_i == 1) {
    stateEstimator_B.ManualSwitchPZ_m[0] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[0];
    stateEstimator_B.ManualSwitchPZ_m[1] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[1];
    stateEstimator_B.ManualSwitchPZ_m[2] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[2];
    stateEstimator_B.ManualSwitchPZ_m[3] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_b[3];
  } else {
    stateEstimator_B.ManualSwitchPZ_m[0] = stateEstimator_P_g.P0_Value_m[0];
    stateEstimator_B.ManualSwitchPZ_m[1] = stateEstimator_P_g.P0_Value_m[1];
    stateEstimator_B.ManualSwitchPZ_m[2] = stateEstimator_P_g.P0_Value_m[2];
    stateEstimator_B.ManualSwitchPZ_m[3] = stateEstimator_P_g.P0_Value_m[3];
  }

  /* End of ManualSwitch: '<S74>/ManualSwitchPZ' */

  /* ManualSwitch: '<S138>/ManualSwitchPZ' incorporates:
   *  Constant: '<S138>/P0'
   *  Constant: '<S141>/CovarianceZ'
   *  DataTypeConversion: '<S182>/Conversion'
   */
  if (stateEstimator_P_g.ManualSwitchPZ_CurrentSetting_b == 1) {
    stateEstimator_B.ManualSwitchPZ_p[0] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[0];
    stateEstimator_B.ManualSwitchPZ_p[1] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[1];
    stateEstimator_B.ManualSwitchPZ_p[2] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[2];
    stateEstimator_B.ManualSwitchPZ_p[3] = (real32_T)
      stateEstimator_P_g.CovarianceZ_Value_l[3];
  } else {
    stateEstimator_B.ManualSwitchPZ_p[0] = stateEstimator_P_g.P0_Value_h[0];
    stateEstimator_B.ManualSwitchPZ_p[1] = stateEstimator_P_g.P0_Value_h[1];
    stateEstimator_B.ManualSwitchPZ_p[2] = stateEstimator_P_g.P0_Value_h[2];
    stateEstimator_B.ManualSwitchPZ_p[3] = stateEstimator_P_g.P0_Value_h[3];
  }

  /* End of ManualSwitch: '<S138>/ManualSwitchPZ' */

  /* Reshape: '<S15>/Reshapeyhat' incorporates:
   *  Constant: '<S20>/Constant'
   */
  rtb_Reshapeyhat = stateEstimator_P_g.Constant_Value_a;

  /* Reshape: '<S74>/Reshapeyhat' incorporates:
   *  Constant: '<S95>/Constant'
   */
  rtb_Reshapeyhat_a = stateEstimator_P_g.Constant_Value_mn;

  /* DataTypeConversion: '<S74>/DataTypeConversionReset' incorporates:
   *  Constant: '<S74>/Reset'
   */
  rtb_DataTypeConversionReset_a = stateEstimator_P_g.Reset_Value;

  /* Reshape: '<S138>/Reshapeyhat' incorporates:
   *  Constant: '<S142>/Constant'
   */
  rtb_Reshapeyhat_l = stateEstimator_P_g.Constant_Value_l;

  /* DataTypeConversion: '<S138>/DataTypeConversionReset' incorporates:
   *  Constant: '<S138>/Reset'
   */
  rtb_DataTypeConversionReset_i = stateEstimator_P_g.Reset_Value_a;

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

  /* Update for Delay: '<S74>/MemoryX' incorporates:
   *  Constant: '<S74>/A'
   *  Constant: '<S74>/B'
   *  Product: '<S111>/A[k]*xhat[k|k-1]'
   *  Product: '<S111>/B[k]*u[k]'
   *  Sum: '<S111>/Add'
   */
  stateEstimator_DW.icLoad = 0U;
  stateEstimator_DW.MemoryX_DSTATE_d[0] = ((stateEstimator_P_g.B_Value_p[0] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.B_Value_p[2] *
    stateEstimator_B.Reshapeu_h[1]) + (stateEstimator_P_g.A_Value_c[0] *
    stateEstimator_B.Conversion_j[0] + stateEstimator_P_g.A_Value_c[2] *
    stateEstimator_B.Conversion_j[1])) + stateEstimator_B.Product3_m[0];
  stateEstimator_DW.MemoryX_DSTATE_d[1] = ((stateEstimator_P_g.B_Value_p[1] *
    stateEstimator_B.Reshapeu_h[0] + stateEstimator_P_g.B_Value_p[3] *
    stateEstimator_B.Reshapeu_h[1]) + (stateEstimator_P_g.A_Value_c[1] *
    stateEstimator_B.Conversion_j[0] + stateEstimator_P_g.A_Value_c[3] *
    stateEstimator_B.Conversion_j[1])) + stateEstimator_B.Product3_m[1];

  /* Update for Delay: '<S15>/MemoryX' */
  stateEstimator_DW.icLoad_p = 0U;
  for (stateEstimator_B.cff = 0; stateEstimator_B.cff < 2; stateEstimator_B.cff
       ++) {
    /* Update for DiscreteFilter: '<S73>/IIRgyroz' */
    stateEstimator_B.memOffset = stateEstimator_B.cff * 5;
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 4] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 3];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 3] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 2];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 2] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 1];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset + 1] =
      stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset];
    stateEstimator_DW.IIRgyroz_states[stateEstimator_B.memOffset] =
      stateEstimator_DW.IIRgyroz_tmp[stateEstimator_B.cff];

    /* Update for UnitDelay: '<S82>/UD'
     *
     * Block description for '<S82>/UD':
     *
     *  Store in Global RAM
     */
    stateEstimator_DW.UD_DSTATE[stateEstimator_B.cff] =
      stateEstimator_B.TSamp[stateEstimator_B.cff];

    /* Product: '<S36>/A[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S15>/A'
     *  Delay: '<S15>/MemoryX'
     */
    stateEstimator_B.dv0[stateEstimator_B.cff] =
      stateEstimator_P_g.A_Value[stateEstimator_B.cff + 2] *
      stateEstimator_DW.MemoryX_DSTATE[1] +
      stateEstimator_P_g.A_Value[stateEstimator_B.cff] *
      stateEstimator_DW.MemoryX_DSTATE[0];
  }

  /* Update for Delay: '<S15>/MemoryX' incorporates:
   *  Constant: '<S15>/B'
   *  Product: '<S36>/B[k]*u[k]'
   *  Reshape: '<S15>/Reshapeu'
   *  Sum: '<S36>/Add'
   */
  stateEstimator_DW.MemoryX_DSTATE[0] = (stateEstimator_P_g.B_Value[0] *
    stateEstimator_B.Sum[2] + stateEstimator_B.dv0[0]) +
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
  stateEstimator_DW.MemoryX_DSTATE[1] = (stateEstimator_P_g.B_Value[1] *
    stateEstimator_B.Sum[2] + stateEstimator_B.dv0[1]) +
    stateEstimator_B.Product3[1];

  /* Update for DiscreteFilter: '<S16>/pressureFilter_IIR' */
  stateEstimator_DW.pressureFilter_IIR_states[1] =
    stateEstimator_DW.pressureFilter_IIR_states[0];
  stateEstimator_DW.pressureFilter_IIR_states[0] =
    stateEstimator_DW.pressureFilter_IIR_tmp;

  /* Update for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[2] =
    stateEstimator_DW.soonarFilter_IIR_states[1];

  /* Update for Delay: '<S2>/Delay1' incorporates:
   *  Delay: '<S68>/Delay'
   */
  stateEstimator_DW.Delay1_DSTATE[0] = stateEstimator_DW.Delay_DSTATE[0];

  /* Update for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[1] =
    stateEstimator_DW.soonarFilter_IIR_states[0];

  /* Update for Delay: '<S2>/Delay1' incorporates:
   *  Delay: '<S68>/Delay'
   */
  stateEstimator_DW.Delay1_DSTATE[1] = stateEstimator_DW.Delay_DSTATE[1];

  /* Update for DiscreteFilter: '<S16>/soonarFilter_IIR' */
  stateEstimator_DW.soonarFilter_IIR_states[0] =
    stateEstimator_DW.soonarFilter_IIR_tmp;

  /* Update for Delay: '<S138>/MemoryX' incorporates:
   *  Constant: '<S138>/A'
   *  Constant: '<S138>/B'
   *  Product: '<S158>/A[k]*xhat[k|k-1]'
   *  Product: '<S158>/B[k]*u[k]'
   *  Sum: '<S158>/Add'
   */
  stateEstimator_DW.icLoad_g = 0U;
  stateEstimator_DW.MemoryX_DSTATE_dl[0] = ((stateEstimator_P_g.B_Value_pu[0] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.B_Value_pu[2] *
    stateEstimator_B.Reshapeu_i[1]) + (stateEstimator_P_g.A_Value_b[0] *
    stateEstimator_B.Conversion_pu[0] + stateEstimator_P_g.A_Value_b[2] *
    stateEstimator_B.Conversion_pu[1])) + stateEstimator_B.Product3_j[0];
  stateEstimator_DW.MemoryX_DSTATE_dl[1] = ((stateEstimator_P_g.B_Value_pu[1] *
    stateEstimator_B.Reshapeu_i[0] + stateEstimator_P_g.B_Value_pu[3] *
    stateEstimator_B.Reshapeu_i[1]) + (stateEstimator_P_g.A_Value_b[1] *
    stateEstimator_B.Conversion_pu[0] + stateEstimator_P_g.A_Value_b[3] *
    stateEstimator_B.Conversion_pu[1])) + stateEstimator_B.Product3_j[1];

  /* Update for DiscreteIntegrator: '<S69>/SimplyIntegrateVelocity' */
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[0] +=
    stateEstimator_P_g.SimplyIntegrateVelocity_gainval *
    stateEstimator_B.Product[0];
  stateEstimator_DW.SimplyIntegrateVelocity_DSTATE[1] +=
    stateEstimator_P_g.SimplyIntegrateVelocity_gainval *
    stateEstimator_B.Product[1];
  stateEstimator_DW.SimplyIntegrateVelocity_PrevResetState = (int8_T)
    arg_controlModePosVSOrient_flagin;
}

/* Model initialize function */
void stateEstimator_o_initialize(const char_T **rt_errorStatus)
{
  RT_MODEL_stateEstimator_T *const stateEstimator_M =
    &(stateEstimator_MdlrefDW.rtm);

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  stateEstimator_P_g.SaturationSonar_LowerSat = rtMinusInf;

  /* initialize error status */
  rtmSetErrorStatusPointer(stateEstimator_M, rt_errorStatus);

  /* block I/O */
  (void) memset(((void *) &stateEstimator_B), 0,
                sizeof(B_stateEstimator_c_T));

  /* states (dwork) */
  (void) memset((void *)&stateEstimator_DW, 0,
                sizeof(DW_stateEstimator_f_T));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
