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
	constexpr static std::string_view xc95d8425_type_name = "xc95d8425";
	constexpr static rivet::rivet_type_id xc95d8425_type_id = 0xc95d8425;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 5> xc95d8425_values = {
		std::make_tuple("kDriverFlagsIsLooping", 0x1),
		std::make_tuple("kDriverFlagsEventPassThrough", 0x2),
		std::make_tuple("kDriverFlagsNoPhaseMatchOnActivate", 0x4),
		std::make_tuple("kDriverFlagsPhaseMatchLayer", 0x8),
		std::make_tuple("kDriverFlagsPhaseMatchLayer0", 0x10), 
	};

	enum class xc95d8425 : uint64_t {
		DriverFlagsIsLooping = 0x1,
		DriverFlagsEventPassThrough = 0x2,
		DriverFlagsNoPhaseMatchOnActivate = 0x4,
		DriverFlagsPhaseMatchLayer = 0x8,
		DriverFlagsPhaseMatchLayer0 = 0x10, 
	};
} // namespace rivet::ddl::generated

// clang-format on