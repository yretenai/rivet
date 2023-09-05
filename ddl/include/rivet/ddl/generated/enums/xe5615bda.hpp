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
	constexpr const static std::string_view xe5615bda_type_name = "xe5615bda";
	constexpr const static rivet::rivet_type_id xe5615bda_type_id = 0xe5615bda;

	constexpr const static std::array<std::string_view, 2> xe5615bda_values = {
		"kSequenceNodeTypeDefault",
		"kSequenceNodeTypeCombineAdditive", 
	};

	enum class xe5615bda : uint64_t {
		Default,
		SequenceNodeTypeCombineAdditive, 
	};
} // namespace rivet::ddl::generated

// clang-format on
