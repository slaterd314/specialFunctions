// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#define __STDCPP_WANT_MATH_SPEC_FUNCS__  1

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include "MCADINCL.H"

namespace specFuncs {
	void initializeUserEfi(HINSTANCE);
}

// TODO: reference additional headers your program requires here
