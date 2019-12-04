#include "__cf_LQRController.h"
#ifndef RTW_HEADER_LQRController_h_
#define RTW_HEADER_LQRController_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef LQRController_COMMON_INCLUDES_
#define LQRController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "LQRController_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#ifndef LQRController_MDLREF_HIDE_CHILD_
typedef struct { real32_T kik3lh0wkt [ 16 ] ; real32_T bkfpouu1bj [ 2 ] ;
real32_T gjeictcnyn [ 2 ] ; } klfdbytyi4j ;
#endif
#ifndef LQRController_MDLREF_HIDE_CHILD_
typedef struct { real32_T oyjmg5nukc [ 2 ] ; real32_T a53ldxncw0 [ 2 ] ; }
dbr2eibckru ;
#endif
#ifndef LQRController_MDLREF_HIDE_CHILD_
struct cxdwrpl0bt1_ { real32_T P_12 ; real32_T P_13 ; real32_T P_14 ;
real32_T P_15 ; real32_T P_16 [ 16 ] ; real32_T P_17 ; real32_T P_18 ;
real32_T P_19 ; real32_T P_20 ; real32_T P_21 ; real32_T P_22 ; real32_T P_23
; real32_T P_24 ; real32_T P_25 [ 4 ] ; real32_T P_26 ; uint32_T P_27 ; } ;
#endif
#ifndef LQRController_MDLREF_HIDE_CHILD_
struct dlrso34tz2 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 2 ] ; int32_T * vardimsAddress [ 2
] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ; sysRanDType * systemRan [ 5 ] ;
int_T systemTid [ 5 ] ; } DataMapInfo ; } ;
#endif
#ifndef LQRController_MDLREF_HIDE_CHILD_
typedef struct { ngccdsza2k rtm ; } kkc5cbrehsh ;
#endif
extern real32_T rtP_D_pr [ 2 ] ; extern real32_T rtP_D_xy [ 2 ] ; extern
real32_T rtP_D_yaw ; extern real32_T rtP_D_z ; extern real32_T rtP_I_antiWU ;
extern real32_T rtP_I_pr ; extern real32_T rtP_I_satLimitHigh ; extern
real32_T rtP_I_satLimitLow ; extern real32_T rtP_P_pr [ 2 ] ; extern real32_T
rtP_P_xy [ 2 ] ; extern real32_T rtP_P_yaw ; extern real32_T rtP_P_z ; extern
void ohna1xq3se ( void ) ; extern void cbnzz2em1a ( void ) ; extern void
jg4iem35id ( void ) ; extern void jg4iem35idTID1 ( void ) ; extern void
LQRController ( const CommandBus * baz2tcc15h , const statesEstim_t *
hoidmbs2f4 , real32_T f0wb31uyrb [ 4 ] , real32_T kjxtsulcho [ 8 ] ) ; extern
void LQRControllerTID1 ( void ) ; extern void nnptf5plbm ( void ) ; extern
void an43snish4 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_LQRController_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_LQRController_GetDWork ( ) ; extern void mr_LQRController_SetDWork ( const
mxArray * ssDW ) ; extern void mr_LQRController_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray *
mr_LQRController_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * LQRController_GetCAPIStaticMap ( void ) ;
void mr_LQRController_CreateInitRestoreData ( ) ; void
mr_LQRController_CopyFromInitRestoreData ( ) ; void
mr_LQRController_DestroyInitRestoreData ( ) ;
#ifndef LQRController_MDLREF_HIDE_CHILD_
extern kkc5cbrehsh kkc5cbrehs ;
#endif
#ifndef LQRController_MDLREF_HIDE_CHILD_
extern klfdbytyi4j l4bboq2agqb ; extern dbr2eibckru nbdi3cnq2zs ;
#endif
#endif
