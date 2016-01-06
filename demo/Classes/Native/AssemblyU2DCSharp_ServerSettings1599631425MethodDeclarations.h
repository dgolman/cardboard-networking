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

// ServerSettings
struct ServerSettings_t1599631425_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CloudRegionCode404377275.h"

// System.Void ServerSettings::.ctor()
extern "C"  void ServerSettings__ctor_m_1854800203_0 (ServerSettings_t1599631425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloudBestRegion(System.String)
extern "C"  void ServerSettings_UseCloudBestRegion_m443671981_0 (ServerSettings_t1599631425_0 * __this, String_t* ___cloudAppid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String)
extern "C"  void ServerSettings_UseCloud_m436355013_0 (ServerSettings_t1599631425_0 * __this, String_t* ___cloudAppid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String,CloudRegionCode)
extern "C"  void ServerSettings_UseCloud_m_1860932677_0 (ServerSettings_t1599631425_0 * __this, String_t* ___cloudAppid, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseMyServer(System.String,System.Int32,System.String)
extern "C"  void ServerSettings_UseMyServer_m_1276565734_0 (ServerSettings_t1599631425_0 * __this, String_t* ___serverAddress, int32_t ___serverPort, String_t* ___application, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ServerSettings::ToString()
extern "C"  String_t* ServerSettings_ToString_m483870910_0 (ServerSettings_t1599631425_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
