/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem_data.c
 *
 * Code generated for Simulink model 'flightControlSystem'.
 *
 * Model version                  : 1.531
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Jul 25 12:21:03 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightControlSystem.h"
#include "flightControlSystem_private.h"

/* Block parameters (default storage) */
P_flightControlSystem_T flightControlSystem_P = {
  /* Variable: Sensors
   * Referenced by:
   *   '<S44>/SaturationSonar'
   *   '<S91>/Constant'
   */
  {
    { 1.00596, 1.00383, 0.99454 },

    { 0.99861, 1.00644, 0.99997 },

    {
      { 0.0, 0.0, 0.0 },

      { 0.0, 0.0, 0.0 },
      190.0,
      0.707,

      { 1.00596, 0.0, 0.0, 0.0, 1.00383, 0.0, 0.0, 0.0, 0.99454 },

      { 0.09, -0.06, 0.33699999999999974 },

      { -50.0, -50.0, -50.0, 50.0, 50.0, 50.0 },
      190.0,
      0.707,

      { 0.99861, 0.0, 0.0, 0.0, 1.00644, 0.0, 0.0, 0.0, 0.99997 },

      { -0.0095, -0.0075, 0.0015 },

      { 0.0, 0.0, 0.0 },

      { -10.0, -10.0, -10.0, 10.0, 10.0, 10.0 },

      { 41.0, 41.0, 41.0, 41.0, 41.0, 41.0 },

      { 0.8, 0.8, 0.8, 0.025, 0.025, 0.025 },

      { 0.00021831529882618725, 0.00018641345254680647, 0.00037251068300213613,
        1.0651514622688397e-8, 1.3021327403798377e-8, 1.1929474437781302e-8 }
    },

    {
      1.0,
      41.0
    },
    -99.0,
    -9.0,

    {
      { -99.0, 0.0, 0.0, -9.0 },
      0.0,

      { 3.5, 70.0 }
    },
    1.0,
    1.225,
    12.01725,
    101270.95,

    { 0.99407531114557246, 0.99618461293246863, 1.0054899752649467,
      1.0013919347893572, 0.99360120821906917, 1.0000300009000269 },
    0.01,
    1.0
  },

  /* Variable: I_pr_antiWU
   * Referenced by: '<S7>/antiWU_Gain'
   */
  0.001F,

  /* Variable: I_pr_satLimitHigh
   * Referenced by: '<S7>/Saturation'
   */
  2.0F,

  /* Variable: I_pr_satLimitLow
   * Referenced by: '<S7>/Saturation'
   */
  -2.0F,

  /* Variable: I_xy_antiWU
   * Referenced by: '<S9>/antiWU_Gain'
   */
  0.001F,

  /* Variable: I_xy_satLimitHigh
   * Referenced by: '<S9>/Saturation1'
   */
  2.0F,

  /* Variable: I_xy_satLimitLow
   * Referenced by: '<S9>/Saturation1'
   */
  -2.0F,

  /* Variable: I_z_antiWU
   * Referenced by: '<S11>/antiWU_Gain1'
   */
  0.001F,

  /* Variable: I_z_satLimitHigh
   * Referenced by: '<S11>/Saturation1'
   */
  2.0F,

  /* Variable: I_z_satLimitLow
   * Referenced by: '<S11>/Saturation1'
   */
  -2.0F,

  /* Computed Parameter: UDPReceiveZ_Port
   * Referenced by: '<Root>/UDP Receive Z'
   */
  25000,

  /* Computed Parameter: UDPSend_Port
   * Referenced by: '<Root>/UDP Send'
   */
  25001,

  /* Start of '<Root>/Flight Control System' */
  {
    /* Mask Parameter: outlierBelowFloor_const
     * Referenced by: '<S46>/Constant'
     */
    0.0,

    /* Mask Parameter: outlierJump_const
     * Referenced by: '<S94>/Constant'
     */
    0.1,

    /* Mask Parameter: currentEstimateVeryOffFromPressure_const
     * Referenced by: '<S92>/Constant'
     */
    0.8,

    /* Mask Parameter: currentStateVeryOffsonarflt_const
     * Referenced by: '<S93>/Constant'
     */
    0.4,

    /* Mask Parameter: Checkerrorcondition_const
     * Referenced by: '<S18>/Constant'
     */
    -1.0,

    /* Mask Parameter: u0continuousOFerrors_const
     * Referenced by: '<S17>/Constant'
     */
    50.0,

    /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
     * Referenced by: '<S110>/UD'
     */
    0.0F,

    /* Mask Parameter: CompareToConstant_const
     * Referenced by: '<S37>/Constant'
     */
    9.56475F,

    /* Mask Parameter: CompareToConstant1_const
     * Referenced by: '<S38>/Constant'
     */
    10.0552502F,

    /* Mask Parameter: maxp_const
     * Referenced by: '<S113>/Constant'
     */
    0.6F,

    /* Mask Parameter: maxq_const
     * Referenced by: '<S115>/Constant'
     */
    0.6F,

    /* Mask Parameter: maxw1_const
     * Referenced by: '<S117>/Constant'
     */
    7.0F,

    /* Mask Parameter: maxw2_const
     * Referenced by: '<S118>/Constant'
     */
    7.0F,

    /* Mask Parameter: maxdw1_const
     * Referenced by: '<S111>/Constant'
     */
    80.0F,

    /* Mask Parameter: maxdw2_const
     * Referenced by: '<S112>/Constant'
     */
    80.0F,

    /* Mask Parameter: maxp2_const
     * Referenced by: '<S114>/Constant'
     */
    0.5F,

    /* Mask Parameter: maxq2_const
     * Referenced by: '<S116>/Constant'
     */
    0.5F,

    /* Mask Parameter: maxw3_const
     * Referenced by: '<S119>/Constant'
     */
    5.0F,

    /* Mask Parameter: maxw4_const
     * Referenced by: '<S120>/Constant'
     */
    5.0F,

    /* Mask Parameter: minHeightforOF_const
     * Referenced by: '<S121>/Constant'
     */
    -0.4F,

    /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
     * Referenced by: '<S103>/Constant'
     */
    -0.4F,

    /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
     * Referenced by: '<S105>/Constant'
     */
    0.0F,

    /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
     * Referenced by: '<S106>/Constant'
     */
    0.0F,

    /* Mask Parameter: CompareToConstant_const_o
     * Referenced by: '<S19>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant1_const_m
     * Referenced by: '<S20>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant2_const
     * Referenced by: '<S21>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant4_const
     * Referenced by: '<S23>/Constant'
     */
    0.01F,

    /* Mask Parameter: CompareToConstant3_const
     * Referenced by: '<S22>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant5_const
     * Referenced by: '<S24>/Constant'
     */
    0.01F,

    /* Mask Parameter: WrapToZero_Threshold
     * Referenced by: '<S32>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: WrapToZero_Threshold_e
     * Referenced by: '<S109>/FixPt Switch'
     */
    4294967295U,

    /* Mask Parameter: CompareToConstant_const_a
     * Referenced by: '<S99>/Constant'
     */
    800U,

    /* Mask Parameter: WrapToZero_Threshold_g
     * Referenced by: '<S16>/FixPt Switch'
     */
    65535U,

    /* Mask Parameter: CompareToConstant_const_ao
     * Referenced by: '<S13>/Constant'
     */
    100U,

    /* Expression: 0
     * Referenced by: '<S3>/ '
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S89>/L*(y[k]-yhat[k|k-1])'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S90>/deltax'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S34>/Delay2'
     */
    0.0,

    /* Expression: pInitialization.X0
     * Referenced by: '<S43>/X0'
     */
    { -0.046, 0.0 },

    /* Expression: 1
     * Referenced by: '<S34>/Constant'
     */
    1.0,

    /* Expression: pInitialization.M
     * Referenced by: '<S47>/KalmanGainM'
     */
    { 0.026241420641871387, 0.069776736071491249 },

    /* Expression: pInitialization.C
     * Referenced by: '<S43>/C'
     */
    { 1.0, 0.0 },

    /* Expression: pInitialization.M
     * Referenced by: '<S122>/KalmanGainM'
     */
    { 0.12546560898608977, 0.0, 0.0, 0.12546560898608977 },

    /* Expression: -inf
     * Referenced by: '<S44>/SaturationSonar'
     */
    0.0,

    /* Expression: Estimator.alt.filterSonarNum
     * Referenced by: '<S44>/soonarFilter_IIR'
     */
    { 3.7568380197305906E-6, 1.1270514059191772E-5, 1.1270514059191772E-5,
      3.7568380197305906E-6 },

    /* Expression: Estimator.alt.filterSonarDen
     * Referenced by: '<S44>/soonarFilter_IIR'
     */
    { 1.0, -2.9371707284498911, 2.8762997234793324, -0.93909894032528318 },

    /* Expression: 0
     * Referenced by: '<S44>/soonarFilter_IIR'
     */
    0.0,

    /* Expression: pInitialization.A
     * Referenced by: '<S43>/A'
     */
    { 1.0, 0.0, 0.005, 1.0 },

    /* Expression: pInitialization.L
     * Referenced by: '<S122>/KalmanGainL'
     */
    { 0.12546560898608985, 0.0, -0.0, 0.12546560898608985 },

    /* Expression: [0 0 -g]
     * Referenced by: '<S98>/gravity'
     */
    { 0.0, 0.0, -9.81 },

    /* Expression: [0 0 g]
     * Referenced by: '<S34>/gravity'
     */
    { 0.0, 0.0, 9.81 },

    /* Expression: Estimator.pos.accelerationInputGain
     * Referenced by: '<S98>/gainaccinput'
     */
    0.2,

    /* Expression: pInitialization.B
     * Referenced by: '<S43>/B'
     */
    { 0.0, 0.005 },

    /* Expression: pInitialization.D
     * Referenced by: '<S43>/D'
     */
    0.0,

    /* Expression: pInitialization.L
     * Referenced by: '<S47>/KalmanGainL'
     */
    { 0.026590304322228774, 0.069776736071487447 },

    /* Expression: 200*3
     * Referenced by: '<S3>/Wait  3 Seconds'
     */
    600.0,

    /* Expression: 0.5
     * Referenced by: '<S3>/0.5 meters'
     */
    0.5,

    /* Expression: 0.0
     * Referenced by: '<S3>/Delay One Step'
     */
    0.0,

    /* Expression: pInitialization.Z
     * Referenced by: '<S47>/CovarianceZ'
     */
    { 0.0026241420641871381, 0.0069776736071491255, 0.0069776736071491255,
      0.037607692935052436 },

    /* Expression: pInitialization.P0
     * Referenced by: '<S43>/P0'
     */
    { 0.0026948589925820132, 0.0071657120718244052, 0.0071657120718244052,
      0.03810769293505243 },

    /* Expression: pInitialization.Z
     * Referenced by: '<S122>/CovarianceZ'
     */
    { 0.627328044930449, 0.0, 0.0, 0.627328044930449 },

    /* Expression: pInitialization.G
     * Referenced by: '<S43>/G'
     */
    { 0.0, 1.0 },

    /* Expression: 0
     * Referenced by: '<S47>/ConstantP'
     */
    0.0,

    /* Expression: pInitialization.H
     * Referenced by: '<S43>/H'
     */
    0.0,

    /* Expression: pInitialization.N
     * Referenced by: '<S43>/N'
     */
    0.0,

    /* Expression: pInitialization.Q
     * Referenced by: '<S43>/Q'
     */
    0.0005,

    /* Expression: pInitialization.R
     * Referenced by: '<S43>/R'
     */
    0.1,

    /* Expression: 0
     * Referenced by: '<S122>/ConstantP'
     */
    0.0,

    /* Expression: Controller.takeoffGain
     * Referenced by: '<S11>/takeoff_gain1'
     */
    0.3F,

    /* Computed Parameter: _Value_j
     * Referenced by: '<S3>/    '
     */
    0.0F,

    /* Computed Parameter: Gain1_Gain
     * Referenced by: '<S39>/Gain1'
     */
    0.005F,

    /* Computed Parameter: Gain_Gain
     * Referenced by: '<S39>/Gain'
     */
    0.995F,

    /* Computed Parameter: Gain2_Gain
     * Referenced by: '<S39>/Gain2'
     */
    0.101936802F,

    /* Computed Parameter: Gain3_Gain
     * Referenced by: '<S39>/Gain3'
     */
    0.005F,

    /* Computed Parameter: Gain4_Gain
     * Referenced by: '<S39>/Gain4'
     */
    0.995F,

    /* Computed Parameter: Gain_Gain_l
     * Referenced by: '<S96>/Gain'
     */
    -1.0F,

    /* Computed Parameter: opticalFlowErrorCorrect_Gain
     * Referenced by: '<S96>/opticalFlowErrorCorrect'
     */
    1.15F,

    /* Computed Parameter: Lykyhatkk1_Y0_o
     * Referenced by: '<S164>/L*(y[k]-yhat[k|k-1])'
     */
    0.0F,

    /* Computed Parameter: deltax_Y0_g
     * Referenced by: '<S165>/deltax'
     */
    0.0F,

    /* Computed Parameter: Assumingthatcalibwasdonelevel_Bias
     * Referenced by: '<S36>/Assuming that calib was done level!'
     */
    { 0.0F, 0.0F, 9.81F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: inverseIMU_gain_Gain
     * Referenced by: '<S36>/inverseIMU_gain'
     */
    { 0.994075298F, 0.996184587F, 1.00549F, 1.00139189F, 0.993601203F, 1.00003F
    },

    /* Computed Parameter: FIR_IMUaccel_InitialStates
     * Referenced by: '<S36>/FIR_IMUaccel'
     */
    0.0F,

    /* Computed Parameter: FIR_IMUaccel_Coefficients
     * Referenced by: '<S36>/FIR_IMUaccel'
     */
    { 0.0264077242F, 0.140531361F, 0.33306092F, 0.33306092F, 0.140531361F,
      0.0264077242F },

    /* Expression: single(Estimator.complementaryFilterInit)
     * Referenced by: '<S33>/Memory'
     */
    { 0.0F, 0.0F, 0.0F },

    /* Expression: single(0)
     * Referenced by: '<S41>/Constant'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain_d
     * Referenced by: '<S41>/Gain'
     */
    -1.0F,

    /* Computed Parameter: IIR_IMUgyro_r_NumCoef
     * Referenced by: '<S36>/IIR_IMUgyro_r'
     */
    { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
      0.282124132F },

    /* Computed Parameter: IIR_IMUgyro_r_DenCoef
     * Referenced by: '<S36>/IIR_IMUgyro_r'
     */
    { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

    /* Computed Parameter: IIR_IMUgyro_r_InitialStates
     * Referenced by: '<S36>/IIR_IMUgyro_r'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain_o
     * Referenced by: '<S33>/Gain'
     */
    0.005F,

    /* Computed Parameter: Constant_Value_h
     * Referenced by: '<S33>/Constant'
     */
    2.0F,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S33>/Merge'
     */
    0.0F,

    /* Computed Parameter: invertzaxisGain_Gain
     * Referenced by: '<S34>/invertzaxisGain'
     */
    -1.0F,

    /* Computed Parameter: Delay1_InitialCondition
     * Referenced by: '<S6>/Delay1'
     */
    0.0F,

    /* Computed Parameter: X0_Value_a
     * Referenced by: '<S102>/X0'
     */
    { 0.0F, 0.0F },

    /* Computed Parameter: C_Value_g
     * Referenced by: '<S102>/C'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: IIRgyroz_NumCoef
     * Referenced by: '<S101>/IIRgyroz'
     */
    { 0.282124132F, 1.27253926F, 2.42084408F, 2.42084408F, 1.27253926F,
      0.282124132F },

    /* Computed Parameter: IIRgyroz_DenCoef
     * Referenced by: '<S101>/IIRgyroz'
     */
    { 1.0F, 2.22871494F, 2.52446198F, 1.57725322F, 0.54102242F, 0.0795623958F },

    /* Computed Parameter: IIRgyroz_InitialStates
     * Referenced by: '<S101>/IIRgyroz'
     */
    0.0F,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S110>/TSamp'
     */
    200.0F,

    /* Computed Parameter: Delay_InitialCondition
     * Referenced by: '<S96>/Delay'
     */
    0.0F,

    /* Expression: Controller.Q2Ts
     * Referenced by: '<S8>/TorqueTotalThrustToThrustPerMotor'
     */
    { 0.25F, 0.25F, 0.25F, 0.25F, 103.573624F, -103.573624F, 103.573624F,
      -103.573624F, -5.66592F, -5.66592F, 5.66592F, 5.66592F, -5.66592F,
      5.66592F, 5.66592F, -5.66592F },

    /* Computed Parameter: w1_Value
     * Referenced by: '<S11>/w1'
     */
    -0.720054F,

    /* Computed Parameter: DiscreteTimeIntegrator2_gainval
     * Referenced by: '<S11>/Discrete-Time Integrator2'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator2_IC
     * Referenced by: '<S11>/Discrete-Time Integrator2'
     */
    0.0F,

    /* Computed Parameter: Zero_Value
     * Referenced by: '<S1>/Zero'
     */
    0.0F,

    /* Computed Parameter: SaturationThrust1_UpperSat
     * Referenced by: '<S11>/SaturationThrust1'
     */
    1.20204329F,

    /* Computed Parameter: SaturationThrust1_LowerSat
     * Referenced by: '<S11>/SaturationThrust1'
     */
    -1.20204329F,

    /* Computed Parameter: Gain_Gain_k
     * Referenced by: '<S9>/Gain'
     */
    -1.0F,

    /* Computed Parameter: Saturation_UpperSat
     * Referenced by: '<S9>/Saturation'
     */
    3.0F,

    /* Computed Parameter: Saturation_LowerSat
     * Referenced by: '<S9>/Saturation'
     */
    -3.0F,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S9>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC
     * Referenced by: '<S9>/Discrete-Time Integrator'
     */
    0.0F,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval_k
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    0.005F,

    /* Computed Parameter: DiscreteTimeIntegrator_IC_p
     * Referenced by: '<S7>/Discrete-Time Integrator'
     */
    0.0F,

    /* Computed Parameter: ThrustToMotorCommand_Gain
     * Referenced by: '<S12>/ThrustToMotorCommand'
     */
    -1530.72681F,

    /* Expression: Vehicle.Motor.maxLimit
     * Referenced by: '<S12>/Saturation5'
     */
    500.0F,

    /* Expression: Vehicle.Motor.minLimit
     * Referenced by: '<S12>/Saturation5'
     */
    10.0F,

    /* Computed Parameter: MotorDirections_Gain
     * Referenced by: '<S12>/MotorDirections'
     */
    { 1.0F, -1.0F, 1.0F, -1.0F },

    /* Computed Parameter: Constant_Value_hq
     * Referenced by: '<S10>/Constant'
     */
    0.0F,

    /* Computed Parameter: SimplyIntegrateVelocity_gainval
     * Referenced by: '<S97>/SimplyIntegrateVelocity'
     */
    0.005F,

    /* Computed Parameter: SimplyIntegrateVelocity_IC
     * Referenced by: '<S97>/SimplyIntegrateVelocity'
     */
    0.0F,

    /* Computed Parameter: prsToAltGain_Gain
     * Referenced by: '<S34>/prsToAltGain'
     */
    0.0832137167F,

    /* Computed Parameter: pressureFilter_IIR_NumCoef
     * Referenced by: '<S44>/pressureFilter_IIR'
     */
    { 3.75683794E-6F, 1.12705138E-5F, 1.12705138E-5F, 3.75683794E-6F },

    /* Computed Parameter: pressureFilter_IIR_DenCoef
     * Referenced by: '<S44>/pressureFilter_IIR'
     */
    { 1.0F, -2.93717074F, 2.87629962F, -0.939098954F },

    /* Computed Parameter: pressureFilter_IIR_InitialStates
     * Referenced by: '<S44>/pressureFilter_IIR'
     */
    0.0F,

    /* Computed Parameter: A_Value_c
     * Referenced by: '<S102>/A'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: B_Value_m
     * Referenced by: '<S102>/B'
     */
    { 0.005F, 0.0F, 0.0F, 0.005F },

    /* Computed Parameter: D_Value_l
     * Referenced by: '<S102>/D'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Delay_InitialCondition_e
     * Referenced by: '<S7>/Delay'
     */
    0.0F,

    /* Computed Parameter: Delay_InitialCondition_d
     * Referenced by: '<S9>/Delay'
     */
    0.0F,

    /* Computed Parameter: Gain_Gain_dj
     * Referenced by: '<S3>/Gain'
     */
    1.0F,

    /* Computed Parameter: Gain1_Gain_p
     * Referenced by: '<S3>/Gain1'
     */
    1.0F,

    /* Computed Parameter: Delay1_InitialCondition_b
     * Referenced by: '<S11>/Delay1'
     */
    0.0F,

    /* Computed Parameter: P0_Value_g
     * Referenced by: '<S102>/P0'
     */
    { 0.717328072F, 0.0F, 0.0F, 0.717328072F },

    /* Computed Parameter: G_Value_l
     * Referenced by: '<S102>/G'
     */
    { 1.0F, 0.0F, 0.0F, 1.0F },

    /* Computed Parameter: H_Value_e
     * Referenced by: '<S102>/H'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: N_Value_b
     * Referenced by: '<S102>/N'
     */
    { 0.0F, 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Q_Value_p
     * Referenced by: '<S102>/Q'
     */
    { 0.09F, 0.0F, 0.0F, 0.09F },

    /* Computed Parameter: R_Value_d
     * Referenced by: '<S102>/R'
     */
    { 5.0F, 0.0F, 0.0F, 5.0F },

    /* Computed Parameter: Constant_Value_p
     * Referenced by: '<S65>/Constant'
     */
    0.0F,

    /* Computed Parameter: Constant_Value_hb
     * Referenced by: '<S140>/Constant'
     */
    0.0F,

    /* Computed Parameter: Delay2_DelayLength
     * Referenced by: '<S34>/Delay2'
     */
    1U,

    /* Computed Parameter: MemoryX_DelayLength
     * Referenced by: '<S43>/MemoryX'
     */
    1U,

    /* Computed Parameter: Delay1_DelayLength
     * Referenced by: '<S6>/Delay1'
     */
    1U,

    /* Computed Parameter: MemoryX_DelayLength_h
     * Referenced by: '<S102>/MemoryX'
     */
    1U,

    /* Computed Parameter: Output_InitialCondition
     * Referenced by: '<S100>/Output'
     */
    0U,

    /* Computed Parameter: Delay_DelayLength
     * Referenced by: '<S96>/Delay'
     */
    1U,

    /* Computed Parameter: Delay_DelayLength_c
     * Referenced by: '<S7>/Delay'
     */
    1U,

    /* Computed Parameter: Delay_DelayLength_p
     * Referenced by: '<S9>/Delay'
     */
    1U,

    /* Computed Parameter: Output_InitialCondition_f
     * Referenced by: '<S25>/Output'
     */
    0U,

    /* Computed Parameter: DelayOneStep_DelayLength
     * Referenced by: '<S3>/Delay One Step'
     */
    1U,

    /* Computed Parameter: FixPtConstant_Value
     * Referenced by: '<S31>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_pd
     * Referenced by: '<S32>/Constant'
     */
    0U,

    /* Computed Parameter: Delay1_DelayLength_c
     * Referenced by: '<S11>/Delay1'
     */
    1U,

    /* Computed Parameter: FixPtConstant_Value_c
     * Referenced by: '<S108>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_a
     * Referenced by: '<S109>/Constant'
     */
    0U,

    /* Computed Parameter: Output_InitialCondition_m
     * Referenced by: '<S14>/Output'
     */
    0U,

    /* Computed Parameter: FixPtConstant_Value_h
     * Referenced by: '<S15>/FixPt Constant'
     */
    1U,

    /* Computed Parameter: Constant_Value_m
     * Referenced by: '<S16>/Constant'
     */
    0U,

    /* Computed Parameter: controlModePosVsOrient_Value
     * Referenced by: '<S1>/controlModePosVsOrient'
     */
    1,

    /* Computed Parameter: Constant_Value_j
     * Referenced by: '<S48>/Constant'
     */
    0,

    /* Computed Parameter: Constant_Value_g
     * Referenced by: '<S123>/Constant'
     */
    0,

    /* Expression: false()
     * Referenced by: '<S102>/Reset'
     */
    0,

    /* Computed Parameter: Merge_InitialOutput_f
     * Referenced by: '<S3>/Merge'
     */
    0U,

    /* Computed Parameter: ManualSwitchPZ_CurrentSetting
     * Referenced by: '<S43>/ManualSwitchPZ'
     */
    1U,

    /* Computed Parameter: ManualSwitchPZ_CurrentSetting_m
     * Referenced by: '<S102>/ManualSwitchPZ'
     */
    1U,

    /* Computed Parameter: Constant_Value_ac
     * Referenced by: '<S1>/Constant'
     */
    0U,

    /* Start of '<S1>/Send' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S5>/Constant'
       */
      1.0F
    }
    ,

    /* End of '<S1>/Send' */

    /* Start of '<S3>/Normal condition' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S28>/Constant'
       */
      0U
    }
    ,

    /* End of '<S3>/Normal condition' */

    /* Start of '<S3>/Ultrasound improper' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S29>/Constant'
       */
      88U
    }
    ,

    /* End of '<S3>/Ultrasound improper' */

    /* Start of '<S3>/No optical flow ' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S27>/Constant'
       */
      69U
    }
    ,

    /* End of '<S3>/No optical flow ' */

    /* Start of '<S3>/estimator//Optical flow error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S30>/Constant'
       */
      99U
    }
    ,

    /* End of '<S3>/estimator//Optical flow error' */

    /* Start of '<S3>/Geofencing error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S26>/Constant'
       */
      1U
    }
    /* End of '<S3>/Geofencing error' */
  }
  /* End of '<Root>/Flight Control System' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
