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

// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t622954348_0;
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

// System.Void ExitGames.Client.Photon.DeserializeMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void DeserializeMethod__ctor_m_1772596546_0 (DeserializeMethod_t622954348_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::Invoke(System.Byte[])
extern "C"  Object_t * DeserializeMethod_Invoke_m1673137958_0 (DeserializeMethod_t622954348_0 * __this, ByteU5BU5D_t_1238178395_0* ___serializedCustomObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_DeserializeMethod_t622954348_0(Il2CppObject* delegate, ByteU5BU5D_t_1238178395_0* ___serializedCustomObject);
// System.IAsyncResult ExitGames.Client.Photon.DeserializeMethod::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Object_t * DeserializeMethod_BeginInvoke_m_1287188912_0 (DeserializeMethod_t622954348_0 * __this, ByteU5BU5D_t_1238178395_0* ___serializedCustomObject, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * DeserializeMethod_EndInvoke_m1155714681_0 (DeserializeMethod_t622954348_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
