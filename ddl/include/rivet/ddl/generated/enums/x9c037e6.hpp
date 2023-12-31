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
	constexpr static std::string_view x9c037e6_type_name = "x9c037e6";
	constexpr static rivet::rivet_type_id x9c037e6_type_id = 0x9c037e6;

	constexpr static std::array<std::string_view, 4> x9c037e6_values = {
		"kBaked",
		"kRuntime",
		"kRaw",
		"kOverride", 
	};

	constexpr static std::array<std::string_view, 4> x9c037e6_labels = {
		"Baked",
		"Runtime",
		"Raw",
		"Override", 
	};

	enum class x9c037e6 : uint64_t {
		Baked,
		Runtime,
		Raw,
		Override, 
	};
} // namespace rivet::ddl::generated

// clang-format on
