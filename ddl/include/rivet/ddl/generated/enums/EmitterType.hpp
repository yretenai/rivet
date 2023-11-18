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
	constexpr static std::string_view EmitterType_type_name = "EmitterType";
	constexpr static rivet::rivet_type_id EmitterType_type_id = 0xf5bf036d;

	constexpr static std::array<std::string_view, 2> EmitterType_values = {
		"kCPU",
		"kGPU", 
	};

	enum class EmitterType : uint64_t {
		CPU,
		GPU, 
	};
} // namespace rivet::ddl::generated

// clang-format on
