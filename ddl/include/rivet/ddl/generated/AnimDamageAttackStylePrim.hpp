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

#include <rivet/ddl/generated/enums/x257872aa.hpp>
#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/enums/xaabf8cd7.hpp>
#include <rivet/ddl/generated/bitsets/x65d7dac2.hpp>
#include <rivet/ddl/generated/enums/DamageTypes.hpp>
#include <rivet/ddl/generated/AnimDamageAttackStyleBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED AnimDamageAttackStylePrim : AnimDamageAttackStyleBase {
		constexpr static std::string_view type_name = "AnimDamageAttackStylePrim";
		constexpr static rivet::rivet_type_id type_id = 0xb4506392;

		constexpr static std::string_view PrimType_type_name = "PrimType";
		constexpr static rivet::rivet_type_id PrimType_type_id = 0xb75f8ee;
		constexpr static std::string_view DamageJoint_type_name = "DamageJoint";
		constexpr static rivet::rivet_type_id DamageJoint_type_id = 0x520e489;
		constexpr static std::string_view LocalOffset_type_name = "LocalOffset";
		constexpr static rivet::rivet_type_id LocalOffset_type_id = 0x46a4eea5;
		constexpr static std::string_view DamageJointSecondary_type_name = "DamageJointSecondary";
		constexpr static rivet::rivet_type_id DamageJointSecondary_type_id = 0x2db7d7b8;
		constexpr static std::string_view LocalOffsetSecondary_type_name = "LocalOffsetSecondary";
		constexpr static rivet::rivet_type_id LocalOffsetSecondary_type_id = 0x2d270ce4;
		constexpr static std::string_view SweepFromLastPosition_type_name = "SweepFromLastPosition";
		constexpr static rivet::rivet_type_id SweepFromLastPosition_type_id = 0x192a2205;
		constexpr static std::string_view DamageRadius_type_name = "DamageRadius";
		constexpr static rivet::rivet_type_id DamageRadius_type_id = 0xe3e6fa68;
		constexpr static std::string_view LerpRadius_type_name = "LerpRadius";
		constexpr static rivet::rivet_type_id LerpRadius_type_id = 0x6a9c9a53;
		constexpr static std::string_view DamagePrimLength_type_name = "DamagePrimLength";
		constexpr static rivet::rivet_type_id DamagePrimLength_type_id = 0xdb9a6d43;
		constexpr static std::string_view LerpLength_type_name = "LerpLength";
		constexpr static rivet::rivet_type_id LerpLength_type_id = 0x509d6abb;
		constexpr static std::string_view DamageType_type_name = "DamageType";
		constexpr static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr static rivet::rivet_type_id DamageAmount_type_id = 0x563be470;
		constexpr static std::string_view ArmorPassThroughPercentage_type_name = "ArmorPassThroughPercentage";
		constexpr static rivet::rivet_type_id ArmorPassThroughPercentage_type_id = 0xcea0f4f;
		constexpr static std::string_view Knockback_type_name = "Knockback";
		constexpr static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view KnockbackForce_type_name = "KnockbackForce";
		constexpr static rivet::rivet_type_id KnockbackForce_type_id = 0x28d6ed59;
		constexpr static std::string_view FriendlyKnockback_type_name = "FriendlyKnockback";
		constexpr static rivet::rivet_type_id FriendlyKnockback_type_id = 0x776e0c27;
		constexpr static std::string_view Condition_type_name = "Condition";
		constexpr static rivet::rivet_type_id Condition_type_id = 0x3f2b174f;
		constexpr static std::string_view ConditionDuration_type_name = "ConditionDuration";
		constexpr static rivet::rivet_type_id ConditionDuration_type_id = 0x6d5955c;
		constexpr static std::string_view StatusAmount_type_name = "StatusAmount";
		constexpr static rivet::rivet_type_id StatusAmount_type_id = 0x37e1f098;
		constexpr static std::string_view DurationOverride_type_name = "DurationOverride";
		constexpr static rivet::rivet_type_id DurationOverride_type_id = 0xbb3cda6;
		constexpr static std::string_view HitPauseTime_type_name = "HitPauseTime";
		constexpr static rivet::rivet_type_id HitPauseTime_type_id = 0xa0fb18ac;
		constexpr static std::string_view RequestFlags_type_name = "RequestFlags";
		constexpr static rivet::rivet_type_id RequestFlags_type_id = 0x2bc801df; 

		explicit AnimDamageAttackStylePrim() = default;
		explicit AnimDamageAttackStylePrim([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xaabf8cd7 PrimType {};
		std::string_view DamageJoint {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> LocalOffset {};
		std::string_view DamageJointSecondary {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> LocalOffsetSecondary {};
		bool SweepFromLastPosition {};
		float DamageRadius {};
		bool LerpRadius {};
		float DamagePrimLength {};
		bool LerpLength {};
		rivet::ddl::generated::DamageTypes DamageType {};
		float DamageAmount {};
		float ArmorPassThroughPercentage {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {};
		float KnockbackForce {};
		bool FriendlyKnockback {};
		rivet::ddl::generated::x257872aa Condition {};
		float ConditionDuration {};
		float StatusAmount {};
		float DurationOverride {};
		float HitPauseTime {};
		rivet::ddl::generated::x65d7dac2 RequestFlags {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageAttackStylePrim>;
	};
} // namespace rivet::ddl::generated

// clang-format on
