// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DecalSettings.hpp>

namespace rivet::ddl::generated {
	DecalSettings::DecalSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OptimizedGenerationEnable = serialized->get_bool(OptimizedGenerationEnable_type_id, true);
		MultiThreadingEnable = serialized->get_bool(MultiThreadingEnable_type_id, true);
		IgnoreFailedAllocations = serialized->get_bool(IgnoreFailedAllocations_type_id, false);
		JobTimeBudget = serialized->get_float(JobTimeBudget_type_id, 0.015000);
		MaxRuntimeDecalModels = serialized->get_int32(MaxRuntimeDecalModels_type_id, 128);
		MaxRuntimeDecalVertices = serialized->get_int32(MaxRuntimeDecalVertices_type_id, 24576);
		SkinnedModelBiasMeters = serialized->get_float(SkinnedModelBiasMeters_type_id, 0.010000);
		MaxDecalsPerFrame = serialized->get_int32(MaxDecalsPerFrame_type_id, 8);
		MaxDecalModels = serialized->get_int32(MaxDecalModels_type_id, 256);
		MaxDecalJobs = serialized->get_int32(MaxDecalJobs_type_id, 1024);
		DecalEnable = serialized->get_bool(DecalEnable_type_id, true); 
	}

	[[nodiscard]] auto
	DecalSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DecalSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DecalSettings> {
		if (incoming_type_id == DecalSettings::type_id) {
			return std::make_shared<DecalSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
