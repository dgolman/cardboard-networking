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

// Region
struct Region_t_1831328337_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CloudRegionCode404377275.h"
#include "AssemblyU2DCSharp_CloudRegionFlag404463674.h"

// System.Void Region::.ctor()
extern "C"  void Region__ctor_m_698578937_0 (Region_t_1831328337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode Region::Parse(System.String)
extern "C"  int32_t Region_Parse_m_321744057_0 (Object_t * __this /* static, unused */, String_t* ___codeAsString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionFlag Region::ParseFlag(System.String)
extern "C"  int32_t Region_ParseFlag_m_537596516_0 (Object_t * __this /* static, unused */, String_t* ___codeAsString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Region::ToString()
extern "C"  String_t* Region_ToString_m_2010547924_0 (Region_t_1831328337_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
