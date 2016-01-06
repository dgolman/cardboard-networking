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

// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t1856868248_0;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t865660075_0;
// System.String
struct String_t;
// ExitGames.Client.Photon.EventData
struct EventData_t1226420112_0;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t_914439948_0;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t_392984113_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t1606703830_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP1569599210.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel842211397.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode_1347045293.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo74906404.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Ph_1761671168.h"

// System.Void ExitGames.Client.Photon.Chat.ChatClient::.ctor(ExitGames.Client.Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C"  void ChatClient__ctor_m_1579906078_0 (ChatClient_t1856868248_0 * __this, Object_t * ___listener, uint8_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m_598046691_0 (ChatClient_t1856868248_0 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m_122726332_0 (ChatClient_t1856868248_0 * __this, EventData_t1226420112_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m_715622158_0 (ChatClient_t1856868248_0 * __this, OperationResponse_t_914439948_0 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C"  void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m_1460545357_0 (ChatClient_t1856868248_0 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_NameServerAddress()
extern "C"  String_t* ChatClient_get_NameServerAddress_m_1341839178_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C"  void ChatClient_set_NameServerAddress_m215294147_0 (ChatClient_t1856868248_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_FrontendAddress()
extern "C"  String_t* ChatClient_get_FrontendAddress_m_1099172718_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C"  void ChatClient_set_FrontendAddress_m_1062421465_0 (ChatClient_t1856868248_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_ChatRegion()
extern "C"  String_t* ChatClient_get_ChatRegion_m_487225730_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C"  void ChatClient_set_ChatRegion_m_1342811539_0 (ChatClient_t1856868248_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::get_State()
extern "C"  int32_t ChatClient_get_State_m_895826234_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_State(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatClient_set_State_m165126701_0 (ChatClient_t1856868248_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C"  int32_t ChatClient_get_DisconnectedCause_m_1536769401_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DisconnectedCause(ExitGames.Client.Photon.Chat.ChatDisconnectCause)
extern "C"  void ChatClient_set_DisconnectedCause_m_1896433682_0 (ChatClient_t1856868248_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_CanChat()
extern "C"  bool ChatClient_get_CanChat_m_89522799_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_HasPeer()
extern "C"  bool ChatClient_get_HasPeer_m_24783771_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppVersion()
extern "C"  String_t* ChatClient_get_AppVersion_m_454955319_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C"  void ChatClient_set_AppVersion_m1936522242_0 (ChatClient_t1856868248_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppId()
extern "C"  String_t* ChatClient_get_AppId_m_344818068_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppId(System.String)
extern "C"  void ChatClient_set_AppId_m1622957389_0 (ChatClient_t1856868248_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::get_AuthValues()
extern "C"  AuthenticationValues_t_392984113_0 * ChatClient_get_AuthValues_m_1545914014_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AuthValues(ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  void ChatClient_set_AuthValues_m1018196489_0 (ChatClient_t1856868248_0 * __this, AuthenticationValues_t_392984113_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_UserId()
extern "C"  String_t* ChatClient_get_UserId_m781750872_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_UserId(System.String)
extern "C"  void ChatClient_set_UserId_m506582355_0 (ChatClient_t1856868248_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C"  bool ChatClient_Connect_m751377016_0 (ChatClient_t1856868248_0 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t_392984113_0 * ___authValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Service()
extern "C"  void ChatClient_Service_m735787339_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Disconnect()
extern "C"  void ChatClient_Disconnect_m934179752_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::StopThread()
extern "C"  void ChatClient_StopThread_m_1679044680_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C"  bool ChatClient_Subscribe_m_312241884_0 (ChatClient_t1856868248_0 * __this, StringU5BU5D_t_816028754_0* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C"  bool ChatClient_Subscribe_m2097382963_0 (ChatClient_t1856868248_0 * __this, StringU5BU5D_t_816028754_0* ___channels, int32_t ___messagesFromHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern "C"  bool ChatClient_Unsubscribe_m_758566211_0 (ChatClient_t1856868248_0 * __this, StringU5BU5D_t_816028754_0* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessage(System.String,System.Object)
extern "C"  bool ChatClient_PublishMessage_m_1275670296_0 (ChatClient_t1856868248_0 * __this, String_t* ___channelName, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object)
extern "C"  bool ChatClient_SendPrivateMessage_m_1118428620_0 (ChatClient_t1856868248_0 * __this, String_t* ___target, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern "C"  bool ChatClient_SendPrivateMessage_m1749222089_0 (ChatClient_t1856868248_0 * __this, String_t* ___target, Object_t * ___message, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C"  bool ChatClient_SetOnlineStatus_m1758122501_0 (ChatClient_t1856868248_0 * __this, int32_t ___status, Object_t * ___message, bool ___skipMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C"  bool ChatClient_SetOnlineStatus_m_1910027990_0 (ChatClient_t1856868248_0 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C"  bool ChatClient_SetOnlineStatus_m_1427553672_0 (ChatClient_t1856868248_0 * __this, int32_t ___status, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AddFriends(System.String[])
extern "C"  bool ChatClient_AddFriends_m776679036_0 (ChatClient_t1856868248_0 * __this, StringU5BU5D_t_816028754_0* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern "C"  bool ChatClient_RemoveFriends_m2134951261_0 (ChatClient_t1856868248_0 * __this, StringU5BU5D_t_816028754_0* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C"  String_t* ChatClient_GetPrivateChannelNameByUser_m803475014_0 (ChatClient_t1856868248_0 * __this, String_t* ___userName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m104386314_0 (ChatClient_t1856868248_0 * __this, String_t* ___channelName, bool ___isPrivate, ChatChannel_t1606703830_0 ** ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C"  bool ChatClient_TryGetChannel_m_159860195_0 (ChatClient_t1856868248_0 * __this, String_t* ___channelName, ChatChannel_t1606703830_0 ** ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::SendAcksOnly()
extern "C"  void ChatClient_SendAcksOnly_m1018861386_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C"  void ChatClient_set_DebugOut_m_1446068903_0 (ChatClient_t1856868248_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.Chat.ChatClient::get_DebugOut()
extern "C"  uint8_t ChatClient_get_DebugOut_m276583126_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C"  bool ChatClient_SendChannelOperation_m1677815726_0 (ChatClient_t1856868248_0 * __this, StringU5BU5D_t_816028754_0* ___channels, uint8_t ___operation, int32_t ___historyLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandlePrivateMessageEvent_m_911285788_0 (ChatClient_t1856868248_0 * __this, EventData_t1226420112_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleChatMessagesEvent_m_1177013660_0 (ChatClient_t1856868248_0 * __this, EventData_t1226420112_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleSubscribeEvent_m_2129500_0 (ChatClient_t1856868248_0 * __this, EventData_t1226420112_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleUnsubscribeEvent_m_2030797589_0 (ChatClient_t1856868248_0 * __this, EventData_t1226420112_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C"  void ChatClient_HandleAuthResponse_m1032380615_0 (ChatClient_t1856868248_0 * __this, OperationResponse_t_914439948_0 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C"  void ChatClient_HandleStatusUpdate_m_60302055_0 (ChatClient_t1856868248_0 * __this, EventData_t1226420112_0 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C"  void ChatClient_ConnectToFrontEnd_m1646260717_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C"  bool ChatClient_AuthenticateOnFrontEnd_m1105073046_0 (ChatClient_t1856868248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
