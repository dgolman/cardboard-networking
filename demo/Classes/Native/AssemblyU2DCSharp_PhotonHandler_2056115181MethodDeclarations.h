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

// PhotonHandler
struct PhotonHandler_t_2056115181_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CloudRegionCode404377275.h"

// System.Void PhotonHandler::.ctor()
extern "C"  void PhotonHandler__ctor_m248290845_0 (PhotonHandler_t_2056115181_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::.cctor()
extern "C"  void PhotonHandler__cctor_m_1375014608_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Awake()
extern "C"  void PhotonHandler_Awake_m485896064_0 (PhotonHandler_t_2056115181_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationQuit()
extern "C"  void PhotonHandler_OnApplicationQuit_m212846619_0 (PhotonHandler_t_2056115181_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnApplicationPause(System.Boolean)
extern "C"  void PhotonHandler_OnApplicationPause_m1456037571_0 (PhotonHandler_t_2056115181_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnDestroy()
extern "C"  void PhotonHandler_OnDestroy_m213392534_0 (PhotonHandler_t_2056115181_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::Update()
extern "C"  void PhotonHandler_Update_m833943696_0 (PhotonHandler_t_2056115181_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnLevelWasLoaded(System.Int32)
extern "C"  void PhotonHandler_OnLevelWasLoaded_m2071579265_0 (PhotonHandler_t_2056115181_0 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnJoinedRoom()
extern "C"  void PhotonHandler_OnJoinedRoom_m1427082186_0 (PhotonHandler_t_2056115181_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::OnCreatedRoom()
extern "C"  void PhotonHandler_OnCreatedRoom_m_1045602113_0 (PhotonHandler_t_2056115181_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StartFallbackSendAckThread()
extern "C"  void PhotonHandler_StartFallbackSendAckThread_m1546833806_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::StopFallbackSendAckThread()
extern "C"  void PhotonHandler_StopFallbackSendAckThread_m_1817507038_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonHandler::FallbackSendAckThread()
extern "C"  bool PhotonHandler_FallbackSendAckThread_m98243128_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode PhotonHandler::get_BestRegionCodeInPreferences()
extern "C"  int32_t PhotonHandler_get_BestRegionCodeInPreferences_m197388413_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::set_BestRegionCodeInPreferences(CloudRegionCode)
extern "C"  void PhotonHandler_set_BestRegionCodeInPreferences_m_1149628144_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonHandler::PingAvailableRegionsAndConnectToBest()
extern "C"  void PhotonHandler_PingAvailableRegionsAndConnectToBest_m_968543327_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonHandler::PingAvailableRegionsCoroutine(System.Boolean)
extern "C"  Object_t * PhotonHandler_PingAvailableRegionsCoroutine_m2043675370_0 (PhotonHandler_t_2056115181_0 * __this, bool ___connectToBest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
