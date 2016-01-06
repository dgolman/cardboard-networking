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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>
struct Transform_1_t_1422020059_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m_75736271_0_gshared (Transform_1_t_1422020059_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m_75736271_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t_1422020059_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m_75736271_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::Invoke(TKey,TValue)
extern "C"  uint8_t Transform_1_Invoke_m1116362027_0_gshared (Transform_1_t_1422020059_0 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1116362027_0(__this, ___key, ___value, method) ((  uint8_t (*) (Transform_1_t_1422020059_0 *, uint8_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m1116362027_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1424402314_0_gshared (Transform_1_t_1422020059_0 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1424402314_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t_1422020059_0 *, uint8_t, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1424402314_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Transform_1_EndInvoke_m_190844289_0_gshared (Transform_1_t_1422020059_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_190844289_0(__this, ___result, method) ((  uint8_t (*) (Transform_1_t_1422020059_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_190844289_0_gshared)(__this, ___result, method)
