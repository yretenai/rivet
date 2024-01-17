// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectLightAttr.hpp>

namespace rivet::ddl::generated {
	VisualEffectLightAttr::VisualEffectLightAttr([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Style = serialized->get_enum<rivet::ddl::generated::xc53d61ca>(Style_type_id, rivet::ddl::generated::xc53d61ca_values, rivet::ddl::generated::xc53d61ca::Point);
		Radius = serialized->get_float(Radius_type_id, 0.000000);
		InnerCone = serialized->get_float(InnerCone_type_id, 15.000000);
		OuterCone = serialized->get_float(OuterCone_type_id, 45.000000);
		CutOffDist = serialized->get_float(CutOffDist_type_id, 0.000000);
		CutOnDist = serialized->get_float(CutOnDist_type_id, 0.000000);
		SpecIntensity = serialized->get_float(SpecIntensity_type_id, 1.000000);
		ShadowFadeDistance = serialized->get_float(ShadowFadeDistance_type_id, 0.000000);
		VolumetricFogScale = serialized->get_float(VolumetricFogScale_type_id, 0.000000);
		BulbRadius = serialized->get_float(BulbRadius_type_id, 0.000000);
		BulbLength = serialized->get_float(BulbLength_type_id, 0.000000);
		BulbIsRectangle = serialized->get_bool(BulbIsRectangle_type_id, false);
		UseAtmosphereMultiplier = serialized->get_bool(UseAtmosphereMultiplier_type_id, true);
		SkipLightCapture = serialized->get_bool(SkipLightCapture_type_id, false);
		OnlyLightCapture = serialized->get_bool(OnlyLightCapture_type_id, false);
		CastShadows = serialized->get_bool(CastShadows_type_id, false);
		ShadowRes = serialized->get_enum<rivet::ddl::generated::ShadowRes>(ShadowRes_type_id, rivet::ddl::generated::ShadowRes_values, rivet::ddl::generated::ShadowRes::Normal);
		IES = serialized->get_string(IES_type_id, {}); 
	}

	[[nodiscard]] auto
	VisualEffectLightAttr::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectLightAttr::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectLightAttr> {
		if (incoming_type_id == VisualEffectLightAttr::type_id) {
			return std::make_shared<VisualEffectLightAttr>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
