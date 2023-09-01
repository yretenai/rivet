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
#else
	#ifdef RIVET_EXPORTING
		#define RIVET_SHARED [[visibility("default")]]
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
				#define RIVET_DEBUG_BREAK __asm__ volatile(".inst 0xe7f001f0")
			#endif
		#endif
	#endif
#endif

#ifndef RIVET_DEBUG_BREAK
	#define RIVET_DEBUG_BREAK
#endif

#include <cstdint>

namespace rivet {
	using rivet_hash = uint32_t;
	using rivet_type_id = rivet_hash;

	// top 2 bits
	enum class rivet_type_id_flags : uint8_t {
		NONE = 0b00,
		EXT = 0b01,		// only 32-bit wem hashes have this
		SHIPPED = 0b10, // assumption, all files have this
	};

	enum class rivet_locale {
		None,
		English,
		EnglishGB,
		Danish,
		Dutch,
		Finnish,
		French,
		German,
		Italian,
		Japanese,
		Korean,
		Norwegian,
		Polish,
		Portuguese,
		Russian,
		Spanish,
		Swedish,
		PortugueseBR,
		Arabic,
		Turkish,
		SpanishLATAM,
		ChineseSimplified,
		ChineseTraditional,
		FrenchCA,
		Czech,
		Hungarian,
		Greek,
		Romanian,
		Thai,
		Vietnamese,
		Indonesian,
		Croatian,
		Max
	};

	enum class rivet_asset_category {
		Game,
		AudioStream,
		AnimationStream,
		ZoneLightBin,
		Max
	};

	using rivet_checksum = uint64_t;
	using rivet_asset_id = rivet_checksum; // top 2 bits are rivet_type_id_flags

	using rivet_size = uint32_t;
	using rivet_ssize = int32_t;
	using rivet_off = uint32_t;
	using rivet_soff = int32_t;

	using rivet_size64 = uint64_t;
	using rivet_ssize64 = int64_t;
	using rivet_off64 = uint64_t;
	using rivet_soff64 = int64_t;

	using rivet_index = rivet_size;
	using rivet_index64 = rivet_size64;

	static constexpr rivet_index rivet_unknown = UINT32_MAX;
	static constexpr rivet_index64 rivet_unknown64 = UINT64_MAX;
} // namespace rivet
