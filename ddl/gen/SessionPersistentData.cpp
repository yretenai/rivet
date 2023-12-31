// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SessionPivot.hpp>
#include <rivet/ddl/generated/SessionPropertyPanelState.hpp>
#include <rivet/ddl/generated/SceneEditorPrefs.hpp> 

#include <rivet/ddl/generated/SessionPersistentData.hpp>

namespace rivet::ddl::generated {
	SessionPersistentData::SessionPersistentData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SceneEditorPrefs = serialized->unwrap_into<rivet::ddl::generated::SceneEditorPrefs>(SceneEditorPrefs_type_id);
		PropPanelState = serialized->unwrap_into<rivet::ddl::generated::SessionPropertyPanelState>(PropPanelState_type_id);
		AssetPivot = serialized->unwrap_into_many<rivet::ddl::generated::SessionPivot>(AssetPivot_type_id);
		ObjectPivot = serialized->unwrap_into_many<rivet::ddl::generated::SessionPivot>(ObjectPivot_type_id); 
	}

	[[nodiscard]] auto
	SessionPersistentData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SessionPersistentData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SessionPersistentData> {
		if (incoming_type_id == SessionPersistentData::type_id) {
			return std::make_shared<SessionPersistentData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
