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

// MoveCam
struct  MoveCam_t_779172125_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Vector3 MoveCam::originalPos
	Vector3_t_725341337_0  ___originalPos_2;
	// UnityEngine.Vector3 MoveCam::randomPos
	Vector3_t_725341337_0  ___randomPos_3;
	// UnityEngine.Transform MoveCam::camTransform
	Transform_t1584899523_0 * ___camTransform_4;
	// UnityEngine.Transform MoveCam::lookAt
	Transform_t1584899523_0 * ___lookAt_5;
};
