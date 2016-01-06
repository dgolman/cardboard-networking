#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t125139831_0;

#include "System_System_Net_EndPoint_1941440085.h"

// System.Net.IPEndPoint
struct  IPEndPoint_t_1780335022_0  : public EndPoint_t_1941440085_0
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t125139831_0 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;
};
