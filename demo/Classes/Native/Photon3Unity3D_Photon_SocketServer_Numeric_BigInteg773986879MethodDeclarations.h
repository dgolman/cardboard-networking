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

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t773986879_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.UInt32[]
struct UInt32U5BU5D_t_1239494474_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Random
struct Random_t_802455554_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
extern "C"  void BigInteger__ctor_m_924209161_0 (BigInteger_t773986879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
extern "C"  void BigInteger__ctor_m2077505097_0 (BigInteger_t773986879_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger__ctor_m_204974766_0 (BigInteger_t773986879_0 * __this, BigInteger_t773986879_0 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m_1623049934_0 (BigInteger_t773986879_0 * __this, ByteU5BU5D_t_1238178395_0* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
extern "C"  void BigInteger__ctor_m945906881_0 (BigInteger_t773986879_0 * __this, UInt32U5BU5D_t_1239494474_0* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_Implicit_m77450480_0 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_Implicit_m77447535_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_Addition_m_440908463_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_Subtraction_m_2102832951_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_Multiply_m_2018515671_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_LeftShift_m206804248_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftLeft_m_380337875_0 (Object_t * __this /* static, unused */, UInt32U5BU5D_t_1239494474_0* ___buffer, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
extern "C"  int32_t BigInteger_shiftRight_m_1860620810_0 (Object_t * __this /* static, unused */, UInt32U5BU5D_t_1239494474_0* ___buffer, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_UnaryNegation_m_1927593448_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_Equality_m_689802129_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m_884894126_0 (BigInteger_t773986879_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m_1343062346_0 (BigInteger_t773986879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m_1087524026_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m610008719_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1140452115_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_multiByteDivide_m1147113783_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, BigInteger_t773986879_0 * ___outQuotient, BigInteger_t773986879_0 * ___outRemainder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  void BigInteger_singleByteDivide_m_1737627600_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, BigInteger_t773986879_0 * ___outQuotient, BigInteger_t773986879_0 * ___outRemainder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_Division_m_728260736_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_op_Modulus_m1341647206_0 (Object_t * __this /* static, unused */, BigInteger_t773986879_0 * ___bi1, BigInteger_t773986879_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m_1364868228_0 (BigInteger_t773986879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
extern "C"  String_t* BigInteger_ToString_m1260265165_0 (BigInteger_t773986879_0 * __this, int32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_ModPow_m_419512919_0 (BigInteger_t773986879_0 * __this, BigInteger_t773986879_0 * ___exp, BigInteger_t773986879_0 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * BigInteger_BarrettReduction_m964458671_0 (BigInteger_t773986879_0 * __this, BigInteger_t773986879_0 * ___x, BigInteger_t773986879_0 * ___n, BigInteger_t773986879_0 * ___constant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t773986879_0 * BigInteger_GenerateRandom_m_1374819312_0 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
extern "C"  void BigInteger_genRandomBits_m_32298327_0 (BigInteger_t773986879_0 * __this, int32_t ___bits, Random_t_802455554_0 * ___rand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
extern "C"  int32_t BigInteger_bitCount_m_1571357057_0 (BigInteger_t773986879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t_1238178395_0* BigInteger_GetBytes_m_1015321972_0 (BigInteger_t773986879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m932190870_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
