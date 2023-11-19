// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr static std::string_view x3141d5f2_type_name = "x3141d5f2";
	constexpr static rivet::rivet_type_id x3141d5f2_type_id = 0x3141d5f2;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 18> x3141d5f2_values = {
		std::make_tuple("kClearFreeMem", 0x1),
		std::make_tuple("kZeroAllocedMem", 0x2),
		std::make_tuple("kDoSafetyPadding", 0x4),
		std::make_tuple("kRequireOwnerName", 0x8),
		std::make_tuple("kThreadSafe", 0x10),
		std::make_tuple("kOptimizeSmallAllocs", 0x20),
		std::make_tuple("kFixedBookkeeping", 0x40),
		std::make_tuple("kSilentAllocFailure", 0x80),
		std::make_tuple("kLargePages", 0x100),
		std::make_tuple("kLeadingCheck", 0x200),
		std::make_tuple("kTrailingCheck", 0x400),
		std::make_tuple("kNoAudit", 0x800),
		std::make_tuple("kGpuCoherent", 0x1000),
		std::make_tuple("kGpuReadOnly", 0x2000),
		std::make_tuple("kGpuWriteCombine", 0x4000),
		std::make_tuple("kAudioCoherent", 0x8000),
		std::make_tuple("kRandAllocedMem", 0x10000),
		std::make_tuple("kDefault", 0x0), 
	};

	enum class x3141d5f2 : uint64_t {
		ClearFreeMem = 0x1,
		ZeroAllocedMem = 0x2,
		DoSafetyPadding = 0x4,
		RequireOwnerName = 0x8,
		ThreadSafe = 0x10,
		OptimizeSmallAllocs = 0x20,
		FixedBookkeeping = 0x40,
		SilentAllocFailure = 0x80,
		LargePages = 0x100,
		LeadingCheck = 0x200,
		TrailingCheck = 0x400,
		NoAudit = 0x800,
		GpuCoherent = 0x1000,
		GpuReadOnly = 0x2000,
		GpuWriteCombine = 0x4000,
		AudioCoherent = 0x8000,
		RandAllocedMem = 0x10000,
		Default = 0x0, 
	};
} // namespace rivet::ddl::generated

// clang-format on