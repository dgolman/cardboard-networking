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

// System.Net.SocketAddress
struct SocketAddress_t_1639988597_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1922836948.h"

// System.Void System.Net.SocketAddress::.ctor(System.Net.Sockets.AddressFamily,System.Int32)
extern "C"  void SocketAddress__ctor_m1903018086_0 (SocketAddress_t_1639988597_0 * __this, int32_t ___family, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.SocketAddress::get_Family()
extern "C"  int32_t SocketAddress_get_Family_m_1245470741_0 (SocketAddress_t_1639988597_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::get_Size()
extern "C"  int32_t SocketAddress_get_Size_m1257714291_0 (SocketAddress_t_1639988597_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern "C"  uint8_t SocketAddress_get_Item_m_1290238542_0 (SocketAddress_t_1639988597_0 * __this, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.SocketAddress::set_Item(System.Int32,System.Byte)
extern "C"  void SocketAddress_set_Item_m407162431_0 (SocketAddress_t_1639988597_0 * __this, int32_t ___offset, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.SocketAddress::ToString()
extern "C"  String_t* SocketAddress_ToString_m_953463352_0 (SocketAddress_t_1639988597_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.SocketAddress::Equals(System.Object)
extern "C"  bool SocketAddress_Equals_m_55005754_0 (SocketAddress_t_1639988597_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.SocketAddress::GetHashCode()
extern "C"  int32_t SocketAddress_GetHashCode_m1308071082_0 (SocketAddress_t_1639988597_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
