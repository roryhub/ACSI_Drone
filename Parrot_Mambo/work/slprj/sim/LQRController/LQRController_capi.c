#include "__cf_LQRController.h"
#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "LQRController_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "LQRController.h"
#include "LQRController_capi.h"
#include "LQRController_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"LQRController/Flight Controller/Attitude/Discrete-Time\nIntegrator" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING ( "LQRController/Flight Controller/Attitude/Delay" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , (
NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void LQRController_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & nbdi3cnq2zs . oyjmg5nukc [ 0 ] ) ; dataAddr [
1 ] = ( void * ) ( & nbdi3cnq2zs . a53ldxncw0 [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void LQRController_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void LQRController_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , SS_SINGLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 2 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.005 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 5 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] =
{ { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 5 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3990771490U , 1141947690U , 114593681U ,
841466400U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * LQRController_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void LQRController_InitializeSystemRan ( ngccdsza2k * const cubqa5cfpt
, sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( cubqa5cfpt ) ; systemRan [ 0 ] = (
sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ]
= ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ;
systemTid [ 1 ] = iz5q3ft5yx [ 0 ] ; systemTid [ 2 ] = iz5q3ft5yx [ 0 ] ;
systemTid [ 3 ] = iz5q3ft5yx [ 0 ] ; systemTid [ 4 ] = iz5q3ft5yx [ 0 ] ;
systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1
] = 0 ; rtContextSystems [ 2 ] = 0 ; rtContextSystems [ 3 ] = 0 ;
rtContextSystems [ 4 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void LQRController_InitializeDataMapInfo ( ngccdsza2k * const cubqa5cfpt ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( cubqa5cfpt ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( cubqa5cfpt -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( cubqa5cfpt -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; LQRController_InitializeDataAddr (
cubqa5cfpt -> DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap (
cubqa5cfpt -> DataMapInfo . mmi , cubqa5cfpt -> DataMapInfo . dataAddress ) ;
LQRController_InitializeVarDimsAddr ( cubqa5cfpt -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( cubqa5cfpt -> DataMapInfo .
mmi , cubqa5cfpt -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
cubqa5cfpt -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
cubqa5cfpt -> DataMapInfo . mmi , ( NULL ) ) ;
LQRController_InitializeLoggingFunctions ( cubqa5cfpt -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( cubqa5cfpt -> DataMapInfo . mmi ,
cubqa5cfpt -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
cubqa5cfpt -> DataMapInfo . mmi , & cubqa5cfpt -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( cubqa5cfpt -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( cubqa5cfpt -> DataMapInfo .
mmi , 0 ) ; LQRController_InitializeSystemRan ( cubqa5cfpt , cubqa5cfpt ->
DataMapInfo . systemRan , cubqa5cfpt -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( cubqa5cfpt -> DataMapInfo . mmi ,
cubqa5cfpt -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( cubqa5cfpt
-> DataMapInfo . mmi , cubqa5cfpt -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( cubqa5cfpt -> DataMapInfo . mmi , & iz5q3ft5yx [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void LQRController_host_InitializeDataMapInfo (
LQRController_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
