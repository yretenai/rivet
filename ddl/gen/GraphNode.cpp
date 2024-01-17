// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GraphConMeta.hpp> 

#include <rivet/ddl/generated/GraphNode.hpp>

namespace rivet::ddl::generated {
	GraphNode::GraphNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		XPos = serialized->get_float(XPos_type_id, 0.000000);
		YPos = serialized->get_float(YPos_type_id, 0.000000);
		Collapsed = serialized->get_bool(Collapsed_type_id, false);
		Disabled = serialized->get_bool(Disabled_type_id, false);
		ConMeta = serialized->unwrap_into_many<rivet::ddl::generated::GraphConMeta>(ConMeta_type_id);
		Comment = serialized->get_string(Comment_type_id, {});
		Type = serialized->get_string(Type_type_id, "kNodeTypeInvalid");
		SubType = serialized->get_string(SubType_type_id, "kNodeTypeInvalid");
		Aux = serialized->get_field(Aux_type_id); 
	}

	[[nodiscard]] auto
	GraphNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GraphNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GraphNode> {
		if (incoming_type_id == GraphNode::type_id) {
			return std::make_shared<GraphNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
