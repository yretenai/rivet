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
	constexpr static std::string_view xc353b5be_type_name = "xc353b5be";
	constexpr static rivet::rivet_type_id xc353b5be_type_id = 0xc353b5be;

	constexpr static std::array<std::tuple<std::string_view, uint64_t>, 2> xc353b5be_values = {
		std::make_tuple("kMarkedForRemoval", 0x1),
		std::make_tuple("kPersistent", 0x2), 
	};

	enum class xc353b5be : uint64_t {
		MarkedForRemoval = 0x1,
		Persistent = 0x2, 
	};
} // namespace rivet::ddl::generated

// clang-format on
