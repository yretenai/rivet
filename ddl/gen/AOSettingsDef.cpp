// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AOSettingsDef.hpp>

namespace rivet::ddl::generated {
	AOSettingsDef::AOSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, true);
		OcclusionStrength = serialized->get_float(OcclusionStrength_type_id, 1.000000);
		RadiusInMeters = serialized->get_float(RadiusInMeters_type_id, 1.250000);
		DistanceStrength = serialized->get_float(DistanceStrength_type_id, 1.000000);
		DistanceInMeters = serialized->get_float(DistanceInMeters_type_id, 0.000000);
		SunlightFactor = serialized->get_float(SunlightFactor_type_id, 0.000000);
		LocalLightFactor = serialized->get_float(LocalLightFactor_type_id, 0.000000);
		SkinUnshadowedFactor = serialized->get_float(SkinUnshadowedFactor_type_id, 1.000000);
		SkinShadowedFactor = serialized->get_float(SkinShadowedFactor_type_id, 0.000000);
		AmbientShadowDrawDist = serialized->get_float(AmbientShadowDrawDist_type_id, 150.000000);
		AmbientShadowIntensity = serialized->get_float(AmbientShadowIntensity_type_id, 0.750000); 
	}

	[[nodiscard]] auto
	AOSettingsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AOSettingsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AOSettingsDef> {
		if (incoming_type_id == AOSettingsDef::type_id) {
			return std::make_shared<AOSettingsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
