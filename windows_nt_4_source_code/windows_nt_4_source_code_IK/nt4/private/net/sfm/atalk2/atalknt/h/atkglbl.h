//
// Global variables
//

#ifndef GLOBALS
#define GLOBALS extern
#define GLOBALSTATIC    extern
#define EQU ; / ## /
#else
#define GLOBALSTATIC    static
#define EQU =
#endif

//
// The address of the atalk device objects are kept
// in global storage. These are the device names the driver
// will create
//
// IMPORTANT:
// There is a strong connection between the names listed here and the
// ATALK_DEVICE_TYPE enum. They must correspond exactly.
//

#ifdef  i386
#pragma warning(disable:4010)
#endif

GLOBALSTATIC PWCHAR AtalkDeviceNames[] EQU { ATALKDDP_DEVICENAME,\
                                             ATALKATP_DEVICENAME,\
                                             ATALKADSP_DEVICENAME,\
                                             ATALKASP_DEVICENAME,\
                                             ATALKPAP_DEVICENAME };

GLOBALS PATALK_DEVICE_OBJECT  AtalkDeviceObject[ATALK_NODEVICES];

//
// The NDIS port descriptors are used to save the adapter names and other
// information like the port number assigned during the binding phase.
//

GLOBALS PNDIS_PORTDESCRIPTORS NdisPortDesc;     // Allocate for NumberOfPorts
GLOBALS INT     NumberOfPorts EQU 0;            // Determine dynamically

#if DBG
GLOBALS LONG    AtalkDebugLevel EQU 4;      // DEBUG_LEVEL_ERROR
GLOBALS ULONG   AtalkDebugSystems EQU ATALK_DEBUG_MOST;
#endif

GLOBALS NDIS_SPIN_LOCK  AtalkGlobalInterlock;
GLOBALS NDIS_SPIN_LOCK  AtalkGlobalRefLock;
GLOBALS NDIS_SPIN_LOCK  AtalkGlobalStatLock;
