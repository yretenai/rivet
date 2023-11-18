// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraRotateSpecifiedNodesEngineItem.hpp>

namespace rivet::ddl::generated {
	CameraRotateSpecifiedNodesEngineItem::CameraRotateSpecifiedNodesEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RotateObjectsByYawAngle = serialized->get_doubles(RotateObjectsByYawAngle_type_id); 
	}

	[[nodiscard]] auto
	CameraRotateSpecifiedNodesEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraRotateSpecifiedNodesEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraRotateSpecifiedNodesEngineItem> {
		if (incoming_type_id == CameraRotateSpecifiedNodesEngineItem::type_id) {
			return std::make_shared<CameraRotateSpecifiedNodesEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
