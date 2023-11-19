// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IndActorList.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/EventEnablePrius.hpp>

namespace rivet::ddl::generated {
	EventEnablePrius::EventEnablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Event = serialized->unwrap_into<rivet::ddl::generated::EventBase>(Event_type_id);
		IsSelfEvent = serialized->get_bool(IsSelfEvent_type_id);
		EnableActorGroup = serialized->get_uint64(EnableActorGroup_type_id);
		DisableActorGroup = serialized->get_uint64(DisableActorGroup_type_id);
		ToggleActorGroup = serialized->get_uint64(ToggleActorGroup_type_id);
		ActorList = serialized->unwrap_into_many<rivet::ddl::generated::IndActorList>(ActorList_type_id); 
	}

	[[nodiscard]] auto
	EventEnablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventEnablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventEnablePrius> {
		if (incoming_type_id == EventEnablePrius::type_id) {
			return std::make_shared<EventEnablePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated