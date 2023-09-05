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
	constexpr const static std::string_view x78bb2768_type_name = "x78bb2768";
	constexpr const static rivet::rivet_type_id x78bb2768_type_id = 0x78bb2768;

	constexpr const static std::array<std::string_view, 2> x78bb2768_values = {
		"kCaptureAllGrids",
		"kCaptureSelectedGrids", 
	};

	enum class x78bb2768 : uint64_t {
		CaptureAllGrids,
		CaptureSelectedGrids, 
	};
} // namespace rivet::ddl::generated

// clang-format on
