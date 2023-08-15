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
#else
	#ifdef RIVET_EXPORTING
		#define RIVET_SHARED __attribute__ ((visibility ("default"))) __attribute__((unused))
	#else
		#define RIVET_SHARED
	#endif
	#define RIVET_INLINE inline
#endif

#include <cstdint>

#define RIVET_ALIGNMENT 16

#define RIVET_DELETE_COPY(TYPE_NAME) \
TYPE_NAME(TYPE_NAME const&) = delete; \
TYPE_NAME& operator=(TYPE_NAME const&) = delete;

namespace rivet {
	typedef uint32_t rivet_hash_t;
	typedef rivet_hash_t rivet_typeid_t;
	typedef uint64_t rivet_checksum_t;
	typedef uint32_t rivet_size_t;
	typedef int32_t rivet_ssize_t;
	typedef uint32_t rivet_off_t;
	typedef int32_t rivet_soff_t;
};
