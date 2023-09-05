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
	constexpr const static std::string_view xe542f097_type_name = "xe542f097";
	constexpr const static rivet::rivet_type_id xe542f097_type_id = 0xe542f097;

	constexpr const static std::array<std::string_view, 2> xe542f097_values = {
		"kDofFollowBSphere",
		"kDofFollowFixed", 
	};

	enum class xe542f097 : uint64_t {
		BSphere,
		Fixed, 
	};
} // namespace rivet::ddl::generated

// clang-format on
