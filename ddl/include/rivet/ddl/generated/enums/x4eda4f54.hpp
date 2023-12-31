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
	constexpr static std::string_view x4eda4f54_type_name = "x4eda4f54";
	constexpr static rivet::rivet_type_id x4eda4f54_type_id = 0x4eda4f54;

	constexpr static std::array<std::string_view, 6> x4eda4f54_values = {
		"kRotOrderXYZ",
		"kRotOrderYZX",
		"kRotOrderZXY",
		"kRotOrderXZY",
		"kRotOrderYXZ",
		"kRotOrderZYX", 
	};

	constexpr static std::array<std::string_view, 6> x4eda4f54_labels = {
		"XYZ",
		"YZX",
		"ZXY",
		"XZY",
		"YXZ",
		"ZYX", 
	};

	enum class x4eda4f54 : uint64_t {
		XYZ,
		YZX,
		ZXY,
		XZY,
		YXZ,
		ZYX, 
	};
} // namespace rivet::ddl::generated

// clang-format on
