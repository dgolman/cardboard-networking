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

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t_1065353856_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t773986879_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
extern "C"  void DiffieHellmanCryptoProvider__ctor_m978908950_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
extern "C"  ByteU5BU5D_t_1238178395_0* DiffieHellmanCryptoProvider_get_PublicKey_m1904414615_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
extern "C"  ByteU5BU5D_t_1238178395_0* DiffieHellmanCryptoProvider_get_SharedKey_m_778767589_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
extern "C"  void DiffieHellmanCryptoProvider_DeriveSharedKey_m_548584670_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, ByteU5BU5D_t_1238178395_0* ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
extern "C"  ByteU5BU5D_t_1238178395_0* DiffieHellmanCryptoProvider_Encrypt_m_1678327046_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t_1238178395_0* DiffieHellmanCryptoProvider_Encrypt_m1082422234_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t_1238178395_0* DiffieHellmanCryptoProvider_Decrypt_m_445744718_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m31946195_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
extern "C"  void DiffieHellmanCryptoProvider_Dispose_m2071330314_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
extern "C"  BigInteger_t773986879_0 * DiffieHellmanCryptoProvider_CalculatePublicKey_m62337240_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
extern "C"  BigInteger_t773986879_0 * DiffieHellmanCryptoProvider_CalculateSharedKey_m492717559_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, BigInteger_t773986879_0 * ___otherPartyPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
extern "C"  BigInteger_t773986879_0 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m_85469343_0 (DiffieHellmanCryptoProvider_t_1065353856_0 * __this, int32_t ___secretLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
extern "C"  void DiffieHellmanCryptoProvider__cctor_m_200689833_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
