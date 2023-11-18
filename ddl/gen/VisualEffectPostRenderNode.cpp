// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedInputPort.hpp> 

#include <rivet/ddl/generated/VisualEffectPostRenderNode.hpp>

namespace rivet::ddl::generated {
	VisualEffectPostRenderNode::VisualEffectPostRenderNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id);
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		RenderType = serialized->get_enum<rivet::ddl::generated::x9a2e0494>(RenderType_type_id, rivet::ddl::generated::x9a2e0494_values);
		BlendStyle = serialized->get_enum<rivet::ddl::generated::BlendStyle>(BlendStyle_type_id, rivet::ddl::generated::BlendStyle_values); 
	}

	[[nodiscard]] auto
	VisualEffectPostRenderNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectPostRenderNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectPostRenderNode> {
		if (incoming_type_id == VisualEffectPostRenderNode::type_id) {
			return std::make_shared<VisualEffectPostRenderNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
