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
	constexpr static std::string_view ExistingLedgeFlockBehavior_type_name = "ExistingLedgeFlockBehavior";
	constexpr static rivet::rivet_type_id ExistingLedgeFlockBehavior_type_id = 0xc723d92a;

	constexpr static std::array<std::string_view, 2> ExistingLedgeFlockBehavior_values = {
		"kScatterBirds",
		"kDestroyBirds", 
	};

	constexpr static std::array<std::string_view, 2> ExistingLedgeFlockBehavior_labels = {
		"Scatter Birds",
		"Destroy Birds", 
	};

	enum class ExistingLedgeFlockBehavior : uint64_t {
		Scatter_Birds,
		Destroy_Birds, 
	};
} // namespace rivet::ddl::generated

// clang-format on