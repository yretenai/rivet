// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimTriggerDef.hpp> 

#include <rivet/ddl/generated/AnimTriggerTrack.hpp>

namespace rivet::ddl::generated {
	AnimTriggerTrack::AnimTriggerTrack([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		Triggers = serialized->unwrap_into_many<rivet::ddl::generated::AnimTriggerDef>(Triggers_type_id);
		Events = serialized->get_field(Events_type_id); 
	}

	[[nodiscard]] auto
	AnimTriggerTrack::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimTriggerTrack::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimTriggerTrack> {
		if (incoming_type_id == AnimTriggerTrack::type_id) {
			return std::make_shared<AnimTriggerTrack>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
