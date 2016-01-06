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

// PlayerVariables
struct PlayerVariables_t_1948904645_0;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t1701708784_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"

// System.Void PlayerVariables::.ctor()
extern "C"  void PlayerVariables__ctor_m1240491189_0 (PlayerVariables_t_1948904645_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerVariables::.cctor()
extern "C"  void PlayerVariables__cctor_m_681575016_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PlayerVariables::GetColor(System.Int32)
extern "C"  Color_t_388944582_0  PlayerVariables_GetColor_m1970332294_0 (Object_t * __this /* static, unused */, int32_t ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerVariables::GetColorName(System.Int32)
extern "C"  String_t* PlayerVariables_GetColorName_m35082389_0 (Object_t * __this /* static, unused */, int32_t ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PlayerVariables::GetMaterial(UnityEngine.Material,System.Int32)
extern "C"  Material_t1701708784_0 * PlayerVariables_GetMaterial_m_1554415098_0 (Object_t * __this /* static, unused */, Material_t1701708784_0 * ___original, int32_t ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
