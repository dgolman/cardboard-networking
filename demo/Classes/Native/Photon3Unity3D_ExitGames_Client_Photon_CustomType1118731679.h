#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t_478224115_0;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t622954348_0;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t_807031891_0;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t_1142698292_0;

#include "mscorlib_System_Object_887538054.h"

// ExitGames.Client.Photon.CustomType
struct  CustomType_t1118731679_0  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.CustomType::Code
	uint8_t ___Code_0;
	// System.Type ExitGames.Client.Photon.CustomType::Type
	Type_t * ___Type_1;
	// ExitGames.Client.Photon.SerializeMethod ExitGames.Client.Photon.CustomType::SerializeFunction
	SerializeMethod_t_478224115_0 * ___SerializeFunction_2;
	// ExitGames.Client.Photon.DeserializeMethod ExitGames.Client.Photon.CustomType::DeserializeFunction
	DeserializeMethod_t622954348_0 * ___DeserializeFunction_3;
	// ExitGames.Client.Photon.SerializeStreamMethod ExitGames.Client.Photon.CustomType::SerializeStreamFunction
	SerializeStreamMethod_t_807031891_0 * ___SerializeStreamFunction_4;
	// ExitGames.Client.Photon.DeserializeStreamMethod ExitGames.Client.Photon.CustomType::DeserializeStreamFunction
	DeserializeStreamMethod_t_1142698292_0 * ___DeserializeStreamFunction_5;
};
