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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/enums/DamageTypes.hpp>
#include <rivet/ddl/generated/enums/xef932fba.hpp> 

namespace rivet::ddl::generated {
	struct DamageKnockbackOverrideData; 

	struct RIVET_DDL_SHARED MeleeAttackData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MeleeAttackData";
		constexpr static rivet::rivet_type_id type_id = 0xf2a6d993;

		constexpr static std::string_view Index_type_name = "Index";
		constexpr static rivet::rivet_type_id Index_type_id = 0x9920abc0;
		constexpr static std::string_view HitAnim_type_name = "HitAnim";
		constexpr static rivet::rivet_type_id HitAnim_type_id = 0xe1abb220;
		constexpr static std::string_view DamageType_type_name = "DamageType";
		constexpr static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr static std::string_view Damage_type_name = "Damage";
		constexpr static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b;
		constexpr static std::string_view AOE_type_name = "AOE";
		constexpr static rivet::rivet_type_id AOE_type_id = 0xed56b719;
		constexpr static std::string_view Knockback_type_name = "Knockback";
		constexpr static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view OverrideKnockbackDist_type_name = "OverrideKnockbackDist";
		constexpr static rivet::rivet_type_id OverrideKnockbackDist_type_id = 0xd2a69999;
		constexpr static std::string_view DamageBubbleRadiusOverride_type_name = "DamageBubbleRadiusOverride";
		constexpr static rivet::rivet_type_id DamageBubbleRadiusOverride_type_id = 0xa8307a9c;
		constexpr static std::string_view IsDamageBubbleFullDuration_type_name = "IsDamageBubbleFullDuration";
		constexpr static rivet::rivet_type_id IsDamageBubbleFullDuration_type_id = 0x7f4bfc45;
		constexpr static std::string_view OverrideData_type_name = "OverrideData";
		constexpr static rivet::rivet_type_id OverrideData_type_id = 0x3f818aa; 

		explicit MeleeAttackData() = default;
		explicit MeleeAttackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xef932fba Index {};
		std::string_view HitAnim {};
		rivet::ddl::generated::DamageTypes DamageType {};
		float Damage {};
		float AOE {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {};
		float OverrideKnockbackDist {};
		float DamageBubbleRadiusOverride {};
		bool IsDamageBubbleFullDuration {};
		std::shared_ptr<rivet::ddl::generated::DamageKnockbackOverrideData> OverrideData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleeAttackData>;
	};
} // namespace rivet::ddl::generated

// clang-format on