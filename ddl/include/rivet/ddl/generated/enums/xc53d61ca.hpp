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
	constexpr static std::string_view xc53d61ca_type_name = "xc53d61ca";
	constexpr static rivet::rivet_type_id xc53d61ca_type_id = 0xc53d61ca;

	constexpr static std::array<std::string_view, 3> xc53d61ca_values = {
		"kPyramidLight",
		"kPointLight",
		"kSpotLight", 
	};

	constexpr static std::array<std::string_view, 3> xc53d61ca_labels = {
		"Pyramid",
		"Point",
		"Spot", 
	};

	enum class xc53d61ca : uint64_t {
		Pyramid,
		Point,
		Spot, 
	};
} // namespace rivet::ddl::generated

// clang-format on
