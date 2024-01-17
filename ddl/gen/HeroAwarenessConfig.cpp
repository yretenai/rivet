// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroAwarenessConfig.hpp>

namespace rivet::ddl::generated {
	HeroAwarenessConfig::HeroAwarenessConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HeadTurnActivateMaxSpeed = serialized->get_float(HeadTurnActivateMaxSpeed_type_id, 225.000000);
		HeadTurnActivateAccel = serialized->get_float(HeadTurnActivateAccel_type_id, 450.000000);
		HeadTurnActivateDecel = serialized->get_float(HeadTurnActivateDecel_type_id, 450.000000);
		HeadTurnRecoveryMaxSpeed = serialized->get_float(HeadTurnRecoveryMaxSpeed_type_id, 225.000000);
		HeadTurnRecoveryAccel = serialized->get_float(HeadTurnRecoveryAccel_type_id, 450.000000);
		HeadTurnRecoveryDecel = serialized->get_float(HeadTurnRecoveryDecel_type_id, 450.000000);
		HeadTurnMaxYaw = serialized->get_float(HeadTurnMaxYaw_type_id, 90.000000);
		HeadTurnMaxPitch = serialized->get_float(HeadTurnMaxPitch_type_id, 40.000000);
		HeadLookDriverCooldown = serialized->get_float(HeadLookDriverCooldown_type_id, 0.500000);
		AimAssistTargetRange = serialized->get_float(AimAssistTargetRange_type_id, 10.000000);
		AimAssistTargetDecayTime = serialized->get_float(AimAssistTargetDecayTime_type_id, 5.000000);
		RecentAttackerRange = serialized->get_float(RecentAttackerRange_type_id, 30.000000);
		RecentAttackerMaxAge = serialized->get_float(RecentAttackerMaxAge_type_id, 5.000000);
		PointOfInterestRange = serialized->get_float(PointOfInterestRange_type_id, 10.000000);
		NPCRange = serialized->get_float(NPCRange_type_id, 15.000000);
		NPCKeepTargetDuration = serialized->get_float(NPCKeepTargetDuration_type_id, 5.000000);
		EnemyRange = serialized->get_float(EnemyRange_type_id, 20.000000);
		EnemyCheckInterval = serialized->get_float(EnemyCheckInterval_type_id, 10.000000);
		TraversalRange = serialized->get_float(TraversalRange_type_id, 10.000000);
		TraversalMaxAge = serialized->get_float(TraversalMaxAge_type_id, 7.500000); 
	}

	[[nodiscard]] auto
	HeroAwarenessConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroAwarenessConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroAwarenessConfig> {
		if (incoming_type_id == HeroAwarenessConfig::type_id) {
			return std::make_shared<HeroAwarenessConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
