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

// ExitGames.Client.Photon.SocketTcp
struct SocketTcp_t503760282_0;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t938557351_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocket715486821.h"

// System.Void ExitGames.Client.Photon.SocketTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketTcp__ctor_m_742767511_0 (SocketTcp_t503760282_0 * __this, PeerBase_t938557351_0 * ___npeer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::Dispose()
extern "C"  void SocketTcp_Dispose_m33551411_0 (SocketTcp_t503760282_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Connect()
extern "C"  bool SocketTcp_Connect_m_704477612_0 (SocketTcp_t503760282_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketTcp::Disconnect()
extern "C"  bool SocketTcp_Disconnect_m_829638892_0 (SocketTcp_t503760282_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketTcp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketTcp_Send_m_1144887696_0 (SocketTcp_t503760282_0 * __this, ByteU5BU5D_t_1238178395_0* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::DnsAndConnect()
extern "C"  void SocketTcp_DnsAndConnect_m2105131440_0 (SocketTcp_t503760282_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketTcp::ReceiveLoop()
extern "C"  void SocketTcp_ReceiveLoop_m2049658555_0 (SocketTcp_t503760282_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
