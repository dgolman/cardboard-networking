#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// UnityEngine.Component
struct Component_t_867674284_0;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t_503171416_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t1118662181_0;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t1776740394_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"
#include "AssemblyU2DCSharp_ViewSynchronization1329412640.h"
#include "AssemblyU2DCSharp_OnSerializeTransform234662950.h"
#include "AssemblyU2DCSharp_OnSerializeRigidBody1921164071.h"
#include "AssemblyU2DCSharp_OwnershipOption62489705.h"

// PhotonView
struct  PhotonView_t_751779204_0  : public MonoBehaviour_t6853251_0
{
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId_2;
	// System.Int32 PhotonView::group
	int32_t ___group_3;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_4;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup_5;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_t1774424924_0* ___instantiationDataField_6;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_t1774424924_0* ___lastOnSerializeDataSent_7;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t1774424924_0* ___lastOnSerializeDataReceived_8;
	// UnityEngine.Component PhotonView::observed
	Component_t_867674284_0 * ___observed_9;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization_10;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption_11;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption_12;
	// OwnershipOption PhotonView::ownershipTransfer
	int32_t ___ownershipTransfer_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> PhotonView::ObservedComponents
	List_1_t_503171416_0 * ___ObservedComponents_14;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo> PhotonView::m_OnSerializeMethodInfos
	Dictionary_2_t1118662181_0 * ___m_OnSerializeMethodInfos_15;
	// System.Int32 PhotonView::viewIdField
	int32_t ___viewIdField_16;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId_17;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake_18;
	// System.Boolean PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_19;
	// System.Boolean PhotonView::destroyedByPhotonNetwork
	bool ___destroyedByPhotonNetwork_20;
	// UnityEngine.MonoBehaviour[] PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t1776740394_0* ___RpcMonoBehaviours_21;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t * ___OnSerializeMethodInfo_22;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize_23;
};
