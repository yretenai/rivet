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
	constexpr static std::string_view xd3395131_type_name = "xd3395131";
	constexpr static rivet::rivet_type_id xd3395131_type_id = 0xd3395131;

	constexpr static std::array<std::string_view, 7> xd3395131_values = {
		"kConfigDefault",
		"kDeleteInstant",
		"kDeleteOffCamera",
		"kDeleteOffCameraOutOfRange",
		"kDeleteBehindCamOutOfRange",
		"kDeleteNotRenderedOutOfRange",
		"kReZoneToActivator", 
	};

	enum class xd3395131 : uint64_t {
		ConfigDefault,
		DeleteInstant,
		DeleteOffCamera,
		DeleteOffCameraOutOfRange,
		DeleteBehindCamOutOfRange,
		DeleteNotRenderedOutOfRange,
		ReZoneToActivator, 
	};
} // namespace rivet::ddl::generated

// clang-format on
