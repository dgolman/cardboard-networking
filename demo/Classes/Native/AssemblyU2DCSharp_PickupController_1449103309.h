#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t1247807435_0;
// UnityEngine.Animation
struct Animation_t1650742747_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharp_PickupCharacterState_1465150465.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_CollisionFlags1145113214.h"

// PickupController
struct  PickupController_t_1449103309_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.AnimationClip PickupController::idleAnimation
	AnimationClip_t1247807435_0 * ___idleAnimation_2;
	// UnityEngine.AnimationClip PickupController::walkAnimation
	AnimationClip_t1247807435_0 * ___walkAnimation_3;
	// UnityEngine.AnimationClip PickupController::runAnimation
	AnimationClip_t1247807435_0 * ___runAnimation_4;
	// UnityEngine.AnimationClip PickupController::jumpPoseAnimation
	AnimationClip_t1247807435_0 * ___jumpPoseAnimation_5;
	// System.Single PickupController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed_6;
	// System.Single PickupController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed_7;
	// System.Single PickupController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed_8;
	// System.Single PickupController::jumpAnimationSpeed
	float ___jumpAnimationSpeed_9;
	// System.Single PickupController::landAnimationSpeed
	float ___landAnimationSpeed_10;
	// UnityEngine.Animation PickupController::_animation
	Animation_t1650742747_0 * ____animation_11;
	// PickupCharacterState PickupController::_characterState
	int32_t ____characterState_12;
	// System.Single PickupController::walkSpeed
	float ___walkSpeed_13;
	// System.Single PickupController::trotSpeed
	float ___trotSpeed_14;
	// System.Single PickupController::runSpeed
	float ___runSpeed_15;
	// System.Single PickupController::inAirControlAcceleration
	float ___inAirControlAcceleration_16;
	// System.Single PickupController::jumpHeight
	float ___jumpHeight_17;
	// System.Single PickupController::gravity
	float ___gravity_18;
	// System.Single PickupController::speedSmoothing
	float ___speedSmoothing_19;
	// System.Single PickupController::rotateSpeed
	float ___rotateSpeed_20;
	// System.Single PickupController::trotAfterSeconds
	float ___trotAfterSeconds_21;
	// System.Boolean PickupController::canJump
	bool ___canJump_22;
	// System.Single PickupController::jumpRepeatTime
	float ___jumpRepeatTime_23;
	// System.Single PickupController::jumpTimeout
	float ___jumpTimeout_24;
	// System.Single PickupController::groundedTimeout
	float ___groundedTimeout_25;
	// System.Single PickupController::lockCameraTimer
	float ___lockCameraTimer_26;
	// UnityEngine.Vector3 PickupController::moveDirection
	Vector3_t_725341337_0  ___moveDirection_27;
	// System.Single PickupController::verticalSpeed
	float ___verticalSpeed_28;
	// System.Single PickupController::moveSpeed
	float ___moveSpeed_29;
	// UnityEngine.CollisionFlags PickupController::collisionFlags
	int32_t ___collisionFlags_30;
	// System.Boolean PickupController::jumping
	bool ___jumping_31;
	// System.Boolean PickupController::jumpingReachedApex
	bool ___jumpingReachedApex_32;
	// System.Boolean PickupController::movingBack
	bool ___movingBack_33;
	// System.Boolean PickupController::isMoving
	bool ___isMoving_34;
	// System.Single PickupController::walkTimeStart
	float ___walkTimeStart_35;
	// System.Single PickupController::lastJumpButtonTime
	float ___lastJumpButtonTime_36;
	// System.Single PickupController::lastJumpTime
	float ___lastJumpTime_37;
	// UnityEngine.Vector3 PickupController::inAirVelocity
	Vector3_t_725341337_0  ___inAirVelocity_38;
	// System.Single PickupController::lastGroundedTime
	float ___lastGroundedTime_39;
	// UnityEngine.Vector3 PickupController::velocity
	Vector3_t_725341337_0  ___velocity_40;
	// UnityEngine.Vector3 PickupController::lastPos
	Vector3_t_725341337_0  ___lastPos_41;
	// UnityEngine.Vector3 PickupController::remotePosition
	Vector3_t_725341337_0  ___remotePosition_42;
	// System.Boolean PickupController::isControllable
	bool ___isControllable_43;
	// System.Boolean PickupController::DoRotate
	bool ___DoRotate_44;
	// System.Single PickupController::RemoteSmoothing
	float ___RemoteSmoothing_45;
	// System.Boolean PickupController::AssignAsTagObject
	bool ___AssignAsTagObject_46;
};
