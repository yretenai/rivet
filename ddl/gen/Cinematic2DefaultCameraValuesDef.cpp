// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2DefaultCameraValuesDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2DefaultCameraValuesDef::Cinematic2DefaultCameraValuesDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CameraFov = serialized->get_float(CameraFov_type_id);
		CameraDofNearFocusDistance = serialized->get_float(CameraDofNearFocusDistance_type_id);
		CameraDofNearBlurStrength = serialized->get_float(CameraDofNearBlurStrength_type_id);
		CameraDofFarFocusDistance = serialized->get_float(CameraDofFarFocusDistance_type_id);
		CameraDofFarBlurStrength = serialized->get_float(CameraDofFarBlurStrength_type_id);
		CameraFilmApertureHorizontal = serialized->get_float(CameraFilmApertureHorizontal_type_id);
		CameraLensSqueezeRatio = serialized->get_float(CameraLensSqueezeRatio_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2DefaultCameraValuesDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2DefaultCameraValuesDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2DefaultCameraValuesDef> {
		if (incoming_type_id == Cinematic2DefaultCameraValuesDef::type_id) {
			return std::make_shared<Cinematic2DefaultCameraValuesDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
