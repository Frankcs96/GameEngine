#pragma once

#ifdef ENG_PLATFORM_WINDOWS

	#ifdef ENG_BUILD_DLL
		#define ENG_API __declspec(dllexport)
	#else
		#define ENG_API __declspec(dllimport)
	#endif
#else

	#error ENGINE ONLY SUPPORTS WINDOWS AT THE MOMENT

#endif