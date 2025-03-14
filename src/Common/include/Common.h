#ifndef SANDBOX_COMMON_COMMON_H
#define SANDBOX_COMMON_COMMON_H

#include <minwindef.h>

#ifndef UNICODE
#define UNICODE
#endif

#ifndef _UNICODE
#define _UNICODE
#endif

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef LIBRARY_EXPORT_API
// Windows Static or non-Windows
#if !defined(BUILD_OUR_SHARED_LIBS) || !defined(WIN32) || !defined(WIN64)
#define LIBRARY_EXPORT_API
// Windows Shared (Build/Export)
#elif defined(BUILD_OUR_SHARED_LIBS)
#define LIBRARY_EXPORT_API __declspec(dllexport)
// Windows Shared (Usage/Import)
#else
#define LIBRARY_EXPORT_API __declspec(dllimport)
#endif
#endif

#ifndef PACKED_DATA
#define PACKED_DATA __attribute__((packed))
#endif

#ifndef CONCATENATION
#define CONCATENATION(left, right) left##right
#endif

#ifndef DEFINE_CONCATENATION
#define DEFINE_CONCATENATION(left, right) CONCATENATION(left, right)
#endif

#ifndef NAMEOF
#define NAMEOF(name) #name
#endif

#if defined(__GNUC__) || defined(__clang__)
#define UNUSED(x) UNUSED_##x __attribute__((__unused__))
#else
#define UNUSED(x) UNUSED_##x
#endif

#if defined(__GNUC__) || defined(__clang__)
#define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_##x
#else
#define UNUSED_FUNCTION(x) UNUSED_##x
#endif

// Major version number. This is defined at compile time so this is just a placeholder.
#ifndef APP_VERSION_MAJOR
#define APP_VERSION_MAJOR 0
#endif

// Minor version number. This is defined at compile time so this is just a placeholder.
#ifndef APP_VERSION_MINOR
#define APP_VERSION_MINOR 1
#endif

// Patch version number. This is defined at compile time so this is just a placeholder.
#ifndef APP_VERSION_PATCH
#define APP_VERSION_PATCH 0
#endif

// Build number. This is defined at compile time so this is just a placeholder.
#ifndef APP_VERSION_BUILD
#define APP_VERSION_BUILD 0
#endif

namespace CppSandbox::Common
{
#ifdef DEBUG
	static const bool IsDebug = true;
#else
	static const bool IsDebug = false;
#endif

	static const char *lastExceptionMessage = "";
}

#endif
