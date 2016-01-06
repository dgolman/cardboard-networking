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

// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>
struct Transform_1_t2127836736_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_400183642.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2023563346_0_gshared (Transform_1_t2127836736_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m2023563346_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2127836736_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2023563346_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t_400183642_0  Transform_1_Invoke_m1850905446_0_gshared (Transform_1_t2127836736_0 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1850905446_0(__this, ___key, ___value, method) ((  KeyValuePair_2_t_400183642_0  (*) (Transform_1_t2127836736_0 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1850905446_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m_2139073263_0_gshared (Transform_1_t2127836736_0 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m_2139073263_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t2127836736_0 *, uint8_t, int32_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m_2139073263_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.Generic.KeyValuePair`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t_400183642_0  Transform_1_EndInvoke_m_405401244_0_gshared (Transform_1_t2127836736_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m_405401244_0(__this, ___result, method) ((  KeyValuePair_2_t_400183642_0  (*) (Transform_1_t2127836736_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m_405401244_0_gshared)(__this, ___result, method)
