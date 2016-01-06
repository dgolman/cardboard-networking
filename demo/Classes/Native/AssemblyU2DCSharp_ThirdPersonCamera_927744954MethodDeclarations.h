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

// ThirdPersonCamera
struct ThirdPersonCamera_t_927744954_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void ThirdPersonCamera::.ctor()
extern "C"  void ThirdPersonCamera__ctor_m_2078431030_0 (ThirdPersonCamera_t_927744954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::OnEnable()
extern "C"  void ThirdPersonCamera_OnEnable_m_218697092_0 (ThirdPersonCamera_t_927744954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C"  void ThirdPersonCamera_DebugDrawStuff_m_1802430793_0 (ThirdPersonCamera_t_927744954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C"  float ThirdPersonCamera_AngleDistance_m_219769036_0 (ThirdPersonCamera_t_927744954_0 * __this, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Apply_m_1916645574_0 (ThirdPersonCamera_t_927744954_0 * __this, Transform_t1584899523_0 * ___dummyTarget, Vector3_t_725341337_0  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
extern "C"  void ThirdPersonCamera_LateUpdate_m95653833_0 (ThirdPersonCamera_t_927744954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Cut_m_1915732442_0 (ThirdPersonCamera_t_927744954_0 * __this, Transform_t1584899523_0 * ___dummyTarget, Vector3_t_725341337_0  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_SetUpRotation_m1528407081_0 (ThirdPersonCamera_t_927744954_0 * __this, Vector3_t_725341337_0  ___centerPos, Vector3_t_725341337_0  ___headPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C"  Vector3_t_725341337_0  ThirdPersonCamera_GetCenterOffset_m1817247200_0 (ThirdPersonCamera_t_927744954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
