// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RayTracingSettings.hpp>

namespace rivet::ddl::generated {
	RayTracingSettings::RayTracingSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HibernateBaseDistance = serialized->get_float(HibernateBaseDistance_type_id);
		NormalBaseDistance = serialized->get_float(NormalBaseDistance_type_id);
		ModelRadiusScale = serialized->get_float(ModelRadiusScale_type_id);
		PrioritizeImpostors = serialized->get_bool(PrioritizeImpostors_type_id);
		DisableCheckerboard = serialized->get_bool(DisableCheckerboard_type_id);
		SkinningBaseDistance = serialized->get_float(SkinningBaseDistance_type_id);
		SkinningRadiusScale = serialized->get_float(SkinningRadiusScale_type_id);
		LightingCenterBias = serialized->get_float(LightingCenterBias_type_id);
		MaxUniqueMaterials = serialized->get_uint32(MaxUniqueMaterials_type_id);
		MaxRuntimeBVHs = serialized->get_uint32(MaxRuntimeBVHs_type_id);
		MaxBVHSubsets = serialized->get_uint32(MaxBVHSubsets_type_id);
		ScratchSize = serialized->get_uint32(ScratchSize_type_id);
		GlossReflInterval = serialized->get_float(GlossReflInterval_type_id);
		GlossThreshold = serialized->get_float(GlossThreshold_type_id); 
	}

	[[nodiscard]] auto
	RayTracingSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RayTracingSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RayTracingSettings> {
		if (incoming_type_id == RayTracingSettings::type_id) {
			return std::make_shared<RayTracingSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
