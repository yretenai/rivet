// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventListElement.hpp> 

#include <rivet/ddl/generated/EventConverterElement.hpp>

namespace rivet::ddl::generated {
	EventConverterElement::EventConverterElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InputEventName = serialized->get_string(InputEventName_type_id);
		onDerivedEvent = serialized->get_bool(onDerivedEvent_type_id);
		Outputs = serialized->unwrap_into_many<rivet::ddl::generated::EventListElement>(Outputs_type_id);
		PlayedOnce = serialized->get_bool(PlayedOnce_type_id); 
	}

	[[nodiscard]] auto
	EventConverterElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventConverterElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventConverterElement> {
		if (incoming_type_id == EventConverterElement::type_id) {
			return std::make_shared<EventConverterElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
