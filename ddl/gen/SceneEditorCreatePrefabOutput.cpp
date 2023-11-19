// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneNode.hpp> 

#include <rivet/ddl/generated/SceneEditorCreatePrefabOutput.hpp>

namespace rivet::ddl::generated {
	SceneEditorCreatePrefabOutput::SceneEditorCreatePrefabOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UndoBatchId = serialized->get_uint64(UndoBatchId_type_id);
		PrefabInstance = serialized->unwrap_into<rivet::ddl::generated::SceneNode>(PrefabInstance_type_id); 
	}

	[[nodiscard]] auto
	SceneEditorCreatePrefabOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorCreatePrefabOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorCreatePrefabOutput> {
		if (incoming_type_id == SceneEditorCreatePrefabOutput::type_id) {
			return std::make_shared<SceneEditorCreatePrefabOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated