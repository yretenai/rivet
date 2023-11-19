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
	constexpr static std::string_view xc2e0975c_type_name = "xc2e0975c";
	constexpr static rivet::rivet_type_id xc2e0975c_type_id = 0xc2e0975c;

	constexpr static std::array<std::string_view, 3> xc2e0975c_values = {
		"kUnknown",
		"kOnline",
		"kOffline", 
	};

	constexpr static std::array<std::string_view, 3> xc2e0975c_labels = {
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xc2e0975c : uint64_t {
		Unknown,
		Online,
		Offline, 
	};
} // namespace rivet::ddl::generated

// clang-format on