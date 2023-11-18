// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedInputPort.hpp> 

#include <rivet/ddl/generated/VisualEffectMaterialNode.hpp>

namespace rivet::ddl::generated {
	VisualEffectMaterialNode::VisualEffectMaterialNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id);
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		AssetName = serialized->get_string(AssetName_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectMaterialNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectMaterialNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectMaterialNode> {
		if (incoming_type_id == VisualEffectMaterialNode::type_id) {
			return std::make_shared<VisualEffectMaterialNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
