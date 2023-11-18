// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneEditorLightingCaptureInput.hpp>

namespace rivet::ddl::generated {
	SceneEditorLightingCaptureInput::SceneEditorLightingCaptureInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CaptureType = serialized->get_enum<rivet::ddl::generated::x78bb2768>(CaptureType_type_id, rivet::ddl::generated::x78bb2768_values); 
	}

	[[nodiscard]] auto
	SceneEditorLightingCaptureInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorLightingCaptureInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorLightingCaptureInput> {
		if (incoming_type_id == SceneEditorLightingCaptureInput::type_id) {
			return std::make_shared<SceneEditorLightingCaptureInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
