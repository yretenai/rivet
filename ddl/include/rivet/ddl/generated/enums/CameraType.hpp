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
	constexpr const static std::string_view CameraType_type_name = "CameraType";
	constexpr const static rivet::rivet_type_id CameraType_type_id = 0x34041fcf;

	constexpr const static std::array<std::string_view, 2> CameraType_values = {
		"kCameraPerspective",
		"kCameraOrtho", 
	};

	enum class CameraType : uint64_t {
		Perspective,
		Orthographic, 
	};
} // namespace rivet::ddl::generated

// clang-format on
