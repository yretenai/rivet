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
	constexpr static std::string_view xa22c2a86_type_name = "xa22c2a86";
	constexpr static rivet::rivet_type_id xa22c2a86_type_id = 0xa22c2a86;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 6> xa22c2a86_values = {
		std::make_tuple("kInactive", 0x1),
		std::make_tuple("kAvailable", 0x2),
		std::make_tuple("kActive", 0x4),
		std::make_tuple("kCompleteCleaning", 0x8),
		std::make_tuple("kCompleteFinished", 0x10),
		std::make_tuple("kFailed", 0x20), 
	};

	enum class xa22c2a86 : uint64_t {
		Inactive = 0x1,
		Available = 0x2,
		Active = 0x4,
		CompleteCleaning = 0x8,
		CompleteFinished = 0x10,
		Failed = 0x20, 
	};
} // namespace rivet::ddl::generated

// clang-format on
