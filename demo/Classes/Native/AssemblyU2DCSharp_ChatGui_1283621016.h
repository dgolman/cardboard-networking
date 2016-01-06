#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_816028754_0;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t1606703830_0;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t1856868248_0;
// ChatGui
struct ChatGui_t_1283621016_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// ChatGui
struct  ChatGui_t_1283621016_0  : public MonoBehaviour_t_92453903_0
{
	// System.String ChatGui::ChatAppId
	String_t* ___ChatAppId_2;
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t_816028754_0* ___ChannelsToJoinOnConnect_3;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_4;
	// System.Boolean ChatGui::DemoPublishOnSubscribe
	bool ___DemoPublishOnSubscribe_5;
	// ExitGames.Client.Photon.Chat.ChatChannel ChatGui::selectedChannel
	ChatChannel_t1606703830_0 * ___selectedChannel_6;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName_7;
	// System.Int32 ChatGui::selectedChannelIndex
	int32_t ___selectedChannelIndex_8;
	// System.Boolean ChatGui::doingPrivateChat
	bool ___doingPrivateChat_9;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t1856868248_0 * ___chatClient_10;
	// UnityEngine.Rect ChatGui::GuiRect
	Rect_t_981940947_0  ___GuiRect_11;
	// System.Boolean ChatGui::IsVisible
	bool ___IsVisible_12;
	// System.Boolean ChatGui::AlignBottom
	bool ___AlignBottom_13;
	// System.Boolean ChatGui::FullScreen
	bool ___FullScreen_14;
	// System.String ChatGui::inputLine
	String_t* ___inputLine_15;
	// System.String ChatGui::userIdInput
	String_t* ___userIdInput_16;
	// UnityEngine.Vector2 ChatGui::scrollPos
	Vector2_t_725341338_0  ___scrollPos_17;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_21;
};
struct ChatGui_t_1283621016_0_StaticFields{
	// System.String ChatGui::WelcomeText
	String_t* ___WelcomeText_18;
	// System.String ChatGui::HelpText
	String_t* ___HelpText_19;
	// ChatGui ChatGui::instance
	ChatGui_t_1283621016_0 * ___instance_20;
};
