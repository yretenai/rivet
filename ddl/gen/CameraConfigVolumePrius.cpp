// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraConfigVolumePrius.hpp>

namespace rivet::ddl::generated {
	CameraConfigVolumePrius::CameraConfigVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FollowCameraUserConfig = serialized->get_string(FollowCameraUserConfig_type_id);
		CameraStickConfig = serialized->get_string(CameraStickConfig_type_id);
		OverrideWeaponStickConfig = serialized->get_bool(OverrideWeaponStickConfig_type_id); 
	}

	[[nodiscard]] auto
	CameraConfigVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraConfigVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraConfigVolumePrius> {
		if (incoming_type_id == CameraConfigVolumePrius::type_id) {
			return std::make_shared<CameraConfigVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
