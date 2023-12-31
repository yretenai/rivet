// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PortalRenderPrius.hpp>

namespace rivet::ddl::generated {
	PortalRenderPrius::PortalRenderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverrideMaterial = serialized->get_string(OverrideMaterial_type_id);
		OverrideMaterialName = serialized->get_string(OverrideMaterialName_type_id);
		OverrideTextureName = serialized->get_string(OverrideTextureName_type_id);
		TimeToOpenConstantName = serialized->get_string(TimeToOpenConstantName_type_id);
		TimeToOpen = serialized->get_float(TimeToOpen_type_id);
		ResolutionMultiplier = serialized->get_float(ResolutionMultiplier_type_id);
		LuminanceScaleConstantName = serialized->get_string(LuminanceScaleConstantName_type_id);
		LuminanceScale = serialized->get_float(LuminanceScale_type_id);
		EnableToneMapping = serialized->get_bool(EnableToneMapping_type_id);
		ThresholdClipExtents = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ThresholdClipExtents_type_id); 
	}

	[[nodiscard]] auto
	PortalRenderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PortalRenderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalRenderPrius> {
		if (incoming_type_id == PortalRenderPrius::type_id) {
			return std::make_shared<PortalRenderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
