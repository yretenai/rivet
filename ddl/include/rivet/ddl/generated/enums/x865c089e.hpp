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
	constexpr static std::string_view x865c089e_type_name = "x865c089e";
	constexpr static rivet::rivet_type_id x865c089e_type_id = 0x865c089e;

	constexpr static std::array<std::string_view, 3> x865c089e_values = {
		"kSampleRate30Hz",
		"kSampleRate15Hz",
		"kSampleRate10Hz", 
	};

	constexpr static std::array<std::string_view, 3> x865c089e_labels = {
		"30 Hz",
		"15 Hz",
		"10 Hz", 
	};

	enum class x865c089e : uint64_t {
		SampleRate30Hz,
		SampleRate15Hz,
		SampleRate10Hz, 
	};
} // namespace rivet::ddl::generated

// clang-format on