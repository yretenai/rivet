// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimPropActionEvent.hpp>

namespace rivet::ddl::generated {
	AnimPropActionEvent::AnimPropActionEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PropName = serialized->get_string(PropName_type_id);
		ActionType = serialized->get_enum<rivet::ddl::generated::xe76a4768>(ActionType_type_id, rivet::ddl::generated::xe76a4768_values);
		ActionText = serialized->get_string(ActionText_type_id);
		AutoRemove = serialized->get_bool(AutoRemove_type_id);
		SpawnForShot = serialized->get_bool(SpawnForShot_type_id);
		MatchAnimType = serialized->get_enum<rivet::ddl::generated::xd458e3df>(MatchAnimType_type_id, rivet::ddl::generated::xd458e3df_values); 
	}

	[[nodiscard]] auto
	AnimPropActionEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimPropActionEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimPropActionEvent> {
		if (incoming_type_id == AnimPropActionEvent::type_id) {
			return std::make_shared<AnimPropActionEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
