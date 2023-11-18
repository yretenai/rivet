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
	constexpr static std::string_view ChunkType_type_name = "ChunkType";
	constexpr static rivet::rivet_type_id ChunkType_type_id = 0x6df07d3c;

	constexpr static std::array<std::string_view, 3> ChunkType_values = {
		"kBreakable",
		"kBot",
		"kMisc", 
	};

	enum class ChunkType : uint64_t {
		Breakable,
		Bot,
		Misc, 
	};
} // namespace rivet::ddl::generated

// clang-format on
