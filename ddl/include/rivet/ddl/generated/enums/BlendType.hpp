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
	constexpr static std::string_view BlendType_type_name = "BlendType";
	constexpr static rivet::rivet_type_id BlendType_type_id = 0x1b4f6c9a;

	constexpr static std::array<std::string_view, 5> BlendType_values = {
		"kAdditive",
		"kBlended",
		"kModulate",
		"kHybrid",
		"kOpaque", 
	};

	constexpr static std::array<std::string_view, 5> BlendType_labels = {
		"Additive",
		"Blended",
		"Modulate",
		"Opaque/Blended Hybrid",
		"Opaque", 
	};

	enum class BlendType : uint64_t {
		Additive,
		Blended,
		Modulate,
		Hybrid,
		Opaque, 
	};
} // namespace rivet::ddl::generated

// clang-format on
