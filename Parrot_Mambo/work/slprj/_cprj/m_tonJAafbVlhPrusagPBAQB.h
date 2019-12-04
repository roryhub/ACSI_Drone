#ifndef __tonJAafbVlhPrusagPBAQB_h__
#define __tonJAafbVlhPrusagPBAQB_h__

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

#ifndef typedef_InstanceStruct_tonJAafbVlhPrusagPBAQB
#define typedef_InstanceStruct_tonJAafbVlhPrusagPBAQB

typedef struct {
  SimStruct *S;
  parrot_TCPReceive sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real32_T *b_y0;
  uint8_T *b_y1;
} InstanceStruct_tonJAafbVlhPrusagPBAQB;

#endif                                 /*typedef_InstanceStruct_tonJAafbVlhPrusagPBAQB*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_tonJAafbVlhPrusagPBAQB(SimStruct *S, int_T method,
  void* data);

#endif
