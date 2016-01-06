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

// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t_478224115_0;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte_224751869.h"

// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializeMethod__ctor_m1797781663_0 (SerializeMethod_t_478224115_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
extern "C"  ByteU5BU5D_t_1238178395_0* SerializeMethod_Invoke_m996346405_0 (SerializeMethod_t_478224115_0 * __this, Object_t * ___customObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ByteU5BU5D_t_1238178395_0* pinvoke_delegate_wrapper_SerializeMethod_t_478224115_0(Il2CppObject* delegate, Object_t * ___customObject);
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Object_t * SerializeMethod_BeginInvoke_m132015908_0 (SerializeMethod_t_478224115_0 * __this, Object_t * ___customObject, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
extern "C"  ByteU5BU5D_t_1238178395_0* SerializeMethod_EndInvoke_m1790554053_0 (SerializeMethod_t_478224115_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
