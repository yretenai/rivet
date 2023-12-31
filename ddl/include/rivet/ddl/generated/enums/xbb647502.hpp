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
	constexpr static std::string_view xbb647502_type_name = "xbb647502";
	constexpr static rivet::rivet_type_id xbb647502_type_id = 0xbb647502;

	constexpr static std::array<std::string_view, 4> xbb647502_values = {
		"kCursor",
		"kCameraCrosshair",
		"kGun",
		"kAutomatic", 
	};

	constexpr static std::array<std::string_view, 4> xbb647502_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xbb647502 : uint64_t {
		Cursor,
		CameraCrosshair,
		Gun,
		Automatic, 
	};
} // namespace rivet::ddl::generated

// clang-format on
