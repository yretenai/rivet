// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodeGraphCollectionDef.hpp>

namespace rivet::ddl::generated {
	NodeGraphCollectionDef::NodeGraphCollectionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MainGraph = serialized->get_field(MainGraph_type_id);
		SubGraphs = serialized->get_field(SubGraphs_type_id);
		Type = serialized->get_string(Type_type_id); 
	}

	[[nodiscard]] auto
	NodeGraphCollectionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodeGraphCollectionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphCollectionDef> {
		if (incoming_type_id == NodeGraphCollectionDef::type_id) {
			return std::make_shared<NodeGraphCollectionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated