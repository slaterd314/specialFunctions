// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include "ErrorCodes.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:

		if (!CreateUserErrorMessageTable(hModule, specFuncs::errors.size(), specFuncs::errors.data()))
		{
			return FALSE;
		}

		specFuncs::initializeUserEfi(hModule);
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

