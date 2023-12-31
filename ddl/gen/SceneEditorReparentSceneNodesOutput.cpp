// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneEditorReparentSceneNodesOutput.hpp>

namespace rivet::ddl::generated {
	SceneEditorReparentSceneNodesOutput::SceneEditorReparentSceneNodesOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Success = serialized->get_bool(Success_type_id); 
	}

	[[nodiscard]] auto
	SceneEditorReparentSceneNodesOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorReparentSceneNodesOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorReparentSceneNodesOutput> {
		if (incoming_type_id == SceneEditorReparentSceneNodesOutput::type_id) {
			return std::make_shared<SceneEditorReparentSceneNodesOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
