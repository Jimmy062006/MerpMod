#define MOD_ECUID 1109EEA2E5
#define MOD_DATE 14.10.17.16.42
#include "Flash.h"
#define MOD_CONFIG Flash
#define MOD_BUILD Debug
#define MOD_RELEASE 0
#define ECU_CALIBRATION_ID AZ1G202I
#define ECU_IDENTIFIER 6912783007
/////////////////////
// NonSpecific Rom Info and Routines
/////////////////////

#define dCalId (0x00002004)
#define dEcuId (0x000D62CC)
#define dRomHoleStart (0x000E1000)
#define pRamHoleStart (0xFFFFAFB4)
#define sPull2DFloat (0x000BE804)
#define sPull3DFloat (0x000BE8B8)

/////////////////////
// Switch Hacks
/////////////////////

#define tCrankingFuelC (0x00098E0C)
#define tCrankingFuelE (0x00098E34)

/////////////////////
// Rev Limit Hack
/////////////////////

#define hRevLimDelete (0x00044018)
#define sRevLimStart (0x00036194)
#define sRevLimEnd (0x000361D4)
#define pFlagsRevLim ((unsigned char*)0xFFFF7A3C)
#define RevLimBitMask (0x01)

/////////////////////
// Speed Density Hack
/////////////////////

#define hMafCalc (0x00004B10)
#define sMafCalc (0x00004AB4)

/////////////////////
// Injector Hack
/////////////////////

#define dInjectorScaling ((float*)0x000C89B4)

/////////////////////
// Cel Hacks
/////////////////////

#define sCelTrigger (0x0008CC38)
#define hCelSignal (0x0008CD10)
#define pCelSignalOem ((unsigned char*)0xFFFFA2AA)

/////////////////////
// Boost Hacks
/////////////////////

#define tTargetBoost (0x00097538)

/////////////////////
// WGDC Hacks
/////////////////////

#define hWgdc (0x00043A14)
#define sWgdc (0x000134E0)
#define tWgdcInitial (0x0009751C)
#define tWgdcMax (0x00097500)

/////////////////////
// Primary Open Loop Fueling Hacks
/////////////////////

#define pPolf4Byte (0xFFFF772C)
#define pPolfEnrich (0xFFFF772C)

/////////////////////
// Timing Hacks
/////////////////////

#define pBaseTiming (0xFFFF7C5C)
#define pKcaIam (0xFFFF7F84)

/////////////////////
// Spark Cut
/////////////////////


/////////////////////
// Flags-Signals
/////////////////////

#define pResumeFlags ((unsigned char*)0xFFFF614F)
#define ResumeBitMask ((unsigned char)0x01)
#define pCoastFlags ((unsigned char*)0xFFFF614E)
#define CoastBitMask ((unsigned char)0x01)
#define pBrakeFlags ((unsigned char*)0xFFFF6150)
#define BrakeBitMask ((unsigned char)0x01)
#define pClutchFlags ((unsigned char*)0xFFFF6763)
#define ClutchBitMask ((unsigned char)0x01)

/////////////////////
// NonSpecific Engine params
/////////////////////

#define pFbkc1 ((unsigned char*)0xFFFF69F4)
#define pFbkc4 ((float*)0xFFFF7F14)
#define pIam1 ((unsigned char*)0xFFFF69F6)
#define pIam4 ((float*)0xFFFF3014)
#define pEngineSpeed ((float*)0xFFFF67B4)
#define pVehicleSpeed ((float*)0xFFFF6790)
#define pCoolantTemp ((float*)0xFFFF413C)
#define pAtmoPress ((float*)0xFFFF6A18)
#define pManifoldAbsolutePressure ((float*)0xFFFF6394)
#define pIntakeAirTemp ((float*)0xFFFF4124)
#define pMassAirFlow ((float*)0xFFFF40B4)
#define pMafSensorVoltage ((short*)0xFFFF4046)
#define pEngineLoad ((float*)0xFFFF6578)
#define pReqTorque ((float*)0xFFFF8278)
#define pThrottlePlate ((float*)0xFFFF6464)
#define pCurrentGear ((unsigned char*)0xFFFF69A1)
#define pAf1Res ((float*)0xFFFF40C8)

/////////////////////
// OBD Experimental stuff
/////////////////////


/////////////////////
// New Definitions
/////////////////////

#define dLoadSmoothingA (0x000C2800)
#define dLoadSmoothingB (0x000C27FC)
#define dLoadSmoothingAlt (0x000C27F8)
#define dLoadSmoothingFinal (0x000C280C)

/////////////////////
// Memory Reset
/////////////////////

#define sMemoryReset (0x000102A4)
#define hMemoryReset (0x0000FC04)
#define pMemoryResetLimit (0xFFFFBF9F)
#define hMemoryResetLimit (0x00011C58)

