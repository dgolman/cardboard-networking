﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GUIContent
struct GUIContent_t_1764161721_0;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t1152670953_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUIContent::.ctor()
extern "C"  void GUIContent__ctor_m923375087_0 (GUIContent_t_1764161721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C"  void GUIContent__ctor_m174155123_0 (GUIContent_t_1764161721_0 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C"  void GUIContent__ctor_m_1146741542_0 (GUIContent_t_1764161721_0 * __this, GUIContent_t_1764161721_0 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C"  void GUIContent__cctor_m_1922239586_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_text()
extern "C"  String_t* GUIContent_get_text_m_350165522_0 (GUIContent_t_1764161721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C"  void GUIContent_set_text_m1575840163_0 (GUIContent_t_1764161721_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_tooltip()
extern "C"  String_t* GUIContent_get_tooltip_m1388301636_0 (GUIContent_t_1764161721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C"  GUIContent_t_1764161721_0 * GUIContent_Temp_m_1437526401_0 (Object_t * __this /* static, unused */, String_t* ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
extern "C"  GUIContent_t_1764161721_0 * GUIContent_Temp_m_468549333_0 (Object_t * __this /* static, unused */, Texture_t1814018354_0 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C"  void GUIContent_ClearStaticCache_m_1906108708_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] UnityEngine.GUIContent::Temp(System.String[])
extern "C"  GUIContentU5BU5D_t1152670953_0* GUIContent_Temp_m_419363841_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_816028754_0* ___texts, const MethodInfo* method) IL2CPP_METHOD_ATTR;