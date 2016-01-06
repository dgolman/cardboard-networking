#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// RPGCamera
struct  RPGCamera_t191682003_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Transform RPGCamera::Target
	Transform_t1584899523_0 * ___Target_2;
	// System.Single RPGCamera::MaximumDistance
	float ___MaximumDistance_3;
	// System.Single RPGCamera::MinimumDistance
	float ___MinimumDistance_4;
	// System.Single RPGCamera::ScrollModifier
	float ___ScrollModifier_5;
	// System.Single RPGCamera::TurnModifier
	float ___TurnModifier_6;
	// UnityEngine.Transform RPGCamera::m_CameraTransform
	Transform_t1584899523_0 * ___m_CameraTransform_7;
	// UnityEngine.Vector3 RPGCamera::m_LookAtPoint
	Vector3_t_725341337_0  ___m_LookAtPoint_8;
	// UnityEngine.Vector3 RPGCamera::m_LocalForwardVector
	Vector3_t_725341337_0  ___m_LocalForwardVector_9;
	// System.Single RPGCamera::m_Distance
	float ___m_Distance_10;
};
