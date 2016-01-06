#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PickupController
struct PickupController_t_1449103309_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;
// UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t_384325222_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void PickupController::.ctor()
extern "C"  void PickupController__ctor_m_573585853_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Awake()
extern "C"  void PickupController_Awake_m_335980634_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Update()
extern "C"  void PickupController_Update_m1125569834_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PickupController_OnPhotonSerializeView_m2075749378_0 (PickupController_t_1449103309_0 * __this, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::UpdateSmoothedMovementDirection()
extern "C"  void PickupController_UpdateSmoothedMovementDirection_m1812342875_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyJumping()
extern "C"  void PickupController_ApplyJumping_m_1481626937_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::ApplyGravity()
extern "C"  void PickupController_ApplyGravity_m1119134113_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::CalculateJumpVerticalSpeed(System.Single)
extern "C"  float PickupController_CalculateJumpVerticalSpeed_m_1152861023_0 (PickupController_t_1449103309_0 * __this, float ___targetJumpHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::DidJump()
extern "C"  void PickupController_DidJump_m1222871406_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::OnControllerColliderHit(UnityEngine.ControllerColliderHit)
extern "C"  void PickupController_OnControllerColliderHit_m_1402353439_0 (PickupController_t_1449103309_0 * __this, ControllerColliderHit_t_384325222_0 * ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetSpeed()
extern "C"  float PickupController_GetSpeed_m1602567102_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsJumping()
extern "C"  bool PickupController_IsJumping_m_773039337_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGrounded()
extern "C"  bool PickupController_IsGrounded_m_1305333243_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PickupController::GetDirection()
extern "C"  Vector3_t_725341337_0  PickupController_GetDirection_m_722802012_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMovingBackwards()
extern "C"  bool PickupController_IsMovingBackwards_m123736293_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PickupController::GetLockCameraTimer()
extern "C"  float PickupController_GetLockCameraTimer_m_1836086932_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsMoving()
extern "C"  bool PickupController_IsMoving_m268357485_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::HasJumpReachedApex()
extern "C"  bool PickupController_HasJumpReachedApex_m324530657_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PickupController::IsGroundedWithTimeout()
extern "C"  bool PickupController_IsGroundedWithTimeout_m432333912_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupController::Reset()
extern "C"  void PickupController_Reset_m1367814384_0 (PickupController_t_1449103309_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
