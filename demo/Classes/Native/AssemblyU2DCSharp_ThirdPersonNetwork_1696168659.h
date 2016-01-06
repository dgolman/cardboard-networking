#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ThirdPersonCamera
struct ThirdPersonCamera_t_927744954_0;
// ThirdPersonController
struct ThirdPersonController_t845472829_0;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// ThirdPersonNetwork
struct  ThirdPersonNetwork_t_1696168659_0  : public MonoBehaviour_t6853251_0
{
	// ThirdPersonCamera ThirdPersonNetwork::cameraScript
	ThirdPersonCamera_t_927744954_0 * ___cameraScript_2;
	// ThirdPersonController ThirdPersonNetwork::controllerScript
	ThirdPersonController_t845472829_0 * ___controllerScript_3;
	// UnityEngine.Vector3 ThirdPersonNetwork::correctPlayerPos
	Vector3_t_725341337_0  ___correctPlayerPos_4;
	// UnityEngine.Quaternion ThirdPersonNetwork::correctPlayerRot
	Quaternion_t1989680039_0  ___correctPlayerRot_5;
};
