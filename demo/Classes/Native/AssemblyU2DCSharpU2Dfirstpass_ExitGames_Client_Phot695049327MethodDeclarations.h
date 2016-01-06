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

// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t695049327_0;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2018172487_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t_392984113_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"

// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void ChatPeer__ctor_m43950118_0 (ChatPeer_t695049327_0 * __this, Object_t * ___listener, uint8_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.cctor()
extern "C"  void ChatPeer__cctor_m_1706711156_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C"  String_t* ChatPeer_get_NameServerAddress_m870053823_0 (ChatPeer_t695049327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::get_IsProtocolSecure()
extern "C"  bool ChatPeer_get_IsProtocolSecure_m_1512196599_0 (ChatPeer_t695049327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C"  String_t* ChatPeer_GetNameServerAddress_m_757757360_0 (ChatPeer_t695049327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::Connect()
extern "C"  bool ChatPeer_Connect_m1506209253_0 (ChatPeer_t695049327_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  bool ChatPeer_AuthenticateOnNameServer_m2079829831_0 (ChatPeer_t695049327_0 * __this, String_t* ___appId, String_t* ___appVersion, String_t* ___region, AuthenticationValues_t_392984113_0 * ___authValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
