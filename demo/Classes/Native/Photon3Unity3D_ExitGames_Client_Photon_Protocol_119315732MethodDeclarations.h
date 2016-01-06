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

// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t_807031891_0;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t_1142698292_0;
// System.IO.MemoryStream
struct MemoryStream_t_197486834_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t_1001036932_0;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1329996772_0;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t_914439948_0;
// ExitGames.Client.Photon.EventData
struct EventData_t1226420112_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Object[]
struct ObjectU5BU5D_t1774424924_0;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t1523952044_0;
// System.Collections.IDictionary
struct IDictionary_t_1514320629_0;
// System.String[]
struct StringU5BU5D_t_816028754_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_GpType_50377449.h"

// System.Boolean ExitGames.Client.Photon.Protocol::TryRegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C"  bool Protocol_TryRegisterType_m_268781409_0 (Object_t * __this /* static, unused */, Type_t * ___type, uint8_t ___typeCode, SerializeStreamMethod_t_807031891_0 * ___serializeFunction, DeserializeStreamMethod_t_1142698292_0 * ___deserializeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::SerializeCustom(System.IO.MemoryStream,System.Object)
extern "C"  bool Protocol_SerializeCustom_m1294977671_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, Object_t * ___serObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::DeserializeCustom(System.IO.MemoryStream,System.Byte)
extern "C"  Object_t * Protocol_DeserializeCustom_m_1317281282_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, uint8_t ___customTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::GetTypeOfCode(System.Byte)
extern "C"  Type_t * Protocol_GetTypeOfCode_m_1750256503_0 (Object_t * __this /* static, unused */, uint8_t ___typeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.GpType ExitGames.Client.Photon.Protocol::GetCodeOfType(System.Type)
extern "C"  uint8_t Protocol_GetCodeOfType_m_1744609505_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::CreateArrayByType(System.Byte,System.Int16)
extern "C"  Array_t * Protocol_CreateArrayByType_m1713528503_0 (Object_t * __this /* static, unused */, uint8_t ___arrayType, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,ExitGames.Client.Photon.OperationRequest,System.Boolean)
extern "C"  void Protocol_SerializeOperationRequest_m_244591233_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___memStream, OperationRequest_t_1001036932_0 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C"  void Protocol_SerializeOperationRequest_m_2100000756_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___memStream, uint8_t ___operationCode, Dictionary_2_t1329996772_0 * ___parameters, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol::DeserializeOperationRequest(System.IO.MemoryStream)
extern "C"  OperationRequest_t_1001036932_0 * Protocol_DeserializeOperationRequest_m156168744_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationResponse(System.IO.MemoryStream,ExitGames.Client.Photon.OperationResponse,System.Boolean)
extern "C"  void Protocol_SerializeOperationResponse_m_1729513977_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___memStream, OperationResponse_t_914439948_0 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol::DeserializeOperationResponse(System.IO.MemoryStream)
extern "C"  OperationResponse_t_914439948_0 * Protocol_DeserializeOperationResponse_m_119049058_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeEventData(System.IO.MemoryStream,ExitGames.Client.Photon.EventData,System.Boolean)
extern "C"  void Protocol_SerializeEventData_m_2067071097_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___memStream, EventData_t1226420112_0 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol::DeserializeEventData(System.IO.MemoryStream)
extern "C"  EventData_t1226420112_0 * Protocol_DeserializeEventData_m_1323763682_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeParameterTable(System.IO.MemoryStream,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C"  void Protocol_SerializeParameterTable_m_536018631_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___memStream, Dictionary_2_t1329996772_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol::DeserializeParameterTable(System.IO.MemoryStream)
extern "C"  Dictionary_2_t1329996772_0 * Protocol_DeserializeParameterTable_m_435993523_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.IO.MemoryStream,System.Object,System.Boolean)
extern "C"  void Protocol_Serialize_m_1481889487_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, Object_t * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByte(System.IO.MemoryStream,System.Byte,System.Boolean)
extern "C"  void Protocol_SerializeByte_m_608964142_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, uint8_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeBoolean(System.IO.MemoryStream,System.Boolean,System.Boolean)
extern "C"  void Protocol_SerializeBoolean_m996870200_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, bool ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeShort(System.IO.MemoryStream,System.Int16,System.Boolean)
extern "C"  void Protocol_SerializeShort_m_88837640_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, int16_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int16,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m1344711179_0 (Object_t * __this /* static, unused */, int16_t ___value, ByteU5BU5D_t_1238178395_0* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeInteger(System.IO.MemoryStream,System.Int32,System.Boolean)
extern "C"  void Protocol_SerializeInteger_m935627700_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, int32_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m2001046545_0 (Object_t * __this /* static, unused */, int32_t ___value, ByteU5BU5D_t_1238178395_0* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeLong(System.IO.MemoryStream,System.Int64,System.Boolean)
extern "C"  void Protocol_SerializeLong_m452977343_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, int64_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeFloat(System.IO.MemoryStream,System.Single,System.Boolean)
extern "C"  void Protocol_SerializeFloat_m793816364_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, float ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Single,System.Byte[],System.Int32&)
extern "C"  void Protocol_Serialize_m729069851_0 (Object_t * __this /* static, unused */, float ___value, ByteU5BU5D_t_1238178395_0* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDouble(System.IO.MemoryStream,System.Double,System.Boolean)
extern "C"  void Protocol_SerializeDouble_m713190322_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, double ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeString(System.IO.MemoryStream,System.String,System.Boolean)
extern "C"  void Protocol_SerializeString_m947393458_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, String_t* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeArray(System.IO.MemoryStream,System.Array,System.Boolean)
extern "C"  void Protocol_SerializeArray_m2062845274_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, Array_t * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByteArray(System.IO.MemoryStream,System.Byte[],System.Boolean)
extern "C"  void Protocol_SerializeByteArray_m55249689_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, ByteU5BU5D_t_1238178395_0* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeIntArrayOptimized(System.IO.MemoryStream,System.Int32[],System.Boolean)
extern "C"  void Protocol_SerializeIntArrayOptimized_m_1198261771_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___inWriter, Int32U5BU5D_t1872284309_0* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeObjectArray(System.IO.MemoryStream,System.Object[],System.Boolean)
extern "C"  void Protocol_SerializeObjectArray_m270144199_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, ObjectU5BU5D_t1774424924_0* ___objects, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeHashTable(System.IO.MemoryStream,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Protocol_SerializeHashTable_m_1778019545_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, Hashtable_t1523952044_0 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionary(System.IO.MemoryStream,System.Collections.IDictionary,System.Boolean)
extern "C"  void Protocol_SerializeDictionary_m_947167598_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___dout, Object_t * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Type)
extern "C"  void Protocol_SerializeDictionaryHeader_m1980349460_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___writer, Type_t * ___dictType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Object,System.Boolean&,System.Boolean&)
extern "C"  void Protocol_SerializeDictionaryHeader_m231457101_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___writer, Object_t * ___dict, bool* ___setKeyType, bool* ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryElements(System.IO.MemoryStream,System.Object,System.Boolean,System.Boolean)
extern "C"  void Protocol_SerializeDictionaryElements_m_409453639_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___writer, Object_t * ___dict, bool ___setKeyType, bool ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::Deserialize(System.IO.MemoryStream,System.Byte)
extern "C"  Object_t * Protocol_Deserialize_m2083608493_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol::DeserializeByte(System.IO.MemoryStream)
extern "C"  uint8_t Protocol_DeserializeByte_m_887759623_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeBoolean(System.IO.MemoryStream)
extern "C"  bool Protocol_DeserializeBoolean_m_2029961425_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol::DeserializeShort(System.IO.MemoryStream)
extern "C"  int16_t Protocol_DeserializeShort_m_694089961_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int16&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m_548822766_0 (Object_t * __this /* static, unused */, int16_t* ___value, ByteU5BU5D_t_1238178395_0* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol::DeserializeInteger(System.IO.MemoryStream)
extern "C"  int32_t Protocol_DeserializeInteger_m_733951265_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m_1677262900_0 (Object_t * __this /* static, unused */, int32_t* ___value, ByteU5BU5D_t_1238178395_0* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol::DeserializeLong(System.IO.MemoryStream)
extern "C"  int64_t Protocol_DeserializeLong_m220499176_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol::DeserializeFloat(System.IO.MemoryStream)
extern "C"  float Protocol_DeserializeFloat_m_420541479_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Single&,System.Byte[],System.Int32&)
extern "C"  void Protocol_Deserialize_m_677989216_0 (Object_t * __this /* static, unused */, float* ___value, ByteU5BU5D_t_1238178395_0* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol::DeserializeDouble(System.IO.MemoryStream)
extern "C"  double Protocol_DeserializeDouble_m_597854645_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol::DeserializeString(System.IO.MemoryStream)
extern "C"  String_t* Protocol_DeserializeString_m1787436747_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::DeserializeArray(System.IO.MemoryStream)
extern "C"  Array_t * Protocol_DeserializeArray_m_428753713_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol::DeserializeByteArray(System.IO.MemoryStream)
extern "C"  ByteU5BU5D_t_1238178395_0* Protocol_DeserializeByteArray_m_71213236_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol::DeserializeIntArray(System.IO.MemoryStream)
extern "C"  Int32U5BU5D_t1872284309_0* Protocol_DeserializeIntArray_m_1239124711_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol::DeserializeStringArray(System.IO.MemoryStream)
extern "C"  StringU5BU5D_t_816028754_0* Protocol_DeserializeStringArray_m1587283834_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol::DeserializeObjectArray(System.IO.MemoryStream)
extern "C"  ObjectU5BU5D_t1774424924_0* Protocol_DeserializeObjectArray_m835538206_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol::DeserializeHashTable(System.IO.MemoryStream)
extern "C"  Hashtable_t1523952044_0 * Protocol_DeserializeHashTable_m_1454196610_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol::DeserializeDictionary(System.IO.MemoryStream)
extern "C"  Object_t * Protocol_DeserializeDictionary_m1787403899_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeDictionaryArray(System.IO.MemoryStream,System.Int16,System.Array&)
extern "C"  bool Protocol_DeserializeDictionaryArray_m_920081593_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___din, int16_t ___size, Array_t ** ___arrayResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::DeserializeDictionaryType(System.IO.MemoryStream,System.Byte&,System.Byte&)
extern "C"  Type_t * Protocol_DeserializeDictionaryType_m_1084920013_0 (Object_t * __this /* static, unused */, MemoryStream_t_197486834_0 * ___reader, uint8_t* ___keyTypeCode, uint8_t* ___valTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.cctor()
extern "C"  void Protocol__cctor_m1450056899_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
