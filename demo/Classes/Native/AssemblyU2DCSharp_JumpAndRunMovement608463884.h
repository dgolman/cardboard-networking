#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t607439280_0;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t816092662_0;
// PhotonView
struct PhotonView_t_751779204_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// JumpAndRunMovement
struct  JumpAndRunMovement_t608463884_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single JumpAndRunMovement::Speed
	float ___Speed_2;
	// System.Single JumpAndRunMovement::JumpForce
	float ___JumpForce_3;
	// UnityEngine.Animator JumpAndRunMovement::m_Animator
	Animator_t607439280_0 * ___m_Animator_4;
	// UnityEngine.Rigidbody2D JumpAndRunMovement::m_Body
	Rigidbody2D_t816092662_0 * ___m_Body_5;
	// PhotonView JumpAndRunMovement::m_PhotonView
	PhotonView_t_751779204_0 * ___m_PhotonView_6;
	// System.Boolean JumpAndRunMovement::m_IsGrounded
	bool ___m_IsGrounded_7;
};
