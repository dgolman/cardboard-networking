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

// System.Net.IPHostEntry
struct IPHostEntry_t_1615694227_0;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t296217_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.IPHostEntry::.ctor()
extern "C"  void IPHostEntry__ctor_m252317065_0 (IPHostEntry_t_1615694227_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C"  IPAddressU5BU5D_t296217_0* IPHostEntry_get_AddressList_m65927120_0 (IPHostEntry_t_1615694227_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C"  void IPHostEntry_set_AddressList_m1503802237_0 (IPHostEntry_t_1615694227_0 * __this, IPAddressU5BU5D_t296217_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C"  void IPHostEntry_set_Aliases_m1514906264_0 (IPHostEntry_t_1615694227_0 * __this, StringU5BU5D_t_816028754_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C"  void IPHostEntry_set_HostName_m_1534071625_0 (IPHostEntry_t_1615694227_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
