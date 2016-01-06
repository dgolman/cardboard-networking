#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t_1022613340_0;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t816092662_0;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"

// MoveByKeys
struct  MoveByKeys_t1974082391_0  : public MonoBehaviour_t6853251_0
{
	// System.Single MoveByKeys::Speed
	float ___Speed_2;
	// System.Single MoveByKeys::JumpForce
	float ___JumpForce_3;
	// System.Single MoveByKeys::JumpTimeout
	float ___JumpTimeout_4;
	// System.Boolean MoveByKeys::isSprite
	bool ___isSprite_5;
	// System.Single MoveByKeys::jumpingTime
	float ___jumpingTime_6;
	// UnityEngine.Rigidbody MoveByKeys::body
	Rigidbody_t_1022613340_0 * ___body_7;
	// UnityEngine.Rigidbody2D MoveByKeys::body2d
	Rigidbody2D_t816092662_0 * ___body2d_8;
};
