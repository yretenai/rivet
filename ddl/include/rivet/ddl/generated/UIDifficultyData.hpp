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

#include <rivet/ddl/generated/enums/xd2b2d773.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIDifficultyData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIDifficultyData";
		constexpr static rivet::rivet_type_id type_id = 0xb236ead1;

		constexpr static std::string_view DifficultyID_type_name = "DifficultyID";
		constexpr static rivet::rivet_type_id DifficultyID_type_id = 0xd6b6733b;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Desc_type_name = "Desc";
		constexpr static rivet::rivet_type_id Desc_type_id = 0x3b256ce4;
		constexpr static std::string_view EnemyAggressiveness_type_name = "EnemyAggressiveness";
		constexpr static rivet::rivet_type_id EnemyAggressiveness_type_id = 0x620adc04;
		constexpr static std::string_view EnemyDamage_type_name = "EnemyDamage";
		constexpr static rivet::rivet_type_id EnemyDamage_type_id = 0x8bbafa0e;
		constexpr static std::string_view EnemyHealth_type_name = "EnemyHealth";
		constexpr static rivet::rivet_type_id EnemyHealth_type_id = 0x54a88d71; 

		explicit UIDifficultyData() = default;
		explicit UIDifficultyData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xd2b2d773 DifficultyID {};
		std::string_view Name {};
		std::string_view Desc {};
		float EnemyAggressiveness {};
		float EnemyDamage {};
		float EnemyHealth {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIDifficultyData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
