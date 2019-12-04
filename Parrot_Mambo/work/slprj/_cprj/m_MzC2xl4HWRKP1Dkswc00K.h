#ifndef __MzC2xl4HWRKP1Dkswc00K_h__
#define __MzC2xl4HWRKP1Dkswc00K_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_parrot_TCPReceive
#define typedef_parrot_TCPReceive

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
} parrot_TCPReceive;

#endif                                 /*typedef_parrot_TCPReceive*/

#ifndef typedef_InstanceStruct_MzC2xl4HWRKP1Dkswc00K
#define typedef_InstanceStruct_MzC2xl4HWRKP1Dkswc00K

typedef struct {
  SimStruct *S;
  parrot_TCPReceive sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real32_T *b_y0;
  uint8_T *b_y1;
} InstanceStruct_MzC2xl4HWRKP1Dkswc00K;

#endif                                 /*typedef_InstanceStruct_MzC2xl4HWRKP1Dkswc00K*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_MzC2xl4HWRKP1Dkswc00K(SimStruct *S, int_T method,
  void* data);

#endif
