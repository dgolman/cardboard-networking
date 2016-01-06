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

// System.IO.MemoryStream
struct MemoryStream_t_197486834_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void CustomTypes::.cctor()
extern "C"  void CustomTypes__cctor_m468098826_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomTypes::Register()
extern "C"  void CustomTypes_Register_m_1606134332_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector3(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector3_m1537789901_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector3(System.IO.MemoryStream,System.Int16)
extern "C"  Object_t * CustomTypes_DeserializeVector3_m463538238_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector2(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializeVector2_m_1834493812_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector2(System.IO.MemoryStream,System.Int16)
extern "C"  Object_t * CustomTypes_DeserializeVector2_m_1169265761_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeQuaternion(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializeQuaternion_m_1466629525_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeQuaternion(System.IO.MemoryStream,System.Int16)
extern "C"  Object_t * CustomTypes_DeserializeQuaternion_m1193381832_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializePhotonPlayer(System.IO.MemoryStream,System.Object)
extern "C"  int16_t CustomTypes_SerializePhotonPlayer_m537366666_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializePhotonPlayer(System.IO.MemoryStream,System.Int16)
extern "C"  Object_t * CustomTypes_DeserializePhotonPlayer_m1749271753_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
