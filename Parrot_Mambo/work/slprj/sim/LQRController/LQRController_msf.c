#include "__cf_LQRController.h"
#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME LQRController_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define rt_logging_h
#include "LQRController_types.h"
#include "LQRController.h"
#include "LQRController_private.h"
real32_T rtP_D_pr [ 2 ] = { 0.002F , 0.0028F } ; real32_T rtP_D_xy [ 2 ] = {
0.1F , - 0.1F } ; real32_T rtP_D_yaw = 0.0012F ; real32_T rtP_D_z = 0.3F ;
real32_T rtP_I_antiWU = 0.001F ; real32_T rtP_I_pr = 0.01F ; real32_T
rtP_I_satLimitHigh = 2.0F ; real32_T rtP_I_satLimitLow = - 2.0F ; real32_T
rtP_P_pr [ 2 ] = { 0.013F , 0.01F } ; real32_T rtP_P_xy [ 2 ] = { - 0.24F ,
0.24F } ; real32_T rtP_P_yaw = 0.004F ; real32_T rtP_P_z = 0.8F ; const char
* rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const char *
rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( SimStruct * S , void * diag ) { if ( !
_ssIsErrorStatusAslErrMsg ( S ) ) { _ssSet_slErrMsg ( S , diag ) ; } else {
_ssDiscardDiagnostic ( S , diag ) ; } } void rt_ssReportDiagnosticAsWarning (
SimStruct * S , void * diag ) { _ssReportDiagnosticAsWarning ( S , diag ) ; }
const char * rt_CreateFullPathToTop ( const char * toppath , const char *
subpath ) { char * fullpath = NULL ; slmrCreateFullPathToTop ( toppath ,
subpath , & fullpath ) ; return fullpath ; } boolean_T
slIsRapidAcceleratorSimulating ( void ) { return false ; } void
rt_RAccelReplaceFromFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void rt_RAccelReplaceToFilename (
const char * blockpath , char * fileName ) { ( void ) blockpath ; ( void )
fileName ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { real32_T * GlobalPrm_0 =
( real32_T * ) NULL ; real32_T * GlobalPrm_1 = ( real32_T * ) NULL ; real32_T
* GlobalPrm_2 = ( real32_T * ) NULL ; real32_T * GlobalPrm_3 = ( real32_T * )
NULL ; real32_T * GlobalPrm_4 = ( real32_T * ) NULL ; real32_T * GlobalPrm_5
= ( real32_T * ) NULL ; real32_T * GlobalPrm_6 = ( real32_T * ) NULL ;
real32_T * GlobalPrm_7 = ( real32_T * ) NULL ; real32_T * GlobalPrm_8 = (
real32_T * ) NULL ; real32_T * GlobalPrm_9 = ( real32_T * ) NULL ; real32_T *
GlobalPrm_10 = ( real32_T * ) NULL ; real32_T * GlobalPrm_11 = ( real32_T * )
NULL ; if ( ! ssGetModelRefGlobalParamData ( S , 0 , ( void * * ) ( &
GlobalPrm_0 ) ) ) return ; if ( GlobalPrm_0 != NULL ) { ( void ) memcpy ( & (
rtP_D_pr [ 0 ] ) , GlobalPrm_0 , sizeof ( real32_T ) * 2 ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 1 , ( void * * ) ( & GlobalPrm_1 ) ) )
return ; if ( GlobalPrm_1 != NULL ) { ( void ) memcpy ( & ( rtP_D_xy [ 0 ] )
, GlobalPrm_1 , sizeof ( real32_T ) * 2 ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 2 , ( void * * ) ( & GlobalPrm_2 ) ) )
return ; if ( GlobalPrm_2 != NULL ) { ( void ) memcpy ( & ( rtP_D_yaw ) ,
GlobalPrm_2 , sizeof ( real32_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 3 , ( void * * ) ( & GlobalPrm_3 ) ) ) return ; if ( GlobalPrm_3 != NULL
) { ( void ) memcpy ( & ( rtP_D_z ) , GlobalPrm_3 , sizeof ( real32_T ) ) ; }
if ( ! ssGetModelRefGlobalParamData ( S , 4 , ( void * * ) ( & GlobalPrm_4 )
) ) return ; if ( GlobalPrm_4 != NULL ) { ( void ) memcpy ( & ( rtP_I_antiWU
) , GlobalPrm_4 , sizeof ( real32_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 5 , ( void * * ) ( & GlobalPrm_5 ) ) )
return ; if ( GlobalPrm_5 != NULL ) { ( void ) memcpy ( & ( rtP_I_pr ) ,
GlobalPrm_5 , sizeof ( real32_T ) ) ; } if ( ! ssGetModelRefGlobalParamData (
S , 6 , ( void * * ) ( & GlobalPrm_6 ) ) ) return ; if ( GlobalPrm_6 != NULL
) { ( void ) memcpy ( & ( rtP_I_satLimitHigh ) , GlobalPrm_6 , sizeof (
real32_T ) ) ; } if ( ! ssGetModelRefGlobalParamData ( S , 7 , ( void * * ) (
& GlobalPrm_7 ) ) ) return ; if ( GlobalPrm_7 != NULL ) { ( void ) memcpy ( &
( rtP_I_satLimitLow ) , GlobalPrm_7 , sizeof ( real32_T ) ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 8 , ( void * * ) ( & GlobalPrm_8 ) ) )
return ; if ( GlobalPrm_8 != NULL ) { ( void ) memcpy ( & ( rtP_P_pr [ 0 ] )
, GlobalPrm_8 , sizeof ( real32_T ) * 2 ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 9 , ( void * * ) ( & GlobalPrm_9 ) ) )
return ; if ( GlobalPrm_9 != NULL ) { ( void ) memcpy ( & ( rtP_P_xy [ 0 ] )
, GlobalPrm_9 , sizeof ( real32_T ) * 2 ) ; } if ( !
ssGetModelRefGlobalParamData ( S , 10 , ( void * * ) ( & GlobalPrm_10 ) ) )
return ; if ( GlobalPrm_10 != NULL ) { ( void ) memcpy ( & ( rtP_P_yaw ) ,
GlobalPrm_10 , sizeof ( real32_T ) ) ; } if ( ! ssGetModelRefGlobalParamData
( S , 11 , ( void * * ) ( & GlobalPrm_11 ) ) ) return ; if ( GlobalPrm_11 !=
NULL ) { ( void ) memcpy ( & ( rtP_P_z ) , GlobalPrm_11 , sizeof ( real32_T )
) ; } }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { ohna1xq3se ( ) ; }
static void mdlReset ( SimStruct * S ) { cbnzz2em1a ( ) ; } static void
mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { const CommandBus *
i_ROOT_U0 = ( CommandBus * ) ssGetInputPortSignal ( S , 0 ) ; const
statesEstim_t * i_csuuurvcj0 = ( statesEstim_t * ) ssGetInputPortSignal ( S ,
1 ) ; real32_T * o_B_4_2 = ( real32_T * ) ssGetOutputPortSignal ( S , 0 ) ;
real32_T * o_B_4_1 = ( real32_T * ) ssGetOutputPortSignal ( S , 1 ) ; if (
tid == 0 ) { LQRController ( i_ROOT_U0 , i_csuuurvcj0 , o_B_4_2 , o_B_4_1 ) ;
jg4iem35id ( ) ; } } static void mdlInitializeSizes ( SimStruct * S ) { if (
( S -> mdlInfo -> genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo ->
genericFcn ) ( S , GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL )
) ) ) { return ; } ssSetNumSFcnParams ( S , 0 ) ;
ssFxpSetU32BitRegionCompliant ( S , 1 ) ; rt_InitInfAndNaN ( sizeof ( real_T
) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; } ssSetRTWGeneratedSFcn ( S , 2 ) ;
ssSetNumContStates ( S , 0 ) ; ssSetNumDiscStates ( S , 0 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
2 , 2 ) ; if ( ! ssSetNumInputPorts ( S , 2 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg ; ssRegisterTypeFromNamedObject ( S , "CommandBus" ,
& dataTypeIdReg ) ; if ( dataTypeIdReg == INVALID_DTYPE_ID ) return ;
ssSetInputPortDataType ( S , 0 , dataTypeIdReg ) ; }
#endif
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.005 ) ;
ssSetInputPortOffsetTime ( S , 0 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg ; ssRegisterTypeFromNamedObject ( S , "statesEstim_t"
, & dataTypeIdReg ) ; if ( dataTypeIdReg == INVALID_DTYPE_ID ) return ;
ssSetInputPortDataType ( S , 1 , dataTypeIdReg ) ; }
#endif
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.005 ) ;
ssSetInputPortOffsetTime ( S , 1 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 2
) ) return ; if ( ! ssSetOutputPortVectorDimension ( S , 0 , 4 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.005 ) ; ssSetOutputPortOffsetTime ( S
, 0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 8 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.005 ) ; ssSetOutputPortOffsetTime ( S
, 1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 1 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_LOCAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_LQRController_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S , 2
) ; ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; } ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 1 ) ; ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetRuntimeThreadSafetyCompliance ( S ,
RUNTIME_THREAD_SAFETY_COMPLIANCE_TRUE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_LQRController_MdlInfoRegFcn ( S , "LQRController" , & retVal ) ; if ( !
retVal ) return ; }
#endif
ssSetNumDWork ( S , 0 ) ; slmrRegisterSystemInitializeMethod ( S ,
mdlInitializeConditions ) ; slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "9.3" ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { ssSetSampleTime ( S , 0 , 0.005
) ; ssSetOffsetTime ( S , 0 , 0 ) ; ssSetSampleTime ( S , 1 , mxGetInf ( ) )
; ssSetOffsetTime ( S , 1 , 0 ) ; return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { void * sysRanPtr = (
NULL ) ; int sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ;
ssGetContextSysTid ( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid
= 0 ; } an43snish4 ( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , true ) , sysRanPtr , sysTid , (
NULL ) , ( NULL ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( kkc5cbrehs
. rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) )
{ _GenericFcn fcn = S -> mdlInfo -> genericFcn ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { mdlProcessParameters ( S ) ; }
static void mdlOutputs ( SimStruct * S , int_T tid ) { const CommandBus *
i_ROOT_U0 = ( CommandBus * ) ssGetInputPortSignal ( S , 0 ) ; const
statesEstim_t * i_csuuurvcj0 = ( statesEstim_t * ) ssGetInputPortSignal ( S ,
1 ) ; real32_T * o_B_4_2 = ( real32_T * ) ssGetOutputPortSignal ( S , 0 ) ;
real32_T * o_B_4_1 = ( real32_T * ) ssGetOutputPortSignal ( S , 1 ) ; if (
tid == PARAMETER_TUNING_TID ) { LQRControllerTID1 ( ) ; } if ( tid !=
CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { LQRController ( i_ROOT_U0 ,
i_csuuurvcj0 , o_B_4_2 , o_B_4_1 ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { jg4iem35id ( ) ; return
; } static void mdlTerminate ( SimStruct * S ) { nnptf5plbm ( ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 5 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , } ; mxArray * ss = mxCreateStructMatrix ( 1 , 1 , 5 ,
simStateFieldNames ) ; { const real_T * localX = ( const real_T * )
ssGetContStates ( S ) ; const int_T numStates = ssGetNumContStates ( S ) ;
const size_t numBytes = numStates * sizeof ( real_T ) ; mxArray * storedX =
mxCreateNumericMatrix ( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T *
rawData = ( UINT8_T * ) mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] ,
localX , numBytes ) ; mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } {
mxArray * mdlrefDW = mr_LQRController_GetDWork ( ) ; mxSetFieldByNumber ( ss
, 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_LQRController_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss ,
0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar (
( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { { real_T
* localX = ( real_T * ) ssGetContStates ( S ) ; const int_T numStates =
ssGetNumContStates ( S ) ; const size_t numBytes = numStates * sizeof (
real_T ) ; const mxArray * storedX = mxGetFieldByNumber ( ss , 0 , 0 ) ;
const UINT8_T * rawData = ( const UINT8_T * ) mxGetData ( storedX ) ; memcpy
( localX , & rawData [ 0 ] , numBytes ) ; } mr_LQRController_SetDWork (
mxGetFieldByNumber ( ss , 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar
( mxGetFieldByNumber ( ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T )
mxGetScalar ( mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
