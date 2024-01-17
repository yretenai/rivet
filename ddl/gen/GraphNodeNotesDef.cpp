// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GraphNodeNotesDef.hpp>

namespace rivet::ddl::generated {
	GraphNodeNotesDef::GraphNodeNotesDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GlobalNotes = serialized->get_string(GlobalNotes_type_id, {});
		NodeNotes = serialized->get_string(NodeNotes_type_id, {}); 
	}

	[[nodiscard]] auto
	GraphNodeNotesDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GraphNodeNotesDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GraphNodeNotesDef> {
		if (incoming_type_id == GraphNodeNotesDef::type_id) {
			return std::make_shared<GraphNodeNotesDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
