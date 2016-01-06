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

// PickupCamera
struct PickupCamera_t1833939772_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void PickupCamera::.ctor()
extern "C"  void PickupCamera__ctor_m1179131610_0 (PickupCamera_t1833939772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::OnEnable()
extern "C"  void PickupCamera_OnEnable_m1043858028_0 (PickupCamera_t1833939772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::DebugDrawStuff()
extern "C"  void PickupCamera_DebugDrawStuff_m_1067289945_0 (PickupCamera_t1833939772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupCamera::AngleDistance(System.Single,System.Single)
extern "C"  float PickupCamera_AngleDistance_m313973052_0 (PickupCamera_t1833939772_0 * __this, float ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void PickupCamera_Apply_m_542643414_0 (PickupCamera_t1833939772_0 * __this, Transform_t1584899523_0 * ___dummyTarget, Vector3_t_725341337_0  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::LateUpdate()
extern "C"  void PickupCamera_LateUpdate_m_2064620615_0 (PickupCamera_t1833939772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void PickupCamera_Cut_m1330386454_0 (PickupCamera_t1833939772_0 * __this, Transform_t1584899523_0 * ___dummyTarget, Vector3_t_725341337_0  ___dummyCenter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void PickupCamera_SetUpRotation_m_352941031_0 (PickupCamera_t1833939772_0 * __this, Vector3_t_725341337_0  ___centerPos, Vector3_t_725341337_0  ___headPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupCamera::GetCenterOffset()
extern "C"  Vector3_t_725341337_0  PickupCamera_GetCenterOffset_m926595772_0 (PickupCamera_t1833939772_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
