// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyerMountPathPrius.hpp>

namespace rivet::ddl::generated {
	FlyerMountPathPrius::FlyerMountPathPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HorizontalExtent = serialized->get_float(HorizontalExtent_type_id);
		VerticalExtent = serialized->get_float(VerticalExtent_type_id);
		CameraMaxHorizontalOffset = serialized->get_float(CameraMaxHorizontalOffset_type_id);
		CameraForwardOffset = serialized->get_float(CameraForwardOffset_type_id);
		CameraPivotHeight = serialized->get_float(CameraPivotHeight_type_id);
		CameraPitch = serialized->get_float(CameraPitch_type_id);
		CameraFOV = serialized->get_float(CameraFOV_type_id); 
	}

	[[nodiscard]] auto
	FlyerMountPathPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlyerMountPathPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerMountPathPrius> {
		if (incoming_type_id == FlyerMountPathPrius::type_id) {
			return std::make_shared<FlyerMountPathPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated