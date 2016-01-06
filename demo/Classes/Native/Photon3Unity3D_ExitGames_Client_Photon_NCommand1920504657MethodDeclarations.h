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

// ExitGames.Client.Photon.NCommand
struct NCommand_t1920504657_0;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t_1652621074_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
extern "C"  void NCommand__ctor_m_1000373826_0 (NCommand_t1920504657_0 * __this, EnetPeer_t_1652621074_0 * ___peer, uint8_t ___commandType, ByteU5BU5D_t_1238178395_0* ___payload, uint8_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
extern "C"  NCommand_t1920504657_0 * NCommand_CreateAck_m_1929231236_0 (Object_t * __this /* static, unused */, EnetPeer_t_1652621074_0 * ___peer, NCommand_t1920504657_0 * ___commandToAck, int32_t ___sentTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
extern "C"  void NCommand__ctor_m_236951031_0 (NCommand_t1920504657_0 * __this, EnetPeer_t_1652621074_0 * ___peer, ByteU5BU5D_t_1238178395_0* ___inBuff, int32_t* ___readingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize()
extern "C"  ByteU5BU5D_t_1238178395_0* NCommand_Serialize_m_523987591_0 (NCommand_t1920504657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
extern "C"  int32_t NCommand_CompareTo_m_327483492_0 (NCommand_t1920504657_0 * __this, NCommand_t1920504657_0 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
extern "C"  String_t* NCommand_ToString_m_455350898_0 (NCommand_t1920504657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
