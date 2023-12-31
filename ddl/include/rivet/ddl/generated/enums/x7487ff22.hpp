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
	constexpr static std::string_view x7487ff22_type_name = "x7487ff22";
	constexpr static rivet::rivet_type_id x7487ff22_type_id = 0x7487ff22;

	constexpr static std::array<std::string_view, 2> x7487ff22_values = {
		"kLaserLeftArm",
		"kLaserRightArm", 
	};

	constexpr static std::array<std::string_view, 2> x7487ff22_labels = {
		"NONE",
		"NONE", 
	};

	enum class x7487ff22 : uint64_t {
		LaserLeftArm,
		LaserRightArm, 
	};
} // namespace rivet::ddl::generated

// clang-format on
