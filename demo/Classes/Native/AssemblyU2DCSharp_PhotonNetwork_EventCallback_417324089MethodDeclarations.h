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

// PhotonNetwork/EventCallback
struct EventCallback_t_417324089_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void EventCallback__ctor_m_2049866663_0 (EventCallback_t_417324089_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
extern "C"  void EventCallback_Invoke_m_1313538511_0 (EventCallback_t_417324089_0 * __this, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventCallback_t_417324089_0(Il2CppObject* delegate, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId);
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * EventCallback_BeginInvoke_m1709012328_0 (EventCallback_t_417324089_0 * __this, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void EventCallback_EndInvoke_m_1312879895_0 (EventCallback_t_417324089_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
