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
	constexpr static std::string_view x39897f27_type_name = "x39897f27";
	constexpr static rivet::rivet_type_id x39897f27_type_id = 0x39897f27;

	constexpr static std::array<std::string_view, 3> x39897f27_values = {
		"kZoneOpHide",
		"kZoneOpShow",
		"kZoneOpLoad", 
	};

	constexpr static std::array<std::string_view, 3> x39897f27_labels = {
		"Zone - Hide",
		"Zone - Show",
		"Zone - Load", 
	};

	enum class x39897f27 : uint64_t {
		ZoneOpHide,
		ZoneOpShow,
		ZoneOpLoad, 
	};
} // namespace rivet::ddl::generated

// clang-format on
