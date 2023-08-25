// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#if defined _MSC_VER || defined __CYGWIN__
	#ifdef RIVET_EXPORTING
		#define RIVET_SHARED __declspec(dllexport)
	#else
		#define RIVET_SHARED __declspec(dllimport)
	#endif
	#define RIVET_INLINE inline
	#define RIVET_DEBUG_BREAK __debugbreak()
	#define RIVET_DECL __stdcall
#else
	#ifdef RIVET_EXPORTING
		#define RIVET_SHARED __attribute__ ((visibility ("default"))) __attribute__((unused))
	#else
		#define RIVET_SHARED
	#endif
	#define RIVET_INLINE inline
	// based on https://github.com/scottt/debugbreak
	#ifndef NDEBUG
		#ifdef __clang__
			#define RIVET_DEBUG_BREAK __builtin_debugtrap()
		#elif defined(__GNUC__)
			#if (defined(__i386__) || defined(__x86_64__))
				#define RIVET_DEBUG_BREAK __asm__ volatile("int $0x03")
			#elif defined(__GNUC__) && defined(__thumb__)
				#define RIVET_DEBUG_BREAK __asm__ volatile(".inst 0xde01")
			#elif defined(__GNUC__) && defined(__arm__) && !defined(__thumb__)
				#define RIVET_DEBUG_BREAK  __asm__ volatile(".inst 0xe7f001f0")
			#endif
		#endif
	#endif
	#define RIVET_DECL
#endif

#ifndef RIVET_DEBUG_BREAK
	#define RIVET_DEBUG_BREAK
#endif

#ifndef RIVET_ALIGNMENT
	#define RIVET_ALIGNMENT 16
#endif

#include <cstdint>

#define RIVET_DELETE_COPY(TYPE_NAME) \
TYPE_NAME(TYPE_NAME const&) = delete; \
TYPE_NAME& operator=(TYPE_NAME const&) = delete;

namespace rivet {
	typedef uint32_t rivet_hash;
	typedef rivet_hash rivet_type_id;

	// top 2 bits
	enum class rivet_type_id_flags : uint8_t {
		NONE = 0b00,
		EXT = 0b01, // only 32-bit wem hashes have this
		SHIPPED = 0b10, // assumption, all files have this
	};

	typedef uint64_t rivet_checksum;
	typedef rivet_checksum rivet_asset_id; // top 2 bits are rivet_type_id_flags

	typedef uint32_t rivet_size;
	typedef int32_t rivet_ssize;
	typedef uint32_t rivet_off;
	typedef int32_t rivet_soff;

	typedef uint64_t rivet_size64;
	typedef int64_t rivet_ssize64;
	typedef uint64_t rivet_off64;
	typedef int64_t rivet_soff64;
};
