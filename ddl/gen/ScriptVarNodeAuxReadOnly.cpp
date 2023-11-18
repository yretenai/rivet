// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GraphNodeNotesDef.hpp> 

#include <rivet/ddl/generated/ScriptVarNodeAuxReadOnly.hpp>

namespace rivet::ddl::generated {
	ScriptVarNodeAuxReadOnly::ScriptVarNodeAuxReadOnly([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VarType = serialized->get_string(VarType_type_id);
		GlobalName = serialized->get_string(GlobalName_type_id);
		Notes = serialized->unwrap_into<rivet::ddl::generated::GraphNodeNotesDef>(Notes_type_id); 
	}

	[[nodiscard]] auto
	ScriptVarNodeAuxReadOnly::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptVarNodeAuxReadOnly::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptVarNodeAuxReadOnly> {
		if (incoming_type_id == ScriptVarNodeAuxReadOnly::type_id) {
			return std::make_shared<ScriptVarNodeAuxReadOnly>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
