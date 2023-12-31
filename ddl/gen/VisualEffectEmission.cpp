// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectFloatKeyFrames.hpp>
#include <rivet/ddl/generated/VisualEffectMinMax.hpp>
#include <rivet/ddl/generated/VisualEffectFloat3KeyFrames.hpp>
#include <rivet/ddl/generated/VisualEffectFloat.hpp>
#include <rivet/ddl/generated/VisualEffectTransform.hpp> 

#include <rivet/ddl/generated/VisualEffectEmission.hpp>

namespace rivet::ddl::generated {
	VisualEffectEmission::VisualEffectEmission([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InputPort_Transform = serialized->unwrap_into<rivet::ddl::generated::VisualEffectTransform>(InputPort_Transform_type_id);
		InputPort_RandomSeed = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloat>(InputPort_RandomSeed_type_id);
		Float3KeyFrames_EmissionSpawnScales = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloat3KeyFrames>(Float3KeyFrames_EmissionSpawnScales_type_id);
		Float3KeyFrames_EmissionRotation = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloat3KeyFrames>(Float3KeyFrames_EmissionRotation_type_id);
		Float3KeyFrames_EmissionPosition = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloat3KeyFrames>(Float3KeyFrames_EmissionPosition_type_id);
		InputPort_LifeTime = serialized->unwrap_into<rivet::ddl::generated::VisualEffectMinMax>(InputPort_LifeTime_type_id);
		FloatKeyFrames_DistanceSpawnRate = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloatKeyFrames>(FloatKeyFrames_DistanceSpawnRate_type_id);
		FloatKeyFrames_EmissionSpawnBurst = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloatKeyFrames>(FloatKeyFrames_EmissionSpawnBurst_type_id);
		FloatKeyFrames_EmissionSpawnRate = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloatKeyFrames>(FloatKeyFrames_EmissionSpawnRate_type_id);
		FloatKeyFrames_EmissionSpawnGap = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloatKeyFrames>(FloatKeyFrames_EmissionSpawnGap_type_id);
		Float3KeyFrames_SpawnStyleScales = serialized->unwrap_into<rivet::ddl::generated::VisualEffectFloat3KeyFrames>(Float3KeyFrames_SpawnStyleScales_type_id);
		InputPort_SpawnDelay = serialized->unwrap_into<rivet::ddl::generated::VisualEffectMinMax>(InputPort_SpawnDelay_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectEmission::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectEmission::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectEmission> {
		if (incoming_type_id == VisualEffectEmission::type_id) {
			return std::make_shared<VisualEffectEmission>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
