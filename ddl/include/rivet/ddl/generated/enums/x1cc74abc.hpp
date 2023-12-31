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
	constexpr static std::string_view x1cc74abc_type_name = "x1cc74abc";
	constexpr static rivet::rivet_type_id x1cc74abc_type_id = 0x1cc74abc;

	constexpr static std::array<std::string_view, 3> x1cc74abc_values = {
		"kUnknown",
		"kAllData",
		"kMinimal", 
	};

	constexpr static std::array<std::string_view, 3> x1cc74abc_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x1cc74abc : uint64_t {
		Unknown,
		AllData,
		Minimal, 
	};
} // namespace rivet::ddl::generated

// clang-format on
