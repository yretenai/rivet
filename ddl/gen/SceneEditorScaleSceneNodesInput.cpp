// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneEditorScaleFactor.hpp> 

#include <rivet/ddl/generated/SceneEditorScaleSceneNodesInput.hpp>

namespace rivet::ddl::generated {
	SceneEditorScaleSceneNodesInput::SceneEditorScaleSceneNodesInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeWorldIdToScale = serialized->unwrap_into_many<rivet::ddl::generated::SceneEditorScaleFactor>(NodeWorldIdToScale_type_id); 
	}

	[[nodiscard]] auto
	SceneEditorScaleSceneNodesInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorScaleSceneNodesInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorScaleSceneNodesInput> {
		if (incoming_type_id == SceneEditorScaleSceneNodesInput::type_id) {
			return std::make_shared<SceneEditorScaleSceneNodesInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
