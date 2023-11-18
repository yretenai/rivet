// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodeGraphOptionsDebugMessage.hpp>

namespace rivet::ddl::generated {
	NodeGraphOptionsDebugMessage::NodeGraphOptionsDebugMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id);
		WantsAutoAttach = serialized->get_bool(WantsAutoAttach_type_id); 
	}

	[[nodiscard]] auto
	NodeGraphOptionsDebugMessage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodeGraphOptionsDebugMessage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphOptionsDebugMessage> {
		if (incoming_type_id == NodeGraphOptionsDebugMessage::type_id) {
			return std::make_shared<NodeGraphOptionsDebugMessage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
