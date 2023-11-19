// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneEditorObjExportInput.hpp>

namespace rivet::ddl::generated {
	SceneEditorObjExportInput::SceneEditorObjExportInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ZonePath = serialized->get_string(ZonePath_type_id);
		LodScale = serialized->get_float(LodScale_type_id); 
	}

	[[nodiscard]] auto
	SceneEditorObjExportInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorObjExportInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorObjExportInput> {
		if (incoming_type_id == SceneEditorObjExportInput::type_id) {
			return std::make_shared<SceneEditorObjExportInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated