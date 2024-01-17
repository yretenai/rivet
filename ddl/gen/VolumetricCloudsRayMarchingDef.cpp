// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumetricCloudsRayMarchingDef.hpp>

namespace rivet::ddl::generated {
	VolumetricCloudsRayMarchingDef::VolumetricCloudsRayMarchingDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HighFrequencyNoiseTex = serialized->get_string(HighFrequencyNoiseTex_type_id, "textures\\volumetricCloudsNoises\\hiResClouds.texture");
		LowFrequencyNoiseTex = serialized->get_string(LowFrequencyNoiseTex_type_id, "textures\\volumetricCloudsNoises\\lowResClouds.texture");
		DownSampling = serialized->get_int8(DownSampling_type_id, 2);
		MinSampleCount = serialized->get_int16(MinSampleCount_type_id, 54);
		MaxSampleCount = serialized->get_int16(MaxSampleCount_type_id, 224);
		MinStepSize = serialized->get_float(MinStepSize_type_id, 1024.000000);
		MaxStepSize = serialized->get_float(MaxStepSize_type_id, 2048.000000);
		MaxSampleDistance = serialized->get_float(MaxSampleDistance_type_id, 200000.000000);
		EnabledTemporalRayOffset = serialized->get_bool(EnabledTemporalRayOffset_type_id, false);
		EnabledEdgeBlur = serialized->get_bool(EnabledEdgeBlur_type_id, true); 
	}

	[[nodiscard]] auto
	VolumetricCloudsRayMarchingDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolumetricCloudsRayMarchingDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumetricCloudsRayMarchingDef> {
		if (incoming_type_id == VolumetricCloudsRayMarchingDef::type_id) {
			return std::make_shared<VolumetricCloudsRayMarchingDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
