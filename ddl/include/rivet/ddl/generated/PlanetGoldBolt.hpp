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

#include <rivet/ddl/generated/enums/x7038301.hpp> 

namespace rivet::ddl::generated {
	struct ActivityHint; 

	struct RIVET_DDL_SHARED PlanetGoldBolt : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PlanetGoldBolt";
		constexpr static rivet::rivet_type_id type_id = 0x7785fc46;

		constexpr static std::string_view SaveId_type_name = "SaveId";
		constexpr static rivet::rivet_type_id SaveId_type_id = 0xcd7269d0;
		constexpr static std::string_view HACK_UseOverrideTaskId_type_name = "HACK_UseOverrideTaskId";
		constexpr static rivet::rivet_type_id HACK_UseOverrideTaskId_type_id = 0xc402d609;
		constexpr static std::string_view HACK_OverrideTaskId_type_name = "HACK_OverrideTaskId";
		constexpr static rivet::rivet_type_id HACK_OverrideTaskId_type_id = 0x2b1e6217;
		constexpr static std::string_view NameTag_type_name = "NameTag";
		constexpr static rivet::rivet_type_id NameTag_type_id = 0x2d78cbbd;
		constexpr static std::string_view DefaultPlaytimeEstimate_type_name = "DefaultPlaytimeEstimate";
		constexpr static rivet::rivet_type_id DefaultPlaytimeEstimate_type_id = 0xa76d47a6;
		constexpr static std::string_view Hints_type_name = "Hints";
		constexpr static rivet::rivet_type_id Hints_type_id = 0xf00bc587; 

		explicit PlanetGoldBolt() = default;
		explicit PlanetGoldBolt([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x7038301 SaveId {};
		bool HACK_UseOverrideTaskId {};
		rivet::ddl::generated::x7038301 HACK_OverrideTaskId {};
		std::string_view NameTag {};
		uint32_t DefaultPlaytimeEstimate {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ActivityHint>> Hints {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetGoldBolt>;
	};
} // namespace rivet::ddl::generated

// clang-format on
