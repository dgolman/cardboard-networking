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

// WorkerInGame
struct WorkerInGame_t1735500368_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;
// PhotonMessageInfo
struct PhotonMessageInfo_t1537066398_0;

#include "codegen/il2cpp-codegen.h"

// System.Void WorkerInGame::.ctor()
extern "C"  void WorkerInGame__ctor_m_945822138_0 (WorkerInGame_t1735500368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::Awake()
extern "C"  void WorkerInGame_Awake_m_708216919_0 (WorkerInGame_t1735500368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnGUI()
extern "C"  void WorkerInGame_OnGUI_m_1450423488_0 (WorkerInGame_t1735500368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnMasterClientSwitched(PhotonPlayer)
extern "C"  void WorkerInGame_OnMasterClientSwitched_m_71573632_0 (WorkerInGame_t1735500368_0 * __this, PhotonPlayer_t_1074427656_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnLeftRoom()
extern "C"  void WorkerInGame_OnLeftRoom_m_1518762817_0 (WorkerInGame_t1735500368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnDisconnectedFromPhoton()
extern "C"  void WorkerInGame_OnDisconnectedFromPhoton_m2101295070_0 (WorkerInGame_t1735500368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonInstantiate(PhotonMessageInfo)
extern "C"  void WorkerInGame_OnPhotonInstantiate_m_25763194_0 (WorkerInGame_t1735500368_0 * __this, PhotonMessageInfo_t1537066398_0 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void WorkerInGame_OnPhotonPlayerConnected_m2071163604_0 (WorkerInGame_t1735500368_0 * __this, PhotonPlayer_t_1074427656_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void WorkerInGame_OnPhotonPlayerDisconnected_m_1982438888_0 (WorkerInGame_t1735500368_0 * __this, PhotonPlayer_t_1074427656_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerInGame::OnFailedToConnectToPhoton()
extern "C"  void WorkerInGame_OnFailedToConnectToPhoton_m512085934_0 (WorkerInGame_t1735500368_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
