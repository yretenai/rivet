// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct ActivityHint; 

	struct RIVET_DDL_SHARED ObjectiveTaskInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ObjectiveTaskInfo";
		constexpr static rivet::rivet_type_id type_id = 0x2148964c;

		constexpr static std::string_view AlternateID_type_name = "AlternateID";
		constexpr static rivet::rivet_type_id AlternateID_type_id = 0x9e8ecf27;
		constexpr static std::string_view NameTagOverride_type_name = "NameTagOverride";
		constexpr static rivet::rivet_type_id NameTagOverride_type_id = 0x439ed7c4;
		constexpr static std::string_view PlaytimeEstimate_type_name = "PlaytimeEstimate";
		constexpr static rivet::rivet_type_id PlaytimeEstimate_type_id = 0x292b559d;
		constexpr static std::string_view Hints_type_name = "Hints";
		constexpr static rivet::rivet_type_id Hints_type_id = 0xf00bc587; 

		explicit ObjectiveTaskInfo() = default;
		explicit ObjectiveTaskInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AlternateID {};
		std::string_view NameTagOverride {};
		uint32_t PlaytimeEstimate {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ActivityHint>> Hints {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveTaskInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
