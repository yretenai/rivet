// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundSourceComponentPrius.hpp> 

#include <rivet/ddl/generated/LedgeBirdTypeConfig.hpp>

namespace rivet::ddl::generated {
	LedgeBirdTypeConfig::LedgeBirdTypeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		BirdAsset = serialized->get_string(BirdAsset_type_id, {});
		BirdPhysicsSize = serialized->get_float(BirdPhysicsSize_type_id, 0.200000);
		BirdPhysicsOffsetY = serialized->get_float(BirdPhysicsOffsetY_type_id, 0.250000);
		MinBirdSpacing = serialized->get_float(MinBirdSpacing_type_id, 0.300000);
		MaxBirdSpacing = serialized->get_float(MaxBirdSpacing_type_id, 0.650000);
		FlockRadius = serialized->get_float(FlockRadius_type_id, 4.000000);
		MaxBirdsPerLedge = serialized->get_int32(MaxBirdsPerLedge_type_id, 5);
		FlockSoundSource = serialized->unwrap_into<rivet::ddl::generated::SoundSourceComponentPrius>(FlockSoundSource_type_id); 
	}

	[[nodiscard]] auto
	LedgeBirdTypeConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LedgeBirdTypeConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LedgeBirdTypeConfig> {
		if (incoming_type_id == LedgeBirdTypeConfig::type_id) {
			return std::make_shared<LedgeBirdTypeConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
