/*
 * flightControlSystem.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystem".
 *
 * Model version              : 1.151
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Wed May 22 14:15:22 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightControlSystem.h"
#include "flightControlSystem_private.h"
#include "rt_roundd_snf.h"

const statesEstim_t flightControlSystem_rtZstatesEstim_t = {
  0.0F,                                /* X */
  0.0F,                                /* Y */
  0.0F,                                /* Z */
  0.0F,                                /* yaw */
  0.0F,                                /* pitch */
  0.0F,                                /* roll */
  0.0F,                                /* dx */
  0.0F,                                /* dy */
  0.0F,                                /* dz */
  0.0F,                                /* p */
  0.0F,                                /* q */
  0.0F                                 /* r */
} ;                                    /* statesEstim_t ground */

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S6>/PID Controller' */
uint8_T flag_outport;                  /* '<S4>/Merge' */

/* Block signals (default storage) */
B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
DW_flightControlSystem_T flightControlSystem_DW;

/* External inputs (root inport signals with default storage) */
ExtU_flightControlSystem_T flightControlSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_flightControlSystem_T flightControlSystem_Y;

/* Real-time model */
RT_MODEL_flightControlSystem_T flightControlSystem_M_;
RT_MODEL_flightControlSystem_T *const flightControlSystem_M =
  &flightControlSystem_M_;

/* SetupRuntimeResources for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging_SetupRTR(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW)
{
  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace6' */
  {
    static int_T rt_ToWksWidths[] = { 10 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 10 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace6";
    localDW->ToWorkspace6_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "sensor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace6_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace4' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace4";
    localDW->ToWorkspace4_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "optical",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace4_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace5' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "SensorCalibration" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace5";
    localDW->ToWorkspace5_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "calib",
      1,
      0,
      100,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace5_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace3' */
  {
    static int_T rt_ToWksWidths[] = { 9 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 9 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace3";
    localDW->ToWorkspace3_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "cmd",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace3_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace2' */
  {
    static int_T rt_ToWksWidths[] = { 12 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 12 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace2";
    localDW->ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "estim",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 4 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 4 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace";
    localDW->ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "motor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace1' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace1";
    localDW->ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "posref",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, const real32_T rtu_motorCmds[4], const real32_T
  rtu_posRef[8], const statesEstim_t *rtu_states_estim_Inport_3, const
  CommandBus *rtu_ReferenceValueServerBus_Inport_4, const SensorsBus
  *rtu_Sensors_Inport_5, real32_T rtu_sensordata_datin_Inport_6, uint32_T
  rtu_sensordata_datin_Inport_6_d, real32_T rtu_sensordata_datin_Inport_6_e,
  real32_T rtu_sensordata_datin_Inport_6_c, real32_T
  rtu_sensordata_datin_Inport_6_cg, real32_T rtu_sensordata_datin_Inport_6_i,
  real32_T rtu_sensordata_datin_Inport_6_h, real32_T
  rtu_sensordata_datin_Inport_6_b, real32_T rtu_sensordata_datin_Inport_6_dz,
  real32_T rtu_sensordata_datin_Inport_6_n, DW_Logging_flightControlSystem_T
  *localDW)
{
  /* local block i/o variables */
  real32_T rtb_DataTypeConversion1_m;
  real32_T rtb_DataTypeConversion2;
  real32_T rtb_TmpSignalConversionAtToWorkspace6Inport1[10];
  real32_T rtb_TmpSignalConversionAtToWorkspace4Inport1[8];
  real32_T rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelecto_iq[8];
  real32_T rtb_TmpSignalConversionAtToWorkspace3Inport1[9];
  real32_T rtb_TmpSignalConversionAtToWorkspace2Inport1_h[12];
  int32_T i;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  rtb_DataTypeConversion1_m = rtu_sensordata_datin_Inport_6;

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  rtb_DataTypeConversion2 = (real32_T)rtu_sensordata_datin_Inport_6_d;

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace6Inport1' */
  rtb_TmpSignalConversionAtToWorkspace6Inport1[0] =
    rtu_sensordata_datin_Inport_6_e;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[1] =
    rtu_sensordata_datin_Inport_6_c;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[2] =
    rtu_sensordata_datin_Inport_6_cg;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[3] =
    rtu_sensordata_datin_Inport_6_i;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[4] =
    rtu_sensordata_datin_Inport_6_h;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[5] =
    rtu_sensordata_datin_Inport_6_b;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[6] =
    rtu_sensordata_datin_Inport_6_dz;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[7] =
    rtu_sensordata_datin_Inport_6_n;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[8] = rtb_DataTypeConversion1_m;
  rtb_TmpSignalConversionAtToWorkspace6Inport1[9] = rtb_DataTypeConversion2;

  /* ToWorkspace: '<S5>/To Workspace6' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace6_PWORK.LoggedData,
                          &locTime,
                          &rtb_TmpSignalConversionAtToWorkspace6Inport1[0]);
  }

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace4Inport1' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion11'
   *  SignalConversion: '<S5>/Sensors_BusSelector'
   */
  rtb_TmpSignalConversionAtToWorkspace4Inport1[0] =
    rtu_Sensors_Inport_5->VisionSensors.usePosVIS_flag;
  rtb_TmpSignalConversionAtToWorkspace4Inport1[1] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[0];
  rtb_TmpSignalConversionAtToWorkspace4Inport1[2] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[1];
  rtb_TmpSignalConversionAtToWorkspace4Inport1[3] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[2];
  rtb_TmpSignalConversionAtToWorkspace4Inport1[4] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[0];
  rtb_TmpSignalConversionAtToWorkspace4Inport1[5] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[1];
  rtb_TmpSignalConversionAtToWorkspace4Inport1[6] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[2];
  rtb_TmpSignalConversionAtToWorkspace4Inport1[7] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[3];

  /* ToWorkspace: '<S5>/To Workspace4' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace4_PWORK.LoggedData,
                          &locTime,
                          &rtb_TmpSignalConversionAtToWorkspace4Inport1[0]);
  }

  /* SignalConversion: '<S5>/Sensors_BusSelector' */
  for (i = 0; i < 8; i++) {
    rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelecto_iq[i] =
      rtu_Sensors_Inport_5->SensorCalibration[i];
  }

  /* ToWorkspace: '<S5>/To Workspace5' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace5_PWORK.LoggedData,
                          &locTime,
                          &rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelecto_iq
                          [0]);
  }

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace3Inport1' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion3'
   *  DataTypeConversion: '<S5>/Data Type Conversion7'
   *  DataTypeConversion: '<S5>/Data Type Conversion9'
   *  SignalConversion: '<S5>/ReferenceValueServerBus_BusSelector'
   */
  rtb_TmpSignalConversionAtToWorkspace3Inport1[0] =
    rtu_ReferenceValueServerBus_Inport_4->controlModePosVSOrient;
  rtb_TmpSignalConversionAtToWorkspace3Inport1[1] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[0];
  rtb_TmpSignalConversionAtToWorkspace3Inport1[2] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[1];
  rtb_TmpSignalConversionAtToWorkspace3Inport1[3] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[2];
  rtb_TmpSignalConversionAtToWorkspace3Inport1[4] =
    rtu_ReferenceValueServerBus_Inport_4->takeoff_flag;
  rtb_TmpSignalConversionAtToWorkspace3Inport1[5] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[0];
  rtb_TmpSignalConversionAtToWorkspace3Inport1[6] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[1];
  rtb_TmpSignalConversionAtToWorkspace3Inport1[7] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[2];
  rtb_TmpSignalConversionAtToWorkspace3Inport1[8] = (real32_T)
    rtu_ReferenceValueServerBus_Inport_4->live_time_ticks;

  /* ToWorkspace: '<S5>/To Workspace3' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace3_PWORK.LoggedData,
                          &locTime,
                          &rtb_TmpSignalConversionAtToWorkspace3Inport1[0]);
  }

  /* SignalConversion: '<S5>/TmpSignal ConversionAtTo Workspace2Inport1' incorporates:
   *  SignalConversion: '<S5>/states_estim_BusSelector'
   */
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[0] =
    rtu_states_estim_Inport_3->X;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[1] =
    rtu_states_estim_Inport_3->Y;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[2] =
    rtu_states_estim_Inport_3->Z;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[3] =
    rtu_states_estim_Inport_3->yaw;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[4] =
    rtu_states_estim_Inport_3->pitch;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[5] =
    rtu_states_estim_Inport_3->roll;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[6] =
    rtu_states_estim_Inport_3->dx;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[7] =
    rtu_states_estim_Inport_3->dy;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[8] =
    rtu_states_estim_Inport_3->dz;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[9] =
    rtu_states_estim_Inport_3->p;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[10] =
    rtu_states_estim_Inport_3->q;
  rtb_TmpSignalConversionAtToWorkspace2Inport1_h[11] =
    rtu_states_estim_Inport_3->r;

  /* ToWorkspace: '<S5>/To Workspace2' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace2_PWORK.LoggedData,
                          &locTime,
                          &rtb_TmpSignalConversionAtToWorkspace2Inport1_h[0]);
  }

  /* ToWorkspace: '<S5>/To Workspace' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace_PWORK.LoggedData,
                          &locTime, &rtu_motorCmds[0]);
  }

  /* ToWorkspace: '<S5>/To Workspace1' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace1_PWORK.LoggedData,
                          &locTime, &rtu_posRef[0]);
  }
}

/* SetupRuntimeResources for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_SetupRTR
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW)
{
  /* SetupRuntimeResources for Atomic SubSystem: '<S1>/Logging' */
  flightControlSystem_Logging_SetupRTR(flightControlSystem_M, &localDW->Logging);

  /* End of SetupRuntimeResources for SubSystem: '<S1>/Logging' */
}

/* System initialize for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Init
  (DW_FlightControlSystem_flightControlSystem_T *localDW)
{
  /* InitializeConditions for Memory: '<S7>/Memory' */
  localDW->Memory_PreviousInput = flightControlSystem_rtZstatesEstim_t;

  /* SystemInitialize for ModelReference: '<S1>/estimator' */
  stateEstimator_Init();

  /* SystemInitialize for ModelReference: '<S6>/PID Controller' */
  flightControllerPID_Init();

  /* SystemInitialize for Merge: '<S4>/Merge' */
  flag_outport = ((uint8_T)0U);
}

/* Output and update for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem(RT_MODEL_flightControlSystem_T *
  const flightControlSystem_M, const CommandBus *rtu_ReferenceValueServerCmds,
  const SensorsBus *rtu_Sensors, real_T rtu_VisionbasedData,
  DW_FlightControlSystem_flightControlSystem_T *localDW)
{
  /* local block i/o variables */
  statesEstim_t rtb_estimator;
  sensordata_t rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1;
  CommandBus rtb_Switch_o;
  uint32_T rtb_vbat_percentage;
  real32_T rtb_x;
  real32_T rtb_y;
  real32_T rtb_z;
  real32_T rtb_x_c;
  real32_T rtb_y_n;
  real32_T rtb_z_p;
  real32_T rtb_altitude;
  real32_T rtb_pressure;
  real32_T rtb_vbat_V;
  real32_T rtb_PIDController_o2[8];

  /* Switch: '<S7>/Switch' incorporates:
   *  BusCreator: '<S7>/Bus Creator'
   *  Constant: '<S18>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant3'
   *  Logic: '<S7>/Logical Operator'
   *  Memory: '<S7>/Memory'
   *  RelationalOperator: '<S18>/Compare'
   *  SignalConversion: '<S7>/TmpSignal ConversionAtBus CreatorInport2'
   */
  if ((rtu_VisionbasedData == 211.0) && true) {
    rtb_Switch_o.controlModePosVSOrient = true;
    rtb_Switch_o.pos_ref[0] = localDW->Memory_PreviousInput.X;
    rtb_Switch_o.pos_ref[1] = localDW->Memory_PreviousInput.Y;
    rtb_Switch_o.pos_ref[2] = (-0.6F);
    rtb_Switch_o.takeoff_flag = rtu_ReferenceValueServerCmds->takeoff_flag;
    rtb_Switch_o.orient_ref[0] = 0.0F;
    rtb_Switch_o.orient_ref[1] = 0.0F;
    rtb_Switch_o.orient_ref[2] = 0.0F;
    rtb_Switch_o.live_time_ticks = rtu_ReferenceValueServerCmds->live_time_ticks;
  } else {
    rtb_Switch_o = *rtu_ReferenceValueServerCmds;
  }

  /* End of Switch: '<S7>/Switch' */

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_0' */
  rtb_x = rtu_Sensors->HALSensors.HAL_acc_SI.x;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_1' */
  rtb_y = rtu_Sensors->HALSensors.HAL_acc_SI.y;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector3_at_outport_2' */
  rtb_z = rtu_Sensors->HALSensors.HAL_acc_SI.z;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_0' */
  rtb_x_c = rtu_Sensors->HALSensors.HAL_gyro_SI.x;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_1' */
  rtb_y_n = rtu_Sensors->HALSensors.HAL_gyro_SI.y;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector4_at_outport_2' */
  rtb_z_p = rtu_Sensors->HALSensors.HAL_gyro_SI.z;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector5_at_outport_0' */
  rtb_altitude = rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector6_at_outport_0' */
  rtb_pressure = rtu_Sensors->HALSensors.HAL_pressure_SI.pressure;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector1_at_outport_0' */
  rtb_vbat_V = rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_V;

  /* SignalConversion: '<S8>/SigConversion_InsertedFor_Bus Selector1_at_outport_1' */
  rtb_vbat_percentage = rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_percentage;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_estimator_at_inport_1' */
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddx = rtb_x;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddy = rtb_y;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddz = rtb_z;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.p = rtb_x_c;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.q = rtb_y_n;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.r = rtb_z_p;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.altitude_sonar
    = rtb_altitude;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.prs =
    rtb_pressure;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_V =
    rtb_vbat_V;
  rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_percentage
    = rtb_vbat_percentage;

  /* ModelReference: '<S1>/estimator' */
  stateEstimator(&rtb_Switch_o.controlModePosVSOrient,
                 &rtb_BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1,
                 &rtu_Sensors->VisionSensors.usePosVIS_flag,
                 &rtu_Sensors->VisionSensors.opticalFlow_data[0],
                 &rtu_Sensors->VisionSensors.posVIS_data[0],
                 &rtu_Sensors->SensorCalibration[0], &rtb_estimator);

  /* ModelReference: '<S6>/PID Controller' */
  flightControllerPID(&rtb_Switch_o, &rtb_estimator, &motors_outport[0],
                      &rtb_PIDController_o2[0]);

  /* Outputs for Atomic SubSystem: '<S1>/Logging' */
  flightControlSystem_Logging(flightControlSystem_M, motors_outport,
    rtb_PIDController_o2, &rtb_estimator, rtu_ReferenceValueServerCmds,
    rtu_Sensors, rtb_vbat_V, rtb_vbat_percentage, rtb_x, rtb_y, rtb_z, rtb_x_c,
    rtb_y_n, rtb_z_p, rtb_altitude, rtb_pressure, &localDW->Logging);

  /* End of Outputs for SubSystem: '<S1>/Logging' */

  /* If: '<S4>/If' incorporates:
   *  Abs: '<S4>/Abs'
   *  Abs: '<S4>/Abs1'
   *  Abs: '<S4>/Abs2'
   *  Abs: '<S4>/Abs3'
   *  Abs: '<S4>/Abs4'
   *  Abs: '<S4>/Abs5'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S14>/Constant'
   *  Constant: '<S9>/Constant'
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/Gain1'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S4>/Logical Operator1'
   *  Logic: '<S4>/Logical Operator2'
   *  Logic: '<S4>/Logical Operator3'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S13>/Compare'
   *  RelationalOperator: '<S14>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  Sum: '<S4>/Subtract'
   *  Sum: '<S4>/Subtract1'
   */
  if ((((real32_T)fabs(rtb_estimator.X) > 10.0F) || ((real32_T)fabs
        (rtb_estimator.Y) > 10.0F)) > 0) {
    /* Outputs for IfAction SubSystem: '<S4>/Geofencing error' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* SignalConversion: '<S15>/OutportBufferForOut1' incorporates:
     *  Constant: '<S15>/Constant'
     */
    flag_outport = ((uint8_T)1U);

    /* End of Outputs for SubSystem: '<S4>/Geofencing error' */
  } else if (((((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]) >
                0.01F) && ((real32_T)fabs(1.0F *
      rtu_Sensors->VisionSensors.opticalFlow_data[0] - rtb_estimator.dx) > 6.0F))
              || (((real32_T)fabs(1.0F *
      rtu_Sensors->VisionSensors.opticalFlow_data[1] - rtb_estimator.dy) > 6.0F)
                  && ((real32_T)fabs(rtu_Sensors->
      VisionSensors.opticalFlow_data[1]) > 0.01F))) > 0) {
    /* Outputs for IfAction SubSystem: '<S4>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* SignalConversion: '<S17>/OutportBufferForOut1' incorporates:
     *  Constant: '<S17>/Constant'
     */
    flag_outport = ((uint8_T)99U);

    /* End of Outputs for SubSystem: '<S4>/estimator//Optical flow error' */
  } else {
    /* Outputs for IfAction SubSystem: '<S4>/Normal condition' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* SignalConversion: '<S16>/OutportBufferForOut1' incorporates:
     *  Constant: '<S16>/Constant'
     */
    flag_outport = ((uint8_T)0U);

    /* End of Outputs for SubSystem: '<S4>/Normal condition' */
  }

  /* End of If: '<S4>/If' */

  /* Update for Memory: '<S7>/Memory' */
  localDW->Memory_PreviousInput = rtb_estimator;
}

/* Model step function for TID0 */
void flightControlSystem_step0(void)   /* Sample time: [0.005s, 0.0s] */
{
  /* local block i/o variables */
  CommandBus rtb_BusAssignment2;
  real_T rtb_RateTransition;
  real32_T rtb_XYZ[3];
  real32_T rtb_YawPitchRoll[3];
  real32_T rtb_TmpSignalConversionAtToWorkspace2Inport1[3];
  uint8_T rtb_ROSInputSonar_o2;
  uint8_T rtb_ROSInputx_o2;
  uint8_T rtb_ROSInputy_o2;
  real32_T b_varargout_1;
  int16_T errorNo;
  uint8_T b_x[4];
  uint8_T xtmp;
  uint8_T b_x_0[4];
  uint8_T b_x_1[4];
  real32_T rtb_Switch2;
  real32_T rtb_Switch1;
  real32_T rtb_Switch_a;
  real_T tmp;
  uint16_T tmp_0;

  /* FromWorkspace: '<S20>/fromWS_Signal 1' */
  {
    real32_T *pDataValues = (real32_T *)
      flightControlSystem_DW.fromWS_Signal1_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      flightControlSystem_DW.fromWS_Signal1_PWORK.TimePtr;
    int_T currTimeIndex = flightControlSystem_DW.fromWS_Signal1_IWORK.PrevIndex;
    real_T t = flightControlSystem_M->Timing.taskTime0;
    if (t >= pTimeValues[14]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&rtb_XYZ[0])[elIdx] = pDataValues[14];
          pDataValues += 15;
        }
      }
    } else {
      /* Get index */
      if (t <= pTimeValues[0]) {
        currTimeIndex = 0;
      } else if (t >= pTimeValues[14]) {
        currTimeIndex = 13;
      } else {
        if (t < pTimeValues[currTimeIndex]) {
          while (t < pTimeValues[currTimeIndex]) {
            currTimeIndex--;
          }
        } else {
          while (t >= pTimeValues[currTimeIndex + 1]) {
            currTimeIndex++;
          }
        }
      }

      flightControlSystem_DW.fromWS_Signal1_IWORK.PrevIndex = currTimeIndex;

      /* Post output */
      {
        real_T t1 = pTimeValues[currTimeIndex];
        real_T t2 = pTimeValues[currTimeIndex + 1];
        if (t1 == t2) {
          if (t < t1) {
            {
              int_T elIdx;
              for (elIdx = 0; elIdx < 3; ++elIdx) {
                (&rtb_XYZ[0])[elIdx] = pDataValues[currTimeIndex];
                pDataValues += 15;
              }
            }
          } else {
            {
              int_T elIdx;
              for (elIdx = 0; elIdx < 3; ++elIdx) {
                (&rtb_XYZ[0])[elIdx] = pDataValues[currTimeIndex + 1];
                pDataValues += 15;
              }
            }
          }
        } else {
          real_T f1 = (t2 - t) / (t2 - t1);
          real_T f2 = 1.0 - f1;
          real32_T d1;
          real32_T d2;
          int_T TimeIndex= currTimeIndex;

          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 3; ++elIdx) {
              d1 = pDataValues[TimeIndex];
              d2 = pDataValues[TimeIndex + 1];
              (&rtb_XYZ[0])[elIdx] = (real32_T) rtInterpolate(d1, d2, f1, f2);
              pDataValues += 15;
            }
          }
        }
      }
    }
  }

  /* BusAssignment: '<S19>/Bus Assignment2' incorporates:
   *  BusAssignment: '<S19>/Bus Assignment1'
   *  Inport: '<Root>/AC cmd'
   */
  rtb_BusAssignment2 = cmd_inport;

  /* BusAssignment: '<S19>/Bus Assignment1' incorporates:
   *  BusAssignment: '<S19>/Bus Assignment2'
   */
  rtb_BusAssignment2.pos_ref[0] = rtb_XYZ[0];
  rtb_BusAssignment2.pos_ref[1] = rtb_XYZ[1];
  rtb_BusAssignment2.pos_ref[2] = rtb_XYZ[2];

  /* FromWorkspace: '<S20>/From Workspace' */
  {
    real_T t = flightControlSystem_M->Timing.taskTime0;
    real_T *pTimeValues = (real_T *)
      flightControlSystem_DW.FromWorkspace_PWORK.TimePtr;
    real32_T *pDataValues = (real32_T *)
      flightControlSystem_DW.FromWorkspace_PWORK.DataPtr;
    if (t < pTimeValues[0]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&rtb_YawPitchRoll[0])[elIdx] = 0.0F;
        }
      }
    } else if (t == pTimeValues[1]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&rtb_YawPitchRoll[0])[elIdx] = pDataValues[1];
          pDataValues += 2;
        }
      }
    } else if (t > pTimeValues[1]) {
      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&rtb_YawPitchRoll[0])[elIdx] = 0.0F;
        }
      }
    } else {
      int_T currTimeIndex = flightControlSystem_DW.FromWorkspace_IWORK.PrevIndex;
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }

      {
        int_T elIdx;
        for (elIdx = 0; elIdx < 3; ++elIdx) {
          (&rtb_YawPitchRoll[0])[elIdx] = pDataValues[currTimeIndex];
          pDataValues += 2;
        }
      }

      flightControlSystem_DW.FromWorkspace_IWORK.PrevIndex = currTimeIndex;
    }
  }

  /* BusAssignment: '<S19>/Bus Assignment2' */
  rtb_BusAssignment2.orient_ref[0] = rtb_YawPitchRoll[0];
  rtb_BusAssignment2.orient_ref[1] = rtb_YawPitchRoll[1];
  rtb_BusAssignment2.orient_ref[2] = rtb_YawPitchRoll[2];

  /* MATLABSystem: '<Root>/ROS Input Sonar' */
  tmp = rt_roundd_snf(flightControlSystem_DW.obj.isServer_);
  if (tmp < 65536.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamStepRecv(&b_varargout_1, &rtb_ROSInputSonar_o2, 4,
                    flightControlSystem_DW.obj.connStream_, &errorNo, tmp_0);
  if (flightControlSystem_DW.obj.isLittleEnd_ == 1) {
    memcpy((void *)&b_x[0], (void *)&b_varargout_1, (uint32_T)((size_t)4 *
            sizeof(uint8_T)));
    xtmp = b_x[0];
    b_x[0] = b_x[3];
    b_x[3] = xtmp;
    xtmp = b_x[1];
    b_x[1] = b_x[2];
    b_x[2] = xtmp;
    memcpy((void *)&b_varargout_1, (void *)&b_x[0], (uint32_T)((size_t)1 *
            sizeof(real32_T)));
  }

  /* Switch: '<Root>/Switch' incorporates:
   *  MATLABSystem: '<Root>/ROS Input Sonar'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  if (b_varargout_1 >= 0.1F) {
    rtb_Switch_a = b_varargout_1;
  } else {
    rtb_Switch_a = flightControlSystem_DW.UnitDelay_DSTATE;
  }

  /* End of Switch: '<Root>/Switch' */

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystem_B.BusAssignment = sensor_inport;
  flightControlSystem_B.BusAssignment.HALSensors.HAL_ultrasound_SI.altitude =
    rtb_Switch_a;

  /* RateTransition: '<Root>/Rate Transition' */
  rtb_RateTransition =
    flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem(flightControlSystem_M,
    &rtb_BusAssignment2, &flightControlSystem_B.BusAssignment,
    rtb_RateTransition, &flightControlSystem_DW.FlightControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Flight Control System' */

  /* Outport: '<Root>/Actuators' */
  flightControlSystem_Y.Actuators[0] = motors_outport[0];
  flightControlSystem_Y.Actuators[1] = motors_outport[1];
  flightControlSystem_Y.Actuators[2] = motors_outport[2];
  flightControlSystem_Y.Actuators[3] = motors_outport[3];

  /* Outport: '<Root>/Flag' */
  flightControlSystem_Y.Flag = flag_outport;

  /* MATLABSystem: '<Root>/ROS Input x' */
  tmp = rt_roundd_snf(flightControlSystem_DW.obj_c.isServer_);
  if (tmp < 65536.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamStepRecv(&b_varargout_1, &rtb_ROSInputx_o2, 4,
                    flightControlSystem_DW.obj_c.connStream_, &errorNo, tmp_0);
  if (flightControlSystem_DW.obj_c.isLittleEnd_ == 1) {
    memcpy((void *)&b_x_0[0], (void *)&b_varargout_1, (uint32_T)((size_t)4 *
            sizeof(uint8_T)));
    xtmp = b_x_0[0];
    b_x_0[0] = b_x_0[3];
    b_x_0[3] = xtmp;
    xtmp = b_x_0[1];
    b_x_0[1] = b_x_0[2];
    b_x_0[2] = xtmp;
    memcpy((void *)&b_varargout_1, (void *)&b_x_0[0], (uint32_T)((size_t)1 *
            sizeof(real32_T)));
  }

  /* Switch: '<Root>/Switch1' incorporates:
   *  MATLABSystem: '<Root>/ROS Input x'
   *  UnitDelay: '<Root>/Unit Delay1'
   */
  if (b_varargout_1 >= 0.1F) {
    rtb_Switch1 = b_varargout_1;
  } else {
    rtb_Switch1 = flightControlSystem_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* MATLABSystem: '<Root>/ROS Input y' */
  tmp = rt_roundd_snf(flightControlSystem_DW.obj_f.isServer_);
  if (tmp < 65536.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint16_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint16_T;
  }

  TCPStreamStepRecv(&b_varargout_1, &rtb_ROSInputy_o2, 4,
                    flightControlSystem_DW.obj_f.connStream_, &errorNo, tmp_0);
  if (flightControlSystem_DW.obj_f.isLittleEnd_ == 1) {
    memcpy((void *)&b_x_1[0], (void *)&b_varargout_1, (uint32_T)((size_t)4 *
            sizeof(uint8_T)));
    xtmp = b_x_1[0];
    b_x_1[0] = b_x_1[3];
    b_x_1[3] = xtmp;
    xtmp = b_x_1[1];
    b_x_1[1] = b_x_1[2];
    b_x_1[2] = xtmp;
    memcpy((void *)&b_varargout_1, (void *)&b_x_1[0], (uint32_T)((size_t)1 *
            sizeof(real32_T)));
  }

  /* Switch: '<Root>/Switch2' incorporates:
   *  MATLABSystem: '<Root>/ROS Input y'
   *  UnitDelay: '<Root>/Unit Delay2'
   */
  if (b_varargout_1 >= 0.1F) {
    rtb_Switch2 = b_varargout_1;
  } else {
    rtb_Switch2 = flightControlSystem_DW.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<Root>/Switch2' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtTo Workspace2Inport1' */
  rtb_TmpSignalConversionAtToWorkspace2Inport1[0] = rtb_Switch_a;
  rtb_TmpSignalConversionAtToWorkspace2Inport1[1] = rtb_Switch1;
  rtb_TmpSignalConversionAtToWorkspace2Inport1[2] = rtb_Switch2;

  /* ToWorkspace: '<Root>/To Workspace2' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          flightControlSystem_DW.ToWorkspace2_PWORK.LoggedData,
                          &locTime,
                          &rtb_TmpSignalConversionAtToWorkspace2Inport1[0]);
  }

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  flightControlSystem_DW.UnitDelay_DSTATE = rtb_Switch_a;

  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  flightControlSystem_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<Root>/Unit Delay2' */
  flightControlSystem_DW.UnitDelay2_DSTATE = rtb_Switch2;

  /* Matfile logging */
  rt_UpdateTXYLogVars(flightControlSystem_M->rtwLogInfo,
                      (&flightControlSystem_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(flightControlSystem_M)!=-1) &&
        !((rtmGetTFinal(flightControlSystem_M)-
           flightControlSystem_M->Timing.taskTime0) >
          flightControlSystem_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(flightControlSystem_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++flightControlSystem_M->Timing.clockTick0)) {
    ++flightControlSystem_M->Timing.clockTickH0;
  }

  flightControlSystem_M->Timing.taskTime0 =
    flightControlSystem_M->Timing.clockTick0 *
    flightControlSystem_M->Timing.stepSize0 +
    flightControlSystem_M->Timing.clockTickH0 *
    flightControlSystem_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void flightControlSystem_step1(void)   /* Sample time: [0.2s, 0.0s] */
{
  /* local block i/o variables */
  real32_T rtb_BlobAnalysis_o2[100];
  int32_T rtb_BlobAnalysis_o1[50];
  int32_T rtb_BlobAnalysis_o3[200];
  uint32_T pos;
  uint32_T neg;
  uint32_T yDiff;
  real_T rtb_Switch;
  int32_T pixListNinc;
  uint32_T BlobAnalysis_NUM_PIX_DW[50];
  int32_T j_pixListNinc;
  int32_T ns;
  int32_T ms;
  int32_T numLoops;
  int32_T p;
  boolean_T maxNumBlobsReached;
  uint8_T currentLabel;
  uint32_T stackIdx;
  uint32_T walkerIdx;
  uint32_T pixIdx;
  uint32_T padIdx;
  int32_T idx;
  int32_T n;
  int32_T loop;
  real32_T centroid_idx_1;
  real32_T centroid_idx_0;

  /* Outputs for Atomic SubSystem: '<Root>/Image Processing System' */
  /* ModelReference: '<S2>/Y1UY2V to YUV' incorporates:
   *  Inport: '<Root>/Image Data'
   */
  conversionYUV(&flightControlSystem_U.Y1UY2V[0],
                &flightControlSystem_B.Y1UY2VtoYUV_o1[0],
                &flightControlSystem_B.Y1UY2VtoYUV_o2[0],
                &flightControlSystem_B.Y1UY2VtoYUV_o3[0],
                &(flightControlSystem_DW.Y1UY2VtoYUV_InstanceData.rtb));

  /* S-Function (svipcolorconv): '<S2>/Color Space  Conversion' */
  /* Precompute constants */
  stackIdx = ((uint16_T)26149U) * 128U;
  pixIdx = (((uint16_T)6419U) * 128U + ((uint16_T)13320U) * 128U) + 8192U;
  padIdx = ((uint16_T)33050U) * 128U;
  for (loop = 0; loop < 19200; loop++) {
    /* Convert YcbCr to RGB; apply coefficients and offsets */
    /* derived from the ITU BT.601-5 recommendation; all of the */
    /* coefficients and offsets are scaled (by 2^14) such that */
    /* the conversion can be done using integer arithmetic; this */
    /* routine relies on the user supplying the data in proper */
    /* ranges: Y [16..235], Cb & Cr [16..240] */
    /* Note that all of the operations are grouped in such a way */
    /* that the arithmetic can be done using unsigned integers */
    /* Given that Y is in the proper range, yDiff should */
    /* always be positive */
    yDiff = flightControlSystem_B.Y1UY2VtoYUV_o1[loop] - 16U;

    /* Red; 8192 in this equations is 0.5*2^14 or 2^13; adding 0.5  */
    /* before truncation will result in rounding */
    pos = (yDiff * ((uint16_T)19077U) + (uint32_T)
           flightControlSystem_B.Y1UY2VtoYUV_o3[loop] * ((uint16_T)26149U)) +
      8192U;
    if (pos > stackIdx) {
      pos -= stackIdx;
    } else {
      pos = 0U;
    }

    walkerIdx = pos >> 14;

    /* limit to avoid wrapping */
    if (walkerIdx > 255U) {
      walkerIdx = 255U;
    }

    /* Compute green channel */
    pos = yDiff * ((uint16_T)19077U) + pixIdx;
    neg = (uint32_T)flightControlSystem_B.Y1UY2VtoYUV_o2[loop] * ((uint16_T)
      6419U) + (uint32_T)flightControlSystem_B.Y1UY2VtoYUV_o3[loop] * ((uint16_T)
      13320U);

    /* scale back */
    if (pos > neg) {
      pos -= neg;
    } else {
      pos = 0U;
    }

    neg = pos >> 14;
    if (neg > 255U) {
      neg = 255U;
    }

    /* Compute blue channel */
    pos = (yDiff * ((uint16_T)19077U) + (uint32_T)
           flightControlSystem_B.Y1UY2VtoYUV_o2[loop] * ((uint16_T)33050U)) +
      8192U;

    /* scale back */
    if (pos > padIdx) {
      pos -= padIdx;
    } else {
      pos = 0U;
    }

    yDiff = pos >> 14;
    if (yDiff > 255U) {
      yDiff = 255U;
    }

    /* assign back the results */
    flightControlSystem_B.ColorSpaceConversion_o1[loop] = (uint8_T)walkerIdx;
    flightControlSystem_B.ColorSpaceConversion_o2[loop] = (uint8_T)neg;
    flightControlSystem_B.ColorSpaceConversion_o3[loop] = (uint8_T)yDiff;
  }

  /* End of S-Function (svipcolorconv): '<S2>/Color Space  Conversion' */

  /* RelationalOperator: '<S2>/Relational Operator1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Sum: '<S2>/Sum'
   */
  for (loop = 0; loop < 19200; loop++) {
    /* Sum: '<S2>/Sum' */
    idx = (flightControlSystem_B.ColorSpaceConversion_o1[loop] -
           flightControlSystem_B.ColorSpaceConversion_o2[loop]) -
      flightControlSystem_B.ColorSpaceConversion_o3[loop];
    if (idx < 0) {
      idx = 0;
    }

    flightControlSystem_B.RelationalOperator1[loop] = (idx > ((uint8_T)100U));
  }

  /* End of RelationalOperator: '<S2>/Relational Operator1' */

  /* S-Function (svipblob): '<S2>/Blob Analysis' */
  maxNumBlobsReached = false;
  memset(&flightControlSystem_DW.BlobAnalysis_PAD_DW[0], 0, 123U * sizeof
         (uint8_T));
  currentLabel = 1U;
  loop = 0;
  idx = 123;
  for (n = 0; n < 160; n++) {
    for (pixListNinc = 0; pixListNinc < 120; pixListNinc++) {
      flightControlSystem_DW.BlobAnalysis_PAD_DW[idx] = (uint8_T)
        (flightControlSystem_B.RelationalOperator1[loop] ? 255 : 0);
      loop++;
      idx++;
    }

    flightControlSystem_DW.BlobAnalysis_PAD_DW[idx] = 0U;
    flightControlSystem_DW.BlobAnalysis_PAD_DW[idx + 1] = 0U;
    idx += 2;
  }

  memset(&flightControlSystem_DW.BlobAnalysis_PAD_DW[idx], 0, 121U * sizeof
         (uint8_T));
  idx = 0;
  pixIdx = 0U;
  n = 0;
  while (n < 160) {
    ns = 0;
    ms = (idx + 1) * 122;
    pixListNinc = 0;
    while (pixListNinc < 120) {
      padIdx = (uint32_T)((ms + ns) + 1);
      if (flightControlSystem_DW.BlobAnalysis_PAD_DW[padIdx] == 255) {
        flightControlSystem_DW.BlobAnalysis_PAD_DW[padIdx] = currentLabel;
        flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[pixIdx] = (int16_T)idx;
        flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[pixIdx] = (int16_T)ns;
        pixIdx++;
        numLoops = currentLabel - 1;
        BlobAnalysis_NUM_PIX_DW[numLoops] = 1U;
        flightControlSystem_DW.BlobAnalysis_STACK_DW[0U] = padIdx;
        stackIdx = 1U;
        while (stackIdx != 0U) {
          stackIdx--;
          padIdx = flightControlSystem_DW.BlobAnalysis_STACK_DW[stackIdx];
          for (loop = 0; loop < 8; loop++) {
            walkerIdx = padIdx + rtCP_BlobAnalysis_WALKER_RTP[loop];
            if (flightControlSystem_DW.BlobAnalysis_PAD_DW[walkerIdx] == 255) {
              flightControlSystem_DW.BlobAnalysis_PAD_DW[walkerIdx] =
                currentLabel;
              flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[pixIdx] =
                (int16_T)((int16_T)(walkerIdx / 122U) - 1);
              flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[pixIdx] =
                (int16_T)(walkerIdx % 122U - 1U);
              pixIdx++;
              BlobAnalysis_NUM_PIX_DW[numLoops]++;
              flightControlSystem_DW.BlobAnalysis_STACK_DW[stackIdx] = walkerIdx;
              stackIdx++;
            }
          }
        }

        if (currentLabel == 50) {
          maxNumBlobsReached = true;
          n = 160;
          pixListNinc = 120;
        }

        if (pixListNinc < 120) {
          currentLabel++;
        }
      }

      ns++;
      pixListNinc++;
    }

    idx++;
    n++;
  }

  stackIdx = (uint32_T)(maxNumBlobsReached ? (int32_T)currentLabel : (int32_T)
                        (uint8_T)(currentLabel - 1U));
  n = 0;
  pixListNinc = 0;
  for (loop = 0; loop < (int32_T)stackIdx; loop++) {
    rtb_BlobAnalysis_o1[loop] = (int32_T)BlobAnalysis_NUM_PIX_DW[loop];
    ns = 0;
    ms = 0;
    if (BlobAnalysis_NUM_PIX_DW[loop] <= 260000U) {
      for (idx = 0; idx < (int32_T)BlobAnalysis_NUM_PIX_DW[loop]; idx++) {
        ns += flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[idx + pixListNinc];
        ms += flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[idx + n];
      }

      centroid_idx_0 = (real32_T)ms / (real32_T)BlobAnalysis_NUM_PIX_DW[loop];
      centroid_idx_1 = (real32_T)ns / (real32_T)BlobAnalysis_NUM_PIX_DW[loop];
    } else {
      numLoops = (int32_T)((real32_T)BlobAnalysis_NUM_PIX_DW[loop] / 260000.0F);
      centroid_idx_0 = 0.0F;
      centroid_idx_1 = 0.0F;
      for (p = 0; p < numLoops; p++) {
        ns = 0;
        ms = 0;
        for (idx = 0; idx < 260000; idx++) {
          ns += flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[(pixListNinc +
            idx) + p * 260000];
          ms += flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[(n + idx) + p *
            260000];
        }

        centroid_idx_0 += (real32_T)ms / (real32_T)BlobAnalysis_NUM_PIX_DW[loop];
        centroid_idx_1 += (real32_T)ns / (real32_T)BlobAnalysis_NUM_PIX_DW[loop];
      }

      ns = 0;
      ms = 0;
      numLoops *= 260000;
      p = (int32_T)(BlobAnalysis_NUM_PIX_DW[loop] - numLoops);
      for (idx = 0; idx < p; idx++) {
        ns += flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[(idx +
          pixListNinc) + numLoops];
        ms += flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[(idx + n) +
          numLoops];
      }

      centroid_idx_0 += (real32_T)ms / (real32_T)BlobAnalysis_NUM_PIX_DW[loop];
      centroid_idx_1 += (real32_T)ns / (real32_T)BlobAnalysis_NUM_PIX_DW[loop];
    }

    rtb_BlobAnalysis_o2[loop] = centroid_idx_1 + 1.0F;
    pixIdx = 50U + loop;
    rtb_BlobAnalysis_o2[pixIdx] = centroid_idx_0 + 1.0F;
    ns = 160;
    ms = 120;
    numLoops = 0;
    p = 0;
    for (idx = 0; idx < (int32_T)BlobAnalysis_NUM_PIX_DW[loop]; idx++) {
      j_pixListNinc = idx + pixListNinc;
      if (flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[j_pixListNinc] < ns)
      {
        ns = flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[j_pixListNinc];
      }

      if (flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[j_pixListNinc] >
          numLoops) {
        numLoops =
          flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[j_pixListNinc];
      }

      j_pixListNinc = idx + n;
      if (flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[j_pixListNinc] < ms)
      {
        ms = flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[j_pixListNinc];
      }

      if (flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[j_pixListNinc] > p) {
        p = flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[j_pixListNinc];
      }
    }

    rtb_BlobAnalysis_o3[loop] = ns + 1;
    rtb_BlobAnalysis_o3[pixIdx] = ms + 1;
    rtb_BlobAnalysis_o3[100 + loop] = (numLoops - ns) + 1;
    rtb_BlobAnalysis_o3[150 + loop] = (p - ms) + 1;
    n += (int32_T)BlobAnalysis_NUM_PIX_DW[loop];
    pixListNinc += (int32_T)BlobAnalysis_NUM_PIX_DW[loop];
  }

  for (loop = (int32_T)stackIdx; loop < 50; loop++) {
    rtb_BlobAnalysis_o1[loop] = (-1);
  }

  for (loop = (int32_T)stackIdx; loop < 50; loop++) {
    rtb_BlobAnalysis_o2[loop] = (-1.0F);
  }

  for (loop = 50 + (int32_T)stackIdx; loop < 100; loop++) {
    rtb_BlobAnalysis_o2[loop] = (-1.0F);
  }

  for (loop = (int32_T)stackIdx; loop < 50; loop++) {
    rtb_BlobAnalysis_o3[loop] = (-1);
  }

  for (loop = 50 + (int32_T)stackIdx; loop < 100; loop++) {
    rtb_BlobAnalysis_o3[loop] = (-1);
  }

  for (loop = 100 + (int32_T)stackIdx; loop < 150; loop++) {
    rtb_BlobAnalysis_o3[loop] = (-1);
  }

  for (loop = 150 + (int32_T)stackIdx; loop < 200; loop++) {
    rtb_BlobAnalysis_o3[loop] = (-1);
  }

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/One'
   *  Constant: '<S2>/One1'
   *  Constant: '<S2>/One2'
   *  RelationalOperator: '<S2>/Relational Operator'
   *  S-Function (svipblob): '<S2>/Blob Analysis'
   */
  if ((int32_T)stackIdx >= ((uint8_T)1U)) {
    rtb_Switch = 211.0;
  } else {
    rtb_Switch = 0.0;
  }

  /* End of Switch: '<S2>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/Image Processing System' */

  /* Update for RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx
    == 0] = rtb_Switch;
  flightControlSystem_DW.RateTransition_ActiveBufIdx = (int8_T)
    (flightControlSystem_DW.RateTransition_ActiveBufIdx == 0);
}

/* Model step wrapper function for compatibility with a static main program */
void flightControlSystem_step(int_T tid)
{
  switch (tid) {
   case 0 :
    flightControlSystem_step0();
    break;

   case 1 :
    flightControlSystem_step1();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void flightControlSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)flightControlSystem_M, 0,
                sizeof(RT_MODEL_flightControlSystem_T));
  (flightControlSystem_M)->Timing.TaskCounters.cLimit[0] = 1;
  (flightControlSystem_M)->Timing.TaskCounters.cLimit[1] = 40;
  rtmSetTFinal(flightControlSystem_M, 30.0);
  flightControlSystem_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    flightControlSystem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogT(flightControlSystem_M->rtwLogInfo, "tout");
    rtliSetLogX(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogXFinal(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(flightControlSystem_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(flightControlSystem_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(flightControlSystem_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(flightControlSystem_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &flightControlSystem_Y.Actuators[0],
        &flightControlSystem_Y.Flag
      };

      rtliSetLogYSignalPtrs(flightControlSystem_M->rtwLogInfo,
                            ((LogSignalPtrsType)rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        4,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        4,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_SINGLE,
        SS_UINT8
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
        (NULL),
        (NULL)
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "motors",
        "flag" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "flightControlSystem/Actuators",
        "flightControlSystem/Flag" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          2,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(flightControlSystem_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
    }

    rtliSetLogY(flightControlSystem_M->rtwLogInfo, "yout");
  }

  /* block I/O */
  (void) memset(((void *) &flightControlSystem_B), 0,
                sizeof(B_flightControlSystem_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&flightControlSystem_DW, 0,
                sizeof(DW_flightControlSystem_T));

  /* external inputs */
  (void)memset(&flightControlSystem_U, 0, sizeof(ExtU_flightControlSystem_T));
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&flightControlSystem_Y, 0,
                sizeof(ExtY_flightControlSystem_T));

  /* Model Initialize function for ModelReference Block: '<S6>/PID Controller' */
  flightControllerPID_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Model Initialize function for ModelReference Block: '<S1>/estimator' */
  stateEstimator_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Model Initialize function for ModelReference Block: '<S2>/Y1UY2V to YUV' */
  conversionYUV_initialize(rtmGetErrorStatusPointer(flightControlSystem_M),
    &(flightControlSystem_DW.Y1UY2VtoYUV_InstanceData.rtm));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(flightControlSystem_M->rtwLogInfo, 0.0,
    rtmGetTFinal(flightControlSystem_M), flightControlSystem_M->Timing.stepSize0,
    (&rtmGetErrorStatus(flightControlSystem_M)));

  {
    int16_T errorNo;
    char_T ipaddr[7];
    static const char_T tmp[7] = { 'S', 'e', 'r', 'v', 'e', 'r', '\x00' };

    int32_T i;
    real_T tmp_0;
    uint16_T tmp_1;

    /* SetupRuntimeResources for Atomic SubSystem: '<Root>/Flight Control System' */
    flightControlSystem_FlightControlSystem_SetupRTR(flightControlSystem_M,
      &flightControlSystem_DW.FlightControlSystem);

    /* End of SetupRuntimeResources for SubSystem: '<Root>/Flight Control System' */

    /* SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace2' */
    {
      static int_T rt_ToWksWidths[] = { 3 };

      static int_T rt_ToWksNumDimensions[] = { 1 };

      static int_T rt_ToWksDimensions[] = { 3 };

      static boolean_T rt_ToWksIsVarDims[] = { 0 };

      static void *rt_ToWksCurrSigDims[] = { (NULL) };

      static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

      static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

      static int_T rt_ToWksComplexSignals[] = { 0 };

      static int_T rt_ToWksFrameData[] = { 0 };

      static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
        (NULL)
      };

      static const char_T *rt_ToWksLabels[] = { "" };

      static RTWLogSignalInfo rt_ToWksSignalInfo = {
        1,
        rt_ToWksWidths,
        rt_ToWksNumDimensions,
        rt_ToWksDimensions,
        rt_ToWksIsVarDims,
        rt_ToWksCurrSigDims,
        rt_ToWksCurrSigDimsSize,
        rt_ToWksDataTypeIds,
        rt_ToWksComplexSignals,
        rt_ToWksFrameData,
        rt_ToWksLoggingPreprocessingFcnPtrs,

        { rt_ToWksLabels },
        (NULL),
        (NULL),
        (NULL),

        { (NULL) },

        { (NULL) },
        (NULL),
        (NULL)
      };

      static const char_T rt_ToWksBlockName[] =
        "flightControlSystem/To Workspace2";
      flightControlSystem_DW.ToWorkspace2_PWORK.LoggedData =
        rt_CreateStructLogVar(
        flightControlSystem_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(flightControlSystem_M),
        flightControlSystem_M->Timing.stepSize0,
        (&rtmGetErrorStatus(flightControlSystem_M)),
        "rt_ros",
        1,
        0,
        1,
        0.005,
        &rt_ToWksSignalInfo,
        rt_ToWksBlockName);
      if (flightControlSystem_DW.ToWorkspace2_PWORK.LoggedData == (NULL))
        return;
    }

    /* Start for FromWorkspace: '<S20>/fromWS_Signal 1' */
    {
      static real_T pTimeValues0[] = { 0.0, 1.0, 10.0, 10.0, 20.0, 20.0, 30.0,
        30.0, 40.0, 40.0, 50.0, 50.0, 60.0, 60.0, 100.0 } ;

      static real32_T pDataValues0[] = { 0.0F, 0.0F, 0.0F, 0.5F, 0.5F, 0.0F,
        0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
        0.0F, 0.0F, 0.0F, 0.0F, 0.5F, 0.5F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
        0.0F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F, -1.5F,
        -1.5F, -1.0F, -1.0F, -1.5F, -1.5F } ;

      flightControlSystem_DW.fromWS_Signal1_PWORK.TimePtr = (void *)
        pTimeValues0;
      flightControlSystem_DW.fromWS_Signal1_PWORK.DataPtr = (void *)
        pDataValues0;
      flightControlSystem_DW.fromWS_Signal1_IWORK.PrevIndex = 0;
    }

    /* Start for FromWorkspace: '<S20>/From Workspace' */
    {
      static real_T pTimeValues0[] = { 0.0, 100.0 } ;

      static real32_T pDataValues0[] = { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F } ;

      flightControlSystem_DW.FromWorkspace_PWORK.TimePtr = (void *) pTimeValues0;
      flightControlSystem_DW.FromWorkspace_PWORK.DataPtr = (void *) pDataValues0;
      flightControlSystem_DW.FromWorkspace_IWORK.PrevIndex = 0;
    }

    /* Start for MATLABSystem: '<Root>/ROS Input Sonar' */
    flightControlSystem_DW.obj.isInitialized = 0;
    flightControlSystem_DW.objisempty = true;
    flightControlSystem_DW.obj.isInitialized = 1;
    flightControlSystem_DW.obj.isServer_ = 1.0;
    for (i = 0; i < 7; i++) {
      ipaddr[i] = tmp[i];
    }

    tmp_0 = rt_roundd_snf(flightControlSystem_DW.obj.isServer_);
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp_1 = (uint16_T)tmp_0;
      } else {
        tmp_1 = 0U;
      }
    } else {
      tmp_1 = MAX_uint16_T;
    }

    TCPStreamSetup(25000, 0, &flightControlSystem_DW.obj.connStream_, tmp_1, 0.0,
                   &errorNo, ipaddr);
    littleEndianCheck(&flightControlSystem_DW.obj.isLittleEnd_);

    /* End of Start for MATLABSystem: '<Root>/ROS Input Sonar' */

    /* Start for MATLABSystem: '<Root>/ROS Input x' */
    flightControlSystem_DW.obj_c.isInitialized = 0;
    flightControlSystem_DW.objisempty_a = true;
    flightControlSystem_DW.obj_c.isInitialized = 1;
    flightControlSystem_DW.obj_c.isServer_ = 1.0;
    for (i = 0; i < 7; i++) {
      ipaddr[i] = tmp[i];
    }

    tmp_0 = rt_roundd_snf(flightControlSystem_DW.obj_c.isServer_);
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp_1 = (uint16_T)tmp_0;
      } else {
        tmp_1 = 0U;
      }
    } else {
      tmp_1 = MAX_uint16_T;
    }

    TCPStreamSetup(25001, 0, &flightControlSystem_DW.obj_c.connStream_, tmp_1,
                   0.0, &errorNo, ipaddr);
    littleEndianCheck(&flightControlSystem_DW.obj_c.isLittleEnd_);

    /* End of Start for MATLABSystem: '<Root>/ROS Input x' */

    /* Start for MATLABSystem: '<Root>/ROS Input y' */
    flightControlSystem_DW.obj_f.isInitialized = 0;
    flightControlSystem_DW.objisempty_l = true;
    flightControlSystem_DW.obj_f.isInitialized = 1;
    flightControlSystem_DW.obj_f.isServer_ = 1.0;
    for (i = 0; i < 7; i++) {
      ipaddr[i] = tmp[i];
    }

    tmp_0 = rt_roundd_snf(flightControlSystem_DW.obj_f.isServer_);
    if (tmp_0 < 65536.0) {
      if (tmp_0 >= 0.0) {
        tmp_1 = (uint16_T)tmp_0;
      } else {
        tmp_1 = 0U;
      }
    } else {
      tmp_1 = MAX_uint16_T;
    }

    TCPStreamSetup(25002, 0, &flightControlSystem_DW.obj_f.connStream_, tmp_1,
                   0.0, &errorNo, ipaddr);
    littleEndianCheck(&flightControlSystem_DW.obj_f.isLittleEnd_);

    /* End of Start for MATLABSystem: '<Root>/ROS Input y' */
  }

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  flightControlSystem_DW.UnitDelay_DSTATE = 0.0F;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[0] = 0.0;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  flightControlSystem_DW.UnitDelay1_DSTATE = 0.0F;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
  flightControlSystem_DW.UnitDelay2_DSTATE = 0.0F;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Flight Control System' */
  flightControlSystem_FlightControlSystem_Init
    (&flightControlSystem_DW.FlightControlSystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Flight Control System' */
}

/* Model terminate function */
void flightControlSystem_terminate(void)
{
  /* (no terminate code required) */
}
