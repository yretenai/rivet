// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseSoundEvent.hpp>
#include <rivet/ddl/generated/SoundSourceComponentPrius.hpp> 

#include <rivet/ddl/generated/FlockConfig.hpp>

namespace rivet::ddl::generated {
	FlockConfig::FlockConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Template = serialized->get_string(Template_type_id);
		DefaultFlockDensityConfig = serialized->get_string(DefaultFlockDensityConfig_type_id);
		DistFarThresh = serialized->get_float(DistFarThresh_type_id);
		SpawnDesireDistanceCoeff = serialized->get_float(SpawnDesireDistanceCoeff_type_id);
		SpawnDesireAngleCoeff = serialized->get_float(SpawnDesireAngleCoeff_type_id);
		FovThresh = serialized->get_float(FovThresh_type_id);
		LowSpeedThreshold = serialized->get_float(LowSpeedThreshold_type_id);
		LowSpeedSpawnPenalty = serialized->get_float(LowSpeedSpawnPenalty_type_id);
		LowSpeedFovThreshold = serialized->get_float(LowSpeedFovThreshold_type_id);
		FlockBehavior = serialized->get_enum<rivet::ddl::generated::x13bb0809>(FlockBehavior_type_id, rivet::ddl::generated::x13bb0809_values);
		SeparationDistance = serialized->get_float(SeparationDistance_type_id);
		MaxSeparationForcePerMember = serialized->get_float(MaxSeparationForcePerMember_type_id);
		MaxNeighborDistance = serialized->get_float(MaxNeighborDistance_type_id);
		MaxAlignmentForce = serialized->get_float(MaxAlignmentForce_type_id);
		MaxBoundaryForce = serialized->get_float(MaxBoundaryForce_type_id);
		MaxCohesionForce = serialized->get_float(MaxCohesionForce_type_id);
		MaxSeparationForce = serialized->get_float(MaxSeparationForce_type_id);
		DestinationForce = serialized->get_float(DestinationForce_type_id);
		DestinationBoundaryPadding = serialized->get_float(DestinationBoundaryPadding_type_id);
		DestinationBlendTime = serialized->get_float(DestinationBlendTime_type_id);
		NearDestinationDistance = serialized->get_float(NearDestinationDistance_type_id);
		SpawnSoundEvent = serialized->unwrap_into<rivet::ddl::generated::WwiseSoundEvent>(SpawnSoundEvent_type_id);
		FlockSoundSource = serialized->unwrap_into<rivet::ddl::generated::SoundSourceComponentPrius>(FlockSoundSource_type_id); 
	}

	auto
	FlockConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	FlockConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlockConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlockConfig> {
		if (incoming_type_id == FlockConfig::type_id) {
			return std::make_shared<FlockConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
