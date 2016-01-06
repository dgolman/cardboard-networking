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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t816092662_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_ForceMode2D_262226281.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t_725341338_0  Rigidbody2D_get_velocity_m416159605_0 (Rigidbody2D_t816092662_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m100625302_0 (Rigidbody2D_t816092662_0 * __this, Vector2_t_725341338_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_get_velocity_m715507538_0 (Rigidbody2D_t816092662_0 * __this, Vector2_t_725341338_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_set_velocity_m136509638_0 (Rigidbody2D_t816092662_0 * __this, Vector2_t_725341338_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
extern "C"  float Rigidbody2D_get_angularVelocity_m_580494246_0 (Rigidbody2D_t816092662_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C"  void Rigidbody2D_set_angularVelocity_m1393720209_0 (Rigidbody2D_t816092662_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody2D_set_isKinematic_m222467693_0 (Rigidbody2D_t816092662_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m312397382_0 (Rigidbody2D_t816092662_0 * __this, Vector2_t_725341338_0  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_INTERNAL_CALL_AddForce_m_1531144188_0 (Object_t * __this /* static, unused */, Rigidbody2D_t816092662_0 * ___self, Vector2_t_725341338_0 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
