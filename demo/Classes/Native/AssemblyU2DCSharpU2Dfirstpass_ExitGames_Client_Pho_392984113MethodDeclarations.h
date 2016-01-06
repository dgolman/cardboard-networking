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

// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t_392984113_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Phot980376760.h"

// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m_2073608351_0 (AuthenticationValues_t_392984113_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m453125441_0 (AuthenticationValues_t_392984113_0 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m224804506_0 (AuthenticationValues_t_392984113_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthType(ExitGames.Client.Photon.Chat.CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m_366000239_0 (AuthenticationValues_t_392984113_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m363369617_0 (AuthenticationValues_t_392984113_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m430725384_0 (AuthenticationValues_t_392984113_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C"  Object_t * AuthenticationValues_get_AuthPostData_m639671273_0 (AuthenticationValues_t_392984113_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m504028386_0 (AuthenticationValues_t_392984113_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m1745178930_0 (AuthenticationValues_t_392984113_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m1869374599_0 (AuthenticationValues_t_392984113_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m_896983985_0 (AuthenticationValues_t_392984113_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m998691964_0 (AuthenticationValues_t_392984113_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m238986287_0 (AuthenticationValues_t_392984113_0 * __this, String_t* ___stringData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m_1818819338_0 (AuthenticationValues_t_392984113_0 * __this, ByteU5BU5D_t_1238178395_0* ___byteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m631508827_0 (AuthenticationValues_t_392984113_0 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m1173037036_0 (AuthenticationValues_t_392984113_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
