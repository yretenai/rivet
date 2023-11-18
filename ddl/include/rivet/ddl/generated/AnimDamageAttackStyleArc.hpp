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
#include <rivet/ddl/generated/enums/x8d7e44cf.hpp>
#include <rivet/ddl/generated/AnimDamageAttackStyleBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AnimDamageAttackStyleArc : AnimDamageAttackStyleBase {
		constexpr static std::string_view type_name = "AnimDamageAttackStyleArc";
		constexpr static rivet::rivet_type_id type_id = 0xa6ec85c8;

		constexpr static std::string_view ArcCenterHeight_type_name = "ArcCenterHeight";
		constexpr static rivet::rivet_type_id ArcCenterHeight_type_id = 0x33055b3e;
		constexpr static std::string_view DamageJoint_type_name = "DamageJoint";
		constexpr static rivet::rivet_type_id DamageJoint_type_id = 0x520e489;
		constexpr static std::string_view DamageRadius_type_name = "DamageRadius";
		constexpr static rivet::rivet_type_id DamageRadius_type_id = 0xe3e6fa68;
		constexpr static std::string_view DamageType_type_name = "DamageType";
		constexpr static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr static rivet::rivet_type_id DamageAmount_type_id = 0x563be470;
		constexpr static std::string_view Knockback_type_name = "Knockback";
		constexpr static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b; 

		explicit AnimDamageAttackStyleArc() = default;
		explicit AnimDamageAttackStyleArc([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ArcCenterHeight {};
		std::string_view DamageJoint {};
		float DamageRadius {};
		rivet::ddl::generated::x8d7e44cf DamageType {};
		float DamageAmount {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageAttackStyleArc>;
	};
} // namespace rivet::ddl::generated

// clang-format on
