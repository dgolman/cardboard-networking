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

// GameLogic
struct GameLogic_t_1518690831_0;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;

#include "codegen/il2cpp-codegen.h"

// System.Void GameLogic::.ctor()
extern "C"  void GameLogic__ctor_m737121407_0 (GameLogic_t_1518690831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::.cctor()
extern "C"  void GameLogic__cctor_m893830926_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::Start()
extern "C"  void GameLogic_Start_m_315740801_0 (GameLogic_t_1518690831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnJoinedRoom()
extern "C"  void GameLogic_OnJoinedRoom_m_1291910360_0 (GameLogic_t_1518690831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerConnected(PhotonPlayer)
extern "C"  void GameLogic_OnPhotonPlayerConnected_m_1955383475_0 (GameLogic_t_1518690831_0 * __this, PhotonPlayer_t_1074427656_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TagPlayer(System.Int32)
extern "C"  void GameLogic_TagPlayer_m_1434051255_0 (Object_t * __this /* static, unused */, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::TaggedPlayer(System.Int32)
extern "C"  void GameLogic_TaggedPlayer_m264610659_0 (GameLogic_t_1518690831_0 * __this, int32_t ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnPhotonPlayerDisconnected(PhotonPlayer)
extern "C"  void GameLogic_OnPhotonPlayerDisconnected_m1590107903_0 (GameLogic_t_1518690831_0 * __this, PhotonPlayer_t_1074427656_0 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::OnMasterClientSwitched()
extern "C"  void GameLogic_OnMasterClientSwitched_m1949461348_0 (GameLogic_t_1518690831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
