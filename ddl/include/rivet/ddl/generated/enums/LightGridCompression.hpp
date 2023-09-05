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
	constexpr const static std::string_view LightGridCompression_type_name = "LightGridCompression";
	constexpr const static rivet::rivet_type_id LightGridCompression_type_id = 0x845970a5;

	constexpr const static std::array<std::string_view, 5> LightGridCompression_values = {
		"kNoCompression",
		"kLowCompression",
		"kMediumCompression",
		"kHighCompression",
		"kHighestCompression", 
	};

	enum class LightGridCompression : uint64_t {
		No_Compression,
		Low_Compression,
		Medium_Compression,
		High_Compression,
		Highest_Compression, 
	};
} // namespace rivet::ddl::generated

// clang-format on
