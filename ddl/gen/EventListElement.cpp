// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/EventListElement.hpp>

namespace rivet::ddl::generated {
	EventListElement::EventListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OutputEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(OutputEvent_type_id);
		PlayOnce = serialized->get_bool(PlayOnce_type_id); 
	}

	[[nodiscard]] auto
	EventListElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventListElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventListElement> {
		if (incoming_type_id == EventListElement::type_id) {
			return std::make_shared<EventListElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
