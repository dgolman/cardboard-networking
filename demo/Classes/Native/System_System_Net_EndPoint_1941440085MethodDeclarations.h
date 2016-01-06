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

// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// System.Net.SocketAddress
struct SocketAddress_t_1639988597_0;
// System.Exception
struct Exception_t2143823668_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1922836948.h"

// System.Void System.Net.EndPoint::.ctor()
extern "C"  void EndPoint__ctor_m_253225147_0 (EndPoint_t_1941440085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
extern "C"  int32_t EndPoint_get_AddressFamily_m756653815_0 (EndPoint_t_1941440085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
extern "C"  EndPoint_t_1941440085_0 * EndPoint_Create_m1369380444_0 (EndPoint_t_1941440085_0 * __this, SocketAddress_t_1639988597_0 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.EndPoint::Serialize()
extern "C"  SocketAddress_t_1639988597_0 * EndPoint_Serialize_m_1369606287_0 (EndPoint_t_1941440085_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.EndPoint::NotImplemented()
extern "C"  Exception_t2143823668_0 * EndPoint_NotImplemented_m_1486520929_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
