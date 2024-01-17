// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDamageProcessorCrescentPrius.hpp>

namespace rivet::ddl::generated {
	AnimDamageProcessorCrescentPrius::AnimDamageProcessorCrescentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AnimDamageAttackStyleBase(serialized) {
		DamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(DamageType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::Melee);
		DamageAmount = serialized->get_float(DamageAmount_type_id, 10.000000);
		DamageFalloff = serialized->get_float(DamageFalloff_type_id, -1.000000);
		DamageVictimMin = serialized->get_float(DamageVictimMin_type_id, -1.000000);
		DamageVictimMax = serialized->get_float(DamageVictimMax_type_id, -1.000000);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values, rivet::ddl::generated::KnockbackLevels::None);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id, -1.000000);
		KnockbackVictimMax = serialized->get_int32(KnockbackVictimMax_type_id, -1);
		ArcHeight = serialized->get_float(ArcHeight_type_id, 1.000000);
		ArcHeightAlt = serialized->get_float(ArcHeightAlt_type_id, -1.000000);
		SweepAngle = serialized->get_float(SweepAngle_type_id, 135.000000);
		SweepRange = serialized->get_float(SweepRange_type_id, 2.000000);
		SweepRangeSide = serialized->get_float(SweepRangeSide_type_id, -1.000000);
		SweepRangeBack = serialized->get_float(SweepRangeBack_type_id, -1.000000);
		CollRadius = serialized->get_float(CollRadius_type_id, 0.500000);
		CollRadiusSide = serialized->get_float(CollRadiusSide_type_id, -1.000000);
		CollRadiusBack = serialized->get_float(CollRadiusBack_type_id, -1.000000);
		MaxHits = serialized->get_int32(MaxHits_type_id, -1);
		PosAngleLimit = serialized->get_float(PosAngleLimit_type_id, 180.000000);
		RotationRate = serialized->get_float(RotationRate_type_id, 0.000000);
		Duration = serialized->get_float(Duration_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	AnimDamageProcessorCrescentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDamageProcessorCrescentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageProcessorCrescentPrius> {
		if (incoming_type_id == AnimDamageProcessorCrescentPrius::type_id) {
			return std::make_shared<AnimDamageProcessorCrescentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
