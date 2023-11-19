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
	constexpr static std::string_view xe41b4b91_type_name = "xe41b4b91";
	constexpr static rivet::rivet_type_id xe41b4b91_type_id = 0xe41b4b91;

	constexpr static std::array<std::string_view, 2> xe41b4b91_values = {
		"kBarrier",
		"kContainer", 
	};

	constexpr static std::array<std::string_view, 2> xe41b4b91_labels = {
		"NONE",
		"NONE", 
	};

	enum class xe41b4b91 : uint64_t {
		Barrier,
		Container, 
	};
} // namespace rivet::ddl::generated

// clang-format on