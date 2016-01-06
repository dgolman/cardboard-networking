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

// AuthenticationValues
struct AuthenticationValues_t_1611739851_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CustomAuthenticationType_2112979682.h"

// System.Void AuthenticationValues::.ctor()
extern "C"  void AuthenticationValues__ctor_m1448241665_0 (AuthenticationValues_t_1611739851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::.ctor(System.String)
extern "C"  void AuthenticationValues__ctor_m_1935065439_0 (AuthenticationValues_t_1611739851_0 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CustomAuthenticationType AuthenticationValues::get_AuthType()
extern "C"  uint8_t AuthenticationValues_get_AuthType_m1921130760_0 (AuthenticationValues_t_1611739851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthType(CustomAuthenticationType)
extern "C"  void AuthenticationValues_set_AuthType_m589781951_0 (AuthenticationValues_t_1611739851_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_AuthGetParameters()
extern "C"  String_t* AuthenticationValues_get_AuthGetParameters_m2125009547_0 (AuthenticationValues_t_1611739851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthGetParameters(System.String)
extern "C"  void AuthenticationValues_set_AuthGetParameters_m867480168_0 (AuthenticationValues_t_1611739851_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object AuthenticationValues::get_AuthPostData()
extern "C"  Object_t * AuthenticationValues_get_AuthPostData_m_1802487405_0 (AuthenticationValues_t_1611739851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_AuthPostData(System.Object)
extern "C"  void AuthenticationValues_set_AuthPostData_m700983170_0 (AuthenticationValues_t_1611739851_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_Token()
extern "C"  String_t* AuthenticationValues_get_Token_m455570988_0 (AuthenticationValues_t_1611739851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_Token(System.String)
extern "C"  void AuthenticationValues_set_Token_m455593447_0 (AuthenticationValues_t_1611739851_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::get_UserId()
extern "C"  String_t* AuthenticationValues_get_UserId_m2074842773_0 (AuthenticationValues_t_1611739851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::set_UserId(System.String)
extern "C"  void AuthenticationValues_set_UserId_m121149212_0 (AuthenticationValues_t_1611739851_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.String)
extern "C"  void AuthenticationValues_SetAuthPostData_m106792335_0 (AuthenticationValues_t_1611739851_0 * __this, String_t* ___stringData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C"  void AuthenticationValues_SetAuthPostData_m_1951013290_0 (AuthenticationValues_t_1611739851_0 * __this, ByteU5BU5D_t_1238178395_0* ___byteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C"  void AuthenticationValues_AddAuthParameter_m_126205445_0 (AuthenticationValues_t_1611739851_0 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AuthenticationValues::ToString()
extern "C"  String_t* AuthenticationValues_ToString_m_808225870_0 (AuthenticationValues_t_1611739851_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
