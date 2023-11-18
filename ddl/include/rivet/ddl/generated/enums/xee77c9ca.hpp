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
	constexpr static std::string_view xee77c9ca_type_name = "xee77c9ca";
	constexpr static rivet::rivet_type_id xee77c9ca_type_id = 0xee77c9ca;

	constexpr static std::array<std::string_view, 4> xee77c9ca_values = {
		"kName",
		"kPath",
		"kExt",
		"kModifiedTime", 
	};

	enum class xee77c9ca : uint64_t {
		File_Name,
		Path,
		Extension,
		Modified_Time, 
	};
} // namespace rivet::ddl::generated

// clang-format on
