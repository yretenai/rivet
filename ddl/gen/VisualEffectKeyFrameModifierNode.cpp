// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/DDLVector2.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/VisualEffectNodeConnectedInputPort.hpp> 

#include <rivet/ddl/generated/VisualEffectKeyFrameModifierNode.hpp>

namespace rivet::ddl::generated {
	VisualEffectKeyFrameModifierNode::VisualEffectKeyFrameModifierNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id);
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		KeyFrameModifierOp = serialized->get_enum<rivet::ddl::generated::KeyFrameModifierOp>(KeyFrameModifierOp_type_id, rivet::ddl::generated::KeyFrameModifierOp_values);
		KeyFrameType = serialized->get_enum<rivet::ddl::generated::KeyFrameType>(KeyFrameType_type_id, rivet::ddl::generated::KeyFrameType_values);
		Source = serialized->get_enum<rivet::ddl::generated::x21f55189>(Source_type_id, rivet::ddl::generated::x21f55189_values);
		Global = serialized->get_bool(Global_type_id);
		Value = serialized->get_float(Value_type_id);
		Value2 = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Value2_type_id);
		Value3 = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Value3_type_id);
		ValueRGB = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ValueRGB_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectKeyFrameModifierNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectKeyFrameModifierNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectKeyFrameModifierNode> {
		if (incoming_type_id == VisualEffectKeyFrameModifierNode::type_id) {
			return std::make_shared<VisualEffectKeyFrameModifierNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
