#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// InputToEvent
struct  InputToEvent_t1792137264_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.GameObject InputToEvent::lastGo
	GameObject_t_184308134_0 * ___lastGo_2;
	// System.Boolean InputToEvent::DetectPointedAtGameObject
	bool ___DetectPointedAtGameObject_4;
	// UnityEngine.Vector2 InputToEvent::pressedPosition
	Vector2_t_725341338_0  ___pressedPosition_5;
	// UnityEngine.Vector2 InputToEvent::currentPos
	Vector2_t_725341338_0  ___currentPos_6;
	// System.Boolean InputToEvent::Dragging
	bool ___Dragging_7;
	// UnityEngine.Camera InputToEvent::m_Camera
	Camera_t814710830_0 * ___m_Camera_8;
};
struct InputToEvent_t1792137264_0_StaticFields{
	// UnityEngine.Vector3 InputToEvent::inputHitPos
	Vector3_t_725341337_0  ___inputHitPos_3;
	// UnityEngine.GameObject InputToEvent::<goPointedAt>k__BackingField
	GameObject_t_184308134_0 * ___U3CgoPointedAtU3Ek__BackingField_9;
};
