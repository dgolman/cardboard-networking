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

// ChatGui
struct ChatGui_t_1283621016_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Boolean[]
struct BooleanU5BU5D_t_1574345617_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel842211397.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photo74906404.h"

// System.Void ChatGui::.ctor()
extern "C"  void ChatGui__ctor_m1170978856_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::.cctor()
extern "C"  void ChatGui__cctor_m1458509957_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatGui::get_UserName()
extern "C"  String_t* ChatGui_get_UserName_m_157536360_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::set_UserName(System.String)
extern "C"  void ChatGui_set_UserName_m_1244419373_0 (ChatGui_t_1283621016_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatGui ChatGui::get_Instance()
extern "C"  ChatGui_t_1283621016_0 * ChatGui_get_Instance_m341257258_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Awake()
extern "C"  void ChatGui_Awake_m1408584075_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Start()
extern "C"  void ChatGui_Start_m118116648_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnApplicationQuit()
extern "C"  void ChatGui_OnApplicationQuit_m1266231718_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDestroy()
extern "C"  void ChatGui_OnDestroy_m456472865_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Update()
extern "C"  void ChatGui_Update_m_627499035_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGUI()
extern "C"  void ChatGui_OnGUI_m666377506_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::GuiSendsMsg()
extern "C"  void ChatGui_GuiSendsMsg_m_782194377_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::PostHelpToCurrentChannel()
extern "C"  void ChatGui_PostHelpToCurrentChannel_m1853693410_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnConnected()
extern "C"  void ChatGui_OnConnected_m_2952464_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C"  void ChatGui_DebugReturn_m_2129766022_0 (ChatGui_t_1283621016_0 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDisconnected()
extern "C"  void ChatGui_OnDisconnected_m233577878_0 (ChatGui_t_1283621016_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState)
extern "C"  void ChatGui_OnChatStateChange_m_1799040461_0 (ChatGui_t_1283621016_0 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnSubscribed(System.String[],System.Boolean[])
extern "C"  void ChatGui_OnSubscribed_m_657125328_0 (ChatGui_t_1283621016_0 * __this, StringU5BU5D_t_816028754_0* ___channels, BooleanU5BU5D_t_1574345617_0* ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnUnsubscribed(System.String[])
extern "C"  void ChatGui_OnUnsubscribed_m_1027502382_0 (ChatGui_t_1283621016_0 * __this, StringU5BU5D_t_816028754_0* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
extern "C"  void ChatGui_OnGetMessages_m1418079615_0 (ChatGui_t_1283621016_0 * __this, String_t* ___channelName, StringU5BU5D_t_816028754_0* ___senders, ObjectU5BU5D_t1774424924_0* ___messages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
extern "C"  void ChatGui_OnPrivateMessage_m990768589_0 (ChatGui_t_1283621016_0 * __this, String_t* ___sender, Object_t * ___message, String_t* ___channelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
extern "C"  void ChatGui_OnStatusUpdate_m1328107296_0 (ChatGui_t_1283621016_0 * __this, String_t* ___user, int32_t ___status, bool ___gotMessage, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
