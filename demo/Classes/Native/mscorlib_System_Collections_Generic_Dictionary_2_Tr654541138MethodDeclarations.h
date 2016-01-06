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

// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>
struct Transform_1_t654541138_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m639885156_0_gshared (Transform_1_t654541138_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m639885156_0(__this, ___object, ___method, method) ((  void (*) (Transform_1_t654541138_0 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m639885156_0_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::Invoke(TKey,TValue)
extern "C"  uint8_t Transform_1_Invoke_m1105241236_0_gshared (Transform_1_t654541138_0 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1105241236_0(__this, ___key, ___value, method) ((  uint8_t (*) (Transform_1_t654541138_0 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m1105241236_0_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Object_t * Transform_1_BeginInvoke_m1004907071_0_gshared (Transform_1_t654541138_0 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1004907071_0(__this, ___key, ___value, ___callback, ___object, method) ((  Object_t * (*) (Transform_1_t654541138_0 *, uint8_t, int32_t, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1004907071_0_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,ExitGames.Client.Photon.ConnectionProtocol>::EndInvoke(System.IAsyncResult)
extern "C"  uint8_t Transform_1_EndInvoke_m493819766_0_gshared (Transform_1_t654541138_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m493819766_0(__this, ___result, method) ((  uint8_t (*) (Transform_1_t654541138_0 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m493819766_0_gshared)(__this, ___result, method)
