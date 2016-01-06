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

// PhotonView[]
struct PhotonViewU5BU5D_t_905306402_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// PhotonView
struct PhotonView_t_751779204_0;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// PhotonView[] Extensions::GetPhotonViewsInChildren(UnityEngine.GameObject)
extern "C"  PhotonViewU5BU5D_t_905306402_0* Extensions_GetPhotonViewsInChildren_m_1059552305_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView Extensions::GetPhotonView(UnityEngine.GameObject)
extern "C"  PhotonView_t_751779204_0 * Extensions_GetPhotonView_m_153268424_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Extensions_AlmostEquals_m_1012801517_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___target, Vector3_t_725341337_0  ___second, float ___sqrMagnitudePrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool Extensions_AlmostEquals_m1842399701_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___target, Vector2_t_725341338_0  ___second, float ___sqrMagnitudePrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  bool Extensions_AlmostEquals_m_1505882675_0 (Object_t * __this /* static, unused */, Quaternion_t1989680039_0  ___target, Quaternion_t1989680039_0  ___second, float ___maxAngle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::AlmostEquals(System.Single,System.Single,System.Single)
extern "C"  bool Extensions_AlmostEquals_m_878523785_0 (Object_t * __this /* static, unused */, float ___target, float ___second, float ___floatDiff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::Merge(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_Merge_m_2013071927_0 (Object_t * __this /* static, unused */, Object_t * ___target, Object_t * ___addHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
extern "C"  void Extensions_MergeStringKeys_m_179020188_0 (Object_t * __this /* static, unused */, Object_t * ___target, Object_t * ___addHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Extensions::ToStringFull(System.Collections.IDictionary)
extern "C"  String_t* Extensions_ToStringFull_m_119262348_0 (Object_t * __this /* static, unused */, Object_t * ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable Extensions::StripToStringKeys(System.Collections.IDictionary)
extern "C"  Hashtable_t1523952044_0 * Extensions_StripToStringKeys_m_1134758935_0 (Object_t * __this /* static, unused */, Object_t * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
extern "C"  void Extensions_StripKeysWithNullValues_m_315450887_0 (Object_t * __this /* static, unused */, Object_t * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Extensions::Contains(System.Int32[],System.Int32)
extern "C"  bool Extensions_Contains_m999445880_0 (Object_t * __this /* static, unused */, Int32U5BU5D_t1872284309_0* ___target, int32_t ___nr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
