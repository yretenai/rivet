// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveNodeBuiltTableEntry.hpp>
#include <rivet/ddl/generated/SortedNodeNames.hpp>
#include <rivet/ddl/generated/GraphNodesBuilt.hpp> 

#include <rivet/ddl/generated/ObjectiveGraphBuiltShared.hpp>

namespace rivet::ddl::generated {
	ObjectiveGraphBuiltShared::ObjectiveGraphBuiltShared([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Nodes = serialized->unwrap_into<rivet::ddl::generated::GraphNodesBuilt>(Nodes_type_id);
		SortedObjectives = serialized->unwrap_into<rivet::ddl::generated::SortedNodeNames>(SortedObjectives_type_id);
		Objectives = serialized->unwrap_into_many<rivet::ddl::generated::ObjectiveNodeBuiltTableEntry>(Objectives_type_id); 
	}

	[[nodiscard]] auto
	ObjectiveGraphBuiltShared::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveGraphBuiltShared::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveGraphBuiltShared> {
		if (incoming_type_id == ObjectiveGraphBuiltShared::type_id) {
			return std::make_shared<ObjectiveGraphBuiltShared>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated