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

// PickupItemSyncer
struct PickupItemSyncer_t_81754606_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;
// System.Single[]
struct SingleU5BU5D_t_2105059803_0;

#include "codegen/il2cpp-codegen.h"

// System.Void PickupItemSyncer::.ctor()
extern "C"  void PickupItemSyncer__ctor_m244374340_0 (PickupItemSyncer_t_81754606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void PickupItemSyncer_OnPhotonPlayerConnected_m_1674045614_0 (PickupItemSyncer_t_81754606_0 * __this, PhotonPlayer_t_1074427656_0 * ___newPlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::OnJoinedRoom()
extern "C"  void PickupItemSyncer_OnJoinedRoom_m1271563459_0 (PickupItemSyncer_t_81754606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::AskForPickupItemSpawnTimes()
extern "C"  void PickupItemSyncer_AskForPickupItemSpawnTimes_m1649024778_0 (PickupItemSyncer_t_81754606_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::RequestForPickupTimes(PhotonMessageInfo)
extern "C"  void PickupItemSyncer_RequestForPickupTimes_m_771487993_0 (PickupItemSyncer_t_81754606_0 * __this, PhotonMessageInfo_t1537066398_0 * ___msgInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::SendPickedUpItems(PhotonPlayer)
extern "C"  void PickupItemSyncer_SendPickedUpItems_m1470168642_0 (PickupItemSyncer_t_81754606_0 * __this, PhotonPlayer_t_1074427656_0 * ___targtePlayer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItemSyncer::PickupItemInit(System.Double,System.Single[])
extern "C"  void PickupItemSyncer_PickupItemInit_m_619043834_0 (PickupItemSyncer_t_81754606_0 * __this, double ___timeBase, SingleU5BU5D_t_2105059803_0* ___inactivePickupsAndTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
