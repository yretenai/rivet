// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeConnectedOutputPort.hpp>
#include <rivet/ddl/generated/MaterialNodeConnectedInputPort.hpp>
#include <rivet/ddl/generated/MaterialNodeUserInput.hpp>
#include <rivet/ddl/generated/MaterialNodePortUI.hpp> 

#include <rivet/ddl/generated/MaterialGraphNode.hpp>

namespace rivet::ddl::generated {
	MaterialGraphNode::MaterialGraphNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		IdLow = serialized->get_uint32(IdLow_type_id);
		IdHigh = serialized->get_uint32(IdHigh_type_id);
		Name = serialized->get_string(Name_type_id);
		VariableName = serialized->get_string(VariableName_type_id);
		PortUIs = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodePortUI>(PortUIs_type_id);
		UserInputs = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeUserInput>(UserInputs_type_id);
		ConnectedInputs = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeConnectedInputPort>(ConnectedInputs_type_id);
		ConnectedOutputs = serialized->unwrap_into_many<rivet::ddl::generated::MaterialNodeConnectedOutputPort>(ConnectedOutputs_type_id);
		PrependNodeName = serialized->get_bool(PrependNodeName_type_id);
		IsSubGraph = serialized->get_bool(IsSubGraph_type_id);
		AssetPath = serialized->get_string(AssetPath_type_id);
		SortOrder = serialized->get_int32(SortOrder_type_id); 
	}

	[[nodiscard]] auto
	MaterialGraphNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialGraphNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialGraphNode> {
		if (incoming_type_id == MaterialGraphNode::type_id) {
			return std::make_shared<MaterialGraphNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated