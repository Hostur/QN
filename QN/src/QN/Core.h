#pragma once

#ifdef QN_WINDOWS
	#ifdef QN_BUILD_DLL
		#define QN_API __declspec(dllexport)
	#else
		#define QN_API __declspec(dllimport)
	#endif
#else
	#error QN ENGINE ONLY SUPPORT WINDOWS!
#endif