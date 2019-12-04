/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: communicationFlightControlSystem_data.c
 *
 * Code generated for Simulink model 'communicationFlightControlSystem'.
 *
 * Model version                  : 1.214
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Wed May 22 14:02:07 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "communicationFlightControlSystem.h"
#include "communicationFlightControlSystem_private.h"

/* Model block global parameters (default storage) */
struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors = {
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
  0.1,
  1.0,

  { 160.0, 120.0 }
} ;                                    /* Variable: Sensors
                                        * Referenced by: '<S1>/estimator'
                                        */

real32_T rtP_D_pr[2] = { 0.002F, 0.0028F } ;/* Variable: D_pr
                                             * Referenced by: '<S6>/Default Controller'
                                             */

real32_T rtP_D_xy[2] = { 0.1F, -0.1F } ;/* Variable: D_xy
                                         * Referenced by: '<S6>/Default Controller'
                                         */

real32_T rtP_D_yaw = 0.0012F;          /* Variable: D_yaw
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_D_z = 0.3F;               /* Variable: D_z
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_I_antiWU = 0.001F;        /* Variable: I_antiWU
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_I_pr = 0.01F;             /* Variable: I_pr
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_I_satLimitHigh = 2.0F;    /* Variable: I_satLimitHigh
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_I_satLimitLow = -2.0F;    /* Variable: I_satLimitLow
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_P_pr[2] = { 0.013F, 0.01F } ;/* Variable: P_pr
                                           * Referenced by: '<S6>/Default Controller'
                                           */

real32_T rtP_P_xy[2] = { -0.24F, 0.24F } ;/* Variable: P_xy
                                           * Referenced by: '<S6>/Default Controller'
                                           */

real32_T rtP_P_yaw = 0.004F;           /* Variable: P_yaw
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_P_z = 0.8F;               /* Variable: P_z
                                        * Referenced by: '<S6>/Default Controller'
                                        */
real32_T rtP_landingAltitude = -0.6F;  /* Variable: landingAltitude
                                        * Referenced by: '<S7>/Constant2'
                                        */
boolean_T rtP_enableLanding = 1;       /* Variable: enableLanding
                                        * Referenced by: '<S7>/Constant'
                                        */

/* Block parameters (default storage) */
P_communicationFlightControlSystem_T communicationFlightControlSystem_P = {
  /* Expression: 0
   * Referenced by: '<S2>/One2'
   */
  0.0,

  /* Expression: 211
   * Referenced by: '<S2>/One1'
   */
  211.0,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition'
   */
  0.0,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<Root>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<Root>/Switch'
   */
  0.1F,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<Root>/Unit Delay1'
   */
  0.0F,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<Root>/Switch1'
   */
  0.1F,

  /* Computed Parameter: UnitDelay2_InitialCondition
   * Referenced by: '<Root>/Unit Delay2'
   */
  0.0F,

  /* Computed Parameter: Switch2_Threshold
   * Referenced by: '<Root>/Switch2'
   */
  0.1F,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S2>/Constant'
   */
  100U,

  /* Computed Parameter: One_Value
   * Referenced by: '<S2>/One'
   */
  1U,

  /* Start of '<Root>/Flight Control System' */
  {
    /* Mask Parameter: CompareToConstant_const
     * Referenced by: '<S18>/Constant'
     */
    211.0,

    /* Mask Parameter: CompareToConstant_const_o
     * Referenced by: '<S9>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant1_const
     * Referenced by: '<S10>/Constant'
     */
    10.0F,

    /* Mask Parameter: CompareToConstant2_const
     * Referenced by: '<S11>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant4_const
     * Referenced by: '<S13>/Constant'
     */
    0.01F,

    /* Mask Parameter: CompareToConstant3_const
     * Referenced by: '<S12>/Constant'
     */
    6.0F,

    /* Mask Parameter: CompareToConstant5_const
     * Referenced by: '<S14>/Constant'
     */
    0.01F,

    /* Computed Parameter: Memory_InitialCondition
     * Referenced by: '<S7>/Memory'
     */
    {
      0.0F,                            /* X */
      0.0F,                            /* Y */
      0.0F,                            /* Z */
      0.0F,                            /* yaw */
      0.0F,                            /* pitch */
      0.0F,                            /* roll */
      0.0F,                            /* dx */
      0.0F,                            /* dy */
      0.0F,                            /* dz */
      0.0F,                            /* p */
      0.0F,                            /* q */
      0.0F                             /* r */
    },

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S7>/Constant3'
     */
    { 0.0F, 0.0F, 0.0F },

    /* Computed Parameter: Gain_Gain
     * Referenced by: '<S4>/Gain'
     */
    1.0F,

    /* Computed Parameter: Gain1_Gain
     * Referenced by: '<S4>/Gain1'
     */
    1.0F,

    /* Expression: true
     * Referenced by: '<S7>/Constant1'
     */
    1,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S4>/Merge'
     */
    0U,

    /* Start of '<S4>/Normal condition' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S16>/Constant'
       */
      0U
    }
    ,

    /* End of '<S4>/Normal condition' */

    /* Start of '<S4>/estimator//Optical flow error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S17>/Constant'
       */
      99U
    }
    ,

    /* End of '<S4>/estimator//Optical flow error' */

    /* Start of '<S4>/Geofencing error' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S15>/Constant'
       */
      1U
    }
    /* End of '<S4>/Geofencing error' */
  }
  /* End of '<Root>/Flight Control System' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
