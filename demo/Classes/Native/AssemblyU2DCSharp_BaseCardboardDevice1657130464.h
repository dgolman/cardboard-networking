#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Single[]
struct SingleU5BU5D_t_2105059803_0;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t142379712_0;

#include "AssemblyU2DCSharp_BaseVRDevice1612809342.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// BaseCardboardDevice
struct  BaseCardboardDevice_t1657130464_0  : public BaseVRDevice_t1612809342_0
{
	// System.Single[] BaseCardboardDevice::headData
	SingleU5BU5D_t_2105059803_0* ___headData_20;
	// System.Single[] BaseCardboardDevice::viewData
	SingleU5BU5D_t_2105059803_0* ___viewData_21;
	// System.Single[] BaseCardboardDevice::profileData
	SingleU5BU5D_t_2105059803_0* ___profileData_22;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::headView
	Matrix4x4_t1577636070_0  ___headView_23;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::leftEyeView
	Matrix4x4_t1577636070_0  ___leftEyeView_24;
	// UnityEngine.Matrix4x4 BaseCardboardDevice::rightEyeView
	Matrix4x4_t1577636070_0  ___rightEyeView_25;
	// System.Collections.Generic.Queue`1<System.Int32> BaseCardboardDevice::eventQueue
	Queue_1_t142379712_0 * ___eventQueue_26;
	// System.Boolean BaseCardboardDevice::debugDisableNativeProjections
	bool ___debugDisableNativeProjections_27;
	// System.Boolean BaseCardboardDevice::debugDisableNativeDistortion
	bool ___debugDisableNativeDistortion_28;
	// System.Boolean BaseCardboardDevice::debugDisableNativeUILayer
	bool ___debugDisableNativeUILayer_29;
};
