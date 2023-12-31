// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraFollowNodeEngineItem.hpp>

namespace rivet::ddl::generated {
	CameraFollowNodeEngineItem::CameraFollowNodeEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Node = serialized->get_uint64(Node_type_id); 
	}

	[[nodiscard]] auto
	CameraFollowNodeEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraFollowNodeEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraFollowNodeEngineItem> {
		if (incoming_type_id == CameraFollowNodeEngineItem::type_id) {
			return std::make_shared<CameraFollowNodeEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
