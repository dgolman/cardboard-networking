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
// ThirdPersonController
struct ThirdPersonController_t845472829_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// ThirdPersonCamera
struct  ThirdPersonCamera_t_927744954_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Transform ThirdPersonCamera::cameraTransform
	Transform_t1584899523_0 * ___cameraTransform_2;
	// UnityEngine.Transform ThirdPersonCamera::_target
	Transform_t1584899523_0 * ____target_3;
	// System.Single ThirdPersonCamera::distance
	float ___distance_4;
	// System.Single ThirdPersonCamera::height
	float ___height_5;
	// System.Single ThirdPersonCamera::angularSmoothLag
	float ___angularSmoothLag_6;
	// System.Single ThirdPersonCamera::angularMaxSpeed
	float ___angularMaxSpeed_7;
	// System.Single ThirdPersonCamera::heightSmoothLag
	float ___heightSmoothLag_8;
	// System.Single ThirdPersonCamera::snapSmoothLag
	float ___snapSmoothLag_9;
	// System.Single ThirdPersonCamera::snapMaxSpeed
	float ___snapMaxSpeed_10;
	// System.Single ThirdPersonCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace_11;
	// System.Single ThirdPersonCamera::lockCameraTimeout
	float ___lockCameraTimeout_12;
	// UnityEngine.Vector3 ThirdPersonCamera::headOffset
	Vector3_t_725341337_0  ___headOffset_13;
	// UnityEngine.Vector3 ThirdPersonCamera::centerOffset
	Vector3_t_725341337_0  ___centerOffset_14;
	// System.Single ThirdPersonCamera::heightVelocity
	float ___heightVelocity_15;
	// System.Single ThirdPersonCamera::angleVelocity
	float ___angleVelocity_16;
	// System.Boolean ThirdPersonCamera::snap
	bool ___snap_17;
	// ThirdPersonController ThirdPersonCamera::controller
	ThirdPersonController_t845472829_0 * ___controller_18;
	// System.Single ThirdPersonCamera::targetHeight
	float ___targetHeight_19;
	// UnityEngine.Camera ThirdPersonCamera::m_CameraTransformCamera
	Camera_t814710830_0 * ___m_CameraTransformCamera_20;
};
