#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Func`1<System.Object>
struct Func_1_t341390355_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_1__ctor_m_1943546785_0_gshared (Func_1_t341390355_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m_1943546785_0(__this, ___object, ___method, method) ((  void (*) (Func_1_t341390355_0 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m_1943546785_0_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C"  Object_t * Func_1_Invoke_m_2134809189_0_gshared (Func_1_t341390355_0 * __this, const MethodInfo* method);
#define Func_1_Invoke_m_2134809189_0(__this, method) ((  Object_t * (*) (Func_1_t341390355_0 *, const MethodInfo*))Func_1_Invoke_m_2134809189_0_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_1_BeginInvoke_m_228347030_0_gshared (Func_1_t341390355_0 * __this, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m_228347030_0(__this, ___callback, ___object, method) ((  Object_t * (*) (Func_1_t341390355_0 *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m_228347030_0_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Func_1_EndInvoke_m_938257263_0_gshared (Func_1_t341390355_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m_938257263_0(__this, ___result, method) ((  Object_t * (*) (Func_1_t341390355_0 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m_938257263_0_gshared)(__this, ___result, method)
