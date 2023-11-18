// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LedgeBirdType.hpp>
#include <rivet/ddl/generated/DimensionalPulseTargetFlockPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/LedgeBirdSystemConfig.hpp>

namespace rivet::ddl::generated {
	LedgeBirdSystemConfig::LedgeBirdSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MaxHeroSpeed = serialized->get_float(MaxHeroSpeed_type_id);
		StopSpawnDistance = serialized->get_float(StopSpawnDistance_type_id);
		MinSpawnDistance = serialized->get_float(MinSpawnDistance_type_id);
		MaxSpawnDistance = serialized->get_float(MaxSpawnDistance_type_id);
		LedgeSpawnCooldown = serialized->get_float(LedgeSpawnCooldown_type_id);
		MaxSpawnedFlocks = serialized->get_int32(MaxSpawnedFlocks_type_id);
		SpawnQueryDimensions = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnQueryDimensions_type_id);
		CulledLedgeDespawnTime = serialized->get_float(CulledLedgeDespawnTime_type_id);
		OffscreenFleeDespawnTime = serialized->get_float(OffscreenFleeDespawnTime_type_id);
		FleeDistance = serialized->get_float(FleeDistance_type_id);
		FleeDistanceCoeffY = serialized->get_float(FleeDistanceCoeffY_type_id);
		InitialLoadDelay = serialized->get_float(InitialLoadDelay_type_id);
		MinLedgeRespawnTime = serialized->get_float(MinLedgeRespawnTime_type_id);
		FleeFromPulses = serialized->get_bool(FleeFromPulses_type_id);
		PulseFlockTargetPrius = serialized->unwrap_into<rivet::ddl::generated::DimensionalPulseTargetFlockPrius>(PulseFlockTargetPrius_type_id);
		BirdTypes = serialized->unwrap_into_many<rivet::ddl::generated::LedgeBirdType>(BirdTypes_type_id); 
	}

	[[nodiscard]] auto
	LedgeBirdSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LedgeBirdSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LedgeBirdSystemConfig> {
		if (incoming_type_id == LedgeBirdSystemConfig::type_id) {
			return std::make_shared<LedgeBirdSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
