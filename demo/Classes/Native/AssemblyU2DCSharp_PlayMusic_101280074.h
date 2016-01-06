#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t719917725_0;
// UnityEngine.AudioSource
struct AudioSource_t812398632_0;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour6853251.h"

// PlayMusic
struct  PlayMusic_t_101280074_0  : public MonoBehaviour_t6853251_0
{
	// UnityEngine.AudioClip PlayMusic::clip
	AudioClip_t719917725_0 * ___clip_2;
	// UnityEngine.AudioSource PlayMusic::mySource
	AudioSource_t812398632_0 * ___mySource_3;
	// System.Single PlayMusic::myVolume
	float ___myVolume_4;
	// System.String PlayMusic::stringclip
	String_t* ___stringclip_5;
};
