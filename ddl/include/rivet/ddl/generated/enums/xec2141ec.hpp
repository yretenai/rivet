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
	constexpr static std::string_view xec2141ec_type_name = "xec2141ec";
	constexpr static rivet::rivet_type_id xec2141ec_type_id = 0xec2141ec;

	constexpr static std::array<std::string_view, 5> xec2141ec_values = {
		"kDbUpToDate",
		"kDbBehind",
		"kDbAhead",
		"kDbMissing",
		"kDbExtra", 
	};

	constexpr static std::array<std::string_view, 5> xec2141ec_labels = {
		"Db version is Up-to-date with what is on disk",
		"DB version is behind version on disk",
		"Db version is ahead of version on disk",
		"Db entry does not exist",
		"Db has an extra entry that does not exist on disk", 
	};

	enum class xec2141ec : uint64_t {
		DbUpToDate,
		DB_version_is_behind_version_on_disk,
		Db_version_is_ahead_of_version_on_disk,
		Db_entry_does_not_exist,
		Db_has_an_extra_entry_that_does_not_exist_on_disk, 
	};
} // namespace rivet::ddl::generated

// clang-format on
