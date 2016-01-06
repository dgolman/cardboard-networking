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

// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t1606703830_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
extern "C"  void ChatChannel__ctor_m659436290_0 (ChatChannel_t1606703830_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
extern "C"  bool ChatChannel_get_IsPrivate_m_984515246_0 (ChatChannel_t1606703830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C"  void ChatChannel_set_IsPrivate_m_1715710351_0 (ChatChannel_t1606703830_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
extern "C"  int32_t ChatChannel_get_MessageCount_m_1819332341_0 (ChatChannel_t1606703830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
extern "C"  void ChatChannel_Add_m_2077133263_0 (ChatChannel_t1606703830_0 * __this, String_t* ___sender, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
extern "C"  void ChatChannel_Add_m489366381_0 (ChatChannel_t1606703830_0 * __this, StringU5BU5D_t_816028754_0* ___senders, ObjectU5BU5D_t1774424924_0* ___messages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
extern "C"  void ChatChannel_ClearMessages_m478845079_0 (ChatChannel_t1606703830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatChannel::ToStringMessages()
extern "C"  String_t* ChatChannel_ToStringMessages_m_1456696513_0 (ChatChannel_t1606703830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
