#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StereoController
struct StereoController_t1679119023_0;
// UnityEngine.Camera
struct Camera_t814710830_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharp_Cardboard_Eye_733578435.h"
#include "UnityEngine_UnityEngine_LayerMask_1132430796.h"

// CardboardEye
struct  CardboardEye_t_300735754_0  : public MonoBehaviour_t_92453903_0
{
	// Cardboard/Eye CardboardEye::eye
	int32_t ___eye_2;
	// UnityEngine.LayerMask CardboardEye::toggleCullingMask
	LayerMask_t_1132430796_0  ___toggleCullingMask_3;
	// StereoController CardboardEye::controller
	StereoController_t1679119023_0 * ___controller_4;
	// UnityEngine.Camera CardboardEye::camera
	Camera_t814710830_0 * ___camera_5;
};
