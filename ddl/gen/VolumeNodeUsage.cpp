// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumeNodeUsage.hpp>

namespace rivet::ddl::generated {
	VolumeNodeUsage::VolumeNodeUsage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Indoor = serialized->get_bool(Indoor_type_id, false);
		FullyIndoor = serialized->get_bool(FullyIndoor_type_id, false);
		IndoorWindow = serialized->get_bool(IndoorWindow_type_id, false);
		NavMeshGen = serialized->get_bool(NavMeshGen_type_id, false);
		WeatherBlocker = serialized->get_bool(WeatherBlocker_type_id, false);
		EmissiveBlocker = serialized->get_bool(EmissiveBlocker_type_id, false);
		PostEffects = serialized->get_bool(PostEffects_type_id, false);
		TranslucentShadow = serialized->get_bool(TranslucentShadow_type_id, false);
		ForceEmbeddedSamples = serialized->get_bool(ForceEmbeddedSamples_type_id, false);
		AvoidEmbeddedSamples = serialized->get_bool(AvoidEmbeddedSamples_type_id, false);
		LightGridSampleAvoid = serialized->get_bool(LightGridSampleAvoid_type_id, false);
		LightGridPathBlocker = serialized->get_bool(LightGridPathBlocker_type_id, false);
		LightGridForceOccluderPlane = serialized->get_bool(LightGridForceOccluderPlane_type_id, false);
		LightGridCreator = serialized->get_bool(LightGridCreator_type_id, false);
		LightGridSelector = serialized->get_bool(LightGridSelector_type_id, false);
		Water = serialized->get_bool(Water_type_id, false);
		DistantLightingGround = serialized->get_bool(DistantLightingGround_type_id, false);
		DistantLightingMid = serialized->get_bool(DistantLightingMid_type_id, false);
		DistantLightingRoof = serialized->get_bool(DistantLightingRoof_type_id, false);
		DistantLightingForceEmbedded = serialized->get_bool(DistantLightingForceEmbedded_type_id, false);
		RayTracingBlocker = serialized->get_bool(RayTracingBlocker_type_id, false); 
	}

	[[nodiscard]] auto
	VolumeNodeUsage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumeNodeUsage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumeNodeUsage> {
		if (incoming_type_id == VolumeNodeUsage::type_id) {
			return std::make_shared<VolumeNodeUsage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
