// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SceneEditorHotkey.hpp> 

#include <rivet/ddl/generated/SceneEditorGroupOfBindings.hpp>

namespace rivet::ddl::generated {
	SceneEditorGroupOfBindings::SceneEditorGroupOfBindings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GroupName = serialized->get_string(GroupName_type_id);
		HotKeys = serialized->unwrap_into_many<rivet::ddl::generated::SceneEditorHotkey>(HotKeys_type_id); 
	}

	[[nodiscard]] auto
	SceneEditorGroupOfBindings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneEditorGroupOfBindings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorGroupOfBindings> {
		if (incoming_type_id == SceneEditorGroupOfBindings::type_id) {
			return std::make_shared<SceneEditorGroupOfBindings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
