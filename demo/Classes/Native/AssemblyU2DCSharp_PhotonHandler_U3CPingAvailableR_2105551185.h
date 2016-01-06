#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PhotonPingManager
struct PhotonPingManager_t_69383644_0;
// Region
struct Region_t_1831328337_0;
// System.Object
struct Object_t;

#include "mscorlib_System_Object_887538054.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat955703070.h"

// PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2
struct  U3CPingAvailableRegionsCoroutineU3Ec__Iterator2_t_2105551185_0  : public Object_t
{
	// PhotonPingManager PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::<pingManager>__0
	PhotonPingManager_t_69383644_0 * ___U3CpingManagerU3E__0_0;
	// System.Collections.Generic.List`1/Enumerator<Region> PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::<$s_64>__1
	Enumerator_t955703070_0  ___U3CU24s_64U3E__1_1;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::<region>__2
	Region_t_1831328337_0 * ___U3CregionU3E__2_2;
	// Region PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::<best>__3
	Region_t_1831328337_0 * ___U3CbestU3E__3_3;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::connectToBest
	bool ___connectToBest_4;
	// System.Int32 PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::$PC
	int32_t ___U24PC_5;
	// System.Object PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::$current
	Object_t * ___U24current_6;
	// System.Boolean PhotonHandler/<PingAvailableRegionsCoroutine>c__Iterator2::<$>connectToBest
	bool ___U3CU24U3EconnectToBest_7;
};
