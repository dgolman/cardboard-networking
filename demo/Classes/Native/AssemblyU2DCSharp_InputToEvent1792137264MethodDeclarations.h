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

// InputToEvent
struct InputToEvent_t1792137264_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// System.Void InputToEvent::.ctor()
extern "C"  void InputToEvent__ctor_m_2064757658_0 (InputToEvent_t1792137264_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::get_goPointedAt()
extern "C"  GameObject_t_184308134_0 * InputToEvent_get_goPointedAt_m1478939552_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::set_goPointedAt(UnityEngine.GameObject)
extern "C"  void InputToEvent_set_goPointedAt_m741946809_0 (Object_t * __this /* static, unused */, GameObject_t_184308134_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InputToEvent::get_DragVector()
extern "C"  Vector2_t_725341338_0  InputToEvent_get_DragVector_m_1356865511_0 (InputToEvent_t1792137264_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Start()
extern "C"  void InputToEvent_Start_m1177347430_0 (InputToEvent_t1792137264_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Update()
extern "C"  void InputToEvent_Update_m2143884135_0 (InputToEvent_t1792137264_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Press(UnityEngine.Vector2)
extern "C"  void InputToEvent_Press_m1487870803_0 (InputToEvent_t1792137264_0 * __this, Vector2_t_725341338_0  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Release(UnityEngine.Vector2)
extern "C"  void InputToEvent_Release_m1237919439_0 (InputToEvent_t1792137264_0 * __this, Vector2_t_725341338_0  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::RaycastObject(UnityEngine.Vector2)
extern "C"  GameObject_t_184308134_0 * InputToEvent_RaycastObject_m_1251524253_0 (InputToEvent_t1792137264_0 * __this, Vector2_t_725341338_0  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
