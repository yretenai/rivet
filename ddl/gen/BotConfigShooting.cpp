// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotConfigShootingStream.hpp>
#include <rivet/ddl/generated/FirepointShootingData.hpp>
#include <rivet/ddl/generated/ShootingTauntData.hpp> 

#include <rivet/ddl/generated/BotConfigShooting.hpp>

namespace rivet::ddl::generated {
	BotConfigShooting::BotConfigShooting([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DesiredFireDistance = serialized->get_float(DesiredFireDistance_type_id);
		MaxFireDistance = serialized->get_float(MaxFireDistance_type_id);
		AimWhileIdle = serialized->get_bool(AimWhileIdle_type_id);
		UseFirepoints = serialized->get_bool(UseFirepoints_type_id);
		AllowGroundFirepoints = serialized->get_bool(AllowGroundFirepoints_type_id);
		AllowAirFirepoints = serialized->get_bool(AllowAirFirepoints_type_id);
		AllowChase = serialized->get_bool(AllowChase_type_id);
		AllowRepositioning = serialized->get_bool(AllowRepositioning_type_id);
		RepositionAngleMin = serialized->get_float(RepositionAngleMin_type_id);
		RepositionAngleMax = serialized->get_float(RepositionAngleMax_type_id);
		RepositionMoveDistanceMin = serialized->get_float(RepositionMoveDistanceMin_type_id);
		RepositionTargetDistanceMin = serialized->get_float(RepositionTargetDistanceMin_type_id);
		RepositionTargetDistanceMax = serialized->get_float(RepositionTargetDistanceMax_type_id);
		RepositionEnemySpacing = serialized->get_float(RepositionEnemySpacing_type_id);
		ShootAfterKnockback = serialized->get_bool(ShootAfterKnockback_type_id);
		NeedFirepointToReload = serialized->get_bool(NeedFirepointToReload_type_id);
		RequireLoS = serialized->get_bool(RequireLoS_type_id);
		InterruptableByInvalidFirepoints = serialized->get_bool(InterruptableByInvalidFirepoints_type_id);
		InterruptableToMelee = serialized->get_bool(InterruptableToMelee_type_id);
		UseNoFiringRangedAttackCombos = serialized->get_bool(UseNoFiringRangedAttackCombos_type_id);
		UseAttackJobsForShootingPattern = serialized->get_bool(UseAttackJobsForShootingPattern_type_id);
		AllowDiveRoll = serialized->get_bool(AllowDiveRoll_type_id);
		DiveRollMinPercent = serialized->get_float(DiveRollMinPercent_type_id);
		DiveRollMaxPercent = serialized->get_float(DiveRollMaxPercent_type_id);
		ThrowWhileMoving = serialized->get_bool(ThrowWhileMoving_type_id);
		ThrowDelay = serialized->get_float(ThrowDelay_type_id);
		ShootingTauntData = serialized->unwrap_into<rivet::ddl::generated::ShootingTauntData>(ShootingTauntData_type_id);
		StationaryFirepointShooting = serialized->unwrap_into<rivet::ddl::generated::FirepointShootingData>(StationaryFirepointShooting_type_id);
		RolloutFirepointShooting = serialized->unwrap_into<rivet::ddl::generated::FirepointShootingData>(RolloutFirepointShooting_type_id);
		MaxFacingAngle = serialized->get_float(MaxFacingAngle_type_id);
		RotateToFace = serialized->get_bool(RotateToFace_type_id);
		FaceRotateMaxSpeed = serialized->get_float(FaceRotateMaxSpeed_type_id);
		FaceRotateAccel = serialized->get_float(FaceRotateAccel_type_id);
		FaceRotateDecel = serialized->get_float(FaceRotateDecel_type_id);
		UseFPFacingForGoto = serialized->get_bool(UseFPFacingForGoto_type_id);
		FPHunterRangeMin = serialized->get_float(FPHunterRangeMin_type_id);
		FPHunterRangeIdeal = serialized->get_float(FPHunterRangeIdeal_type_id);
		FPHunterRangeMax = serialized->get_float(FPHunterRangeMax_type_id);
		FPHunterSetRangeMaxAsGatherRadius = serialized->get_bool(FPHunterSetRangeMaxAsGatherRadius_type_id);
		NonHeroTauntOrCelebrateProbability = serialized->get_float(NonHeroTauntOrCelebrateProbability_type_id);
		FaceBeforeShooting = serialized->get_bool(FaceBeforeShooting_type_id);
		UseSearchWhenLosBlocked = serialized->get_bool(UseSearchWhenLosBlocked_type_id);
		InterruptTauntWhenDamaged = serialized->get_bool(InterruptTauntWhenDamaged_type_id); 
	}

	[[nodiscard]] auto
	BotConfigShooting::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotConfigShooting::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigShooting> {
		if (incoming_type_id == BotConfigShooting::type_id) {
			return std::make_shared<BotConfigShooting>(serialized);
		}

		auto BotConfigShootingStream_ptr = BotConfigShootingStream::from_substruct(incoming_type_id, serialized);
		if (BotConfigShootingStream_ptr != nullptr) {
			return BotConfigShootingStream_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
