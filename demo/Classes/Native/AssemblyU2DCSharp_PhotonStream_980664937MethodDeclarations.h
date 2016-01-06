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

// PhotonStream
struct PhotonStream_t_980664937_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// PhotonPlayer
struct PhotonPlayer_t_1074427656_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void PhotonStream::.ctor(System.Boolean,System.Object[])
extern "C"  void PhotonStream__ctor_m_27428734_0 (PhotonStream_t_980664937_0 * __this, bool ___write, ObjectU5BU5D_t1774424924_0* ___incomingData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
extern "C"  bool PhotonStream_get_isWriting_m_195196334_0 (PhotonStream_t_980664937_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isReading()
extern "C"  bool PhotonStream_get_isReading_m102282242_0 (PhotonStream_t_980664937_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonStream::get_Count()
extern "C"  int32_t PhotonStream_get_Count_m1070527765_0 (PhotonStream_t_980664937_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
extern "C"  Object_t * PhotonStream_ReceiveNext_m1218125854_0 (PhotonStream_t_980664937_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::PeekNext()
extern "C"  Object_t * PhotonStream_PeekNext_m587627944_0 (PhotonStream_t_980664937_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
extern "C"  void PhotonStream_SendNext_m_407837388_0 (PhotonStream_t_980664937_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonStream::ToArray()
extern "C"  ObjectU5BU5D_t1774424924_0* PhotonStream_ToArray_m448068200_0 (PhotonStream_t_980664937_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Boolean&)
extern "C"  void PhotonStream_Serialize_m_1570651464_0 (PhotonStream_t_980664937_0 * __this, bool* ___myBool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int32&)
extern "C"  void PhotonStream_Serialize_m1425359582_0 (PhotonStream_t_980664937_0 * __this, int32_t* ___myInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.String&)
extern "C"  void PhotonStream_Serialize_m_1785742553_0 (PhotonStream_t_980664937_0 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Char&)
extern "C"  void PhotonStream_Serialize_m_1240221204_0 (PhotonStream_t_980664937_0 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int16&)
extern "C"  void PhotonStream_Serialize_m1425303844_0 (PhotonStream_t_980664937_0 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Single&)
extern "C"  void PhotonStream_Serialize_m1220193694_0 (PhotonStream_t_980664937_0 * __this, float* ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(PhotonPlayer&)
extern "C"  void PhotonStream_Serialize_m_896144404_0 (PhotonStream_t_980664937_0 * __this, PhotonPlayer_t_1074427656_0 ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector3&)
extern "C"  void PhotonStream_Serialize_m769489776_0 (PhotonStream_t_980664937_0 * __this, Vector3_t_725341337_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector2&)
extern "C"  void PhotonStream_Serialize_m769488815_0 (PhotonStream_t_980664937_0 * __this, Vector2_t_725341338_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Quaternion&)
extern "C"  void PhotonStream_Serialize_m_99392540_0 (PhotonStream_t_980664937_0 * __this, Quaternion_t1989680039_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
