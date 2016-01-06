#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.TextMesh
struct TextMesh_t398790531_0;
// UnityEngine.Font
struct Font_t_982288488_0;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"

// ShowInfoOfPlayer
struct  ShowInfoOfPlayer_t_273842434_0  : public MonoBehaviour_t6853251_0
{
	// UnityEngine.GameObject ShowInfoOfPlayer::textGo
	GameObject_t_184308134_0 * ___textGo_2;
	// UnityEngine.TextMesh ShowInfoOfPlayer::tm
	TextMesh_t398790531_0 * ___tm_3;
	// System.Single ShowInfoOfPlayer::CharacterSize
	float ___CharacterSize_4;
	// UnityEngine.Font ShowInfoOfPlayer::font
	Font_t_982288488_0 * ___font_5;
	// System.Boolean ShowInfoOfPlayer::DisableOnOwnObjects
	bool ___DisableOnOwnObjects_6;
};
