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
	constexpr static std::string_view x6c9f6d9b_type_name = "x6c9f6d9b";
	constexpr static rivet::rivet_type_id x6c9f6d9b_type_id = 0x6c9f6d9b;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 6> x6c9f6d9b_values = {
		std::make_tuple("kInactive", 0x1),
		std::make_tuple("kAvailable", 0x2),
		std::make_tuple("kActive", 0x4),
		std::make_tuple("kCompleteCleaning", 0x8),
		std::make_tuple("kCompleteFinished", 0x10),
		std::make_tuple("kFailed", 0x20), 
	};

	enum class x6c9f6d9b : uint64_t {
		Inactive = 0x1,
		Available = 0x2,
		Active = 0x4,
		CompleteCleaning = 0x8,
		CompleteFinished = 0x10,
		Failed = 0x20, 
	};
} // namespace rivet::ddl::generated

// clang-format on