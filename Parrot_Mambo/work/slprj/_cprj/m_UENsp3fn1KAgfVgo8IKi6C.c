/* Include files */

#include "modelInterface.h"
#include "m_UENsp3fn1KAgfVgo8IKi6C.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "TCPReceive",                        /* fcnName */
  "/home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/parrot/+parrot/TCPReceive.p"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "TCPReceive",                        /* fcnName */
  "/home/cerlabcontrol/Documents/MATLAB/SupportPackages/R2019a/toolbox/target/supportpackages/shared_linuxservices/+sharedlinux/TCP"
  "Receive.p"                          /* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/usr/local/MATLAB/R2019a/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/usr/local/MATLAB/R2019a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/usr/local/MATLAB/R2019a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "/usr/local/MATLAB/R2019a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "/usr/local/MATLAB/R2019a/toolbox/matlab/system/+matlab/+system/+mixin/+internal/CustomIcon.p"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 43,  /* lineNo */
  "ExternalDependency",                /* fcnName */
  "/usr/local/MATLAB/R2019a/toolbox/shared/coder/coder/+coder/ExternalDependency.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 1,   /* lineNo */
  "SampleTime",                        /* fcnName */
  "/usr/local/MATLAB/R2019a/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/+internal/SampleTime.p"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 11,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 27,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 32,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/usr/local/MATLAB/R2019a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__reset(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp, real32_T *c_y0, uint8_T *c_y1);
static const mxArray *emlrt_marshallOut(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static parrot_TCPReceive b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *
  b_sysobj, const char_T *identifier);
static parrot_TCPReceive c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *
  u, const emlrtMsgIdentifier *parentId);
static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, moduleInstance->b_y0,
    moduleInstance->b_y1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  parrot_TCPReceive *obj;
  char_T u[51];
  emlrtStack d_st;
  int32_T i0;
  emlrtStack e_st;
  char_T b_u[44];
  const mxArray *y;
  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 51 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv1[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 51 };

  char_T e_u[5];
  static const int32_T iv3[2] = { 1, 44 };

  const mxArray *c_y;
  static char_T f_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv4[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    e_st.site = &e_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &g_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &h_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &i_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = c_u[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(&st, 51, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = c_u[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 51, m0, &u[0]);
    emlrtAssign(&b_y, m0);
    for (i0 = 0; i0 < 5; i0++) {
      e_u[i0] = f_u[i0];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&st, 5, m0, &e_u[0]);
    emlrtAssign(&c_y, m0);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    for (i0 = 0; i0 < 44; i0++) {
      b_u[i0] = d_u[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 44, m0, &b_u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 44; i0++) {
      b_u[i0] = d_u[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 44, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    c_st.site = &e_emlrtRSI;
    error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->TunablePropsChanged = false;
}

static void mw__internal__call__reset(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  parrot_TCPReceive *obj;
  emlrtStack c_st;
  char_T u[45];
  emlrtStack d_st;
  boolean_T tunablePropChangedBeforeResetImpl;
  int32_T i1;
  emlrtStack e_st;
  char_T b_u[44];
  const mxArray *y;
  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m1;
  static const int32_T iv5[2] = { 1, 45 };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv6[2] = { 1, 44 };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 45 };

  static const int32_T iv8[2] = { 1, 44 };

  char_T e_u[5];
  const mxArray *c_y;
  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv9[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    e_st.site = &e_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &g_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &h_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &i_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &l_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = c_u[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&st, 45, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = c_u[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(&st, 45, m1, &u[0]);
    emlrtAssign(&b_y, m1);
    for (i1 = 0; i1 < 5; i1++) {
      e_u[i1] = f_u[i1];
    }

    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(&st, 5, m1, &e_u[0]);
    emlrtAssign(&c_y, m1);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    for (i1 = 0; i1 < 44; i1++) {
      b_u[i1] = d_u[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(&st, 44, m1, &b_u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 44; i1++) {
      b_u[i1] = d_u[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(&st, 44, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp, real32_T *c_y0, uint8_T *c_y1)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  parrot_TCPReceive *obj;
  char_T u[45];
  int32_T i2;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *m2;
  static const int32_T iv10[2] = { 1, 45 };

  char_T d_u[44];
  static char_T e_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv11[2] = { 1, 51 };

  static char_T f_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 44 };

  static const int32_T iv13[2] = { 1, 45 };

  static const int32_T iv14[2] = { 1, 44 };

  char_T g_u[4];
  static const int32_T iv15[2] = { 1, 51 };

  const mxArray *c_y;
  static char_T h_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv16[2] = { 1, 44 };

  char_T i_u[5];
  static const int32_T iv17[2] = { 1, 4 };

  static const int32_T iv18[2] = { 1, 44 };

  static char_T j_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv19[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &j_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    e_st.site = &e_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &f_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &g_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &h_emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &i_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &m_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = b_u[i2];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(&st, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i2 = 0; i2 < 45; i2++) {
      u[i2] = b_u[i2];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(&st, 45, m2, &u[0]);
    emlrtAssign(&b_y, m2);
    for (i2 = 0; i2 < 4; i2++) {
      g_u[i2] = h_u[i2];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(&st, 4, m2, &g_u[0]);
    emlrtAssign(&c_y, m2);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    if (obj->isInitialized != 0) {
      for (i2 = 0; i2 < 51; i2++) {
        c_u[i2] = e_u[i2];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(&c_st, 51, m2, &c_u[0]);
      emlrtAssign(&y, m2);
      for (i2 = 0; i2 < 51; i2++) {
        c_u[i2] = e_u[i2];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(&c_st, 51, m2, &c_u[0]);
      emlrtAssign(&b_y, m2);
      for (i2 = 0; i2 < 5; i2++) {
        i_u[i2] = j_u[i2];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(&c_st, 5, m2, &i_u[0]);
      emlrtAssign(&c_y, m2);
      d_st.site = &e_emlrtRSI;
      error(&d_st, y, getString(&d_st, message(&d_st, b_y, c_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;
    d_st.site = &e_emlrtRSI;
    if (obj->TunablePropsChanged) {
      for (i2 = 0; i2 < 44; i2++) {
        d_u[i2] = f_u[i2];
      }

      y = NULL;
      m2 = emlrtCreateCharArray(2, iv14);
      emlrtInitCharArrayR2013a(&d_st, 44, m2, &d_u[0]);
      emlrtAssign(&y, m2);
      for (i2 = 0; i2 < 44; i2++) {
        d_u[i2] = f_u[i2];
      }

      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv18);
      emlrtInitCharArrayR2013a(&d_st, 44, m2, &d_u[0]);
      emlrtAssign(&b_y, m2);
      e_st.site = &e_emlrtRSI;
      error(&e_st, y, getString(&e_st, b_message(&e_st, b_y, &emlrtMCI),
             &emlrtMCI), &emlrtMCI);
    }

    obj->TunablePropsChanged = false;
  }

  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  b_st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    for (i2 = 0; i2 < 44; i2++) {
      d_u[i2] = f_u[i2];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(&b_st, 44, m2, &d_u[0]);
    emlrtAssign(&y, m2);
    for (i2 = 0; i2 < 44; i2++) {
      d_u[i2] = f_u[i2];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv16);
    emlrtInitCharArrayR2013a(&b_st, 44, m2, &d_u[0]);
    emlrtAssign(&b_y, m2);
    c_st.site = &e_emlrtRSI;
    error(&c_st, y, getString(&c_st, b_message(&c_st, b_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  *c_y0 = 0.0F;
  *c_y1 = 0U;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  const mxArray *y;
  int32_T hoistedGlobal_isInitialized;
  boolean_T hoistedGlobal_TunablePropsChanged;
  const mxArray *b_y;
  static const char * sv0[2] = { "isInitialized", "TunablePropsChanged" };

  const mxArray *c_y;
  const mxArray *m3;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  hoistedGlobal_isInitialized = moduleInstance->sysobj.isInitialized;
  hoistedGlobal_TunablePropsChanged = moduleInstance->sysobj.TunablePropsChanged;
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv0));
  c_y = NULL;
  m3 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m3) = hoistedGlobal_isInitialized;
  emlrtAssign(&c_y, m3);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  c_y = NULL;
  m3 = emlrtCreateLogicalScalar(hoistedGlobal_TunablePropsChanged);
  emlrtAssign(&c_y, m3);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", c_y, 1);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m3 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m3);
  emlrtSetCell(y, 1, b_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  moduleInstance->sysobj = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp,
    "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static parrot_TCPReceive b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *
  b_sysobj, const char_T *identifier)
{
  parrot_TCPReceive y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static parrot_TCPReceive c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *
  u, const emlrtMsgIdentifier *parentId)
{
  parrot_TCPReceive y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "isInitialized", "TunablePropsChanged" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 2, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y.TunablePropsChanged = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m4;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m5;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m6;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 1, &pArray, "message", true, location);
}

static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_UENsp3fn1KAgfVgo8IKi6C
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (real32_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y1 = (uint8_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
}

/* CGXE Glue Code */
static void mdlOutputs_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S, int_T tid)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S, int_T tid)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S)
{
  InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *moduleInstance =
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C *)calloc(1, sizeof
    (InstanceStruct_UENsp3fn1KAgfVgo8IKi6C));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_UENsp3fn1KAgfVgo8IKi6C);
  ssSetmdlInitializeConditions(S, mdlInitialize_UENsp3fn1KAgfVgo8IKi6C);
  ssSetmdlUpdate(S, mdlUpdate_UENsp3fn1KAgfVgo8IKi6C);
  ssSetmdlTerminate(S, mdlTerminate_UENsp3fn1KAgfVgo8IKi6C);
  ssSetmdlEnable(S, mdlEnable_UENsp3fn1KAgfVgo8IKi6C);
  ssSetmdlDisable(S, mdlDisable_UENsp3fn1KAgfVgo8IKi6C);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S)
{
}

void method_dispatcher_UENsp3fn1KAgfVgo8IKi6C(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_UENsp3fn1KAgfVgo8IKi6C(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_UENsp3fn1KAgfVgo8IKi6C(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_UENsp3fn1KAgfVgo8IKi6C(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_UENsp3fn1KAgfVgo8IKi6C(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: UENsp3fn1KAgfVgo8IKi6C.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_UENsp3fn1KAgfVgo8IKi6C_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,2);
  elem_9 = mxCreateString("sharedlinux.TCPReceive");
  mxSetCell(elem_8,0,elem_9);
  elem_10 = mxCreateString("parrot.TCPReceive");
  mxSetCell(elem_8,1,elem_10);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_11 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_11);
  return mxBIArgs;
}

mxArray *cgxe_UENsp3fn1KAgfVgo8IKi6C_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString("sharedlinux.TCPReceive");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
