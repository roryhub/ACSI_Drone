#ifndef __twPWPATLEtznVsbHbsFhPE_h__
#define __twPWPATLEtznVsbHbsFhPE_h__

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

#ifndef typedef_InstanceStruct_twPWPATLEtznVsbHbsFhPE
#define typedef_InstanceStruct_twPWPATLEtznVsbHbsFhPE

typedef struct {
  SimStruct *S;
  parrot_TCPReceive sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real32_T (*b_y0)[3];
  uint8_T *b_y1;
} InstanceStruct_twPWPATLEtznVsbHbsFhPE;

#endif                                 /*typedef_InstanceStruct_twPWPATLEtznVsbHbsFhPE*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_twPWPATLEtznVsbHbsFhPE(SimStruct *S, int_T method,
  void* data);

#endif
