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
	constexpr const static std::string_view ChangeType_type_name = "ChangeType";
	constexpr const static rivet::rivet_type_id ChangeType_type_id = 0x6b94ddc9;

	constexpr const static std::array<std::string_view, 4> ChangeType_values = {
		"kOther",
		"kSession",
		"kAsset",
		"kAllSessions", 
	};

	enum class ChangeType : uint64_t {
		Other,
		Session,
		Asset,
		Change_applies_to_all_sessions, 
	};
} // namespace rivet::ddl::generated

// clang-format on
