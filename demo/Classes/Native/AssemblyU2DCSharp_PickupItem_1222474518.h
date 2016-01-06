#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t_92453903_0;
// System.Collections.Generic.HashSet`1<PickupItem>
struct HashSet_1_t_1804620668_0;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"

// PickupItem
struct  PickupItem_t_1222474518_0  : public MonoBehaviour_t6853251_0
{
	// System.Single PickupItem::SecondsBeforeRespawn
	float ___SecondsBeforeRespawn_2;
	// System.Boolean PickupItem::PickupOnTrigger
	bool ___PickupOnTrigger_3;
	// System.Boolean PickupItem::PickupIsMine
	bool ___PickupIsMine_4;
	// UnityEngine.MonoBehaviour PickupItem::OnPickedUpCall
	MonoBehaviour_t_92453903_0 * ___OnPickedUpCall_5;
	// System.Boolean PickupItem::SentPickup
	bool ___SentPickup_6;
	// System.Double PickupItem::TimeOfRespawn
	double ___TimeOfRespawn_7;
};
struct PickupItem_t_1222474518_0_StaticFields{
	// System.Collections.Generic.HashSet`1<PickupItem> PickupItem::DisabledPickupItems
	HashSet_1_t_1804620668_0 * ___DisabledPickupItems_8;
};
