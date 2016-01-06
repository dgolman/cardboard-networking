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
// PickupController
struct PickupController_t_1449103309_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// PickupCamera
struct  PickupCamera_t1833939772_0  : public MonoBehaviour_t6853251_0
{
	// UnityEngine.Transform PickupCamera::cameraTransform
	Transform_t1584899523_0 * ___cameraTransform_2;
	// UnityEngine.Transform PickupCamera::_target
	Transform_t1584899523_0 * ____target_3;
	// System.Single PickupCamera::distance
	float ___distance_4;
	// System.Single PickupCamera::height
	float ___height_5;
	// System.Single PickupCamera::angularSmoothLag
	float ___angularSmoothLag_6;
	// System.Single PickupCamera::angularMaxSpeed
	float ___angularMaxSpeed_7;
	// System.Single PickupCamera::heightSmoothLag
	float ___heightSmoothLag_8;
	// System.Single PickupCamera::snapSmoothLag
	float ___snapSmoothLag_9;
	// System.Single PickupCamera::snapMaxSpeed
	float ___snapMaxSpeed_10;
	// System.Single PickupCamera::clampHeadPositionScreenSpace
	float ___clampHeadPositionScreenSpace_11;
	// System.Single PickupCamera::lockCameraTimeout
	float ___lockCameraTimeout_12;
	// UnityEngine.Vector3 PickupCamera::headOffset
	Vector3_t_725341337_0  ___headOffset_13;
	// UnityEngine.Vector3 PickupCamera::centerOffset
	Vector3_t_725341337_0  ___centerOffset_14;
	// System.Single PickupCamera::heightVelocity
	float ___heightVelocity_15;
	// System.Single PickupCamera::angleVelocity
	float ___angleVelocity_16;
	// System.Boolean PickupCamera::snap
	bool ___snap_17;
	// PickupController PickupCamera::controller
	PickupController_t_1449103309_0 * ___controller_18;
	// System.Single PickupCamera::targetHeight
	float ___targetHeight_19;
	// UnityEngine.Camera PickupCamera::m_CameraTransformCamera
	Camera_t814710830_0 * ___m_CameraTransformCamera_20;
};
