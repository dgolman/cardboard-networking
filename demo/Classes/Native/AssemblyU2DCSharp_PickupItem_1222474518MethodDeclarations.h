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

// PickupItem
struct PickupItem_t_1222474518_0;
// UnityEngine.Collider
struct Collider_t770782909_0;
// PhotonStream
struct PhotonStream_t_980664937_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void PickupItem::.ctor()
extern "C"  void PickupItem__ctor_m506706348_0 (PickupItem_t_1222474518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::.cctor()
extern "C"  void PickupItem__cctor_m_1954068607_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PickupItem::get_ViewID()
extern "C"  int32_t PickupItem_get_ViewID_m_1500440017_0 (PickupItem_t_1222474518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PickupItem_OnTriggerEnter_m877797708_0 (PickupItem_t_1222474518_0 * __this, Collider_t770782909_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PickupItem_OnPhotonSerializeView_m_1471819861_0 (PickupItem_t_1222474518_0 * __this, PhotonStream_t_980664937_0 * ___stream, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Pickup()
extern "C"  void PickupItem_Pickup_m_1806139436_0 (PickupItem_t_1222474518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop()
extern "C"  void PickupItem_Drop_m936983879_0 (PickupItem_t_1222474518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop(UnityEngine.Vector3)
extern "C"  void PickupItem_Drop_m_1093318862_0 (PickupItem_t_1222474518_0 * __this, Vector3_t_725341337_0  ___newPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
extern "C"  void PickupItem_PunPickup_m_759315158_0 (PickupItem_t_1222474518_0 * __this, PhotonMessageInfo_t1537066398_0 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PickedUp(System.Single)
extern "C"  void PickupItem_PickedUp_m9051512_0 (PickupItem_t_1222474518_0 * __this, float ___timeUntilRespawn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
extern "C"  void PickupItem_PunRespawn_m_1257948286_0 (PickupItem_t_1222474518_0 * __this, Vector3_t_725341337_0  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn()
extern "C"  void PickupItem_PunRespawn_m1336380151_0 (PickupItem_t_1222474518_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
