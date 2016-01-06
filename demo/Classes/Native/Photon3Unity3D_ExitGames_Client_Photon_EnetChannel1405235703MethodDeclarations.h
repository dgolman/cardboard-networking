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

// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t1405235703_0;
// ExitGames.Client.Photon.NCommand
struct NCommand_t1920504657_0;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.EnetChannel::.ctor(System.Byte,System.Int32)
extern "C"  void EnetChannel__ctor_m855530181_0 (EnetChannel_t1405235703_0 * __this, uint8_t ___channelNumber, int32_t ___commandBufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsUnreliableSequenceNumber(System.Int32)
extern "C"  bool EnetChannel_ContainsUnreliableSequenceNumber_m_1799331310_0 (EnetChannel_t1405235703_0 * __this, int32_t ___unreliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsReliableSequenceNumber(System.Int32)
extern "C"  bool EnetChannel_ContainsReliableSequenceNumber_m1136395449_0 (EnetChannel_t1405235703_0 * __this, int32_t ___reliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetChannel::FetchReliableSequenceNumber(System.Int32)
extern "C"  NCommand_t1920504657_0 * EnetChannel_FetchReliableSequenceNumber_m_574299010_0 (EnetChannel_t1405235703_0 * __this, int32_t ___reliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetChannel::clearAll()
extern "C"  void EnetChannel_clearAll_m_1913326177_0 (EnetChannel_t1405235703_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
