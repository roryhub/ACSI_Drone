/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: flightControlSystem.c
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

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<Root>/Flight Control System' */
uint8_T flag_outport;                  /* '<Root>/Flight Control System' */

/* Block signals (default storage) */
B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_flightControlSystem_T flightControlSystem_Y;

/* Real-time model */
RT_MODEL_flightControlSystem_T flightControlSystem_M_;
RT_MODEL_flightControlSystem_T *const flightControlSystem_M =
  &flightControlSystem_M_;

/*
 * Output and update for action system:
 *    '<S3>/Geofencing error'
 *    '<S3>/estimator//Optical flow error'
 *    '<S3>/No optical flow '
 *    '<S3>/Ultrasound improper'
 *    '<S3>/Normal condition'
 */
void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP)
{
  /* SignalConversion: '<S26>/OutportBufferForOut1' incorporates:
   *  Constant: '<S26>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* SetupRuntimeResources for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging_SetupRTR(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW)
{
  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace4' */
  {
    static int_T rt_ToWksWidths[] = { 25 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 25 };

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
      "mocap",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace4_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace7' */
  {
    static int_T rt_ToWksWidths[] = { 18 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 18 };

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
      "flightControlSystem/Flight Control System/Logging/To Workspace7";
    localDW->ToWorkspace7_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "error",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace7_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace1' */
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
      "flightControlSystem/Flight Control System/Logging/To Workspace1";
    localDW->ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "estimatedStates",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace3' */
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

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace6' */
  {
    static int_T rt_ToWksWidths[] = { 6 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 6 };

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
      "imu",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace6_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace2' */
  {
    static int_T rt_ToWksWidths[] = { 6 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 6 };

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
      "ref",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace' */
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

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace10' */
  {
    static int_T rt_ToWksWidths[] = { 5 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 5 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_BOOLEAN };

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
      "flightControlSystem/Flight Control System/Logging/To Workspace10";
    localDW->ToWorkspace10_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "optical_flags",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace10_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace5' */
  {
    static int_T rt_ToWksWidths[] = { 5 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 5 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_BOOLEAN };

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
      "flightControlSystem/Flight Control System/Logging/To Workspace5";
    localDW->ToWorkspace5_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "sonar_flags",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace5_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace8' */
  {
    static int_T rt_ToWksWidths[] = { 2 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 2 };

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
      "flightControlSystem/Flight Control System/Logging/To Workspace8";
    localDW->ToWorkspace8_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "alt",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace8_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S4>/To Workspace9' */
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
      "flightControlSystem/Flight Control System/Logging/To Workspace9";
    localDW->ToWorkspace9_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "calibration",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace9_PWORK.LoggedData == (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, const real32_T rtu_motorCmds[4], real32_T
  rtu_error_in_Inport_2, real32_T rtu_error_in_Inport_2_k, real32_T
  rtu_error_in_Inport_2_o, const real32_T rtu_error_in_Inport_2_m[2], const
  real32_T rtu_error_in_Inport_2_c[2], const real32_T rtu_error_in_Inport_2_g[2],
  const real32_T rtu_error_in_Inport_2_b[2], const real32_T
  rtu_error_in_Inport_2_kt[2], const real32_T rtu_error_in_Inport_2_l[2],
  real32_T rtu_error_in_Inport_2_i, real32_T rtu_error_in_Inport_2_me, real32_T
  rtu_error_in_Inport_2_d, const real32_T rtu_estimatedStates[2], real32_T
  rtu_estimatedStates_j, const real32_T rtu_estimatedStates_p[3], const real32_T
  rtu_estimatedStates_l[2], real32_T rtu_estimatedStates_f, const real32_T
  rtu_estimatedStates_k[3], const CommandBus
  *rtu_ReferenceValueServerBus_Inport_4, const boolean_T rtu_optical_flags[5],
  const real32_T rtu_mocap[24], real32_T rtu_mocap_f, const boolean_T
  rtu_sonar_flags[5], const real32_T rtu_imu_in_Inport_8[3], const real32_T
  rtu_imu_in_Inport_8_p[2], real32_T rtu_imu_in_Inport_8_h, const real32_T
  rtu_alt[2], const real32_T rtu_calibration[8], B_Logging_flightControlSystem_T
  *localB, DW_Logging_flightControlSystem_T *localDW)
{
  /* local block i/o variables */
  real32_T rtb_TmpSignalConversionAtToWorkspace6Inport1[6];
  real32_T rtb_TmpSignalConversionAtToWorkspace2Inport1[6];

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace4Inport1' */
  memcpy(&localB->TmpSignalConversionAtToWorkspace4Inport1[0], &rtu_mocap[0],
         24U * sizeof(real32_T));
  localB->TmpSignalConversionAtToWorkspace4Inport1[24] = rtu_mocap_f;

  /* ToWorkspace: '<S4>/To Workspace4' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace4_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace4Inport1[0]);
  }

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace7Inport1' */
  localB->TmpSignalConversionAtToWorkspace7Inport1[0] = rtu_error_in_Inport_2;
  localB->TmpSignalConversionAtToWorkspace7Inport1[1] = rtu_error_in_Inport_2_k;
  localB->TmpSignalConversionAtToWorkspace7Inport1[2] = rtu_error_in_Inport_2_o;
  localB->TmpSignalConversionAtToWorkspace7Inport1[3] = rtu_error_in_Inport_2_m
    [0];
  localB->TmpSignalConversionAtToWorkspace7Inport1[4] = rtu_error_in_Inport_2_m
    [1];
  localB->TmpSignalConversionAtToWorkspace7Inport1[5] = rtu_error_in_Inport_2_c
    [0];
  localB->TmpSignalConversionAtToWorkspace7Inport1[6] = rtu_error_in_Inport_2_c
    [1];
  localB->TmpSignalConversionAtToWorkspace7Inport1[7] = rtu_error_in_Inport_2_g
    [0];
  localB->TmpSignalConversionAtToWorkspace7Inport1[8] = rtu_error_in_Inport_2_g
    [1];
  localB->TmpSignalConversionAtToWorkspace7Inport1[9] = rtu_error_in_Inport_2_b
    [0];
  localB->TmpSignalConversionAtToWorkspace7Inport1[10] =
    rtu_error_in_Inport_2_b[1];
  localB->TmpSignalConversionAtToWorkspace7Inport1[11] =
    rtu_error_in_Inport_2_kt[0];
  localB->TmpSignalConversionAtToWorkspace7Inport1[12] =
    rtu_error_in_Inport_2_kt[1];
  localB->TmpSignalConversionAtToWorkspace7Inport1[13] =
    rtu_error_in_Inport_2_l[0];
  localB->TmpSignalConversionAtToWorkspace7Inport1[14] =
    rtu_error_in_Inport_2_l[1];
  localB->TmpSignalConversionAtToWorkspace7Inport1[15] = rtu_error_in_Inport_2_i;
  localB->TmpSignalConversionAtToWorkspace7Inport1[16] =
    rtu_error_in_Inport_2_me;
  localB->TmpSignalConversionAtToWorkspace7Inport1[17] = rtu_error_in_Inport_2_d;

  /* ToWorkspace: '<S4>/To Workspace7' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace7_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace7Inport1[0]);
  }

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace1Inport1' */
  localB->TmpSignalConversionAtToWorkspace1Inport1[0] = rtu_estimatedStates[0];
  localB->TmpSignalConversionAtToWorkspace1Inport1[1] = rtu_estimatedStates[1];
  localB->TmpSignalConversionAtToWorkspace1Inport1[2] = rtu_estimatedStates_j;
  localB->TmpSignalConversionAtToWorkspace1Inport1[3] = rtu_estimatedStates_p[0];
  localB->TmpSignalConversionAtToWorkspace1Inport1[4] = rtu_estimatedStates_p[1];
  localB->TmpSignalConversionAtToWorkspace1Inport1[5] = rtu_estimatedStates_p[2];
  localB->TmpSignalConversionAtToWorkspace1Inport1[6] = rtu_estimatedStates_l[0];
  localB->TmpSignalConversionAtToWorkspace1Inport1[7] = rtu_estimatedStates_l[1];
  localB->TmpSignalConversionAtToWorkspace1Inport1[8] = rtu_estimatedStates_f;
  localB->TmpSignalConversionAtToWorkspace1Inport1[9] = rtu_estimatedStates_k[0];
  localB->TmpSignalConversionAtToWorkspace1Inport1[10] = rtu_estimatedStates_k[1];
  localB->TmpSignalConversionAtToWorkspace1Inport1[11] = rtu_estimatedStates_k[2];

  /* ToWorkspace: '<S4>/To Workspace1' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace1_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace1Inport1[0]);
  }

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace3Inport1' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion3'
   *  DataTypeConversion: '<S4>/Data Type Conversion7'
   *  DataTypeConversion: '<S4>/Data Type Conversion9'
   *  SignalConversion: '<S4>/ReferenceValueServerBus_BusSelector'
   */
  localB->TmpSignalConversionAtToWorkspace3Inport1[0] =
    rtu_ReferenceValueServerBus_Inport_4->controlModePosVSOrient;
  localB->TmpSignalConversionAtToWorkspace3Inport1[1] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[2] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[3] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[4] =
    rtu_ReferenceValueServerBus_Inport_4->takeoff_flag;
  localB->TmpSignalConversionAtToWorkspace3Inport1[5] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[6] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[7] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[8] = (real32_T)
    rtu_ReferenceValueServerBus_Inport_4->live_time_ticks;

  /* ToWorkspace: '<S4>/To Workspace3' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace3_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace3Inport1[0]);
  }

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace6Inport1' */
  rtb_TmpSignalConversionAtToWorkspace6Inport1[0] = rtu_imu_in_Inport_8[0];
  rtb_TmpSignalConversionAtToWorkspace6Inport1[1] = rtu_imu_in_Inport_8[1];
  rtb_TmpSignalConversionAtToWorkspace6Inport1[2] = rtu_imu_in_Inport_8[2];
  rtb_TmpSignalConversionAtToWorkspace6Inport1[3] = rtu_imu_in_Inport_8_p[0];
  rtb_TmpSignalConversionAtToWorkspace6Inport1[4] = rtu_imu_in_Inport_8_p[1];
  rtb_TmpSignalConversionAtToWorkspace6Inport1[5] = rtu_imu_in_Inport_8_h;

  /* ToWorkspace: '<S4>/To Workspace6' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace6_PWORK.LoggedData,
                          &locTime,
                          &rtb_TmpSignalConversionAtToWorkspace6Inport1[0]);
  }

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace2Inport1' incorporates:
   *  SignalConversion: '<S4>/ReferenceValueServerBus_BusSelector'
   */
  rtb_TmpSignalConversionAtToWorkspace2Inport1[0] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[0];
  rtb_TmpSignalConversionAtToWorkspace2Inport1[1] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[1];
  rtb_TmpSignalConversionAtToWorkspace2Inport1[2] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[2];
  rtb_TmpSignalConversionAtToWorkspace2Inport1[3] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[0];
  rtb_TmpSignalConversionAtToWorkspace2Inport1[4] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[1];
  rtb_TmpSignalConversionAtToWorkspace2Inport1[5] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[2];

  /* ToWorkspace: '<S4>/To Workspace2' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace2_PWORK.LoggedData,
                          &locTime,
                          &rtb_TmpSignalConversionAtToWorkspace2Inport1[0]);
  }

  /* ToWorkspace: '<S4>/To Workspace' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace_PWORK.LoggedData,
                          &locTime, &rtu_motorCmds[0]);
  }

  /* ToWorkspace: '<S4>/To Workspace10' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          localDW->ToWorkspace10_PWORK.LoggedData, &locTime,
                          &rtu_optical_flags[0]);
  }

  /* ToWorkspace: '<S4>/To Workspace5' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace5_PWORK.LoggedData,
                          &locTime, &rtu_sonar_flags[0]);
  }

  /* ToWorkspace: '<S4>/To Workspace8' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace8_PWORK.LoggedData,
                          &locTime, &rtu_alt[0]);
  }

  /* ToWorkspace: '<S4>/To Workspace9' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace9_PWORK.LoggedData,
                          &locTime, &rtu_calibration[0]);
  }
}

/* Output and update for atomic system: '<S1>/Send' */
void flightControlSystem_Send(const real32_T rtu_IMU[3], const real32_T
  rtu_SensorCalibration[8], const real32_T rtu_MotorCommands[4], const real32_T
  rtu_States[3], const real32_T rtu_States_l[2], real32_T rtu_States_m, const
  real32_T rtu_States_d[3], real32_T rty_SendUDP[20],
  P_Send_flightControlSystem_T *localP)
{
  /* SignalConversion: '<S5>/BufferToMakeInportVirtual_InsertedFor_Send UDP_at_inport_0' incorporates:
   *  Constant: '<S5>/Constant'
   */
  rty_SendUDP[0] = localP->Constant_Value;
  rty_SendUDP[1] = rtu_IMU[0];
  rty_SendUDP[4] = rtu_SensorCalibration[0];
  rty_SendUDP[2] = rtu_IMU[1];
  rty_SendUDP[5] = rtu_SensorCalibration[1];
  rty_SendUDP[3] = rtu_IMU[2];
  rty_SendUDP[6] = rtu_SensorCalibration[2];
  rty_SendUDP[7] = rtu_MotorCommands[0];
  rty_SendUDP[8] = rtu_MotorCommands[1];
  rty_SendUDP[9] = rtu_MotorCommands[2];
  rty_SendUDP[10] = rtu_MotorCommands[3];
  rty_SendUDP[11] = rtu_States[0];
  rty_SendUDP[12] = rtu_States[1];
  rty_SendUDP[13] = rtu_States[2];
  rty_SendUDP[14] = rtu_States_l[0];
  rty_SendUDP[15] = rtu_States_l[1];
  rty_SendUDP[16] = rtu_States_m;
  rty_SendUDP[17] = rtu_States_d[0];
  rty_SendUDP[18] = rtu_States_d[1];
  rty_SendUDP[19] = rtu_States_d[2];
}

real32_T rt_powf_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  real32_T tmp;
  real32_T tmp_0;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else {
    tmp = (real32_T)fabs(u0);
    tmp_0 = (real32_T)fabs(u1);
    if (rtIsInfF(u1)) {
      if (tmp == 1.0F) {
        y = 1.0F;
      } else if (tmp > 1.0F) {
        if (u1 > 0.0F) {
          y = (rtInfF);
        } else {
          y = 0.0F;
        }
      } else if (u1 > 0.0F) {
        y = 0.0F;
      } else {
        y = (rtInfF);
      }
    } else if (tmp_0 == 0.0F) {
      y = 1.0F;
    } else if (tmp_0 == 1.0F) {
      if (u1 > 0.0F) {
        y = u0;
      } else {
        y = 1.0F / u0;
      }
    } else if (u1 == 2.0F) {
      y = u0 * u0;
    } else if ((u1 == 0.5F) && (u0 >= 0.0F)) {
      y = (real32_T)sqrt(u0);
    } else if ((u0 < 0.0F) && (u1 > (real32_T)floor(u1))) {
      y = (rtNaNF);
    } else {
      y = (real32_T)pow(u0, u1);
    }
  }

  return y;
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
  (B_FlightControlSystem_flightControlSystem_T *localB,
   DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP)
{
  uint8_T Merge_m;
  int32_T i;

  /* InitializeConditions for DiscreteFir: '<S36>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_circBuf = 0;
  for (i = 0; i < 15; i++) {
    localDW->FIR_IMUaccel_states[i] = localP->FIR_IMUaccel_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFir: '<S36>/FIR_IMUaccel' */

  /* InitializeConditions for Memory: '<S33>/Memory' */
  localDW->Memory_PreviousInput[0] = localP->Memory_InitialCondition[0];
  localDW->Memory_PreviousInput[1] = localP->Memory_InitialCondition[1];
  localDW->Memory_PreviousInput[2] = localP->Memory_InitialCondition[2];

  /* InitializeConditions for DiscreteFilter: '<S36>/IIR_IMUgyro_r' */
  for (i = 0; i < 5; i++) {
    localDW->IIR_IMUgyro_r_states[i] = localP->IIR_IMUgyro_r_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S36>/IIR_IMUgyro_r' */

  /* InitializeConditions for Delay: '<S34>/Delay2' */
  localDW->Delay2_DSTATE = localP->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S43>/MemoryX' */
  localDW->icLoad = 1U;

  /* InitializeConditions for Delay: '<S6>/Delay1' */
  localDW->Delay1_DSTATE[0] = localP->Delay1_InitialCondition;
  localDW->Delay1_DSTATE[1] = localP->Delay1_InitialCondition;

  /* InitializeConditions for Delay: '<S102>/MemoryX' */
  localDW->icLoad_k = 1U;

  /* InitializeConditions for DiscreteFilter: '<S101>/IIRgyroz' */
  for (i = 0; i < 10; i++) {
    localDW->IIRgyroz_states[i] = localP->IIRgyroz_InitialStates;
  }

  /* End of InitializeConditions for DiscreteFilter: '<S101>/IIRgyroz' */

  /* InitializeConditions for UnitDelay: '<S100>/Output' */
  localDW->Output_DSTATE = localP->Output_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S14>/Output' */
  localDW->Output_DSTATE_b = localP->Output_InitialCondition_m;

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' */
  localDW->DiscreteTimeIntegrator2_DSTATE = localP->DiscreteTimeIntegrator2_IC;
  localDW->DiscreteTimeIntegrator2_PrevResetState = 2;

  /* InitializeConditions for UnitDelay: '<S110>/UD'
   *
   * Block description for '<S110>/UD':
   *
   *  Store in Global RAM
   */
  localDW->UD_DSTATE[0] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S96>/Delay' */
  localDW->Delay_DSTATE[0] = localP->Delay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE[0] = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_m[0] =
    localP->DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for DiscreteIntegrator: '<S97>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[0] =
    localP->SimplyIntegrateVelocity_IC;

  /* InitializeConditions for UnitDelay: '<S110>/UD'
   *
   * Block description for '<S110>/UD':
   *
   *  Store in Global RAM
   */
  localDW->UD_DSTATE[1] = localP->DiscreteDerivative_ICPrevScaledInput;

  /* InitializeConditions for Delay: '<S96>/Delay' */
  localDW->Delay_DSTATE[1] = localP->Delay_InitialCondition;

  /* InitializeConditions for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE[1] = localP->DiscreteTimeIntegrator_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE_m[1] =
    localP->DiscreteTimeIntegrator_IC_p;

  /* InitializeConditions for DiscreteIntegrator: '<S97>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[1] =
    localP->SimplyIntegrateVelocity_IC;
  localDW->SimplyIntegrateVelocity_PrevResetState = 2;

  /* InitializeConditions for DiscreteFilter: '<S44>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[0] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S44>/soonarFilter_IIR' */
  localDW->soonarFilter_IIR_states[0] = localP->soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S44>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S44>/soonarFilter_IIR' */
  localDW->soonarFilter_IIR_states[1] = localP->soonarFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S44>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] =
    localP->pressureFilter_IIR_InitialStates;

  /* InitializeConditions for DiscreteFilter: '<S44>/soonarFilter_IIR' */
  localDW->soonarFilter_IIR_states[2] = localP->soonarFilter_IIR_InitialStates;

  /* InitializeConditions for UnitDelay: '<S25>/Output' */
  localDW->Output_DSTATE_i = localP->Output_InitialCondition_f;

  /* InitializeConditions for Delay: '<S3>/Delay One Step' */
  localDW->DelayOneStep_DSTATE = localP->DelayOneStep_InitialCondition;

  /* InitializeConditions for Delay: '<S11>/Delay1' */
  localDW->Delay1_DSTATE_d = localP->Delay1_InitialCondition_b;

  /* InitializeConditions for Delay: '<S7>/Delay' */
  localDW->Delay_DSTATE_k[0] = localP->Delay_InitialCondition_e;

  /* InitializeConditions for Delay: '<S9>/Delay' */
  localDW->Delay_DSTATE_l[0] = localP->Delay_InitialCondition_d;

  /* SystemInitialize for Merge: '<S33>/Merge' */
  localB->Merge[0] = localP->Merge_InitialOutput;

  /* SystemInitialize for Enabled SubSystem: '<S69>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S90>/deltax' */
  localB->Product2[0] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S69>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S144>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S165>/deltax' */
  localB->Product2_j[0] = localP->deltax_Y0_g;

  /* End of SystemInitialize for SubSystem: '<S144>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S139>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S164>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3_i[0] = localP->Lykyhatkk1_Y0_o;

  /* End of SystemInitialize for SubSystem: '<S139>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S64>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S89>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S64>/MeasurementUpdate' */

  /* InitializeConditions for Delay: '<S7>/Delay' */
  localDW->Delay_DSTATE_k[1] = localP->Delay_InitialCondition_e;

  /* InitializeConditions for Delay: '<S9>/Delay' */
  localDW->Delay_DSTATE_l[1] = localP->Delay_InitialCondition_d;

  /* SystemInitialize for Merge: '<S33>/Merge' */
  localB->Merge[1] = localP->Merge_InitialOutput;

  /* SystemInitialize for Enabled SubSystem: '<S69>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S90>/deltax' */
  localB->Product2[1] = localP->deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S69>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S144>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S165>/deltax' */
  localB->Product2_j[1] = localP->deltax_Y0_g;

  /* End of SystemInitialize for SubSystem: '<S144>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S139>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S164>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3_i[1] = localP->Lykyhatkk1_Y0_o;

  /* End of SystemInitialize for SubSystem: '<S139>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S64>/MeasurementUpdate' */
  /* SystemInitialize for Outport: '<S89>/L*(y[k]-yhat[k|k-1])' */
  localB->Product3[1] = localP->Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S64>/MeasurementUpdate' */

  /* SystemInitialize for Merge: '<S3>/Merge' */
  Merge_m = localP->Merge_InitialOutput_f;
}

/* Output and update for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem(RT_MODEL_flightControlSystem_T *
  const flightControlSystem_M, const CommandBus *rtu_ReferenceValueServerCmds,
  const SensorsBus *rtu_Sensors, const real32_T rtu_mocapdata[24], uint16_T
  rtu_mocapsize, real32_T rty_motorCmds[4], uint8_T *rty_Flag, real32_T
  rty_SendUDP[20], B_FlightControlSystem_flightControlSystem_T *localB,
  DW_FlightControlSystem_flightControlSystem_T *localDW,
  P_FlightControlSystem_flightControlSystem_T *localP)
{
  boolean_T rtb_nicemeasurementornewupdateneeded;
  boolean_T rtb_Compare_g;
  boolean_T rtb_Compare_er;
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_Compare_b4;
  uint8_T Merge_m;
  boolean_T rtb_Compare_id;

  /* SignalConversion: '<S1>/SigConversion_InsertedFor_Bus Selector4_at_outport_1' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment'
   */
  for (localB->i = 0; localB->i < 8; localB->i++) {
    localB->SensorCalibration[localB->i] = rtu_Sensors->SensorCalibration
      [localB->i];
  }

  /* End of SignalConversion: '<S1>/SigConversion_InsertedFor_Bus Selector4_at_outport_1' */

  /* Gain: '<S36>/inverseIMU_gain' incorporates:
   *  Bias: '<S36>/Assuming that calib was done level!'
   *  BusAssignment: '<S1>/Bus Assignment'
   *  DataTypeConversion: '<S36>/Data Type Conversion'
   *  Sum: '<S36>/Sum1'
   */
  localB->inverseIMU_gain_k[0] = (rtu_Sensors->HALSensors.HAL_acc_SI.x -
    (localB->SensorCalibration[0] + localP->Assumingthatcalibwasdonelevel_Bias[0]))
    * localP->inverseIMU_gain_Gain[0];
  localB->inverseIMU_gain_k[1] = (rtu_Sensors->HALSensors.HAL_acc_SI.y -
    (localB->SensorCalibration[1] + localP->Assumingthatcalibwasdonelevel_Bias[1]))
    * localP->inverseIMU_gain_Gain[1];
  localB->inverseIMU_gain_k[2] = (rtu_Sensors->HALSensors.HAL_acc_SI.z -
    (localB->SensorCalibration[2] + localP->Assumingthatcalibwasdonelevel_Bias[2]))
    * localP->inverseIMU_gain_Gain[2];
  localB->inverseIMU_gain_k[3] = (rtu_Sensors->HALSensors.HAL_gyro_SI.x -
    (localB->SensorCalibration[3] + localP->Assumingthatcalibwasdonelevel_Bias[3]))
    * localP->inverseIMU_gain_Gain[3];
  localB->inverseIMU_gain_k[4] = (rtu_Sensors->HALSensors.HAL_gyro_SI.y -
    (localB->SensorCalibration[4] + localP->Assumingthatcalibwasdonelevel_Bias[4]))
    * localP->inverseIMU_gain_Gain[4];
  localB->inverseIMU_gain_k[5] = (rtu_Sensors->HALSensors.HAL_gyro_SI.z -
    (localB->SensorCalibration[5] + localP->Assumingthatcalibwasdonelevel_Bias[5]))
    * localP->inverseIMU_gain_Gain[5];

  /* SignalConversion: '<S41>/TmpSignal ConversionAtTrigonometric FunctionInport1' incorporates:
   *  Memory: '<S33>/Memory'
   */
  localB->rtb_sincos_o1_idx_0 = localDW->Memory_PreviousInput[2];
  localB->rtb_sincos_o1_idx_1 = localDW->Memory_PreviousInput[1];
  localB->rtb_sincos_o1_idx_2 = localDW->Memory_PreviousInput[0];

  /* DiscreteFir: '<S36>/FIR_IMUaccel' */
  localB->acc1 = localB->inverseIMU_gain_k[0] *
    localP->FIR_IMUaccel_Coefficients[0];
  localB->cff = 1;
  localB->i = localDW->FIR_IMUaccel_circBuf;
  while (localB->i < 5) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->i] *
      localP->FIR_IMUaccel_Coefficients[localB->cff];
    localB->cff++;
    localB->i++;
  }

  localB->i = 0;
  while (localB->i < localDW->FIR_IMUaccel_circBuf) {
    localB->acc1 += localDW->FIR_IMUaccel_states[localB->i] *
      localP->FIR_IMUaccel_Coefficients[localB->cff];
    localB->cff++;
    localB->i++;
  }

  localB->rtb_FIR_IMUaccel_p[0] = localB->acc1;

  /* Trigonometry: '<S41>/Trigonometric Function' incorporates:
   *  Memory: '<S33>/Memory'
   *  SignalConversion: '<S41>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   */
  localDW->Memory_PreviousInput[0] = (real32_T)sin(localDW->
    Memory_PreviousInput[2]);
  localB->rtb_DataTypeConversion1_b[0] = (real32_T)cos
    (localDW->Memory_PreviousInput[2]);

  /* DiscreteFir: '<S36>/FIR_IMUaccel' */
  localB->acc1 = localB->inverseIMU_gain_k[1] *
    localP->FIR_IMUaccel_Coefficients[0];
  localB->cff = 1;
  localB->i = localDW->FIR_IMUaccel_circBuf;
  while (localB->i < 5) {
    localB->acc1 += localDW->FIR_IMUaccel_states[5 + localB->i] *
      localP->FIR_IMUaccel_Coefficients[localB->cff];
    localB->cff++;
    localB->i++;
  }

  localB->i = 0;
  while (localB->i < localDW->FIR_IMUaccel_circBuf) {
    localB->acc1 += localDW->FIR_IMUaccel_states[5 + localB->i] *
      localP->FIR_IMUaccel_Coefficients[localB->cff];
    localB->cff++;
    localB->i++;
  }

  localB->rtb_FIR_IMUaccel_p[1] = localB->acc1;

  /* Trigonometry: '<S41>/Trigonometric Function' incorporates:
   *  Memory: '<S33>/Memory'
   *  SignalConversion: '<S41>/TmpSignal ConversionAtTrigonometric FunctionInport1'
   */
  localDW->Memory_PreviousInput[1] = (real32_T)sin(localDW->
    Memory_PreviousInput[1]);
  localB->rtb_DataTypeConversion1_b[1] = (real32_T)cos
    (localB->rtb_sincos_o1_idx_1);

  /* DiscreteFir: '<S36>/FIR_IMUaccel' */
  localB->acc1 = localB->inverseIMU_gain_k[2] *
    localP->FIR_IMUaccel_Coefficients[0];
  localB->cff = 1;
  localB->i = localDW->FIR_IMUaccel_circBuf;
  while (localB->i < 5) {
    localB->acc1 += localDW->FIR_IMUaccel_states[10 + localB->i] *
      localP->FIR_IMUaccel_Coefficients[localB->cff];
    localB->cff++;
    localB->i++;
  }

  localB->i = 0;
  while (localB->i < localDW->FIR_IMUaccel_circBuf) {
    localB->acc1 += localDW->FIR_IMUaccel_states[10 + localB->i] *
      localP->FIR_IMUaccel_Coefficients[localB->cff];
    localB->cff++;
    localB->i++;
  }

  localB->rtb_FIR_IMUaccel_p[2] = localB->acc1;

  /* Trigonometry: '<S41>/Trigonometric Function' */
  localDW->Memory_PreviousInput[2] = (real32_T)sin(localB->rtb_sincos_o1_idx_2);

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn1' incorporates:
   *  Constant: '<S41>/Constant'
   */
  localB->VectorConcatenate[0] = localP->Constant_Value_n;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn2' incorporates:
   *  Constant: '<S41>/Constant'
   */
  localB->VectorConcatenate[1] = localP->Constant_Value_n;

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn3' */
  localB->VectorConcatenate[2] = localB->rtb_DataTypeConversion1_b[1];

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn4' */
  localB->VectorConcatenate[3] = localDW->Memory_PreviousInput[0];

  /* Product: '<S41>/Product1' */
  localB->VectorConcatenate[4] = localB->rtb_DataTypeConversion1_b[0] *
    localB->rtb_DataTypeConversion1_b[1];

  /* Product: '<S41>/Product3' */
  localB->VectorConcatenate[5] = localDW->Memory_PreviousInput[0] *
    localDW->Memory_PreviousInput[1];

  /* SignalConversion: '<S42>/ConcatBufferAtVector ConcatenateIn7' */
  localB->VectorConcatenate[6] = localB->rtb_DataTypeConversion1_b[0];

  /* Product: '<S41>/Product2' incorporates:
   *  Gain: '<S41>/Gain'
   */
  localB->VectorConcatenate[7] = localP->Gain_Gain_d *
    localDW->Memory_PreviousInput[0] * localB->rtb_DataTypeConversion1_b[1];

  /* Product: '<S41>/Product4' */
  localB->VectorConcatenate[8] = localB->rtb_DataTypeConversion1_b[0] *
    localDW->Memory_PreviousInput[1];

  /* Product: '<S41>/Divide' incorporates:
   *  Reshape: '<S42>/Reshape (9) to [3x3] column-major'
   */
  for (localB->i = 0; localB->i < 9; localB->i++) {
    localB->VectorConcatenate[localB->i] /= localB->rtb_DataTypeConversion1_b[1];
  }

  /* End of Product: '<S41>/Divide' */

  /* DiscreteFilter: '<S36>/IIR_IMUgyro_r' */
  localB->acc1 = localB->inverseIMU_gain_k[5];
  localB->denIdx = 1;
  for (localB->i = 0; localB->i < 5; localB->i++) {
    localB->acc1 -= localP->IIR_IMUgyro_r_DenCoef[localB->denIdx] *
      localDW->IIR_IMUgyro_r_states[localB->i];
    localB->denIdx++;
  }

  localB->acc1 /= localP->IIR_IMUgyro_r_DenCoef[0];
  localB->rtb_r_o = localP->IIR_IMUgyro_r_NumCoef[0] * localB->acc1;
  localB->denIdx = 1;
  for (localB->i = 0; localB->i < 5; localB->i++) {
    localB->rtb_r_o += localP->IIR_IMUgyro_r_NumCoef[localB->denIdx] *
      localDW->IIR_IMUgyro_r_states[localB->i];
    localB->denIdx++;
  }

  /* SignalConversion: '<S33>/TmpSignal ConversionAtProductInport2' */
  localB->rtb_DataTypeConversion1_b[0] = localB->inverseIMU_gain_k[3];
  localB->rtb_DataTypeConversion1_b[1] = localB->inverseIMU_gain_k[4];
  localB->rtb_DataTypeConversion1_b[2] = localB->rtb_r_o;

  /* Product: '<S33>/Product' */
  for (localB->i = 0; localB->i < 3; localB->i++) {
    localB->sincos_o2[localB->i] = localB->VectorConcatenate[localB->i + 6] *
      localB->rtb_DataTypeConversion1_b[2] + (localB->VectorConcatenate
      [localB->i + 3] * localB->rtb_DataTypeConversion1_b[1] +
      localB->VectorConcatenate[localB->i] * localB->rtb_DataTypeConversion1_b[0]);
  }

  /* End of Product: '<S33>/Product' */

  /* Math: '<S33>/Math Function' incorporates:
   *  Constant: '<S33>/Constant'
   *  DataTypeConversion: '<S33>/Data Type Conversion2'
   */
  localB->rtb_FIR_IMUaccel_n = (real32_T)floor(localP->Constant_Value_h);
  if ((localB->rtb_FIR_IMUaccel_p[0] < 0.0F) && (localP->Constant_Value_h >
       localB->rtb_FIR_IMUaccel_n)) {
    localB->Delay1 = -rt_powf_snf(-localB->rtb_FIR_IMUaccel_p[0],
      localP->Constant_Value_h);
  } else {
    localB->Delay1 = rt_powf_snf(localB->rtb_FIR_IMUaccel_p[0],
      localP->Constant_Value_h);
  }

  if ((localB->rtb_FIR_IMUaccel_p[1] < 0.0F) && (localP->Constant_Value_h >
       localB->rtb_FIR_IMUaccel_n)) {
    localB->rtb_FIR_IMUaccel_b = -rt_powf_snf(-localB->rtb_FIR_IMUaccel_p[1],
      localP->Constant_Value_h);
  } else {
    localB->rtb_FIR_IMUaccel_b = rt_powf_snf(localB->rtb_FIR_IMUaccel_p[1],
      localP->Constant_Value_h);
  }

  if ((localB->rtb_FIR_IMUaccel_p[2] < 0.0F) && (localP->Constant_Value_h >
       localB->rtb_FIR_IMUaccel_n)) {
    localB->rtb_FIR_IMUaccel_n = -rt_powf_snf(-localB->rtb_FIR_IMUaccel_p[2],
      localP->Constant_Value_h);
  } else {
    localB->rtb_FIR_IMUaccel_n = rt_powf_snf(localB->rtb_FIR_IMUaccel_p[2],
      localP->Constant_Value_h);
  }

  /* End of Math: '<S33>/Math Function' */

  /* Sqrt: '<S33>/Sqrt' incorporates:
   *  Sum: '<S33>/Sum of Elements'
   */
  localB->Delay1 = (real32_T)sqrt((localB->Delay1 + localB->rtb_FIR_IMUaccel_b)
    + localB->rtb_FIR_IMUaccel_n);

  /* If: '<S33>/If' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Gain: '<S33>/Gain'
   *  Inport: '<S40>/prin'
   *  Logic: '<S33>/Logical Operator'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  Sum: '<S33>/Sum'
   */
  if ((localB->Delay1 > localP->CompareToConstant_const) && (localB->Delay1 <
       localP->CompareToConstant1_const)) {
    /* Outputs for IfAction SubSystem: '<S33>/If Action Subsystem' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    /* Sum: '<S39>/Sum' incorporates:
     *  Gain: '<S33>/Gain'
     *  Gain: '<S39>/Gain'
     *  Gain: '<S39>/Gain1'
     *  Product: '<S39>/Divide'
     *  Sum: '<S33>/Sum'
     *  Trigonometry: '<S39>/Trigonometric Function'
     */
    localB->Merge[1] = (localP->Gain_Gain_o * localB->sincos_o2[2] +
                        localB->rtb_sincos_o1_idx_0) * localP->Gain_Gain +
      (real32_T)atan(localB->rtb_FIR_IMUaccel_p[1] / localB->rtb_FIR_IMUaccel_p
                     [2]) * localP->Gain1_Gain;

    /* Gain: '<S39>/Gain2' */
    localB->rtb_sincos_o1_idx_0 = localP->Gain2_Gain *
      localB->rtb_FIR_IMUaccel_p[0];

    /* Trigonometry: '<S39>/Trigonometric Function1' */
    if (localB->rtb_sincos_o1_idx_0 > 1.0F) {
      localB->rtb_sincos_o1_idx_0 = 1.0F;
    } else {
      if (localB->rtb_sincos_o1_idx_0 < -1.0F) {
        localB->rtb_sincos_o1_idx_0 = -1.0F;
      }
    }

    /* Sum: '<S39>/Sum1' incorporates:
     *  Gain: '<S33>/Gain'
     *  Gain: '<S39>/Gain3'
     *  Gain: '<S39>/Gain4'
     *  Sum: '<S33>/Sum'
     *  Trigonometry: '<S39>/Trigonometric Function1'
     */
    localB->Merge[0] = (localP->Gain_Gain_o * localB->sincos_o2[1] +
                        localB->rtb_sincos_o1_idx_1) * localP->Gain4_Gain +
      localP->Gain3_Gain * (real32_T)asin(localB->rtb_sincos_o1_idx_0);

    /* End of Outputs for SubSystem: '<S33>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S33>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    localB->Merge[0] = localP->Gain_Gain_o * localB->sincos_o2[1] +
      localB->rtb_sincos_o1_idx_1;
    localB->Merge[1] = localP->Gain_Gain_o * localB->sincos_o2[2] +
      localB->rtb_sincos_o1_idx_0;

    /* End of Outputs for SubSystem: '<S33>/If Action Subsystem2' */
  }

  /* End of If: '<S33>/If' */

  /* DataTypeConversion: '<S33>/Data Type Conversion3' incorporates:
   *  Gain: '<S33>/Gain'
   *  Sum: '<S33>/Sum'
   */
  localB->rtb_DataTypeConversion3_c[0] = localP->Gain_Gain_o * localB->
    sincos_o2[0] + localB->rtb_sincos_o1_idx_2;
  localB->rtb_DataTypeConversion3_c[1] = localB->Merge[0];
  localB->rtb_DataTypeConversion3_c[2] = localB->Merge[1];

  /* Trigonometry: '<S45>/sincos' incorporates:
   *  Trigonometry: '<S104>/sincos'
   *  Trigonometry: '<S166>/sincos'
   *  Trigonometry: '<S9>/Trigonometric Function'
   */
  localB->rtb_sincos_o1_idx_1 = (real32_T)sin(localB->rtb_DataTypeConversion3_c
    [0]);
  localB->rtb_sincos_o1_idx_2 = (real32_T)cos(localB->rtb_DataTypeConversion3_c
    [0]);
  localB->rtb_sincos_o1_idx_0 = (real32_T)sin(localB->rtb_DataTypeConversion3_c
    [1]);
  localB->Delay1 = (real32_T)cos(localB->rtb_DataTypeConversion3_c[1]);
  localB->rtb_FIR_IMUaccel_b = (real32_T)sin(localB->rtb_DataTypeConversion3_c[2]);
  localB->rtb_FIR_IMUaccel_n = (real32_T)cos(localB->rtb_DataTypeConversion3_c[2]);

  /* Fcn: '<S45>/Fcn11' incorporates:
   *  Trigonometry: '<S45>/sincos'
   */
  localB->VectorConcatenate[0] = localB->Delay1 * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S45>/Fcn21' incorporates:
   *  Fcn: '<S45>/Fcn22'
   *  Trigonometry: '<S45>/sincos'
   */
  localB->Gain = localB->rtb_FIR_IMUaccel_b * localB->rtb_sincos_o1_idx_0;
  localB->VectorConcatenate[1] = localB->Gain * localB->rtb_sincos_o1_idx_2 -
    localB->rtb_FIR_IMUaccel_n * localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S45>/Fcn31' incorporates:
   *  Fcn: '<S45>/Fcn32'
   *  Trigonometry: '<S45>/sincos'
   */
  localB->Add1 = localB->rtb_FIR_IMUaccel_n * localB->rtb_sincos_o1_idx_0;
  localB->VectorConcatenate[2] = localB->Add1 * localB->rtb_sincos_o1_idx_2 +
    localB->rtb_FIR_IMUaccel_b * localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S45>/Fcn12' incorporates:
   *  Trigonometry: '<S45>/sincos'
   */
  localB->VectorConcatenate[3] = localB->Delay1 * localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S45>/Fcn22' incorporates:
   *  Trigonometry: '<S45>/sincos'
   */
  localB->VectorConcatenate[4] = localB->Gain * localB->rtb_sincos_o1_idx_1 +
    localB->rtb_FIR_IMUaccel_n * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S45>/Fcn32' incorporates:
   *  Trigonometry: '<S45>/sincos'
   */
  localB->VectorConcatenate[5] = localB->Add1 * localB->rtb_sincos_o1_idx_1 -
    localB->rtb_FIR_IMUaccel_b * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S45>/Fcn13' incorporates:
   *  Trigonometry: '<S45>/sincos'
   */
  localB->VectorConcatenate[6] = -localB->rtb_sincos_o1_idx_0;

  /* Fcn: '<S45>/Fcn23' incorporates:
   *  Trigonometry: '<S45>/sincos'
   */
  localB->VectorConcatenate[7] = localB->rtb_FIR_IMUaccel_b * localB->Delay1;

  /* Fcn: '<S45>/Fcn33' incorporates:
   *  Trigonometry: '<S45>/sincos'
   */
  localB->VectorConcatenate[8] = localB->rtb_FIR_IMUaccel_n * localB->Delay1;

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   *  Delay: '<S34>/Delay2'
   */
  localB->Compare = (localDW->Delay2_DSTATE > localP->outlierBelowFloor_const);

  /* Delay: '<S43>/MemoryX' incorporates:
   *  Constant: '<S43>/X0'
   *  DataTypeConversion: '<S43>/DataTypeConversionReset'
   *  Reshape: '<S43>/ReshapeX0'
   */
  if (localB->Compare) {
    localDW->icLoad = 1U;
  }

  if (localDW->icLoad != 0) {
    localDW->MemoryX_DSTATE[0] = localP->X0_Value[0];
    localDW->MemoryX_DSTATE[1] = localP->X0_Value[1];
  }

  /* Gain: '<S34>/invertzaxisGain' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment'
   */
  localB->invertzaxisGain = (real_T)localP->invertzaxisGain_Gain *
    rtu_mocapdata[2];

  /* Outputs for Enabled SubSystem: '<S69>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  /* DataTypeConversion: '<S43>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S34>/Constant'
   */
  if (localP->Constant_Value != 0.0) {
    if (!localDW->EnabledSubsystem_MODE_m) {
      localDW->EnabledSubsystem_MODE_m = true;
    }

    /* Sum: '<S90>/Add1' incorporates:
     *  Constant: '<S43>/C'
     *  Delay: '<S43>/MemoryX'
     *  Product: '<S90>/Product'
     *  Reshape: '<S43>/Reshapey'
     */
    localB->u_h = localB->invertzaxisGain - (localP->C_Value[0] *
      localDW->MemoryX_DSTATE[0] + localP->C_Value[1] * localDW->MemoryX_DSTATE
      [1]);

    /* Product: '<S90>/Product2' incorporates:
     *  Constant: '<S47>/KalmanGainM'
     *  DataTypeConversion: '<S86>/Conversion'
     */
    localB->Product2[0] = localP->KalmanGainM_Value[0] * localB->u_h;
    localB->Product2[1] = localP->KalmanGainM_Value[1] * localB->u_h;
  } else {
    if (localDW->EnabledSubsystem_MODE_m) {
      /* Disable for Outport: '<S90>/deltax' */
      localB->Product2[0] = localP->deltax_Y0;
      localB->Product2[1] = localP->deltax_Y0;
      localDW->EnabledSubsystem_MODE_m = false;
    }
  }

  /* End of Outputs for SubSystem: '<S69>/Enabled Subsystem' */

  /* Reshape: '<S43>/Reshapexhat' incorporates:
   *  Delay: '<S43>/MemoryX'
   *  Sum: '<S69>/Add'
   */
  localB->rtb_Reshapexhat_idx_0 = localB->Product2[0] + localDW->MemoryX_DSTATE
    [0];
  localB->rtb_Reshapexhat_idx_1 = localB->Product2[1] + localDW->MemoryX_DSTATE
    [1];

  /* Delay: '<S6>/Delay1' */
  localB->Add_p[0] = localDW->Delay1_DSTATE[0];
  localB->Add_p[1] = localDW->Delay1_DSTATE[1];

  /* Product: '<S34>/Product1' incorporates:
   *  DataTypeConversion: '<S34>/Data Type Conversion1'
   *  SignalConversion: '<S34>/TmpSignal ConversionAtProduct1Inport2'
   */
  for (localB->i = 0; localB->i < 3; localB->i++) {
    localB->rtb_VectorConcatenate_c[localB->i] = localB->
      VectorConcatenate[localB->i + 6] * localB->rtb_Reshapexhat_idx_1 +
      ((real_T)localB->VectorConcatenate[localB->i + 3] * localB->Add_p[1] +
       (real_T)localB->VectorConcatenate[localB->i] * localB->Add_p[0]);
  }

  /* End of Product: '<S34>/Product1' */

  /* DataTypeConversion: '<S34>/Data Type Conversion2' */
  localB->rtb_DataTypeConversion2_j = (real32_T)localB->rtb_VectorConcatenate_c
    [2];

  /* Delay: '<S102>/MemoryX' incorporates:
   *  Constant: '<S102>/X0'
   *  Reshape: '<S102>/ReshapeX0'
   */
  if (localDW->icLoad_k != 0) {
    localDW->MemoryX_DSTATE_h[0] = localP->X0_Value_a[0];
    localDW->MemoryX_DSTATE_h[1] = localP->X0_Value_a[1];
  }

  /* DiscreteFilter: '<S101>/IIRgyroz' */
  for (localB->cff = 0; localB->cff < 2; localB->cff++) {
    localB->memOffset = localB->cff * 5;
    localB->Sum2_b = localB->inverseIMU_gain_k[localB->cff + 3];
    localB->denIdx = 1;
    for (localB->i = 0; localB->i < 5; localB->i++) {
      localB->Sum2_b -= localDW->IIRgyroz_states[localB->memOffset + localB->i] *
        localP->IIRgyroz_DenCoef[localB->denIdx];
      localB->denIdx++;
    }

    localB->Gain = localB->Sum2_b / localP->IIRgyroz_DenCoef[0];
    localB->numAccum = localP->IIRgyroz_NumCoef[0] * localB->Gain;
    localB->denIdx = 1;
    for (localB->i = 0; localB->i < 5; localB->i++) {
      localB->numAccum += localDW->IIRgyroz_states[localB->memOffset + localB->i]
        * localP->IIRgyroz_NumCoef[localB->denIdx];
      localB->denIdx++;
    }

    localB->Add_i[localB->cff] = localB->numAccum;
    localB->IIRgyroz_tmp[localB->cff] = localB->Gain;
  }

  /* End of DiscreteFilter: '<S101>/IIRgyroz' */

  /* SampleTimeMath: '<S110>/TSamp'
   *
   * About '<S110>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  localB->TSamp[0] = localB->Add_i[0] * localP->TSamp_WtEt;
  localB->TSamp[1] = localB->Add_i[1] * localP->TSamp_WtEt;

  /* Sum: '<S110>/Diff' incorporates:
   *  UnitDelay: '<S110>/UD'
   *
   * Block description for '<S110>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S110>/UD':
   *
   *  Store in Global RAM
   */
  localDW->UD_DSTATE[0] = localB->TSamp[0] - localDW->UD_DSTATE[0];
  localDW->UD_DSTATE[1] = localB->TSamp[1] - localDW->UD_DSTATE[1];

  /* Abs: '<S101>/Abs' incorporates:
   *  Abs: '<S101>/Abs4'
   */
  localB->Gain = (real32_T)fabs(localB->inverseIMU_gain_k[3]);

  /* Abs: '<S101>/Abs1' incorporates:
   *  Abs: '<S101>/Abs5'
   */
  localB->Add1 = (real32_T)fabs(localB->inverseIMU_gain_k[4]);

  /* Logic: '<S101>/Logical Operator' incorporates:
   *  Abs: '<S101>/Abs'
   *  Abs: '<S101>/Abs1'
   *  Abs: '<S101>/Abs2'
   *  Abs: '<S101>/Abs3'
   *  Abs: '<S101>/Abs6'
   *  Abs: '<S101>/Abs7'
   *  Constant: '<S111>/Constant'
   *  Constant: '<S112>/Constant'
   *  Constant: '<S113>/Constant'
   *  Constant: '<S115>/Constant'
   *  Constant: '<S117>/Constant'
   *  Constant: '<S118>/Constant'
   *  RelationalOperator: '<S111>/Compare'
   *  RelationalOperator: '<S112>/Compare'
   *  RelationalOperator: '<S113>/Compare'
   *  RelationalOperator: '<S115>/Compare'
   *  RelationalOperator: '<S117>/Compare'
   *  RelationalOperator: '<S118>/Compare'
   */
  rtb_nicemeasurementornewupdateneeded = (((real32_T)fabs
    (localB->rtb_DataTypeConversion3_c[1]) <= localP->maxp_const) && ((real32_T)
    fabs(localB->rtb_DataTypeConversion3_c[2]) <= localP->maxq_const) &&
    (localB->Gain <= localP->maxw1_const) && (localB->Add1 <=
    localP->maxw2_const) && ((real32_T)fabs(localDW->UD_DSTATE[0]) <=
    localP->maxdw1_const) && ((real32_T)fabs(localDW->UD_DSTATE[1]) <=
    localP->maxdw2_const));

  /* Logic: '<S101>/Logical Operator1' incorporates:
   *  Constant: '<S114>/Constant'
   *  Constant: '<S116>/Constant'
   *  RelationalOperator: '<S114>/Compare'
   *  RelationalOperator: '<S116>/Compare'
   */
  rtb_Compare_g = ((localB->Gain <= localP->maxp2_const) && (localB->Add1 <=
    localP->maxq2_const));

  /* DataTypeConversion: '<S34>/Data Type Conversion' */
  localB->rtb_DataTypeConversion_d = (real32_T)localB->rtb_Reshapexhat_idx_0;

  /* Switch: '<S96>/Switch' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment'
   *  Constant: '<S99>/Constant'
   *  Gain: '<S96>/opticalFlowErrorCorrect'
   *  Product: '<S96>/ '
   *  RelationalOperator: '<S99>/Compare'
   *  UnitDelay: '<S100>/Output'
   */
  if (localDW->Output_DSTATE < localP->CompareToConstant_const_a) {
    localB->Switch[0] = rtu_Sensors->VisionSensors.opticalFlow_data[0];
    localB->Switch[1] = rtu_Sensors->VisionSensors.opticalFlow_data[1];
    localB->Switch[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    /* Gain: '<S96>/Gain' */
    localB->Gain = localP->Gain_Gain_l * localB->rtb_DataTypeConversion_d;
    localB->Switch[0] = rtu_Sensors->VisionSensors.opticalFlow_data[0] *
      localB->Gain * localP->opticalFlowErrorCorrect_Gain;
    localB->Switch[1] = rtu_Sensors->VisionSensors.opticalFlow_data[1] *
      localB->Gain * localP->opticalFlowErrorCorrect_Gain;
    localB->Switch[2] = rtu_Sensors->VisionSensors.opticalFlow_data[2] *
      localB->Gain * localP->opticalFlowErrorCorrect_Gain;
  }

  /* End of Switch: '<S96>/Switch' */

  /* Delay: '<S96>/Delay' */
  localB->Add_i[0] = localDW->Delay_DSTATE[0];
  localB->Add_i[1] = localDW->Delay_DSTATE[1];

  /* Sum: '<S101>/Add' */
  localB->Add_i[0] = localB->Switch[0] - localB->Add_i[0];
  localB->Add_i[1] = localB->Switch[1] - localB->Add_i[1];

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Abs: '<S101>/Abs8'
   *  Constant: '<S119>/Constant'
   */
  rtb_Compare_er = ((real32_T)fabs(localB->Add_i[0]) <= localP->maxw3_const);

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Abs: '<S101>/Abs9'
   *  Constant: '<S120>/Constant'
   */
  rtb_LogicalOperator3 = ((real32_T)fabs(localB->Add_i[1]) <=
    localP->maxw4_const);

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   */
  rtb_Compare_b4 = (localB->rtb_DataTypeConversion_d <=
                    localP->minHeightforOF_const);

  /* Logic: '<S101>/Logical Operator3' incorporates:
   *  Logic: '<S101>/Logical Operator2'
   */
  localB->LogicalOperator3 = ((rtb_nicemeasurementornewupdateneeded ||
    rtb_Compare_g) && rtb_Compare_er && rtb_LogicalOperator3 && rtb_Compare_b4);

  /* Outputs for Enabled SubSystem: '<S144>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S165>/Enable'
   */
  /* DataTypeConversion: '<S102>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    if (!localDW->EnabledSubsystem_MODE) {
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S165>/Add1' incorporates:
     *  Constant: '<S102>/C'
     *  Delay: '<S102>/MemoryX'
     *  Product: '<S165>/Product'
     *  Reshape: '<S102>/Reshapey'
     */
    localB->unnamed_idx_0 = localB->Switch[0] - (localP->C_Value_g[0] *
      localDW->MemoryX_DSTATE_h[0] + localP->C_Value_g[2] *
      localDW->MemoryX_DSTATE_h[1]);
    localB->unnamed_idx_1 = localB->Switch[1] - (localP->C_Value_g[1] *
      localDW->MemoryX_DSTATE_h[0] + localP->C_Value_g[3] *
      localDW->MemoryX_DSTATE_h[1]);

    /* Product: '<S165>/Product2' incorporates:
     *  Constant: '<S122>/KalmanGainM'
     *  DataTypeConversion: '<S161>/Conversion'
     */
    localB->Product2_j[0] = 0.0F;
    localB->Product2_j[0] += (real32_T)localP->KalmanGainM_Value_o[0] *
      localB->unnamed_idx_0;
    localB->Product2_j[0] += (real32_T)localP->KalmanGainM_Value_o[2] *
      localB->unnamed_idx_1;
    localB->Product2_j[1] = 0.0F;
    localB->Product2_j[1] += (real32_T)localP->KalmanGainM_Value_o[1] *
      localB->unnamed_idx_0;
    localB->Product2_j[1] += (real32_T)localP->KalmanGainM_Value_o[3] *
      localB->unnamed_idx_1;
  } else {
    if (localDW->EnabledSubsystem_MODE) {
      /* Disable for Outport: '<S165>/deltax' */
      localB->Product2_j[0] = localP->deltax_Y0_g;
      localB->Product2_j[1] = localP->deltax_Y0_g;
      localDW->EnabledSubsystem_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S144>/Enabled Subsystem' */

  /* Sum: '<S144>/Add' incorporates:
   *  Delay: '<S102>/MemoryX'
   */
  localB->Add_i[0] = localB->Product2_j[0] + localDW->MemoryX_DSTATE_h[0];
  localB->Add_i[1] = localB->Product2_j[1] + localDW->MemoryX_DSTATE_h[1];

  /* Reshape: '<S102>/Reshapexhat' incorporates:
   *  Delay: '<S6>/Delay1'
   */
  localDW->Delay1_DSTATE[0] = localB->Add_i[0];
  localDW->Delay1_DSTATE[1] = localB->Add_i[1];

  /* RelationalOperator: '<S13>/Compare' incorporates:
   *  Constant: '<S13>/Constant'
   *  UnitDelay: '<S14>/Output'
   */
  rtb_Compare_id = (localDW->Output_DSTATE_b <
                    localP->CompareToConstant_const_ao);

  /* DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' */
  if ((!rtb_Compare_id) && (localDW->DiscreteTimeIntegrator2_PrevResetState == 1))
  {
    localDW->DiscreteTimeIntegrator2_DSTATE = localP->DiscreteTimeIntegrator2_IC;
  }

  localB->Gain = localDW->DiscreteTimeIntegrator2_DSTATE;

  /* End of DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' */

  /* Saturate: '<S11>/Saturation1' */
  if (localDW->DiscreteTimeIntegrator2_DSTATE >
      flightControlSystem_P.I_z_satLimitHigh) {
    localB->rtb_Saturation1_g = flightControlSystem_P.I_z_satLimitHigh;
  } else if (localDW->DiscreteTimeIntegrator2_DSTATE <
             flightControlSystem_P.I_z_satLimitLow) {
    localB->rtb_Saturation1_g = flightControlSystem_P.I_z_satLimitLow;
  } else {
    localB->rtb_Saturation1_g = localDW->DiscreteTimeIntegrator2_DSTATE;
  }

  /* End of Saturate: '<S11>/Saturation1' */

  /* Sum: '<S11>/Sum2' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment1'
   */
  localB->Add1 = rtu_mocapdata[6] - localB->rtb_DataTypeConversion_d;

  /* Product: '<S11>/P_z' */
  localB->rtb_P_z_l = localB->Add1 * rtu_mocapdata[19];

  /* Product: '<S11>/D_z' */
  localB->rtb_dz_d = localB->rtb_DataTypeConversion2_j * rtu_mocapdata[21];

  /* Switch: '<S11>/TakeoffOrControl_Switch1' incorporates:
   *  Constant: '<S11>/w1'
   *  Gain: '<S11>/takeoff_gain1'
   *  Sum: '<S11>/Sum1'
   */
  if (rtb_Compare_id) {
    localB->rtb_DiscreteTimeIntegrator_idx_0 = localP->takeoff_gain1_Gain *
      localP->w1_Value;
  } else {
    localB->rtb_DiscreteTimeIntegrator_idx_0 = (localB->rtb_Saturation1_g +
      localB->rtb_P_z_l) - localB->rtb_dz_d;
  }

  /* End of Switch: '<S11>/TakeoffOrControl_Switch1' */

  /* Sum: '<S11>/Sum5' incorporates:
   *  Constant: '<S11>/w1'
   */
  localB->Sum2_b = localP->w1_Value + localB->rtb_DiscreteTimeIntegrator_idx_0;

  /* Saturate: '<S11>/SaturationThrust1' */
  if (localB->Sum2_b > localP->SaturationThrust1_UpperSat) {
    localB->Sum2_b = localP->SaturationThrust1_UpperSat;
  } else {
    if (localB->Sum2_b < localP->SaturationThrust1_LowerSat) {
      localB->Sum2_b = localP->SaturationThrust1_LowerSat;
    }
  }

  /* End of Saturate: '<S11>/SaturationThrust1' */

  /* Product: '<S10>/P_yaw' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment2'
   *  Sum: '<S10>/Sum1'
   */
  localB->rtb_P_yaw_d = (rtu_mocapdata[13] - localB->rtb_DataTypeConversion3_c[0])
    * rtu_mocapdata[22];

  /* Product: '<S10>/D_yaw' */
  localB->rtb_D_yaw_l = localB->rtb_DataTypeConversion1_b[2] * rtu_mocapdata[23];

  /* Sum: '<S9>/Sum17' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment1'
   */
  localB->Add_p[0] = rtu_mocapdata[4] - rtu_mocapdata[0];
  localB->Add_p[1] = rtu_mocapdata[5] - rtu_mocapdata[1];

  /* Product: '<S9>/Product' incorporates:
   *  Gain: '<S9>/Gain'
   */
  localB->rtb_DiscreteTimeIntegrator_idx_0 = localB->rtb_sincos_o1_idx_2 *
    localB->Add_p[0] + localB->rtb_sincos_o1_idx_1 * localB->Add_p[1];
  localB->rtb_DiscreteTimeIntegrator_idx_1 = localP->Gain_Gain_k *
    localB->rtb_sincos_o1_idx_1 * localB->Add_p[0] + localB->rtb_sincos_o1_idx_2
    * localB->Add_p[1];

  /* Saturate: '<S9>/Saturation' */
  if (localB->rtb_DiscreteTimeIntegrator_idx_0 > localP->Saturation_UpperSat) {
    localB->rtb_DiscreteTimeIntegrator_idx_0 = localP->Saturation_UpperSat;
  } else {
    if (localB->rtb_DiscreteTimeIntegrator_idx_0 < localP->Saturation_LowerSat)
    {
      localB->rtb_DiscreteTimeIntegrator_idx_0 = localP->Saturation_LowerSat;
    }
  }

  /* Product: '<S9>/P_xy' incorporates:
   *  Saturate: '<S9>/Saturation'
   */
  localB->rtb_P_xy_f[0] = localB->rtb_DiscreteTimeIntegrator_idx_0 *
    rtu_mocapdata[8];

  /* DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  localB->rtb_DiscreteTimeIntegrator_idx_0 =
    localDW->DiscreteTimeIntegrator_DSTATE[0];

  /* Saturate: '<S9>/Saturation1' incorporates:
   *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
   */
  if (localDW->DiscreteTimeIntegrator_DSTATE[0] >
      flightControlSystem_P.I_xy_satLimitHigh) {
    localB->rtb_Saturation1_m_g[0] = flightControlSystem_P.I_xy_satLimitHigh;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE[0] <
             flightControlSystem_P.I_xy_satLimitLow) {
    localB->rtb_Saturation1_m_g[0] = flightControlSystem_P.I_xy_satLimitLow;
  } else {
    localB->rtb_Saturation1_m_g[0] = localDW->DiscreteTimeIntegrator_DSTATE[0];
  }

  /* Saturate: '<S9>/Saturation' */
  if (localB->rtb_DiscreteTimeIntegrator_idx_1 > localP->Saturation_UpperSat) {
    localB->rtb_DiscreteTimeIntegrator_idx_1 = localP->Saturation_UpperSat;
  } else {
    if (localB->rtb_DiscreteTimeIntegrator_idx_1 < localP->Saturation_LowerSat)
    {
      localB->rtb_DiscreteTimeIntegrator_idx_1 = localP->Saturation_LowerSat;
    }
  }

  /* Product: '<S9>/P_xy' incorporates:
   *  Saturate: '<S9>/Saturation'
   */
  localB->rtb_P_xy_f[1] = localB->rtb_DiscreteTimeIntegrator_idx_1 *
    rtu_mocapdata[11];

  /* DiscreteIntegrator: '<S9>/Discrete-Time Integrator' */
  localB->rtb_DiscreteTimeIntegrator_idx_1 =
    localDW->DiscreteTimeIntegrator_DSTATE[1];

  /* Saturate: '<S9>/Saturation1' incorporates:
   *  DiscreteIntegrator: '<S9>/Discrete-Time Integrator'
   */
  if (localDW->DiscreteTimeIntegrator_DSTATE[1] >
      flightControlSystem_P.I_xy_satLimitHigh) {
    localB->rtb_Saturation1_m_g[1] = flightControlSystem_P.I_xy_satLimitHigh;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE[1] <
             flightControlSystem_P.I_xy_satLimitLow) {
    localB->rtb_Saturation1_m_g[1] = flightControlSystem_P.I_xy_satLimitLow;
  } else {
    localB->rtb_Saturation1_m_g[1] = localDW->DiscreteTimeIntegrator_DSTATE[1];
  }

  /* Product: '<S9>/D_xy' incorporates:
   *  Delay: '<S6>/Delay1'
   */
  localB->rtb_D_xy_g[0] = rtu_mocapdata[10] * localDW->Delay1_DSTATE[0];
  localB->rtb_D_xy_g[1] = rtu_mocapdata[13] * localDW->Delay1_DSTATE[1];

  /* Switch: '<S2>/Switch_refAtt' incorporates:
   *  Constant: '<S1>/Zero'
   *  Constant: '<S1>/controlModePosVsOrient'
   *  Sum: '<S9>/Sum18'
   */
  if (localP->controlModePosVsOrient_Value) {
    localB->Add_i[0] = (localB->rtb_P_xy_f[0] + localB->rtb_Saturation1_m_g[0])
      + localB->rtb_D_xy_g[0];
    localB->Add_i[1] = (localB->rtb_P_xy_f[1] + localB->rtb_Saturation1_m_g[1])
      + localB->rtb_D_xy_g[1];
  } else {
    localB->Add_i[0] = localP->Zero_Value;
    localB->Add_i[1] = localP->Zero_Value;
  }

  /* End of Switch: '<S2>/Switch_refAtt' */

  /* Sum: '<S7>/Sum19' */
  localB->Add_i[0] -= localB->rtb_DataTypeConversion3_c[1];
  localB->Add_i[1] -= localB->rtb_DataTypeConversion3_c[2];

  /* Product: '<S7>/P_pr' */
  localB->rtb_P_pr_m[0] = localB->Add_i[0] * rtu_mocapdata[14];
  localB->rtb_P_pr_m[1] = localB->Add_i[1] * rtu_mocapdata[17];

  /* Product: '<S7>/D_pr' */
  localB->rtb_D_pr_p[0] = localB->rtb_DataTypeConversion1_b[1] * rtu_mocapdata
    [16];
  localB->rtb_D_pr_p[1] = localB->rtb_DataTypeConversion1_b[0] * rtu_mocapdata
    [18];

  /* SignalConversion: '<S8>/TmpSignal ConversionAtProductInport2' incorporates:
   *  Sum: '<S10>/Sum2'
   */
  localB->numAccum = localB->rtb_P_yaw_d - localB->rtb_D_yaw_l;

  /* DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localB->rtb_DiscreteTimeIntegrator_d_idx_0 =
    localDW->DiscreteTimeIntegrator_DSTATE_m[0];

  /* Saturate: '<S7>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
   */
  if (localDW->DiscreteTimeIntegrator_DSTATE_m[0] >
      flightControlSystem_P.I_pr_satLimitHigh) {
    localB->unnamed_idx_0 = flightControlSystem_P.I_pr_satLimitHigh;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_m[0] <
             flightControlSystem_P.I_pr_satLimitLow) {
    localB->unnamed_idx_0 = flightControlSystem_P.I_pr_satLimitLow;
  } else {
    localB->unnamed_idx_0 = localDW->DiscreteTimeIntegrator_DSTATE_m[0];
  }

  /* SignalConversion: '<S8>/TmpSignal ConversionAtProductInport2' incorporates:
   *  Sum: '<S7>/Sum16'
   */
  localB->unnamed_idx_1 = (localB->rtb_P_pr_m[0] + localB->unnamed_idx_0) -
    localB->rtb_D_pr_p[0];

  /* Saturate: '<S7>/Saturation' */
  localB->rtb_Saturation_n[0] = localB->unnamed_idx_0;

  /* DiscreteIntegrator: '<S7>/Discrete-Time Integrator' */
  localB->rtb_DiscreteTimeIntegrator_d_idx_1 =
    localDW->DiscreteTimeIntegrator_DSTATE_m[1];

  /* Saturate: '<S7>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S7>/Discrete-Time Integrator'
   */
  if (localDW->DiscreteTimeIntegrator_DSTATE_m[1] >
      flightControlSystem_P.I_pr_satLimitHigh) {
    localB->unnamed_idx_0 = flightControlSystem_P.I_pr_satLimitHigh;
  } else if (localDW->DiscreteTimeIntegrator_DSTATE_m[1] <
             flightControlSystem_P.I_pr_satLimitLow) {
    localB->unnamed_idx_0 = flightControlSystem_P.I_pr_satLimitLow;
  } else {
    localB->unnamed_idx_0 = localDW->DiscreteTimeIntegrator_DSTATE_m[1];
  }

  /* SignalConversion: '<S8>/TmpSignal ConversionAtProductInport2' incorporates:
   *  Sum: '<S7>/Sum16'
   */
  localB->rtb_Sum2_b_idx_3 = (localB->rtb_P_pr_m[1] + localB->unnamed_idx_0) -
    localB->rtb_D_pr_p[1];

  /* Saturate: '<S7>/Saturation' */
  localB->rtb_Saturation_n[1] = localB->unnamed_idx_0;
  for (localB->i = 0; localB->i < 4; localB->i++) {
    /* Product: '<S8>/Product' incorporates:
     *  Constant: '<S8>/TorqueTotalThrustToThrustPerMotor'
     *  SignalConversion: '<S8>/TmpSignal ConversionAtProductInport2'
     */
    rty_motorCmds[localB->i] = 0.0F;
    rty_motorCmds[localB->i] += localP->
      TorqueTotalThrustToThrustPerMotor_Value[localB->i] * localB->Sum2_b;
    rty_motorCmds[localB->i] += localP->
      TorqueTotalThrustToThrustPerMotor_Value[localB->i + 4] * localB->numAccum;
    rty_motorCmds[localB->i] += localP->
      TorqueTotalThrustToThrustPerMotor_Value[localB->i + 8] *
      localB->unnamed_idx_1;
    rty_motorCmds[localB->i] += localP->
      TorqueTotalThrustToThrustPerMotor_Value[localB->i + 12] *
      localB->rtb_Sum2_b_idx_3;

    /* Gain: '<S12>/ThrustToMotorCommand' */
    rty_motorCmds[localB->i] *= localP->ThrustToMotorCommand_Gain;

    /* Saturate: '<S12>/Saturation5' */
    if (rty_motorCmds[localB->i] > localP->Saturation5_UpperSat) {
      rty_motorCmds[localB->i] = localP->Saturation5_UpperSat;
    } else {
      if (rty_motorCmds[localB->i] < localP->Saturation5_LowerSat) {
        rty_motorCmds[localB->i] = localP->Saturation5_LowerSat;
      }
    }

    /* End of Saturate: '<S12>/Saturation5' */

    /* Gain: '<S12>/MotorDirections' */
    rty_motorCmds[localB->i] *= localP->MotorDirections_Gain[localB->i];
  }

  /* Outputs for Atomic SubSystem: '<S1>/Send' */
  /* Delay: '<S6>/Delay1' */
  flightControlSystem_Send(localB->rtb_FIR_IMUaccel_p, localB->SensorCalibration,
    rty_motorCmds, localB->rtb_DataTypeConversion3_c, localDW->Delay1_DSTATE,
    localB->rtb_DataTypeConversion2_j, localB->rtb_DataTypeConversion1_b,
    rty_SendUDP, &localP->Send);

  /* End of Outputs for SubSystem: '<S1>/Send' */

  /* Math: '<S34>/Math Function' */
  for (localB->i = 0; localB->i < 3; localB->i++) {
    localB->rtb_VectorConcatenate_m[3 * localB->i] = localB->
      VectorConcatenate[localB->i];
    localB->rtb_VectorConcatenate_m[1 + 3 * localB->i] =
      localB->VectorConcatenate[localB->i + 3];
    localB->rtb_VectorConcatenate_m[2 + 3 * localB->i] =
      localB->VectorConcatenate[localB->i + 6];
  }

  for (localB->i = 0; localB->i < 9; localB->i++) {
    localB->VectorConcatenate[localB->i] = localB->
      rtb_VectorConcatenate_m[localB->i];
  }

  /* End of Math: '<S34>/Math Function' */

  /* Fcn: '<S104>/Fcn11' */
  localB->Reshape9to3x3columnmajor[0] = localB->Delay1 *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S104>/Fcn21' incorporates:
   *  Fcn: '<S104>/Fcn22'
   */
  localB->Sum2_b = localB->rtb_FIR_IMUaccel_b * localB->rtb_sincos_o1_idx_0;
  localB->Reshape9to3x3columnmajor[1] = localB->Sum2_b *
    localB->rtb_sincos_o1_idx_2 - localB->rtb_FIR_IMUaccel_n *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S104>/Fcn31' incorporates:
   *  Fcn: '<S104>/Fcn32'
   */
  localB->numAccum = localB->rtb_FIR_IMUaccel_n * localB->rtb_sincos_o1_idx_0;
  localB->Reshape9to3x3columnmajor[2] = localB->numAccum *
    localB->rtb_sincos_o1_idx_2 + localB->rtb_FIR_IMUaccel_b *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S104>/Fcn12' */
  localB->Reshape9to3x3columnmajor[3] = localB->Delay1 *
    localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S104>/Fcn22' */
  localB->Reshape9to3x3columnmajor[4] = localB->Sum2_b *
    localB->rtb_sincos_o1_idx_1 + localB->rtb_FIR_IMUaccel_n *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S104>/Fcn32' */
  localB->Reshape9to3x3columnmajor[5] = localB->numAccum *
    localB->rtb_sincos_o1_idx_1 - localB->rtb_FIR_IMUaccel_b *
    localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S104>/Fcn13' */
  localB->Reshape9to3x3columnmajor[6] = -localB->rtb_sincos_o1_idx_0;

  /* Fcn: '<S104>/Fcn23' */
  localB->Reshape9to3x3columnmajor[7] = localB->rtb_FIR_IMUaccel_b *
    localB->Delay1;

  /* Fcn: '<S104>/Fcn33' */
  localB->Reshape9to3x3columnmajor[8] = localB->rtb_FIR_IMUaccel_n *
    localB->Delay1;

  /* Fcn: '<S166>/Fcn11' */
  localB->MathFunction[0] = localB->Delay1 * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S166>/Fcn21' */
  localB->MathFunction[1] = localB->rtb_FIR_IMUaccel_b *
    localB->rtb_sincos_o1_idx_0 * localB->rtb_sincos_o1_idx_2 -
    localB->rtb_FIR_IMUaccel_n * localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S166>/Fcn31' incorporates:
   *  Fcn: '<S166>/Fcn32'
   */
  localB->Sum2_b = localB->rtb_FIR_IMUaccel_n * localB->rtb_sincos_o1_idx_0;
  localB->MathFunction[2] = localB->Sum2_b * localB->rtb_sincos_o1_idx_2 +
    localB->rtb_FIR_IMUaccel_b * localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S166>/Fcn12' */
  localB->MathFunction[3] = localB->Delay1 * localB->rtb_sincos_o1_idx_1;

  /* Fcn: '<S166>/Fcn22' */
  localB->MathFunction[4] = localB->rtb_FIR_IMUaccel_b *
    localB->rtb_sincos_o1_idx_0 * localB->rtb_sincos_o1_idx_1 +
    localB->rtb_FIR_IMUaccel_n * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S166>/Fcn32' */
  localB->MathFunction[5] = localB->Sum2_b * localB->rtb_sincos_o1_idx_1 -
    localB->rtb_FIR_IMUaccel_b * localB->rtb_sincos_o1_idx_2;

  /* Fcn: '<S166>/Fcn13' */
  localB->MathFunction[6] = -localB->rtb_sincos_o1_idx_0;

  /* Fcn: '<S166>/Fcn23' */
  localB->MathFunction[7] = localB->rtb_FIR_IMUaccel_b * localB->Delay1;

  /* Fcn: '<S166>/Fcn33' */
  localB->MathFunction[8] = localB->rtb_FIR_IMUaccel_n * localB->Delay1;

  /* Math: '<S97>/Math Function' */
  for (localB->i = 0; localB->i < 3; localB->i++) {
    localB->rtb_VectorConcatenate_m[3 * localB->i] = localB->MathFunction
      [localB->i];
    localB->rtb_VectorConcatenate_m[1 + 3 * localB->i] = localB->
      MathFunction[localB->i + 3];
    localB->rtb_VectorConcatenate_m[2 + 3 * localB->i] = localB->
      MathFunction[localB->i + 6];
  }

  for (localB->i = 0; localB->i < 9; localB->i++) {
    localB->MathFunction[localB->i] = localB->rtb_VectorConcatenate_m[localB->i];
  }

  /* End of Math: '<S97>/Math Function' */

  /* DiscreteIntegrator: '<S97>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  if (localP->controlModePosVsOrient_Value &&
      (localDW->SimplyIntegrateVelocity_PrevResetState <= 0)) {
    localDW->SimplyIntegrateVelocity_DSTATE[0] =
      localP->SimplyIntegrateVelocity_IC;
    localDW->SimplyIntegrateVelocity_DSTATE[1] =
      localP->SimplyIntegrateVelocity_IC;
  }

  localB->rtb_SimplyIntegrateVelocity_l[0] =
    localDW->SimplyIntegrateVelocity_DSTATE[0];
  localB->rtb_SimplyIntegrateVelocity_l[1] =
    localDW->SimplyIntegrateVelocity_DSTATE[1];

  /* End of DiscreteIntegrator: '<S97>/SimplyIntegrateVelocity' */

  /* SignalConversion: '<S1>/TmpSignal ConversionAtLoggingInport5' */
  localB->TmpSignalConversionAtLoggingInport5[0] =
    rtb_nicemeasurementornewupdateneeded;
  localB->TmpSignalConversionAtLoggingInport5[1] = rtb_Compare_g;
  localB->TmpSignalConversionAtLoggingInport5[2] = rtb_Compare_er;
  localB->TmpSignalConversionAtLoggingInport5[3] = rtb_LogicalOperator3;
  localB->TmpSignalConversionAtLoggingInport5[4] = rtb_Compare_b4;

  /* DataTypeConversion: '<S1>/Cast To Single' */
  localB->rtb_size_b = rtu_mocapsize;

  /* Saturate: '<S44>/SaturationSonar' */
  if (localB->invertzaxisGain > -flightControlSystem_P.Sensors.altSensorMin) {
    localB->rtb_Reshapexhat_idx_1 = -flightControlSystem_P.Sensors.altSensorMin;
  } else if (localB->invertzaxisGain < localP->SaturationSonar_LowerSat) {
    localB->rtb_Reshapexhat_idx_1 = localP->SaturationSonar_LowerSat;
  } else {
    localB->rtb_Reshapexhat_idx_1 = localB->invertzaxisGain;
  }

  /* End of Saturate: '<S44>/SaturationSonar' */

  /* RelationalOperator: '<S94>/Compare' incorporates:
   *  Abs: '<S44>/Absestdiff'
   *  Constant: '<S94>/Constant'
   *  Delay: '<S34>/Delay2'
   *  Sum: '<S44>/Add'
   */
  rtb_Compare_b4 = (fabs(localDW->Delay2_DSTATE - localB->rtb_Reshapexhat_idx_1)
                    <= localP->outlierJump_const);

  /* RelationalOperator: '<S91>/Compare' incorporates:
   *  Constant: '<S91>/Constant'
   */
  rtb_LogicalOperator3 = (localB->invertzaxisGain <
    -flightControlSystem_P.Sensors.altSensorMin);

  /* DiscreteFilter: '<S44>/pressureFilter_IIR' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment'
   *  DataTypeConversion: '<S36>/Data Type Conversion'
   *  Gain: '<S34>/prsToAltGain'
   *  Sum: '<S36>/Sum2'
   */
  localB->Sum2_b = ((((rtu_Sensors->HALSensors.HAL_pressure_SI.pressure -
                       localB->SensorCalibration[6]) * localP->prsToAltGain_Gain
                      - localP->pressureFilter_IIR_DenCoef[1] *
                      localDW->pressureFilter_IIR_states[0]) -
                     localP->pressureFilter_IIR_DenCoef[2] *
                     localDW->pressureFilter_IIR_states[1]) -
                    localP->pressureFilter_IIR_DenCoef[3] *
                    localDW->pressureFilter_IIR_states[2]) /
    localP->pressureFilter_IIR_DenCoef[0];
  localB->numAccum = ((localP->pressureFilter_IIR_NumCoef[0] * localB->Sum2_b +
                       localP->pressureFilter_IIR_NumCoef[1] *
                       localDW->pressureFilter_IIR_states[0]) +
                      localP->pressureFilter_IIR_NumCoef[2] *
                      localDW->pressureFilter_IIR_states[1]) +
    localP->pressureFilter_IIR_NumCoef[3] * localDW->pressureFilter_IIR_states[2];

  /* RelationalOperator: '<S92>/Compare' incorporates:
   *  Abs: '<S44>/Absestdiff1'
   *  Constant: '<S92>/Constant'
   *  Delay: '<S34>/Delay2'
   *  DiscreteFilter: '<S44>/pressureFilter_IIR'
   *  Sum: '<S44>/Add1'
   */
  rtb_Compare_er = (fabs(localB->numAccum - localDW->Delay2_DSTATE) >=
                    localP->currentEstimateVeryOffFromPressure_const);

  /* DiscreteFilter: '<S44>/soonarFilter_IIR' */
  localB->rtb_Reshapexhat_idx_1 = (((localB->invertzaxisGain -
    localP->soonarFilter_IIR_DenCoef[1] * localDW->soonarFilter_IIR_states[0]) -
    localP->soonarFilter_IIR_DenCoef[2] * localDW->soonarFilter_IIR_states[1]) -
    localP->soonarFilter_IIR_DenCoef[3] * localDW->soonarFilter_IIR_states[2]) /
    localP->soonarFilter_IIR_DenCoef[0];

  /* Sum: '<S44>/Add2' incorporates:
   *  Delay: '<S34>/Delay2'
   *  DiscreteFilter: '<S44>/soonarFilter_IIR'
   */
  localDW->Delay2_DSTATE = (((localP->soonarFilter_IIR_NumCoef[0] *
    localB->rtb_Reshapexhat_idx_1 + localP->soonarFilter_IIR_NumCoef[1] *
    localDW->soonarFilter_IIR_states[0]) + localP->soonarFilter_IIR_NumCoef[2] *
    localDW->soonarFilter_IIR_states[1]) + localP->soonarFilter_IIR_NumCoef[3] *
    localDW->soonarFilter_IIR_states[2]) - localDW->Delay2_DSTATE;

  /* Abs: '<S44>/Absestdiff2' incorporates:
   *  Delay: '<S34>/Delay2'
   */
  localDW->Delay2_DSTATE = fabs(localDW->Delay2_DSTATE);

  /* RelationalOperator: '<S93>/Compare' incorporates:
   *  Constant: '<S93>/Constant'
   *  Delay: '<S34>/Delay2'
   */
  rtb_Compare_g = (localDW->Delay2_DSTATE >=
                   localP->currentStateVeryOffsonarflt_const);

  /* SignalConversion: '<S1>/TmpSignal ConversionAtLoggingInport7' incorporates:
   *  Logic: '<S44>/NOT'
   *  Logic: '<S44>/findingoutliers'
   *  Logic: '<S44>/newupdateneeded'
   *  Logic: '<S44>/nicemeasurementor newupdateneeded'
   */
  localB->TmpSignalConversionAtLoggingInport7[0] = (rtb_Compare_b4 &&
    rtb_LogicalOperator3 && ((!rtb_Compare_er) || (!rtb_Compare_g)));
  localB->TmpSignalConversionAtLoggingInport7[1] = rtb_Compare_b4;
  localB->TmpSignalConversionAtLoggingInport7[2] = rtb_LogicalOperator3;
  localB->TmpSignalConversionAtLoggingInport7[3] = rtb_Compare_er;
  localB->TmpSignalConversionAtLoggingInport7[4] = rtb_Compare_g;

  /* SignalConversion: '<S1>/TmpSignal ConversionAtLoggingInport9' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment'
   *  DiscreteFilter: '<S44>/pressureFilter_IIR'
   */
  localB->TmpSignalConversionAtLoggingInport9[0] = rtu_mocapdata[2];
  localB->TmpSignalConversionAtLoggingInport9[1] = localB->numAccum;

  /* Outputs for Atomic SubSystem: '<S1>/Logging' */
  /* Constant: '<S10>/Constant' incorporates:
   *  Delay: '<S6>/Delay1'
   */
  flightControlSystem_Logging(flightControlSystem_M, rty_motorCmds,
    localB->rtb_P_yaw_d, localP->Constant_Value_hq, localB->rtb_D_yaw_l,
    localB->rtb_P_pr_m, localB->rtb_Saturation_n, localB->rtb_D_pr_p,
    localB->rtb_P_xy_f, localB->rtb_Saturation1_m_g, localB->rtb_D_xy_g,
    localB->rtb_P_z_l, localB->rtb_Saturation1_g, localB->rtb_dz_d,
    localB->rtb_SimplyIntegrateVelocity_l, localB->rtb_DataTypeConversion_d,
    localB->rtb_DataTypeConversion3_c, localDW->Delay1_DSTATE,
    localB->rtb_DataTypeConversion2_j, localB->rtb_DataTypeConversion1_b,
    rtu_ReferenceValueServerCmds, localB->TmpSignalConversionAtLoggingInport5,
    rtu_mocapdata, (real32_T)localB->rtb_size_b,
    localB->TmpSignalConversionAtLoggingInport7, localB->rtb_FIR_IMUaccel_p,
    &localB->inverseIMU_gain_k[3], localB->rtb_r_o,
    localB->TmpSignalConversionAtLoggingInport9, localB->SensorCalibration,
    &localB->Logging, &localDW->Logging);

  /* End of Outputs for SubSystem: '<S1>/Logging' */

  /* RelationalOperator: '<S103>/Compare' incorporates:
   *  Constant: '<S103>/Constant'
   */
  rtb_Compare_b4 = (localB->rtb_DataTypeConversion_d <=
                    localP->DeactivateAccelerationIfOFisnotusedduetolowaltitude_const);

  /* Logic: '<S98>/Logical Operator' incorporates:
   *  Constant: '<S105>/Constant'
   *  Constant: '<S106>/Constant'
   *  RelationalOperator: '<S105>/Compare'
   *  RelationalOperator: '<S106>/Compare'
   */
  rtb_LogicalOperator3 = ((localB->Switch[0] !=
    localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con) ||
    (localB->Switch[1] !=
     localP->donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co));
  for (localB->i = 0; localB->i < 3; localB->i++) {
    /* Sum: '<S34>/Sum' incorporates:
     *  Constant: '<S34>/gravity'
     *  Product: '<S34>/Product'
     */
    localB->Sum[localB->i] = ((localB->VectorConcatenate[localB->i + 3] *
      localB->rtb_FIR_IMUaccel_p[1] + localB->VectorConcatenate[localB->i] *
      localB->rtb_FIR_IMUaccel_p[0]) + localB->VectorConcatenate[localB->i + 6] *
      localB->rtb_FIR_IMUaccel_p[2]) + localP->gravity_Value_k[localB->i];

    /* Sum: '<S98>/Add' incorporates:
     *  Constant: '<S98>/gravity'
     *  Product: '<S98>/Product1'
     */
    localB->rtb_VectorConcatenate_c[localB->i] = localB->
      rtb_FIR_IMUaccel_p[localB->i] - ((localB->Reshape9to3x3columnmajor
      [localB->i + 3] * localP->gravity_Value[1] +
      localB->Reshape9to3x3columnmajor[localB->i] * localP->gravity_Value[0]) +
      localB->Reshape9to3x3columnmajor[localB->i + 6] * localP->gravity_Value[2]);
  }

  /* Product: '<S98>/Product' incorporates:
   *  Gain: '<S98>/gainaccinput'
   */
  localB->Product[0] = (real32_T)(localP->gainaccinput_Gain *
    localB->rtb_VectorConcatenate_c[0]) * (real32_T)rtb_LogicalOperator3 *
    (real32_T)rtb_Compare_b4;
  localB->Product[1] = (real32_T)(localP->gainaccinput_Gain *
    localB->rtb_VectorConcatenate_c[1]) * (real32_T)rtb_LogicalOperator3 *
    (real32_T)rtb_Compare_b4;

  /* Outputs for Enabled SubSystem: '<S139>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S164>/Enable'
   */
  /* DataTypeConversion: '<S102>/DataTypeConversionEnable' */
  if (localB->LogicalOperator3) {
    if (!localDW->MeasurementUpdate_MODE) {
      localDW->MeasurementUpdate_MODE = true;
    }

    /* Sum: '<S164>/Sum' incorporates:
     *  Constant: '<S102>/C'
     *  Constant: '<S102>/D'
     *  Delay: '<S102>/MemoryX'
     *  Product: '<S164>/C[k]*xhat[k|k-1]'
     *  Product: '<S164>/D[k]*u[k]'
     *  Reshape: '<S102>/Reshapeu'
     *  Reshape: '<S102>/Reshapey'
     *  Sum: '<S164>/Add1'
     */
    localB->unnamed_idx_0 = localB->Switch[0] - ((localP->C_Value_g[0] *
      localDW->MemoryX_DSTATE_h[0] + localP->C_Value_g[2] *
      localDW->MemoryX_DSTATE_h[1]) + (localP->D_Value_l[0] * localB->Product[0]
      + localP->D_Value_l[2] * localB->Product[1]));
    localB->unnamed_idx_1 = localB->Switch[1] - ((localP->C_Value_g[1] *
      localDW->MemoryX_DSTATE_h[0] + localP->C_Value_g[3] *
      localDW->MemoryX_DSTATE_h[1]) + (localP->D_Value_l[1] * localB->Product[0]
      + localP->D_Value_l[3] * localB->Product[1]));

    /* Product: '<S164>/Product3' incorporates:
     *  Constant: '<S122>/KalmanGainL'
     *  DataTypeConversion: '<S160>/Conversion'
     */
    localB->Product3_i[0] = 0.0F;
    localB->Product3_i[0] += (real32_T)localP->KalmanGainL_Value[0] *
      localB->unnamed_idx_0;
    localB->Product3_i[0] += (real32_T)localP->KalmanGainL_Value[2] *
      localB->unnamed_idx_1;
    localB->Product3_i[1] = 0.0F;
    localB->Product3_i[1] += (real32_T)localP->KalmanGainL_Value[1] *
      localB->unnamed_idx_0;
    localB->Product3_i[1] += (real32_T)localP->KalmanGainL_Value[3] *
      localB->unnamed_idx_1;
  } else {
    if (localDW->MeasurementUpdate_MODE) {
      /* Disable for Outport: '<S164>/L*(y[k]-yhat[k|k-1])' */
      localB->Product3_i[0] = localP->Lykyhatkk1_Y0_o;
      localB->Product3_i[1] = localP->Lykyhatkk1_Y0_o;
      localDW->MeasurementUpdate_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S139>/MeasurementUpdate' */

  /* Outputs for Enabled SubSystem: '<S64>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  /* DataTypeConversion: '<S43>/DataTypeConversionEnable' incorporates:
   *  Constant: '<S34>/Constant'
   */
  if (localP->Constant_Value != 0.0) {
    if (!localDW->MeasurementUpdate_MODE_h) {
      localDW->MeasurementUpdate_MODE_h = true;
    }

    /* Product: '<S89>/D[k]*u[k]' incorporates:
     *  Constant: '<S43>/D'
     *  Delay: '<S34>/Delay2'
     *  Reshape: '<S43>/Reshapeu'
     */
    localDW->Delay2_DSTATE = localP->D_Value * localB->Sum[2];

    /* Sum: '<S89>/Sum' incorporates:
     *  Constant: '<S43>/C'
     *  Delay: '<S34>/Delay2'
     *  Delay: '<S43>/MemoryX'
     *  Product: '<S89>/C[k]*xhat[k|k-1]'
     *  Reshape: '<S43>/Reshapey'
     *  Sum: '<S89>/Add1'
     */
    localB->u_h = localB->invertzaxisGain - ((localP->C_Value[0] *
      localDW->MemoryX_DSTATE[0] + localP->C_Value[1] * localDW->MemoryX_DSTATE
      [1]) + localDW->Delay2_DSTATE);

    /* Product: '<S89>/Product3' incorporates:
     *  Constant: '<S47>/KalmanGainL'
     *  DataTypeConversion: '<S85>/Conversion'
     */
    localB->Product3[0] = localP->KalmanGainL_Value_k[0] * localB->u_h;
    localB->Product3[1] = localP->KalmanGainL_Value_k[1] * localB->u_h;
  } else {
    if (localDW->MeasurementUpdate_MODE_h) {
      /* Disable for Outport: '<S89>/L*(y[k]-yhat[k|k-1])' */
      localB->Product3[0] = localP->Lykyhatkk1_Y0;
      localB->Product3[1] = localP->Lykyhatkk1_Y0;
      localDW->MeasurementUpdate_MODE_h = false;
    }
  }

  /* End of Outputs for SubSystem: '<S64>/MeasurementUpdate' */
  /* Sum: '<S7>/Add' incorporates:
   *  Delay: '<S7>/Delay'
   *  Gain: '<S7>/antiWU_Gain'
   */
  localB->Add_i[0] -= flightControlSystem_P.I_pr_antiWU *
    localDW->Delay_DSTATE_k[0];
  localB->Add_i[1] -= flightControlSystem_P.I_pr_antiWU *
    localDW->Delay_DSTATE_k[1];

  /* Sum: '<S9>/Add' incorporates:
   *  Delay: '<S9>/Delay'
   *  Gain: '<S9>/antiWU_Gain'
   */
  localB->Add_p[0] -= flightControlSystem_P.I_xy_antiWU *
    localDW->Delay_DSTATE_l[0];
  localB->Add_p[1] -= flightControlSystem_P.I_xy_antiWU *
    localDW->Delay_DSTATE_l[1];

  /* RelationalOperator: '<S3>/GreaterThan' incorporates:
   *  Constant: '<S3>/Wait  3 Seconds'
   *  UnitDelay: '<S25>/Output'
   */
  rtb_Compare_b4 = (localDW->Output_DSTATE_i > localP->Wait3Seconds_Value);

  /* Switch: '<S3>/Switch' incorporates:
   *  BusAssignment: '<S1>/Bus Assignment'
   *  Constant: '<S3>/ '
   */
  if (rtb_Compare_b4) {
    localB->u_h = rtu_Sensors->VisionSensors.opticalFlow_data[2];
    localB->rtb_Compare_mp_c = rtu_Sensors->VisionSensors.opticalFlow_data[2];
  } else {
    localB->u_h = localP->_Value;
    localB->rtb_Compare_mp_c = localP->_Value;
  }

  /* End of Switch: '<S3>/Switch' */

  /* DataTypeConversion: '<S3>/   ' incorporates:
   *  Constant: '<S18>/Constant'
   *  RelationalOperator: '<S18>/Compare'
   */
  localB->u_h = (localB->u_h == localP->Checkerrorcondition_const);

  /* Delay: '<S3>/Delay One Step' incorporates:
   *  Delay: '<S34>/Delay2'
   */
  localDW->Delay2_DSTATE = localDW->DelayOneStep_DSTATE;

  /* Sum: '<S3>/Add' incorporates:
   *  Constant: '<S18>/Constant'
   *  DataTypeConversion: '<S3>/   '
   *  Delay: '<S34>/Delay2'
   *  Delay: '<S3>/Delay One Step'
   *  Product: '<S3>/  '
   *  RelationalOperator: '<S18>/Compare'
   */
  localDW->DelayOneStep_DSTATE = (real_T)(localB->rtb_Compare_mp_c ==
    localP->Checkerrorcondition_const) + localB->u_h * localDW->Delay2_DSTATE;

  /* DataTypeConversion: '<S3>/Data Type Conversion2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Delay: '<S3>/Delay One Step'
   *  RelationalOperator: '<S17>/Compare'
   */
  *rty_Flag = (uint8_T)(localDW->DelayOneStep_DSTATE >
                        localP->u0continuousOFerrors_const);

  /* If: '<S3>/If' incorporates:
   *  Abs: '<S3>/Abs'
   *  Abs: '<S3>/Abs  '
   *  Abs: '<S3>/Abs1'
   *  Abs: '<S3>/Abs2'
   *  Abs: '<S3>/Abs3'
   *  Abs: '<S3>/Abs4'
   *  Abs: '<S3>/Abs5'
   *  BusAssignment: '<S1>/Bus Assignment'
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Constant: '<S3>/0.5 meters'
   *  Delay: '<S6>/Delay1'
   *  Gain: '<S3>/Gain'
   *  Gain: '<S3>/Gain1'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  Logic: '<S3>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator3'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S3>/GreaterThan  '
   *  Sum: '<S3>/Subtract'
   *  Sum: '<S3>/Subtract1'
   *  Switch: '<S3>/         '
   */
  if ((((real32_T)fabs(localB->rtb_SimplyIntegrateVelocity_l[0]) >
        localP->CompareToConstant_const_o) || ((real32_T)fabs
        (localB->rtb_SimplyIntegrateVelocity_l[1]) >
        localP->CompareToConstant1_const_m)) > 0) {
    /* Outputs for IfAction SubSystem: '<S3>/Geofencing error' incorporates:
     *  ActionPort: '<S26>/Action Port'
     */
    flightControlSystem_Geofencingerror(&Merge_m, &localP->Geofencingerror);

    /* End of Outputs for SubSystem: '<S3>/Geofencing error' */
  } else if (((((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]) >
                localP->CompareToConstant4_const) && ((real32_T)fabs
                (localP->Gain_Gain_dj *
                 rtu_Sensors->VisionSensors.opticalFlow_data[0] -
                 localDW->Delay1_DSTATE[0]) > localP->CompareToConstant2_const))
              || (((real32_T)fabs(localP->Gain1_Gain_p *
      rtu_Sensors->VisionSensors.opticalFlow_data[1] - localDW->Delay1_DSTATE[1])
                   > localP->CompareToConstant3_const) && ((real32_T)fabs
                (rtu_Sensors->VisionSensors.opticalFlow_data[1]) >
                localP->CompareToConstant5_const))) > 0) {
    /* Outputs for IfAction SubSystem: '<S3>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S30>/Action Port'
     */
    flightControlSystem_Geofencingerror(&Merge_m,
      &localP->estimatorOpticalflowerror);

    /* End of Outputs for SubSystem: '<S3>/estimator//Optical flow error' */
  } else if (*rty_Flag > 0) {
    /* Outputs for IfAction SubSystem: '<S3>/No optical flow ' incorporates:
     *  ActionPort: '<S27>/Action Port'
     */
    flightControlSystem_Geofencingerror(&Merge_m, &localP->Noopticalflow);

    /* End of Outputs for SubSystem: '<S3>/No optical flow ' */
  } else {
    if (rtb_Compare_b4) {
      /* Switch: '<S3>/         ' incorporates:
       *  DiscreteFilter: '<S44>/pressureFilter_IIR'
       *  Sum: '<S3>/Difference between  sonar and pressure'
       */
      localB->rtb_sincos_o1_idx_1 = localB->rtb_DataTypeConversion_d -
        localB->numAccum;
    } else {
      /* Switch: '<S3>/         ' incorporates:
       *  Constant: '<S3>/    '
       */
      localB->rtb_sincos_o1_idx_1 = localP->_Value_j;
    }

    if ((real32_T)fabs(localB->rtb_sincos_o1_idx_1) > localP->u5meters_Value) {
      /* Outputs for IfAction SubSystem: '<S3>/Ultrasound improper' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      flightControlSystem_Geofencingerror(&Merge_m, &localP->Ultrasoundimproper);

      /* End of Outputs for SubSystem: '<S3>/Ultrasound improper' */
    } else {
      /* Outputs for IfAction SubSystem: '<S3>/Normal condition' incorporates:
       *  ActionPort: '<S28>/Action Port'
       */
      flightControlSystem_Geofencingerror(&Merge_m, &localP->Normalcondition);

      /* End of Outputs for SubSystem: '<S3>/Normal condition' */
    }
  }

  /* End of If: '<S3>/If' */

  /* Sum: '<S31>/FixPt Sum1' incorporates:
   *  Constant: '<S31>/FixPt Constant'
   *  UnitDelay: '<S25>/Output'
   */
  localDW->Output_DSTATE_i += localP->FixPtConstant_Value;

  /* Sum: '<S11>/Add1' incorporates:
   *  Delay: '<S11>/Delay1'
   *  Gain: '<S11>/antiWU_Gain1'
   */
  localB->Add1 -= flightControlSystem_P.I_z_antiWU * localDW->Delay1_DSTATE_d;

  /* Sum: '<S15>/FixPt Sum1' incorporates:
   *  Constant: '<S15>/FixPt Constant'
   *  UnitDelay: '<S14>/Output'
   */
  localDW->Output_DSTATE_b = (uint16_T)((uint32_T)localDW->Output_DSTATE_b +
    localP->FixPtConstant_Value_h);

  /* Switch: '<S16>/FixPt Switch' incorporates:
   *  Constant: '<S16>/Constant'
   *  UnitDelay: '<S14>/Output'
   */
  if (localDW->Output_DSTATE_b > localP->WrapToZero_Threshold_g) {
    localDW->Output_DSTATE_b = localP->Constant_Value_m;
  }

  /* End of Switch: '<S16>/FixPt Switch' */

  /* Sum: '<S108>/FixPt Sum1' incorporates:
   *  Constant: '<S108>/FixPt Constant'
   *  UnitDelay: '<S100>/Output'
   */
  localDW->Output_DSTATE += localP->FixPtConstant_Value_c;

  /* Switch: '<S109>/FixPt Switch' incorporates:
   *  Constant: '<S109>/Constant'
   *  UnitDelay: '<S100>/Output'
   */
  if (localDW->Output_DSTATE > localP->WrapToZero_Threshold_e) {
    localDW->Output_DSTATE = localP->Constant_Value_a;
  }

  /* End of Switch: '<S109>/FixPt Switch' */

  /* Constant: '<S1>/Constant' */
  *rty_Flag = localP->Constant_Value_ac;

  /* Update for DiscreteFir: '<S36>/FIR_IMUaccel' */
  /* Update circular buffer index */
  localDW->FIR_IMUaccel_circBuf--;
  if (localDW->FIR_IMUaccel_circBuf < 0) {
    localDW->FIR_IMUaccel_circBuf = 4;
  }

  /* Update circular buffer */
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf] =
    localB->inverseIMU_gain_k[0];

  /* Update for Memory: '<S33>/Memory' */
  localDW->Memory_PreviousInput[0] = localB->rtb_DataTypeConversion3_c[0];

  /* Update for DiscreteFir: '<S36>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 5] =
    localB->inverseIMU_gain_k[1];

  /* Update for Memory: '<S33>/Memory' */
  localDW->Memory_PreviousInput[1] = localB->rtb_DataTypeConversion3_c[1];

  /* Update for DiscreteFir: '<S36>/FIR_IMUaccel' */
  localDW->FIR_IMUaccel_states[localDW->FIR_IMUaccel_circBuf + 10] =
    localB->inverseIMU_gain_k[2];

  /* Update for Memory: '<S33>/Memory' */
  localDW->Memory_PreviousInput[2] = localB->rtb_DataTypeConversion3_c[2];

  /* Update for DiscreteFilter: '<S36>/IIR_IMUgyro_r' */
  localDW->IIR_IMUgyro_r_states[4] = localDW->IIR_IMUgyro_r_states[3];
  localDW->IIR_IMUgyro_r_states[3] = localDW->IIR_IMUgyro_r_states[2];
  localDW->IIR_IMUgyro_r_states[2] = localDW->IIR_IMUgyro_r_states[1];
  localDW->IIR_IMUgyro_r_states[1] = localDW->IIR_IMUgyro_r_states[0];
  localDW->IIR_IMUgyro_r_states[0] = localB->acc1;

  /* Update for Delay: '<S34>/Delay2' */
  localDW->Delay2_DSTATE = localB->rtb_Reshapexhat_idx_0;

  /* Update for Delay: '<S43>/MemoryX' */
  localDW->icLoad = 0U;

  /* Product: '<S64>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S43>/A'
   *  Delay: '<S43>/MemoryX'
   */
  localB->rtb_Reshapexhat_idx_0 = localP->A_Value[1] * localDW->MemoryX_DSTATE[0]
    + localP->A_Value[3] * localDW->MemoryX_DSTATE[1];

  /* Update for Delay: '<S102>/MemoryX' */
  localDW->icLoad_k = 0U;

  /* Update for Delay: '<S43>/MemoryX' incorporates:
   *  Constant: '<S43>/A'
   *  Constant: '<S43>/B'
   *  Product: '<S64>/A[k]*xhat[k|k-1]'
   *  Product: '<S64>/B[k]*u[k]'
   *  Reshape: '<S43>/Reshapeu'
   *  Sum: '<S64>/Add'
   */
  localDW->MemoryX_DSTATE[0] = ((localP->A_Value[0] * localDW->MemoryX_DSTATE[0]
    + localP->A_Value[2] * localDW->MemoryX_DSTATE[1]) + localP->B_Value[0] *
    localB->Sum[2]) + localB->Product3[0];

  /* Product: '<S139>/B[k]*u[k]' incorporates:
   *  Constant: '<S102>/B'
   *  Reshape: '<S102>/Reshapeu'
   */
  localB->fv0[0] = localP->B_Value_m[0] * localB->Product[0] + localP->
    B_Value_m[2] * localB->Product[1];

  /* Product: '<S139>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S102>/A'
   *  Delay: '<S102>/MemoryX'
   */
  localB->fv1[0] = localP->A_Value_c[0] * localDW->MemoryX_DSTATE_h[0] +
    localP->A_Value_c[2] * localDW->MemoryX_DSTATE_h[1];

  /* Update for Delay: '<S43>/MemoryX' incorporates:
   *  Constant: '<S43>/B'
   *  Product: '<S64>/B[k]*u[k]'
   *  Reshape: '<S43>/Reshapeu'
   *  Sum: '<S64>/Add'
   */
  localDW->MemoryX_DSTATE[1] = (localP->B_Value[1] * localB->Sum[2] +
    localB->rtb_Reshapexhat_idx_0) + localB->Product3[1];

  /* Product: '<S139>/B[k]*u[k]' incorporates:
   *  Constant: '<S102>/B'
   *  Reshape: '<S102>/Reshapeu'
   */
  localB->fv0[1] = localP->B_Value_m[1] * localB->Product[0];

  /* Product: '<S139>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S102>/A'
   *  Delay: '<S102>/MemoryX'
   */
  localB->fv1[1] = localP->A_Value_c[1] * localDW->MemoryX_DSTATE_h[0];

  /* Product: '<S139>/B[k]*u[k]' incorporates:
   *  Constant: '<S102>/B'
   *  Reshape: '<S102>/Reshapeu'
   */
  localB->fv0[1] += localP->B_Value_m[3] * localB->Product[1];

  /* Product: '<S139>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S102>/A'
   *  Delay: '<S102>/MemoryX'
   */
  localB->fv1[1] += localP->A_Value_c[3] * localDW->MemoryX_DSTATE_h[1];
  for (localB->cff = 0; localB->cff < 2; localB->cff++) {
    /* Update for Delay: '<S102>/MemoryX' incorporates:
     *  Sum: '<S139>/Add'
     */
    localDW->MemoryX_DSTATE_h[localB->cff] = (localB->fv0[localB->cff] +
      localB->fv1[localB->cff]) + localB->Product3_i[localB->cff];

    /* Update for DiscreteFilter: '<S101>/IIRgyroz' */
    localB->memOffset = localB->cff * 5;
    localDW->IIRgyroz_states[localB->memOffset + 4] = localDW->
      IIRgyroz_states[localB->memOffset + 3];
    localDW->IIRgyroz_states[localB->memOffset + 3] = localDW->
      IIRgyroz_states[localB->memOffset + 2];
    localDW->IIRgyroz_states[localB->memOffset + 2] = localDW->
      IIRgyroz_states[localB->memOffset + 1];
    localDW->IIRgyroz_states[localB->memOffset + 1] = localDW->
      IIRgyroz_states[localB->memOffset];
    localDW->IIRgyroz_states[localB->memOffset] = localB->IIRgyroz_tmp
      [localB->cff];

    /* Update for UnitDelay: '<S110>/UD'
     *
     * Block description for '<S110>/UD':
     *
     *  Store in Global RAM
     */
    localDW->UD_DSTATE[localB->cff] = localB->TSamp[localB->cff];

    /* Update for Delay: '<S96>/Delay' incorporates:
     *  Delay: '<S6>/Delay1'
     */
    localDW->Delay_DSTATE[localB->cff] = localDW->Delay1_DSTATE[localB->cff];
  }

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' incorporates:
   *  Product: '<S11>/I_z'
   */
  localDW->DiscreteTimeIntegrator2_DSTATE += localB->Add1 * rtu_mocapdata[20] *
    localP->DiscreteTimeIntegrator2_gainval;
  localDW->DiscreteTimeIntegrator2_PrevResetState = (int8_T)rtb_Compare_id;

  /* Update for DiscreteIntegrator: '<S9>/Discrete-Time Integrator' incorporates:
   *  Product: '<S9>/I_xy'
   */
  localDW->DiscreteTimeIntegrator_DSTATE[0] += rtu_mocapdata[9] * localB->Add_p
    [0] * localP->DiscreteTimeIntegrator_gainval;
  localDW->DiscreteTimeIntegrator_DSTATE[1] += rtu_mocapdata[12] * localB->
    Add_p[1] * localP->DiscreteTimeIntegrator_gainval;

  /* Update for DiscreteIntegrator: '<S7>/Discrete-Time Integrator' incorporates:
   *  Product: '<S7>/I_pr'
   */
  localDW->DiscreteTimeIntegrator_DSTATE_m[0] += localB->Add_i[0] *
    rtu_mocapdata[15] * localP->DiscreteTimeIntegrator_gainval_k;
  localDW->DiscreteTimeIntegrator_DSTATE_m[1] += localB->Add_i[1] *
    rtu_mocapdata[15] * localP->DiscreteTimeIntegrator_gainval_k;

  /* Product: '<S97>/Product' incorporates:
   *  Delay: '<S6>/Delay1'
   *  SignalConversion: '<S97>/TmpSignal ConversionAtProductInport2'
   */
  for (localB->i = 0; localB->i < 3; localB->i++) {
    localB->sincos_o2[localB->i] = localB->MathFunction[localB->i + 6] *
      localB->rtb_DataTypeConversion2_j + (localB->MathFunction[localB->i + 3] *
      localDW->Delay1_DSTATE[1] + localB->MathFunction[localB->i] *
      localDW->Delay1_DSTATE[0]);
  }

  /* End of Product: '<S97>/Product' */

  /* Update for DiscreteIntegrator: '<S97>/SimplyIntegrateVelocity' incorporates:
   *  Constant: '<S1>/controlModePosVsOrient'
   */
  localDW->SimplyIntegrateVelocity_PrevResetState = (int8_T)
    localP->controlModePosVsOrient_Value;
  localDW->SimplyIntegrateVelocity_DSTATE[0] +=
    localP->SimplyIntegrateVelocity_gainval * localB->sincos_o2[0];

  /* Update for DiscreteFilter: '<S44>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[2] = localDW->pressureFilter_IIR_states[1];

  /* Update for DiscreteIntegrator: '<S97>/SimplyIntegrateVelocity' */
  localDW->SimplyIntegrateVelocity_DSTATE[1] +=
    localP->SimplyIntegrateVelocity_gainval * localB->sincos_o2[1];

  /* Update for DiscreteFilter: '<S44>/pressureFilter_IIR' */
  localDW->pressureFilter_IIR_states[1] = localDW->pressureFilter_IIR_states[0];
  localDW->pressureFilter_IIR_states[0] = localB->Sum2_b;

  /* Update for DiscreteFilter: '<S44>/soonarFilter_IIR' */
  localDW->soonarFilter_IIR_states[2] = localDW->soonarFilter_IIR_states[1];

  /* Update for Delay: '<S7>/Delay' incorporates:
   *  Sum: '<S7>/Sum'
   */
  localDW->Delay_DSTATE_k[0] = localB->rtb_DiscreteTimeIntegrator_d_idx_0 -
    localB->rtb_Saturation_n[0];

  /* Update for Delay: '<S9>/Delay' incorporates:
   *  Sum: '<S9>/Sum'
   */
  localDW->Delay_DSTATE_l[0] = localB->rtb_DiscreteTimeIntegrator_idx_0 -
    localB->rtb_Saturation1_m_g[0];

  /* Update for DiscreteFilter: '<S44>/soonarFilter_IIR' */
  localDW->soonarFilter_IIR_states[1] = localDW->soonarFilter_IIR_states[0];

  /* Update for Delay: '<S7>/Delay' incorporates:
   *  Sum: '<S7>/Sum'
   */
  localDW->Delay_DSTATE_k[1] = localB->rtb_DiscreteTimeIntegrator_d_idx_1 -
    localB->rtb_Saturation_n[1];

  /* Update for Delay: '<S9>/Delay' incorporates:
   *  Sum: '<S9>/Sum'
   */
  localDW->Delay_DSTATE_l[1] = localB->rtb_DiscreteTimeIntegrator_idx_1 -
    localB->rtb_Saturation1_m_g[1];

  /* Update for DiscreteFilter: '<S44>/soonarFilter_IIR' */
  localDW->soonarFilter_IIR_states[0] = localB->rtb_Reshapexhat_idx_1;

  /* Switch: '<S32>/FixPt Switch' */
  if (localDW->Output_DSTATE_i > localP->WrapToZero_Threshold) {
    /* Update for UnitDelay: '<S25>/Output' incorporates:
     *  Constant: '<S32>/Constant'
     */
    localDW->Output_DSTATE_i = localP->Constant_Value_pd;
  }

  /* End of Switch: '<S32>/FixPt Switch' */

  /* Update for Delay: '<S11>/Delay1' incorporates:
   *  Sum: '<S11>/Sum3'
   */
  localDW->Delay1_DSTATE_d = localB->Gain - localB->rtb_Saturation1_g;
}

/* Model step function */
void flightControlSystem_step(void)
{
  char_T *sErr;

  /* S-Function (sdspFromNetwork): '<Root>/UDP Receive Z' */
  sErr = GetErrorBuffer(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);
  flightControlSystem_B.samplesRead = 24;
  LibOutputs_Network(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U],
                     &flightControlSystem_B.UDPReceiveZ_o1[0U],
                     &flightControlSystem_B.samplesRead);
  if (*sErr != 0) {
    rtmSetErrorStatus(flightControlSystem_M, sErr);
    rtmSetStopRequested(flightControlSystem_M, 1);
  }

  flightControlSystem_B.UDPReceiveZ_o2_m = (uint16_T)
    flightControlSystem_B.samplesRead;

  /* End of S-Function (sdspFromNetwork): '<Root>/UDP Receive Z' */

  /* Outputs for Atomic SubSystem: '<Root>/Flight Control System' */
  /* Inport: '<Root>/AC cmd' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystem_FlightControlSystem(flightControlSystem_M, &cmd_inport,
    &sensor_inport, flightControlSystem_B.UDPReceiveZ_o1,
    flightControlSystem_B.UDPReceiveZ_o2_m,
    flightControlSystem_B.MotorDirections, &flightControlSystem_B.rtb_Constant_c,
    flightControlSystem_B.BufferToMakeInportVirtual_InsertedFor_SendUDP_at_inport_0,
    &flightControlSystem_B.FlightControlSystem,
    &flightControlSystem_DW.FlightControlSystem,
    &flightControlSystem_P.FlightControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Flight Control System' */

  /* SignalConversion: '<Root>/TmpSignal ConversionAtFlight Control SystemOutport1' */
  motors_outport[0] = flightControlSystem_B.MotorDirections[0];
  motors_outport[1] = flightControlSystem_B.MotorDirections[1];
  motors_outport[2] = flightControlSystem_B.MotorDirections[2];
  motors_outport[3] = flightControlSystem_B.MotorDirections[3];

  /* Outport: '<Root>/Actuators' */
  flightControlSystem_Y.Actuators[0] = motors_outport[0];
  flightControlSystem_Y.Actuators[1] = motors_outport[1];
  flightControlSystem_Y.Actuators[2] = motors_outport[2];
  flightControlSystem_Y.Actuators[3] = motors_outport[3];

  /* SignalConversion: '<Root>/TmpSignal ConversionAtFlight Control SystemOutport2' */
  flag_outport = flightControlSystem_B.rtb_Constant_c;

  /* Outport: '<Root>/Flag' */
  flightControlSystem_Y.Flag = flag_outport;

  /* Update for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  sErr = GetErrorBuffer(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&flightControlSystem_DW.UDPSend_NetworkLib[0U],
                    &flightControlSystem_B.BufferToMakeInportVirtual_InsertedFor_SendUDP_at_inport_0
                    [0U], 20);
  if (*sErr != 0) {
    rtmSetErrorStatus(flightControlSystem_M, sErr);
    rtmSetStopRequested(flightControlSystem_M, 1);
  }

  /* End of Update for S-Function (sdspToNetwork): '<Root>/UDP Send' */

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

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  flightControlSystem_M->Timing.taskTime0 =
    (++flightControlSystem_M->Timing.clockTick0) *
    flightControlSystem_M->Timing.stepSize0;
}

/* Model initialize function */
void flightControlSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  flightControlSystem_P.FlightControlSystem.SaturationSonar_LowerSat =
    rtMinusInf;

  /* initialize real-time model */
  (void) memset((void *)flightControlSystem_M, 0,
                sizeof(RT_MODEL_flightControlSystem_T));
  rtmSetTFinal(flightControlSystem_M, 100.0);
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
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&flightControlSystem_Y, 0,
                sizeof(ExtY_flightControlSystem_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(flightControlSystem_M->rtwLogInfo, 0.0,
    rtmGetTFinal(flightControlSystem_M), flightControlSystem_M->Timing.stepSize0,
    (&rtmGetErrorStatus(flightControlSystem_M)));

  {
    char_T *sErr;

    /* SetupRuntimeResources for Atomic SubSystem: '<Root>/Flight Control System' */
    flightControlSystem_FlightControlSystem_SetupRTR(flightControlSystem_M,
      &flightControlSystem_DW.FlightControlSystem);

    /* End of SetupRuntimeResources for SubSystem: '<Root>/Flight Control System' */

    /* Start for S-Function (sdspFromNetwork): '<Root>/UDP Receive Z' */
    sErr = GetErrorBuffer(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);
    CreateUDPInterface(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U], 0,
                        "0.0.0.0", flightControlSystem_P.UDPReceiveZ_Port,
                        "0.0.0.0", -1, 8192, 4, 0);
    }

    if (*sErr == 0) {
      LibStart(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(flightControlSystem_M, sErr);
        rtmSetStopRequested(flightControlSystem_M, 1);
      }
    }

    /* End of Start for S-Function (sdspFromNetwork): '<Root>/UDP Receive Z' */
    /* Start for S-Function (sdspToNetwork): '<Root>/UDP Send' */
    sErr = GetErrorBuffer(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&flightControlSystem_DW.UDPSend_NetworkLib[0U], 1,
                        "0.0.0.0", -1, "192.168.3.2",
                        flightControlSystem_P.UDPSend_Port, 8192, 4, 0);
    }

    if (*sErr == 0) {
      LibStart(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(flightControlSystem_M, sErr);
        rtmSetStopRequested(flightControlSystem_M, 1);
      }
    }

    /* End of Start for S-Function (sdspToNetwork): '<Root>/UDP Send' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/Flight Control System' */
    flightControlSystem_FlightControlSystem_Init
      (&flightControlSystem_B.FlightControlSystem,
       &flightControlSystem_DW.FlightControlSystem,
       &flightControlSystem_P.FlightControlSystem);

    /* End of SystemInitialize for SubSystem: '<Root>/Flight Control System' */
  }
}

/* Model terminate function */
void flightControlSystem_terminate(void)
{
  char_T *sErr;

  /* Terminate for S-Function (sdspFromNetwork): '<Root>/UDP Receive Z' */
  sErr = GetErrorBuffer(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);
  LibTerminate(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(flightControlSystem_M, sErr);
    rtmSetStopRequested(flightControlSystem_M, 1);
  }

  LibDestroy(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U], 0);
  DestroyUDPInterface(&flightControlSystem_DW.UDPReceiveZ_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspFromNetwork): '<Root>/UDP Receive Z' */
  /* Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send' */
  sErr = GetErrorBuffer(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(flightControlSystem_M, sErr);
    rtmSetStopRequested(flightControlSystem_M, 1);
  }

  LibDestroy(&flightControlSystem_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&flightControlSystem_DW.UDPSend_NetworkLib[0U]);

  /* End of Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
