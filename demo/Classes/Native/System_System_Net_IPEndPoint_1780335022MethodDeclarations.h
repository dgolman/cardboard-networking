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

// System.Net.IPEndPoint
struct IPEndPoint_t_1780335022_0;
// System.Net.IPAddress
struct IPAddress_t125139831_0;
// System.Net.EndPoint
struct EndPoint_t_1941440085_0;
// System.Net.SocketAddress
struct SocketAddress_t_1639988597_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1922836948.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void IPEndPoint__ctor_m613724246_0 (IPEndPoint_t_1780335022_0 * __this, IPAddress_t125139831_0 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
extern "C"  void IPEndPoint__ctor_m1788376007_0 (IPEndPoint_t_1780335022_0 * __this, int64_t ___iaddr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C"  IPAddress_t125139831_0 * IPEndPoint_get_Address_m1282959913_0 (IPEndPoint_t_1780335022_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
extern "C"  void IPEndPoint_set_Address_m_1254410794_0 (IPEndPoint_t_1780335022_0 * __this, IPAddress_t125139831_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
extern "C"  int32_t IPEndPoint_get_AddressFamily_m926301232_0 (IPEndPoint_t_1780335022_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C"  int32_t IPEndPoint_get_Port_m1670115040_0 (IPEndPoint_t_1780335022_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
extern "C"  void IPEndPoint_set_Port_m_1920475691_0 (IPEndPoint_t_1780335022_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
extern "C"  EndPoint_t_1941440085_0 * IPEndPoint_Create_m287552515_0 (IPEndPoint_t_1780335022_0 * __this, SocketAddress_t_1639988597_0 * ___socketAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
extern "C"  SocketAddress_t_1639988597_0 * IPEndPoint_Serialize_m130381674_0 (IPEndPoint_t_1780335022_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
extern "C"  String_t* IPEndPoint_ToString_m_1902783185_0 (IPEndPoint_t_1780335022_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
extern "C"  bool IPEndPoint_Equals_m_1609243579_0 (IPEndPoint_t_1780335022_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
extern "C"  int32_t IPEndPoint_GetHashCode_m_1381347939_0 (IPEndPoint_t_1780335022_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
