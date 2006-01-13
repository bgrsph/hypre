/*
 * File:          bHYPRE_SStructSplit_IOR.c
 * Symbol:        bHYPRE.SStructSplit-v1.0.0
 * Symbol Type:   class
 * Babel Version: 0.10.12
 * Description:   Intermediate Object Representation for bHYPRE.SStructSplit
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.10.12
 */

#include "sidl_rmi_InstanceHandle.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "bHYPRE_SStructSplit_IOR.h"
#ifndef included_sidl_BaseClass_Impl_h
#include "sidl_BaseClass_Impl.h"
#endif
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_ClassInfoI_h
#include "sidl_ClassInfoI.h"
#endif

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t bHYPRE_SStructSplit__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &bHYPRE_SStructSplit__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &bHYPRE_SStructSplit__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &bHYPRE_SStructSplit__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

/*
 * Static variables to hold version of IOR
 */

static const int32_t s_IOR_MAJOR_VERSION = 0;
static const int32_t s_IOR_MINOR_VERSION = 9;

/*
 * Static variable to hold shared ClassInfo interface.
 */

static sidl_ClassInfo s_classInfo = NULL;
static int s_classInfo_init = 1;

/*
 * Static variable to make sure _load called no more than once
 */

static int s_load_called = 0;
/*
 * Static variables for managing EPV initialization.
 */

static int s_method_initialized = 0;
static int s_static_initialized = 0;

static struct bHYPRE_SStructSplit__epv  s_new_epv__bhypre_sstructsplit;
static struct bHYPRE_SStructSplit__sepv s_stc_epv__bhypre_sstructsplit;

static struct bHYPRE_Operator__epv s_new_epv__bhypre_operator;

static struct bHYPRE_Solver__epv s_new_epv__bhypre_solver;

static struct sidl_BaseClass__epv  s_new_epv__sidl_baseclass;
static struct sidl_BaseClass__epv* s_old_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_new_epv__sidl_baseinterface;
static struct sidl_BaseInterface__epv* s_old_epv__sidl_baseinterface;

/*
 * Declare EPV routines defined in the skeleton file.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern void bHYPRE_SStructSplit__set_epv(
  struct bHYPRE_SStructSplit__epv* epv);
extern void bHYPRE_SStructSplit__set_sepv(
  struct bHYPRE_SStructSplit__sepv* sepv);
extern void bHYPRE_SStructSplit__call_load(void);
#ifdef __cplusplus
}
#endif

static void
bHYPRE_SStructSplit_addRef__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_addRef)(
    self);

  /* pack return value */
  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_deleteRef__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_deleteRef)(
    self);

  /* pack return value */
  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_isSame__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct sidl_BaseInterface__object* iobj = 0;
  sidl_bool _retval = FALSE;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_isSame)(
    self,
    iobj);

  /* pack return value */
  sidl_io_Serializer_packBool( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_queryInt__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  struct sidl_BaseInterface__object* _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_queryInt)(
    self,
    name);

  /* pack return value */
  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_isType__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  sidl_bool _retval = FALSE;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_isType)(
    self,
    name);

  /* pack return value */
  sidl_io_Serializer_packBool( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_getClassInfo__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct sidl_ClassInfo__object* _retval = 0;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getClassInfo)(
    self);

  /* pack return value */
  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetCommunicator__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* mpi_comm_str= NULL;
  struct bHYPRE_MPICommunicator__object* mpi_comm= NULL;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "mpi_comm", &mpi_comm_str, _ex2);
  mpi_comm = 
    skel_bHYPRE_SStructSplit_fconnect_bHYPRE_MPICommunicator(mpi_comm_str,
    _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetCommunicator)(
    self,
    mpi_comm);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetIntParameter__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  int32_t value = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);
  sidl_io_Deserializer_unpackInt( inArgs, "value", &value, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetIntParameter)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetDoubleParameter__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  double value = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);
  sidl_io_Deserializer_unpackDouble( inArgs, "value", &value, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetDoubleParameter)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetStringParameter__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  char* value= NULL;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);
  sidl_io_Deserializer_unpackString( inArgs, "value", &value, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetStringParameter)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetIntArray1Parameter__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  struct sidl_int__array* value = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetIntArray1Parameter)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetIntArray2Parameter__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  struct sidl_int__array* value = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetIntArray2Parameter)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetDoubleArray1Parameter__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  struct sidl_double__array* value = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetDoubleArray1Parameter)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetDoubleArray2Parameter__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  struct sidl_double__array* value = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetDoubleArray2Parameter)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_GetIntValue__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  int32_t value_tmp = 0;
  int32_t* value= &value_tmp;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_GetIntValue)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */
  sidl_io_Serializer_packInt( outArgs, "value", *value, _ex2);

}

static void
bHYPRE_SStructSplit_GetDoubleValue__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  double value_tmp = 0;
  double* value= &value_tmp;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_GetDoubleValue)(
    self,
    name,
    value);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */
  sidl_io_Serializer_packDouble( outArgs, "value", *value, _ex2);

}

static void
bHYPRE_SStructSplit_Setup__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct bHYPRE_Vector__object* b = 0;
  struct bHYPRE_Vector__object* x = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_Setup)(
    self,
    b,
    x);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_Apply__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct bHYPRE_Vector__object* b = 0;
  struct bHYPRE_Vector__object* x_tmp = 0;
  struct bHYPRE_Vector__object** x= &x_tmp;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_Apply)(
    self,
    b,
    x);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_ApplyAdjoint__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct bHYPRE_Vector__object* b = 0;
  struct bHYPRE_Vector__object* x_tmp = 0;
  struct bHYPRE_Vector__object** x= &x_tmp;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_ApplyAdjoint)(
    self,
    b,
    x);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetOperator__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct bHYPRE_Operator__object* A = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_SetOperator)(
    self,
    A);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetTolerance__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  double tolerance = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackDouble( inArgs, "tolerance", &tolerance, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetTolerance)(
    self,
    tolerance);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetMaxIterations__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  int32_t max_iterations = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackInt( inArgs, "max_iterations", &max_iterations,
    _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetMaxIterations)(
    self,
    max_iterations);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetLogging__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  int32_t level = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackInt( inArgs, "level", &level, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetLogging)(
    self,
    level);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_SetPrintLevel__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  int32_t level = 0;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackInt( inArgs, "level", &level, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_SetPrintLevel)(
    self,
    level);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
bHYPRE_SStructSplit_GetNumIterations__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  int32_t num_iterations_tmp = 0;
  int32_t* num_iterations= &num_iterations_tmp;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_GetNumIterations)(
    self,
    num_iterations);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */
  sidl_io_Serializer_packInt( outArgs, "num_iterations", *num_iterations, _ex2);

}

static void
bHYPRE_SStructSplit_GetRelResidualNorm__exec(
        struct bHYPRE_SStructSplit__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  double norm_tmp = 0;
  double* norm= &norm_tmp;
  int32_t _retval = 0;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_GetRelResidualNorm)(
    self,
    norm);

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */
  sidl_io_Serializer_packDouble( outArgs, "norm", *norm, _ex2);

}

static void ior_bHYPRE_SStructSplit__ensure_load_called(void) {
  /*
   * assert( HAVE_LOCKED_STATIC_GLOBALS );
   */

  if (! s_load_called ) {
    bHYPRE_SStructSplit__call_load();
    s_load_called=1;
  }
}
/*
 * CAST: dynamic type casting support.
 */

static void* ior_bHYPRE_SStructSplit__cast(
  struct bHYPRE_SStructSplit__object* self,
  const char* name)
{
  void* cast = NULL;

  struct bHYPRE_SStructSplit__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  if (!strcmp(name, "bHYPRE.SStructSplit")) {
    cast = (void*) s0;
  } else if (!strcmp(name, "bHYPRE.Operator")) {
    cast = (void*) &s0->d_bhypre_operator;
  } else if (!strcmp(name, "bHYPRE.Solver")) {
    cast = (void*) &s0->d_bhypre_solver;
  } else if (!strcmp(name, "sidl.BaseClass")) {
    cast = (void*) s1;
  } else if (!strcmp(name, "sidl.BaseInterface")) {
    cast = (void*) &s1->d_sidl_baseinterface;
  }

  return cast;
}

/*
 * DELETE: call destructor and free object memory.
 */

static void ior_bHYPRE_SStructSplit__delete(
  struct bHYPRE_SStructSplit__object* self)
{
  bHYPRE_SStructSplit__fini(self);
  memset((void*)self, 0, sizeof(struct bHYPRE_SStructSplit__object));
  free((void*) self);
}

static char*
ior_bHYPRE_SStructSplit__getURL(
    struct bHYPRE_SStructSplit__object* self) {
  /* TODO: Make this work for local object! */
  return NULL;
}
struct bHYPRE_SStructSplit__method {
  const char *d_name;
  void (*d_func)(struct bHYPRE_SStructSplit__object*,
    struct sidl_io_Deserializer__object *,
    struct sidl_io_Serializer__object *);
};

static void
ior_bHYPRE_SStructSplit__exec(
    struct bHYPRE_SStructSplit__object* self,
    const char* methodName,
    struct sidl_io_Deserializer__object* inArgs,
    struct sidl_io_Serializer__object* outArgs ) { 
  static const struct bHYPRE_SStructSplit__method  s_methods[] = {
    { "Apply", bHYPRE_SStructSplit_Apply__exec },
    { "ApplyAdjoint", bHYPRE_SStructSplit_ApplyAdjoint__exec },
    { "GetDoubleValue", bHYPRE_SStructSplit_GetDoubleValue__exec },
    { "GetIntValue", bHYPRE_SStructSplit_GetIntValue__exec },
    { "GetNumIterations", bHYPRE_SStructSplit_GetNumIterations__exec },
    { "GetRelResidualNorm", bHYPRE_SStructSplit_GetRelResidualNorm__exec },
    { "SetCommunicator", bHYPRE_SStructSplit_SetCommunicator__exec },
    { "SetDoubleArray1Parameter",
      bHYPRE_SStructSplit_SetDoubleArray1Parameter__exec },
    { "SetDoubleArray2Parameter",
      bHYPRE_SStructSplit_SetDoubleArray2Parameter__exec },
    { "SetDoubleParameter", bHYPRE_SStructSplit_SetDoubleParameter__exec },
    { "SetIntArray1Parameter",
      bHYPRE_SStructSplit_SetIntArray1Parameter__exec },
    { "SetIntArray2Parameter",
      bHYPRE_SStructSplit_SetIntArray2Parameter__exec },
    { "SetIntParameter", bHYPRE_SStructSplit_SetIntParameter__exec },
    { "SetLogging", bHYPRE_SStructSplit_SetLogging__exec },
    { "SetMaxIterations", bHYPRE_SStructSplit_SetMaxIterations__exec },
    { "SetOperator", bHYPRE_SStructSplit_SetOperator__exec },
    { "SetPrintLevel", bHYPRE_SStructSplit_SetPrintLevel__exec },
    { "SetStringParameter", bHYPRE_SStructSplit_SetStringParameter__exec },
    { "SetTolerance", bHYPRE_SStructSplit_SetTolerance__exec },
    { "Setup", bHYPRE_SStructSplit_Setup__exec },
    { "addRef", bHYPRE_SStructSplit_addRef__exec },
    { "deleteRef", bHYPRE_SStructSplit_deleteRef__exec },
    { "getClassInfo", bHYPRE_SStructSplit_getClassInfo__exec },
    { "isSame", bHYPRE_SStructSplit_isSame__exec },
    { "isType", bHYPRE_SStructSplit_isType__exec },
    { "queryInt", bHYPRE_SStructSplit_queryInt__exec }
  };
  int i, cmp, l = 0;
  int u = sizeof(s_methods)/sizeof(struct bHYPRE_SStructSplit__method);
  if (methodName) {
    /* Use binary search to locate method */
    while (l < u) {
      i = (l + u) >> 1;
      if (!(cmp=strcmp(methodName, s_methods[i].d_name))) {
        (s_methods[i].d_func)(self, inArgs, outArgs);
        return;
      }
      else if (cmp < 0) u = i;
      else l = i + 1;
    }
  }
  /* TODO: add code for method not found */
}
/*
 * EPV: create method entry point vector (EPV) structure.
 */

static void bHYPRE_SStructSplit__init_epv(
  struct bHYPRE_SStructSplit__object* self)
{
/*
 * assert( HAVE_LOCKED_STATIC_GLOBALS );
 */

  struct bHYPRE_SStructSplit__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  struct bHYPRE_SStructSplit__epv*  epv  = &s_new_epv__bhypre_sstructsplit;
  struct bHYPRE_Operator__epv*      e0   = &s_new_epv__bhypre_operator;
  struct bHYPRE_Solver__epv*        e1   = &s_new_epv__bhypre_solver;
  struct sidl_BaseClass__epv*       e2   = &s_new_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*   e3   = &s_new_epv__sidl_baseinterface;

  s_old_epv__sidl_baseinterface = s1->d_sidl_baseinterface.d_epv;
  s_old_epv__sidl_baseclass     = s1->d_epv;

  epv->f__cast                         = ior_bHYPRE_SStructSplit__cast;
  epv->f__delete                       = ior_bHYPRE_SStructSplit__delete;
  epv->f__exec                         = ior_bHYPRE_SStructSplit__exec;
  epv->f__getURL                       = ior_bHYPRE_SStructSplit__getURL;
  epv->f__ctor                         = NULL;
  epv->f__dtor                         = NULL;
  epv->f_addRef                        = (void (*)(struct 
    bHYPRE_SStructSplit__object*)) s1->d_epv->f_addRef;
  epv->f_deleteRef                     = (void (*)(struct 
    bHYPRE_SStructSplit__object*)) s1->d_epv->f_deleteRef;
  epv->f_isSame                        = (sidl_bool (*)(struct 
    bHYPRE_SStructSplit__object*,
    struct sidl_BaseInterface__object*)) s1->d_epv->f_isSame;
  epv->f_queryInt                      = (struct sidl_BaseInterface__object* 
    (*)(struct bHYPRE_SStructSplit__object*,const char*)) s1->d_epv->f_queryInt;
  epv->f_isType                        = (sidl_bool (*)(struct 
    bHYPRE_SStructSplit__object*,const char*)) s1->d_epv->f_isType;
  epv->f_getClassInfo                  = (struct sidl_ClassInfo__object* 
    (*)(struct bHYPRE_SStructSplit__object*)) s1->d_epv->f_getClassInfo;
  epv->f_SetCommunicator               = NULL;
  epv->f_SetIntParameter               = NULL;
  epv->f_SetDoubleParameter            = NULL;
  epv->f_SetStringParameter            = NULL;
  epv->f_SetIntArray1Parameter         = NULL;
  epv->f_SetIntArray2Parameter         = NULL;
  epv->f_SetDoubleArray1Parameter      = NULL;
  epv->f_SetDoubleArray2Parameter      = NULL;
  epv->f_GetIntValue                   = NULL;
  epv->f_GetDoubleValue                = NULL;
  epv->f_Setup                         = NULL;
  epv->f_Apply                         = NULL;
  epv->f_ApplyAdjoint                  = NULL;
  epv->f_SetOperator                   = NULL;
  epv->f_SetTolerance                  = NULL;
  epv->f_SetMaxIterations              = NULL;
  epv->f_SetLogging                    = NULL;
  epv->f_SetPrintLevel                 = NULL;
  epv->f_GetNumIterations              = NULL;
  epv->f_GetRelResidualNorm            = NULL;

  bHYPRE_SStructSplit__set_epv(epv);

  e0->f__cast                    = (void* (*)(void*,const char*)) epv->f__cast;
  e0->f__delete                  = (void (*)(void*)) epv->f__delete;
  e0->f__exec                    = (void (*)(void*,const char*,
    struct sidl_io_Deserializer__object*,
    struct sidl_io_Serializer__object*)) epv->f__exec;
  e0->f_addRef                   = (void (*)(void*)) epv->f_addRef;
  e0->f_deleteRef                = (void (*)(void*)) epv->f_deleteRef;
  e0->f_isSame                   = (sidl_bool (*)(void*,
    struct sidl_BaseInterface__object*)) epv->f_isSame;
  e0->f_queryInt                 = (struct sidl_BaseInterface__object* 
    (*)(void*,const char*)) epv->f_queryInt;
  e0->f_isType                   = (sidl_bool (*)(void*,
    const char*)) epv->f_isType;
  e0->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(void*)) 
    epv->f_getClassInfo;
  e0->f_SetCommunicator          = (int32_t (*)(void*,
    struct bHYPRE_MPICommunicator__object*)) epv->f_SetCommunicator;
  e0->f_SetIntParameter          = (int32_t (*)(void*,const char*,
    int32_t)) epv->f_SetIntParameter;
  e0->f_SetDoubleParameter       = (int32_t (*)(void*,const char*,
    double)) epv->f_SetDoubleParameter;
  e0->f_SetStringParameter       = (int32_t (*)(void*,const char*,
    const char*)) epv->f_SetStringParameter;
  e0->f_SetIntArray1Parameter    = (int32_t (*)(void*,const char*,
    struct sidl_int__array*)) epv->f_SetIntArray1Parameter;
  e0->f_SetIntArray2Parameter    = (int32_t (*)(void*,const char*,
    struct sidl_int__array*)) epv->f_SetIntArray2Parameter;
  e0->f_SetDoubleArray1Parameter = (int32_t (*)(void*,const char*,
    struct sidl_double__array*)) epv->f_SetDoubleArray1Parameter;
  e0->f_SetDoubleArray2Parameter = (int32_t (*)(void*,const char*,
    struct sidl_double__array*)) epv->f_SetDoubleArray2Parameter;
  e0->f_GetIntValue              = (int32_t (*)(void*,const char*,
    int32_t*)) epv->f_GetIntValue;
  e0->f_GetDoubleValue           = (int32_t (*)(void*,const char*,
    double*)) epv->f_GetDoubleValue;
  e0->f_Setup                    = (int32_t (*)(void*,
    struct bHYPRE_Vector__object*,struct bHYPRE_Vector__object*)) epv->f_Setup;
  e0->f_Apply                    = (int32_t (*)(void*,
    struct bHYPRE_Vector__object*,struct bHYPRE_Vector__object**)) epv->f_Apply;
  e0->f_ApplyAdjoint             = (int32_t (*)(void*,
    struct bHYPRE_Vector__object*,
    struct bHYPRE_Vector__object**)) epv->f_ApplyAdjoint;

  e1->f__cast                    = (void* (*)(void*,const char*)) epv->f__cast;
  e1->f__delete                  = (void (*)(void*)) epv->f__delete;
  e1->f__exec                    = (void (*)(void*,const char*,
    struct sidl_io_Deserializer__object*,
    struct sidl_io_Serializer__object*)) epv->f__exec;
  e1->f_addRef                   = (void (*)(void*)) epv->f_addRef;
  e1->f_deleteRef                = (void (*)(void*)) epv->f_deleteRef;
  e1->f_isSame                   = (sidl_bool (*)(void*,
    struct sidl_BaseInterface__object*)) epv->f_isSame;
  e1->f_queryInt                 = (struct sidl_BaseInterface__object* 
    (*)(void*,const char*)) epv->f_queryInt;
  e1->f_isType                   = (sidl_bool (*)(void*,
    const char*)) epv->f_isType;
  e1->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(void*)) 
    epv->f_getClassInfo;
  e1->f_SetCommunicator          = (int32_t (*)(void*,
    struct bHYPRE_MPICommunicator__object*)) epv->f_SetCommunicator;
  e1->f_SetIntParameter          = (int32_t (*)(void*,const char*,
    int32_t)) epv->f_SetIntParameter;
  e1->f_SetDoubleParameter       = (int32_t (*)(void*,const char*,
    double)) epv->f_SetDoubleParameter;
  e1->f_SetStringParameter       = (int32_t (*)(void*,const char*,
    const char*)) epv->f_SetStringParameter;
  e1->f_SetIntArray1Parameter    = (int32_t (*)(void*,const char*,
    struct sidl_int__array*)) epv->f_SetIntArray1Parameter;
  e1->f_SetIntArray2Parameter    = (int32_t (*)(void*,const char*,
    struct sidl_int__array*)) epv->f_SetIntArray2Parameter;
  e1->f_SetDoubleArray1Parameter = (int32_t (*)(void*,const char*,
    struct sidl_double__array*)) epv->f_SetDoubleArray1Parameter;
  e1->f_SetDoubleArray2Parameter = (int32_t (*)(void*,const char*,
    struct sidl_double__array*)) epv->f_SetDoubleArray2Parameter;
  e1->f_GetIntValue              = (int32_t (*)(void*,const char*,
    int32_t*)) epv->f_GetIntValue;
  e1->f_GetDoubleValue           = (int32_t (*)(void*,const char*,
    double*)) epv->f_GetDoubleValue;
  e1->f_Setup                    = (int32_t (*)(void*,
    struct bHYPRE_Vector__object*,struct bHYPRE_Vector__object*)) epv->f_Setup;
  e1->f_Apply                    = (int32_t (*)(void*,
    struct bHYPRE_Vector__object*,struct bHYPRE_Vector__object**)) epv->f_Apply;
  e1->f_ApplyAdjoint             = (int32_t (*)(void*,
    struct bHYPRE_Vector__object*,
    struct bHYPRE_Vector__object**)) epv->f_ApplyAdjoint;
  e1->f_SetOperator              = (int32_t (*)(void*,
    struct bHYPRE_Operator__object*)) epv->f_SetOperator;
  e1->f_SetTolerance             = (int32_t (*)(void*,
    double)) epv->f_SetTolerance;
  e1->f_SetMaxIterations         = (int32_t (*)(void*,
    int32_t)) epv->f_SetMaxIterations;
  e1->f_SetLogging               = (int32_t (*)(void*,
    int32_t)) epv->f_SetLogging;
  e1->f_SetPrintLevel            = (int32_t (*)(void*,
    int32_t)) epv->f_SetPrintLevel;
  e1->f_GetNumIterations         = (int32_t (*)(void*,
    int32_t*)) epv->f_GetNumIterations;
  e1->f_GetRelResidualNorm       = (int32_t (*)(void*,
    double*)) epv->f_GetRelResidualNorm;

  e2->f__cast               = (void* (*)(struct sidl_BaseClass__object*,
    const char*)) epv->f__cast;
  e2->f__delete             = (void (*)(struct sidl_BaseClass__object*)) 
    epv->f__delete;
  e2->f__exec               = (void (*)(struct sidl_BaseClass__object*,
    const char*,struct sidl_io_Deserializer__object*,
    struct sidl_io_Serializer__object*)) epv->f__exec;
  e2->f_addRef              = (void (*)(struct sidl_BaseClass__object*)) 
    epv->f_addRef;
  e2->f_deleteRef           = (void (*)(struct sidl_BaseClass__object*)) 
    epv->f_deleteRef;
  e2->f_isSame              = (sidl_bool (*)(struct sidl_BaseClass__object*,
    struct sidl_BaseInterface__object*)) epv->f_isSame;
  e2->f_queryInt            = (struct sidl_BaseInterface__object* (*)(struct 
    sidl_BaseClass__object*,const char*)) epv->f_queryInt;
  e2->f_isType              = (sidl_bool (*)(struct sidl_BaseClass__object*,
    const char*)) epv->f_isType;
  e2->f_getClassInfo        = (struct sidl_ClassInfo__object* (*)(struct 
    sidl_BaseClass__object*)) epv->f_getClassInfo;

  e3->f__cast               = (void* (*)(void*,const char*)) epv->f__cast;
  e3->f__delete             = (void (*)(void*)) epv->f__delete;
  e3->f__exec               = (void (*)(void*,const char*,
    struct sidl_io_Deserializer__object*,
    struct sidl_io_Serializer__object*)) epv->f__exec;
  e3->f_addRef              = (void (*)(void*)) epv->f_addRef;
  e3->f_deleteRef           = (void (*)(void*)) epv->f_deleteRef;
  e3->f_isSame              = (sidl_bool (*)(void*,
    struct sidl_BaseInterface__object*)) epv->f_isSame;
  e3->f_queryInt            = (struct sidl_BaseInterface__object* (*)(void*,
    const char*)) epv->f_queryInt;
  e3->f_isType              = (sidl_bool (*)(void*,const char*)) epv->f_isType;
  e3->f_getClassInfo        = (struct sidl_ClassInfo__object* (*)(void*)) 
    epv->f_getClassInfo;

  s_method_initialized = 1;
  ior_bHYPRE_SStructSplit__ensure_load_called();
}

/*
 * SEPV: create the static entry point vector (SEPV).
 */

static void bHYPRE_SStructSplit__init_sepv(void)
{
  /*
   * assert( HAVE_LOCKED_STATIC_GLOBALS );
   */

  struct bHYPRE_SStructSplit__sepv*  s = &s_stc_epv__bhypre_sstructsplit;

  s->f_Create         = NULL;

  bHYPRE_SStructSplit__set_sepv(s);

  s_static_initialized = 1;
  ior_bHYPRE_SStructSplit__ensure_load_called();
}

/*
 * STATIC: return pointer to static EPV structure.
 */

struct bHYPRE_SStructSplit__sepv*
bHYPRE_SStructSplit__statics(void)
{
  LOCK_STATIC_GLOBALS;
  if (!s_static_initialized) {
    bHYPRE_SStructSplit__init_sepv();
  }
  UNLOCK_STATIC_GLOBALS;
  return &s_stc_epv__bhypre_sstructsplit;
}

/*
 * SUPER: return's parent's non-overrided EPV
 */

static struct sidl_BaseClass__epv* bHYPRE_SStructSplit__super(void) {
  return s_old_epv__sidl_baseclass;
}

static void
cleanupClassInfo(void) {
  if (s_classInfo) {
    sidl_ClassInfo_deleteRef(s_classInfo);
  }
  s_classInfo_init = 1;
  s_classInfo = NULL;
}

/*
 * initClassInfo: create a ClassInfo interface if necessary.
 */

static void
initClassInfo(sidl_ClassInfo *info)
{
  LOCK_STATIC_GLOBALS;
  if (s_classInfo_init) {
    sidl_ClassInfoI impl;
    s_classInfo_init = 0;
    impl = sidl_ClassInfoI__create();
    s_classInfo = sidl_ClassInfo__cast(impl);
    if (impl) {
      sidl_ClassInfoI_setName(impl, "bHYPRE.SStructSplit");
      sidl_ClassInfoI_setIORVersion(impl, s_IOR_MAJOR_VERSION,
        s_IOR_MINOR_VERSION);
      atexit(cleanupClassInfo);
    }
  }
  if (s_classInfo) {
    if (*info) {
      sidl_ClassInfo_deleteRef(*info);
    }
    *info = s_classInfo;
    sidl_ClassInfo_addRef(*info);
  }
UNLOCK_STATIC_GLOBALS;
}

/*
 * initMetadata: store IOR version & class in sidl.BaseClass's data
 */

static void
initMetadata(struct bHYPRE_SStructSplit__object* self)
{
  if (self) {
    struct sidl_BaseClass__data *data = 
      sidl_BaseClass__get_data(sidl_BaseClass__cast(self));
    if (data) {
      data->d_IOR_major_version = s_IOR_MAJOR_VERSION;
      data->d_IOR_minor_version = s_IOR_MINOR_VERSION;
      initClassInfo(&(data->d_classinfo));
    }
  }
}

/*
 * NEW: allocate object and initialize it.
 */

struct bHYPRE_SStructSplit__object*
bHYPRE_SStructSplit__new(void)
{
  struct bHYPRE_SStructSplit__object* self =
    (struct bHYPRE_SStructSplit__object*) malloc(
      sizeof(struct bHYPRE_SStructSplit__object));
  bHYPRE_SStructSplit__init(self);
  initMetadata(self);
  return self;
}

/*
 * INIT: initialize a new instance of the class object.
 */

void bHYPRE_SStructSplit__init(
  struct bHYPRE_SStructSplit__object* self)
{
  struct bHYPRE_SStructSplit__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  sidl_BaseClass__init(s1);

  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    bHYPRE_SStructSplit__init_epv(s0);
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv = &s_new_epv__sidl_baseinterface;
  s1->d_epv                      = &s_new_epv__sidl_baseclass;

  s0->d_bhypre_operator.d_epv = &s_new_epv__bhypre_operator;
  s0->d_bhypre_solver.d_epv   = &s_new_epv__bhypre_solver;
  s0->d_epv                   = &s_new_epv__bhypre_sstructsplit;

  s0->d_bhypre_operator.d_object = self;

  s0->d_bhypre_solver.d_object = self;

  s0->d_data = NULL;


  (*(self->d_epv->f__ctor))(self);
}

/*
 * FINI: deallocate a class instance (destructor).
 */

void bHYPRE_SStructSplit__fini(
  struct bHYPRE_SStructSplit__object* self)
{
  struct bHYPRE_SStructSplit__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  (*(s0->d_epv->f__dtor))(s0);

  s1->d_sidl_baseinterface.d_epv = s_old_epv__sidl_baseinterface;
  s1->d_epv                      = s_old_epv__sidl_baseclass;

  sidl_BaseClass__fini(s1);
}

/*
 * VERSION: Return the version of the IOR used to generate this IOR.
 */

void
bHYPRE_SStructSplit__IOR_version(int32_t *major, int32_t *minor)
{
  *major = s_IOR_MAJOR_VERSION;
  *minor = s_IOR_MINOR_VERSION;
}

static const struct bHYPRE_SStructSplit__external
s_externalEntryPoints = {
  bHYPRE_SStructSplit__new,
  bHYPRE_SStructSplit__statics,
  bHYPRE_SStructSplit__super
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct bHYPRE_SStructSplit__external*
bHYPRE_SStructSplit__externals(void)
{
  return &s_externalEntryPoints;
}
