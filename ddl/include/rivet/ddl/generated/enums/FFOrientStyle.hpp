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
	constexpr static std::string_view FFOrientStyle_type_name = "FFOrientStyle";
	constexpr static rivet::rivet_type_id FFOrientStyle_type_id = 0xe1e68a34;

	constexpr static std::array<std::string_view, 2> FFOrientStyle_values = {
		"kLocal",
		"kWorld", 
	};

	constexpr static std::array<std::string_view, 2> FFOrientStyle_labels = {
		"Local",
		"World", 
	};

	enum class FFOrientStyle : uint64_t {
		Local,
		World, 
	};
} // namespace rivet::ddl::generated

// clang-format on