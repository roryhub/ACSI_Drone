/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: stateEstimator.h
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

#ifndef RTW_HEADER_stateEstimator_h_
#define RTW_HEADER_stateEstimator_h_
#include <math.h>
#include <string.h>
#ifndef stateEstimator_COMMON_INCLUDES_
# define stateEstimator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* stateEstimator_COMMON_INCLUDES_ */

#include "stateEstimator_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Block states (default storage) for system '<S111>/MeasurementUpdate' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T MeasurementUpdate_MODE;    /* '<S111>/MeasurementUpdate' */
} DW_MeasurementUpdate_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for system '<S116>/Enabled Subsystem' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S116>/Enabled Subsystem' */
} DW_EnabledSubsystem_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block signals for model 'stateEstimator' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  real32_T VectorConcatenate[9];       /* '<S14>/Vector Concatenate' */
  real32_T Reshape9to3x3columnmajor[9];
                                 /* '<S79>/Reshape (9) to [3x3] column-major' */
  real32_T MathFunction_b[9];          /* '<S69>/Math Function' */
  real32_T rtb_MathFunction_b_m[9];
  real_T ManualSwitchPZ[4];            /* '<S15>/ManualSwitchPZ' */
  real_T Sum[3];                       /* '<S4>/Sum' */
  real_T rtb_VectorConcatenate_c[3];
  real_T rtb_FIR_IMUaccel_k[3];
  real32_T inverseIMU_gain[6];
  real_T Product2[2];                  /* '<S62>/Product2' */
  real_T Product3[2];                  /* '<S61>/Product3' */
  real_T dv0[2];
  real32_T Conversion_p[4];            /* '<S133>/Conversion' */
  real32_T Conversion_n4[4];           /* '<S132>/Conversion' */
  real32_T Conversion_a[4];            /* '<S179>/Conversion' */
  real32_T Conversion_g[4];            /* '<S180>/Conversion' */
  real32_T ManualSwitchPZ_m[4];        /* '<S74>/ManualSwitchPZ' */
  real32_T ManualSwitchPZ_p[4];        /* '<S138>/ManualSwitchPZ' */
  real32_T Product[3];                 /* '<S69>/Product' */
  real32_T sincos_o1[3];               /* '<S17>/sincos' */
  real32_T FIR_IMUaccel[3];            /* '<S6>/FIR_IMUaccel' */
  real_T invertzaxisGain;              /* '<S4>/invertzaxisGain' */
  real_T Sum_c;                        /* '<S61>/Sum' */
  real32_T Merge[2];                   /* '<S3>/Merge' */
  real32_T Switch[3];                  /* '<S68>/Switch' */
  real32_T Product_p[2];               /* '<S70>/Product' */
  real32_T Product2_e[2];              /* '<S184>/Product2' */
  real32_T Product3_j[2];              /* '<S183>/Product3' */
  real32_T Product2_k[2];              /* '<S137>/Product2' */
  real32_T Product3_m[2];              /* '<S136>/Product3' */
  real32_T SimplyIntegrateVelocity[2]; /* '<S69>/SimplyIntegrateVelocity' */
  real32_T TSamp[2];                   /* '<S82>/TSamp' */
  real32_T Reshapey_o[2];              /* '<S74>/Reshapey' */
  real32_T MemoryX_m[2];               /* '<S74>/MemoryX' */
  real32_T Conversion_j[2];            /* '<S107>/Conversion' */
  real32_T Reshapeu_h[2];              /* '<S74>/Reshapeu' */
  real32_T Reshapey_a[2];              /* '<S138>/Reshapey' */
  real32_T Conversion_pu[2];           /* '<S154>/Conversion' */
  real32_T Reshapeu_i[2];              /* '<S138>/Reshapeu' */
  real32_T MemoryX_f[2];               /* '<S138>/MemoryX' */
  real32_T rtb_sincos_o2_idx_0;
  real32_T rtb_sincos_o2_idx_1;
  int32_T j;
  int32_T denIdx;
  int32_T cff;
  int32_T memOffset;
  boolean_T Compare;                   /* '<S18>/Compare' */
  boolean_T nicemeasurementornewupdateneeded;
                                 /* '<S16>/nicemeasurementor newupdateneeded' */
  boolean_T LogicalOperator3;          /* '<S139>/Logical Operator3' */
} B_stateEstimator_c_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Block states (default storage) for model 'stateEstimator' */
#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  real_T Delay2_DSTATE;                /* '<S4>/Delay2' */
  real_T MemoryX_DSTATE[2];            /* '<S15>/MemoryX' */
  real_T soonarFilter_IIR_states[3];   /* '<S16>/soonarFilter_IIR' */
  real_T soonarFilter_IIR_tmp;         /* '<S16>/soonarFilter_IIR' */
  real32_T IIR_IMUgyro_r_states[5];    /* '<S6>/IIR_IMUgyro_r' */
  real32_T FIR_IMUaccel_states[15];    /* '<S6>/FIR_IMUaccel' */
  real32_T MemoryX_DSTATE_d[2];        /* '<S74>/MemoryX' */
  real32_T IIRgyroz_states[10];        /* '<S73>/IIRgyroz' */
  real32_T UD_DSTATE[2];               /* '<S82>/UD' */
  real32_T pressureFilter_IIR_states[3];/* '<S16>/pressureFilter_IIR' */
  real32_T Delay_DSTATE[2];            /* '<S68>/Delay' */
  real32_T Delay1_DSTATE[2];           /* '<S2>/Delay1' */
  real32_T MemoryX_DSTATE_dl[2];       /* '<S138>/MemoryX' */
  real32_T Delay_DSTATE_l[2];          /* '<S69>/Delay' */
  real32_T SimplyIntegrateVelocity_DSTATE[2];/* '<S69>/SimplyIntegrateVelocity' */
  int32_T FIR_IMUaccel_circBuf;        /* '<S6>/FIR_IMUaccel' */
  uint32_T Output_DSTATE;              /* '<S72>/Output' */
  real32_T Memory_PreviousInput[3];    /* '<S3>/Memory' */
  real32_T IIR_IMUgyro_r_tmp;          /* '<S6>/IIR_IMUgyro_r' */
  real32_T IIRgyroz_tmp[2];            /* '<S73>/IIRgyroz' */
  real32_T pressureFilter_IIR_tmp;     /* '<S16>/pressureFilter_IIR' */
  int8_T SimplyIntegrateVelocity_PrevResetState;/* '<S69>/SimplyIntegrateVelocity' */
  uint8_T icLoad;                      /* '<S74>/MemoryX' */
  uint8_T icLoad_p;                    /* '<S15>/MemoryX' */
  uint8_T icLoad_g;                    /* '<S138>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S41>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S36>/MeasurementUpdate' */
  DW_EnabledSubsystem_stateEstimator_T EnabledSubsystem_m;/* '<S163>/Enabled Subsystem' */
  DW_MeasurementUpdate_stateEstimator_T MeasurementUpdate_b;/* '<S158>/MeasurementUpdate' */
  DW_EnabledSubsystem_stateEstimator_T EnabledSubsystem_f;/* '<S116>/Enabled Subsystem' */
  DW_MeasurementUpdate_stateEstimator_T MeasurementUpdate_e;/* '<S111>/MeasurementUpdate' */
} DW_stateEstimator_f_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S111>/MeasurementUpdate' */
struct P_MeasurementUpdate_stateEstimator_T_ {
  real32_T Lykyhatkk1_Y0;              /* Computed Parameter: Lykyhatkk1_Y0
                                        * Referenced by: '<S136>/L*(y[k]-yhat[k|k-1])'
                                        */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters for system: '<S116>/Enabled Subsystem' */
struct P_EnabledSubsystem_stateEstimator_T_ {
  real32_T deltax_Y0;                  /* Computed Parameter: deltax_Y0
                                        * Referenced by: '<S137>/deltax'
                                        */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Parameters (default storage) */
struct P_stateEstimator_T_ {
  real_T outlierBelowFloor_const;     /* Mask Parameter: outlierBelowFloor_const
                                       * Referenced by: '<S18>/Constant'
                                       */
  real_T outlierJump_const;            /* Mask Parameter: outlierJump_const
                                        * Referenced by: '<S66>/Constant'
                                        */
  real_T currentEstimateVeryOffFromPressure_const;
                     /* Mask Parameter: currentEstimateVeryOffFromPressure_const
                      * Referenced by: '<S64>/Constant'
                      */
  real_T currentStateVeryOffsonarflt_const;
                            /* Mask Parameter: currentStateVeryOffsonarflt_const
                             * Referenced by: '<S65>/Constant'
                             */
  real32_T DiscreteDerivative_ICPrevScaledInput;
                         /* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
                          * Referenced by: '<S82>/UD'
                          */
  real32_T Checkifvalidvisualpositionestimateavailable_const;
            /* Mask Parameter: Checkifvalidvisualpositionestimateavailable_const
             * Referenced by: '<S190>/Constant'
             */
  real32_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S7>/Constant'
                                       */
  real32_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S8>/Constant'
                                      */
  real32_T maxp_const;                 /* Mask Parameter: maxp_const
                                        * Referenced by: '<S85>/Constant'
                                        */
  real32_T maxq_const;                 /* Mask Parameter: maxq_const
                                        * Referenced by: '<S87>/Constant'
                                        */
  real32_T maxw1_const;                /* Mask Parameter: maxw1_const
                                        * Referenced by: '<S89>/Constant'
                                        */
  real32_T maxw2_const;                /* Mask Parameter: maxw2_const
                                        * Referenced by: '<S90>/Constant'
                                        */
  real32_T maxdw1_const;               /* Mask Parameter: maxdw1_const
                                        * Referenced by: '<S83>/Constant'
                                        */
  real32_T maxdw2_const;               /* Mask Parameter: maxdw2_const
                                        * Referenced by: '<S84>/Constant'
                                        */
  real32_T maxp2_const;                /* Mask Parameter: maxp2_const
                                        * Referenced by: '<S86>/Constant'
                                        */
  real32_T maxq2_const;                /* Mask Parameter: maxq2_const
                                        * Referenced by: '<S88>/Constant'
                                        */
  real32_T maxw3_const;                /* Mask Parameter: maxw3_const
                                        * Referenced by: '<S91>/Constant'
                                        */
  real32_T maxw4_const;                /* Mask Parameter: maxw4_const
                                        * Referenced by: '<S92>/Constant'
                                        */
  real32_T minHeightforOF_const;       /* Mask Parameter: minHeightforOF_const
                                        * Referenced by: '<S93>/Constant'
                                        */
  real32_T DeactivateAccelerationIfOFisnotusedduetolowaltitude_const;
    /* Mask Parameter: DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
     * Referenced by: '<S75>/Constant'
     */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
   * Referenced by: '<S77>/Constant'
   */
  real32_T donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co;
  /* Mask Parameter: donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
   * Referenced by: '<S78>/Constant'
   */
  real32_T checkifPosavailable_const;
                                    /* Mask Parameter: checkifPosavailable_const
                                     * Referenced by: '<S185>/Constant'
                                     */
  real32_T maxp3_const;                /* Mask Parameter: maxp3_const
                                        * Referenced by: '<S186>/Constant'
                                        */
  real32_T maxq3_const;                /* Mask Parameter: maxq3_const
                                        * Referenced by: '<S187>/Constant'
                                        */
  real32_T planarjumpsVISPOS_const;   /* Mask Parameter: planarjumpsVISPOS_const
                                       * Referenced by: '<S188>/Constant'
                                       */
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S81>/FixPt Switch'
                                        */
  uint32_T CompareToConstant_const_a;
                                    /* Mask Parameter: CompareToConstant_const_a
                                     * Referenced by: '<S71>/Constant'
                                     */
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S61>/L*(y[k]-yhat[k|k-1])'
                                        */
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S62>/deltax'
                                        */
  real_T KalmanGainM_Value[4];         /* Expression: pInitialization.M
                                        * Referenced by: '<S141>/KalmanGainM'
                                        */
  real_T KalmanGainM_Value_d[4];       /* Expression: pInitialization.M
                                        * Referenced by: '<S94>/KalmanGainM'
                                        */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S15>/A'
                                        */
  real_T KalmanGainL_Value[4];         /* Expression: pInitialization.L
                                        * Referenced by: '<S94>/KalmanGainL'
                                        */
  real_T KalmanGainL_Value_h[4];       /* Expression: pInitialization.L
                                        * Referenced by: '<S141>/KalmanGainL'
                                        */
  real_T Delay2_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S4>/Delay2'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S15>/X0'
                                        */
  real_T SaturationSonar_LowerSat;     /* Expression: -inf
                                        * Referenced by: '<S16>/SaturationSonar'
                                        */
  real_T soonarFilter_IIR_NumCoef[4];/* Expression: Estimator.alt.filterSonarNum
                                      * Referenced by: '<S16>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_DenCoef[4];/* Expression: Estimator.alt.filterSonarDen
                                      * Referenced by: '<S16>/soonarFilter_IIR'
                                      */
  real_T soonarFilter_IIR_InitialStates;/* Expression: 0
                                         * Referenced by: '<S16>/soonarFilter_IIR'
                                         */
  real_T KalmanGainM_Value_p[2];       /* Expression: pInitialization.M
                                        * Referenced by: '<S19>/KalmanGainM'
                                        */
  real_T C_Value[2];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S15>/C'
                                        */
  real_T gravity_Value[3];             /* Expression: [0 0 -g]
                                        * Referenced by: '<S70>/gravity'
                                        */
  real_T gravity_Value_k[3];           /* Expression: [0 0 g]
                                        * Referenced by: '<S4>/gravity'
                                        */
  real_T gainaccinput_Gain;   /* Expression: Estimator.pos.accelerationInputGain
                               * Referenced by: '<S70>/gainaccinput'
                               */
  real_T D_Value;                      /* Expression: pInitialization.D
                                        * Referenced by: '<S15>/D'
                                        */
  real_T KalmanGainL_Value_e[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S19>/KalmanGainL'
                                        */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S15>/B'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S19>/CovarianceZ'
                                        */
  real_T P0_Value[4];                  /* Expression: pInitialization.P0
                                        * Referenced by: '<S15>/P0'
                                        */
  real_T CovarianceZ_Value_b[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S94>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_l[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S141>/CovarianceZ'
                                        */
  real_T G_Value[2];                   /* Expression: pInitialization.G
                                        * Referenced by: '<S15>/G'
                                        */
  real_T ConstantP_Value;              /* Expression: 0
                                        * Referenced by: '<S19>/ConstantP'
                                        */
  real_T H_Value;                      /* Expression: pInitialization.H
                                        * Referenced by: '<S15>/H'
                                        */
  real_T N_Value;                      /* Expression: pInitialization.N
                                        * Referenced by: '<S15>/N'
                                        */
  real_T Q_Value;                      /* Expression: pInitialization.Q
                                        * Referenced by: '<S15>/Q'
                                        */
  real_T R_Value;                      /* Expression: pInitialization.R
                                        * Referenced by: '<S15>/R'
                                        */
  real_T ConstantP_Value_h;            /* Expression: 0
                                        * Referenced by: '<S94>/ConstantP'
                                        */
  real_T ConstantP_Value_g;            /* Expression: 0
                                        * Referenced by: '<S141>/ConstantP'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S9>/Gain'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S9>/Gain2'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S9>/Gain3'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S9>/Gain4'
                                        */
  real32_T Gain_Gain_i;                /* Computed Parameter: Gain_Gain_i
                                        * Referenced by: '<S10>/Gain'
                                        */
  real32_T Gain1_Gain_k;               /* Computed Parameter: Gain1_Gain_k
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real32_T Gain_Gain_m;                /* Computed Parameter: Gain_Gain_m
                                        * Referenced by: '<S68>/Gain'
                                        */
  real32_T opticalFlowErrorCorrect_Gain;
                             /* Computed Parameter: opticalFlowErrorCorrect_Gain
                              * Referenced by: '<S68>/opticalFlowErrorCorrect'
                              */
  real32_T Constant_Value;             /* Expression: single(0)
                                        * Referenced by: '<S13>/Constant'
                                        */
  real32_T Memory_InitialCondition[3];
                        /* Expression: single(Estimator.complementaryFilterInit)
                         * Referenced by: '<S3>/Memory'
                         */
  real32_T Gain_Gain_c;                /* Computed Parameter: Gain_Gain_c
                                        * Referenced by: '<S13>/Gain'
                                        */
  real32_T Assumingthatcalibwasdonelevel_Bias[6];
                       /* Computed Parameter: Assumingthatcalibwasdonelevel_Bias
                        * Referenced by: '<S6>/Assuming that calib was done level!'
                        */
  real32_T inverseIMU_gain_Gain[6];  /* Computed Parameter: inverseIMU_gain_Gain
                                      * Referenced by: '<S6>/inverseIMU_gain'
                                      */
  real32_T IIR_IMUgyro_r_NumCoef[6];/* Computed Parameter: IIR_IMUgyro_r_NumCoef
                                     * Referenced by: '<S6>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_DenCoef[6];/* Computed Parameter: IIR_IMUgyro_r_DenCoef
                                     * Referenced by: '<S6>/IIR_IMUgyro_r'
                                     */
  real32_T IIR_IMUgyro_r_InitialStates;
                              /* Computed Parameter: IIR_IMUgyro_r_InitialStates
                               * Referenced by: '<S6>/IIR_IMUgyro_r'
                               */
  real32_T Gain_Gain_b;                /* Computed Parameter: Gain_Gain_b
                                        * Referenced by: '<S3>/Gain'
                                        */
  real32_T FIR_IMUaccel_InitialStates;
                               /* Computed Parameter: FIR_IMUaccel_InitialStates
                                * Referenced by: '<S6>/FIR_IMUaccel'
                                */
  real32_T FIR_IMUaccel_Coefficients[6];
                                /* Computed Parameter: FIR_IMUaccel_Coefficients
                                 * Referenced by: '<S6>/FIR_IMUaccel'
                                 */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S3>/Constant'
                                        */
  real32_T Merge_InitialOutput;       /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S3>/Merge'
                                       */
  real32_T C_Value_p[4];               /* Computed Parameter: C_Value_p
                                        * Referenced by: '<S138>/C'
                                        */
  real32_T C_Value_f[4];               /* Computed Parameter: C_Value_f
                                        * Referenced by: '<S74>/C'
                                        */
  real32_T A_Value_c[4];               /* Computed Parameter: A_Value_c
                                        * Referenced by: '<S74>/A'
                                        */
  real32_T B_Value_p[4];               /* Computed Parameter: B_Value_p
                                        * Referenced by: '<S74>/B'
                                        */
  real32_T D_Value_f[4];               /* Computed Parameter: D_Value_f
                                        * Referenced by: '<S74>/D'
                                        */
  real32_T A_Value_b[4];               /* Computed Parameter: A_Value_b
                                        * Referenced by: '<S138>/A'
                                        */
  real32_T B_Value_pu[4];              /* Computed Parameter: B_Value_pu
                                        * Referenced by: '<S138>/B'
                                        */
  real32_T D_Value_b[4];               /* Computed Parameter: D_Value_b
                                        * Referenced by: '<S138>/D'
                                        */
  real32_T X0_Value_e[2];              /* Computed Parameter: X0_Value_e
                                        * Referenced by: '<S74>/X0'
                                        */
  real32_T IIRgyroz_NumCoef[6];        /* Computed Parameter: IIRgyroz_NumCoef
                                        * Referenced by: '<S73>/IIRgyroz'
                                        */
  real32_T IIRgyroz_DenCoef[6];        /* Computed Parameter: IIRgyroz_DenCoef
                                        * Referenced by: '<S73>/IIRgyroz'
                                        */
  real32_T IIRgyroz_InitialStates; /* Computed Parameter: IIRgyroz_InitialStates
                                    * Referenced by: '<S73>/IIRgyroz'
                                    */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S82>/TSamp'
                                        */
  real32_T invertzaxisGain_Gain;     /* Computed Parameter: invertzaxisGain_Gain
                                      * Referenced by: '<S4>/invertzaxisGain'
                                      */
  real32_T prsToAltGain_Gain;          /* Computed Parameter: prsToAltGain_Gain
                                        * Referenced by: '<S4>/prsToAltGain'
                                        */
  real32_T pressureFilter_IIR_NumCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_NumCoef
                                * Referenced by: '<S16>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_DenCoef[4];
                               /* Computed Parameter: pressureFilter_IIR_DenCoef
                                * Referenced by: '<S16>/pressureFilter_IIR'
                                */
  real32_T pressureFilter_IIR_InitialStates;
                         /* Computed Parameter: pressureFilter_IIR_InitialStates
                          * Referenced by: '<S16>/pressureFilter_IIR'
                          */
  real32_T Delay_InitialCondition; /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S68>/Delay'
                                    */
  real32_T Delay1_InitialCondition;
                                  /* Computed Parameter: Delay1_InitialCondition
                                   * Referenced by: '<S2>/Delay1'
                                   */
  real32_T X0_Value_j[2];              /* Computed Parameter: X0_Value_j
                                        * Referenced by: '<S138>/X0'
                                        */
  real32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S139>/Constant'
                                        */
  real32_T Delay_InitialCondition_n;
                                 /* Computed Parameter: Delay_InitialCondition_n
                                  * Referenced by: '<S69>/Delay'
                                  */
  real32_T SimplyIntegrateVelocity_gainval;
                          /* Computed Parameter: SimplyIntegrateVelocity_gainval
                           * Referenced by: '<S69>/SimplyIntegrateVelocity'
                           */
  real32_T SimplyIntegrateVelocity_IC;
                               /* Computed Parameter: SimplyIntegrateVelocity_IC
                                * Referenced by: '<S69>/SimplyIntegrateVelocity'
                                */
  real32_T UseIPPosSwitch_Threshold;
                                 /* Computed Parameter: UseIPPosSwitch_Threshold
                                  * Referenced by: '<S69>/UseIPPosSwitch'
                                  */
  real32_T P0_Value_m[4];              /* Computed Parameter: P0_Value_m
                                        * Referenced by: '<S74>/P0'
                                        */
  real32_T G_Value_h[4];               /* Computed Parameter: G_Value_h
                                        * Referenced by: '<S74>/G'
                                        */
  real32_T H_Value_c[4];               /* Computed Parameter: H_Value_c
                                        * Referenced by: '<S74>/H'
                                        */
  real32_T N_Value_g[4];               /* Computed Parameter: N_Value_g
                                        * Referenced by: '<S74>/N'
                                        */
  real32_T Q_Value_f[4];               /* Computed Parameter: Q_Value_f
                                        * Referenced by: '<S74>/Q'
                                        */
  real32_T R_Value_k[4];               /* Computed Parameter: R_Value_k
                                        * Referenced by: '<S74>/R'
                                        */
  real32_T P0_Value_h[4];              /* Computed Parameter: P0_Value_h
                                        * Referenced by: '<S138>/P0'
                                        */
  real32_T G_Value_p[4];               /* Computed Parameter: G_Value_p
                                        * Referenced by: '<S138>/G'
                                        */
  real32_T H_Value_d[4];               /* Computed Parameter: H_Value_d
                                        * Referenced by: '<S138>/H'
                                        */
  real32_T N_Value_j[4];               /* Computed Parameter: N_Value_j
                                        * Referenced by: '<S138>/N'
                                        */
  real32_T Q_Value_n[4];               /* Computed Parameter: Q_Value_n
                                        * Referenced by: '<S138>/Q'
                                        */
  real32_T R_Value_kf[4];              /* Computed Parameter: R_Value_kf
                                        * Referenced by: '<S138>/R'
                                        */
  real32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S37>/Constant'
                                        */
  real32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S112>/Constant'
                                        */
  real32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S159>/Constant'
                                        */
  uint32_T MemoryX_DelayLength;       /* Computed Parameter: MemoryX_DelayLength
                                       * Referenced by: '<S74>/MemoryX'
                                       */
  uint32_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S72>/Output'
                                   */
  uint32_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S4>/Delay2'
                                        */
  uint32_T MemoryX_DelayLength_e;   /* Computed Parameter: MemoryX_DelayLength_e
                                     * Referenced by: '<S15>/MemoryX'
                                     */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S68>/Delay'
                                        */
  uint32_T Delay1_DelayLength;         /* Computed Parameter: Delay1_DelayLength
                                        * Referenced by: '<S2>/Delay1'
                                        */
  uint32_T MemoryX_DelayLength_ez; /* Computed Parameter: MemoryX_DelayLength_ez
                                    * Referenced by: '<S138>/MemoryX'
                                    */
  uint32_T Delay_DelayLength_e;       /* Computed Parameter: Delay_DelayLength_e
                                       * Referenced by: '<S69>/Delay'
                                       */
  uint32_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S80>/FixPt Constant'
                                       */
  uint32_T Constant_Value_gi;          /* Computed Parameter: Constant_Value_gi
                                        * Referenced by: '<S81>/Constant'
                                        */
  boolean_T Constant_Value_a;          /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S20>/Constant'
                                        */
  boolean_T Constant_Value_mn;         /* Computed Parameter: Constant_Value_mn
                                        * Referenced by: '<S95>/Constant'
                                        */
  boolean_T Reset_Value;               /* Expression: false()
                                        * Referenced by: '<S74>/Reset'
                                        */
  boolean_T Constant_Value_l;          /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S142>/Constant'
                                        */
  boolean_T Reset_Value_a;             /* Expression: false()
                                        * Referenced by: '<S138>/Reset'
                                        */
  uint8_T ManualSwitchPZ_CurrentSetting;
                            /* Computed Parameter: ManualSwitchPZ_CurrentSetting
                             * Referenced by: '<S15>/ManualSwitchPZ'
                             */
  uint8_T ManualSwitchPZ_CurrentSetting_i;
                          /* Computed Parameter: ManualSwitchPZ_CurrentSetting_i
                           * Referenced by: '<S74>/ManualSwitchPZ'
                           */
  uint8_T ManualSwitchPZ_CurrentSetting_b;
                          /* Computed Parameter: ManualSwitchPZ_CurrentSetting_b
                           * Referenced by: '<S138>/ManualSwitchPZ'
                           */
  P_EnabledSubsystem_stateEstimator_T EnabledSubsystem_m;/* '<S163>/Enabled Subsystem' */
  P_MeasurementUpdate_stateEstimator_T MeasurementUpdate_b;/* '<S158>/MeasurementUpdate' */
  P_EnabledSubsystem_stateEstimator_T EnabledSubsystem_f;/* '<S116>/Enabled Subsystem' */
  P_MeasurementUpdate_stateEstimator_T MeasurementUpdate_e;/* '<S111>/MeasurementUpdate' */
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Real-time Model Data Structure */
struct tag_RTM_stateEstimator_T {
  const char_T **errorStatus;
};

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

typedef struct {
  RT_MODEL_stateEstimator_T rtm;
} MdlrefDW_stateEstimator_T;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/* Model block global parameters (default storage) */
extern struct_pAcs5k38eV6MpgiqrKAV4 rtP_Sensors;/* Variable: Sensors
                                                 * Referenced by:
                                                 *   '<S16>/SaturationSonar'
                                                 *   '<S63>/Constant'
                                                 */
extern void stateEstimator_Init(void);
extern void stateEstimator_Disable(void);
extern void stateEstimator_run(const boolean_T arg_controlModePosVSOrient_flagin,
  const sensordata_t *arg_sensordata_datin, const real32_T arg_usePosVIS_flagin,
  const real32_T arg_opticalFlow_datin[3], const real32_T arg_posVIS_datin[4],
  statesEstim_t *arg_states_estimout, const real32_T
  arg_sensorCalibration_datin[8], real32_T arg_accel_use[2], boolean_T
  *arg_flags);

/* Model reference registration function */
extern void stateEstimator_o_initialize(const char_T **rt_errorStatus);

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

extern void stateEstimator_MeasurementUpdate_Init(real32_T rty_Lykyhatkk1[2],
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_MeasurementUpdate_Disable(real32_T rty_Lykyhatkk1[2],
  DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_MeasurementUpdate(boolean_T rtu_Enable, const
  real32_T rtu_Lk[4], const real32_T rtu_yk[2], const real32_T rtu_Ck[4], const
  real32_T rtu_xhatkk1[2], const real32_T rtu_Dk[4], const real32_T rtu_uk[2],
  real32_T rty_Lykyhatkk1[2], DW_MeasurementUpdate_stateEstimator_T *localDW,
  P_MeasurementUpdate_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem_Init(real32_T rty_deltax[2],
  P_EnabledSubsystem_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem_Disable(real32_T rty_deltax[2],
  DW_EnabledSubsystem_stateEstimator_T *localDW,
  P_EnabledSubsystem_stateEstimator_T *localP);
extern void stateEstimator_EnabledSubsystem(boolean_T rtu_Enable, const real32_T
  rtu_Mk[4], const real32_T rtu_Ck[4], const real32_T rtu_yk[2], const real32_T
  rtu_xhatkk1[2], real32_T rty_deltax[2], DW_EnabledSubsystem_stateEstimator_T
  *localDW, P_EnabledSubsystem_stateEstimator_T *localP);

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

extern MdlrefDW_stateEstimator_T stateEstimator_MdlrefDW;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

#ifndef stateEstimator_MDLREF_HIDE_CHILD_

/* Block signals (default storage) */
extern B_stateEstimator_c_T stateEstimator_B;

/* Block states (default storage) */
extern DW_stateEstimator_f_T stateEstimator_DW;

#endif                                 /*stateEstimator_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'stateEstimator'
 * '<S1>'   : 'stateEstimator/State Estimator'
 * '<S2>'   : 'stateEstimator/State Estimator/State Estimator'
 * '<S3>'   : 'stateEstimator/State Estimator/State Estimator/Complementary Filter'
 * '<S4>'   : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude'
 * '<S5>'   : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition'
 * '<S6>'   : 'stateEstimator/State Estimator/State Estimator/SensorPreprocessing'
 * '<S7>'   : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/Compare To Constant'
 * '<S8>'   : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/Compare To Constant1'
 * '<S9>'   : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/If Action Subsystem'
 * '<S10>'  : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/If Action Subsystem1'
 * '<S11>'  : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/If Action Subsystem2'
 * '<S12>'  : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/If Action Subsystem3'
 * '<S13>'  : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/Wbe'
 * '<S14>'  : 'stateEstimator/State Estimator/State Estimator/Complementary Filter/Wbe/Create 3x3 Matrix'
 * '<S15>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude'
 * '<S16>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/OutlierHandling'
 * '<S17>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix'
 * '<S18>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/outlierBelowFloor'
 * '<S19>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL'
 * '<S20>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculateYhat'
 * '<S21>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionA'
 * '<S22>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionB'
 * '<S23>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionC'
 * '<S24>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionD'
 * '<S25>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionG'
 * '<S26>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionH'
 * '<S27>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionN'
 * '<S28>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP'
 * '<S29>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionP0'
 * '<S30>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionQ'
 * '<S31>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionR'
 * '<S32>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX'
 * '<S33>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionX0'
 * '<S34>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/DataTypeConversionu'
 * '<S35>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/MemoryP'
 * '<S36>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer'
 * '<S37>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ReducedQRN'
 * '<S38>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionP0'
 * '<S39>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionQ'
 * '<S40>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/ScalarExpansionR'
 * '<S41>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator'
 * '<S42>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkA'
 * '<S43>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkB'
 * '<S44>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkC'
 * '<S45>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkD'
 * '<S46>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkEnable'
 * '<S47>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkG'
 * '<S48>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkH'
 * '<S49>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkN'
 * '<S50>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkP0'
 * '<S51>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkQ'
 * '<S52>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkR'
 * '<S53>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkReset'
 * '<S54>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checkX0'
 * '<S55>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checku'
 * '<S56>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/checky'
 * '<S57>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionL'
 * '<S58>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionM'
 * '<S59>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionP'
 * '<S60>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/CalculatePL/DataTypeConversionZ'
 * '<S61>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/Observer/MeasurementUpdate'
 * '<S62>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/KalmanFilter_altitude/UseCurrentEstimator/Enabled Subsystem'
 * '<S63>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/OutlierHandling/check for min altitude'
 * '<S64>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/OutlierHandling/currentEstimateVeryOffFromPressure'
 * '<S65>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/OutlierHandling/currentStateVeryOffsonarflt'
 * '<S66>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/OutlierHandling/outlierJump'
 * '<S67>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorAltitude/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S68>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity'
 * '<S69>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition'
 * '<S70>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling'
 * '<S71>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/Compare To Constant'
 * '<S72>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/Counter Free-Running'
 * '<S73>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling'
 * '<S74>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy'
 * '<S75>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Deactivate Acceleration If OF is not used due to low altitude'
 * '<S76>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix'
 * '<S77>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)'
 * '<S78>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/do not use acc if optical flow never available (Note OF@60Hz but ZOH to 200!)1'
 * '<S79>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/AccelerationHandling/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S80>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/Counter Free-Running/Increment Real World'
 * '<S81>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/Counter Free-Running/Wrap To Zero'
 * '<S82>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/DiscreteDerivative'
 * '<S83>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw1'
 * '<S84>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxdw2'
 * '<S85>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp'
 * '<S86>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxp2'
 * '<S87>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq'
 * '<S88>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxq2'
 * '<S89>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw1'
 * '<S90>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw2'
 * '<S91>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw3'
 * '<S92>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/maxw4'
 * '<S93>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/DataHandling/minHeightforOF'
 * '<S94>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL'
 * '<S95>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculateYhat'
 * '<S96>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionA'
 * '<S97>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionB'
 * '<S98>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionC'
 * '<S99>'  : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionD'
 * '<S100>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionG'
 * '<S101>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionH'
 * '<S102>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionN'
 * '<S103>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP'
 * '<S104>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionP0'
 * '<S105>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionQ'
 * '<S106>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionR'
 * '<S107>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX'
 * '<S108>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionX0'
 * '<S109>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/DataTypeConversionu'
 * '<S110>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/MemoryP'
 * '<S111>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer'
 * '<S112>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ReducedQRN'
 * '<S113>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionP0'
 * '<S114>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionQ'
 * '<S115>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/ScalarExpansionR'
 * '<S116>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator'
 * '<S117>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkA'
 * '<S118>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkB'
 * '<S119>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkC'
 * '<S120>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkD'
 * '<S121>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkEnable'
 * '<S122>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkG'
 * '<S123>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkH'
 * '<S124>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkN'
 * '<S125>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkP0'
 * '<S126>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkQ'
 * '<S127>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkR'
 * '<S128>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkReset'
 * '<S129>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checkX0'
 * '<S130>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checku'
 * '<S131>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/checky'
 * '<S132>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionL'
 * '<S133>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionM'
 * '<S134>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionP'
 * '<S135>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/CalculatePL/DataTypeConversionZ'
 * '<S136>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/Observer/MeasurementUpdate'
 * '<S137>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorVelocity/KalmanFilter_dxdy/UseCurrentEstimator/Enabled Subsystem'
 * '<S138>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy'
 * '<S139>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling'
 * '<S140>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix'
 * '<S141>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL'
 * '<S142>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculateYhat'
 * '<S143>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionA'
 * '<S144>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionB'
 * '<S145>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionC'
 * '<S146>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionD'
 * '<S147>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionG'
 * '<S148>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionH'
 * '<S149>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionN'
 * '<S150>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionP'
 * '<S151>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionP0'
 * '<S152>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionQ'
 * '<S153>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionR'
 * '<S154>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionX'
 * '<S155>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionX0'
 * '<S156>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/DataTypeConversionu'
 * '<S157>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/MemoryP'
 * '<S158>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Observer'
 * '<S159>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ReducedQRN'
 * '<S160>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionP0'
 * '<S161>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionQ'
 * '<S162>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/ScalarExpansionR'
 * '<S163>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/UseCurrentEstimator'
 * '<S164>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkA'
 * '<S165>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkB'
 * '<S166>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkC'
 * '<S167>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkD'
 * '<S168>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkEnable'
 * '<S169>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkG'
 * '<S170>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkH'
 * '<S171>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkN'
 * '<S172>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkP0'
 * '<S173>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkQ'
 * '<S174>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkR'
 * '<S175>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkReset'
 * '<S176>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checkX0'
 * '<S177>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checku'
 * '<S178>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/checky'
 * '<S179>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionL'
 * '<S180>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionM'
 * '<S181>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionP'
 * '<S182>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/CalculatePL/DataTypeConversionZ'
 * '<S183>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/Observer/MeasurementUpdate'
 * '<S184>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/KalmanFilter_posxy/UseCurrentEstimator/Enabled Subsystem'
 * '<S185>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/checkifPosavailable'
 * '<S186>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/maxp3'
 * '<S187>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/maxq3'
 * '<S188>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/OutlierHandling/planarjumpsVISPOS'
 * '<S189>' : 'stateEstimator/State Estimator/State Estimator/EstimatorXYPosition/EstimatorXYPosition/Rotation Angles to Direction Cosine Matrix/Create 3x3 Matrix'
 * '<S190>' : 'stateEstimator/State Estimator/State Estimator/SensorPreprocessing/Check if valid visual position estimate available'
 */
#endif                                 /* RTW_HEADER_stateEstimator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
