// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodeGraphSignalDebugMessage.hpp>

namespace rivet::ddl::generated {
	NodeGraphSignalDebugMessage::NodeGraphSignalDebugMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id, 0);
		ConnectionId = serialized->get_uint64(ConnectionId_type_id, 0);
		GraphId = serialized->get_uint64(GraphId_type_id, 0);
		ActorContextId = serialized->get_uint64(ActorContextId_type_id, 0);
		NodeId = serialized->get_uint64(NodeId_type_id, 0);
		WorldFrameIndex = serialized->get_uint32(WorldFrameIndex_type_id, 0); 
	}

	[[nodiscard]] auto
	NodeGraphSignalDebugMessage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodeGraphSignalDebugMessage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphSignalDebugMessage> {
		if (incoming_type_id == NodeGraphSignalDebugMessage::type_id) {
			return std::make_shared<NodeGraphSignalDebugMessage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
