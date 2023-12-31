// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PanCameraPrius.hpp>

namespace rivet::ddl::generated {
	PanCameraPrius::PanCameraPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PlacedCameraPrius(serialized) {
		SnapOnActivate = serialized->get_bool(SnapOnActivate_type_id);
		PanX = serialized->get_bool(PanX_type_id);
		PanZ = serialized->get_bool(PanZ_type_id);
		CameraOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CameraOffset_type_id); 
	}

	[[nodiscard]] auto
	PanCameraPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PanCameraPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PanCameraPrius> {
		if (incoming_type_id == PanCameraPrius::type_id) {
			return std::make_shared<PanCameraPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
