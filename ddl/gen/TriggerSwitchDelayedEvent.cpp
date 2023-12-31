// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerSwitchDelayedEvent.hpp>

namespace rivet::ddl::generated {
	TriggerSwitchDelayedEvent::TriggerSwitchDelayedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		SequenceNumber = serialized->get_int16(SequenceNumber_type_id);
		Index = serialized->get_int16(Index_type_id); 
	}

	[[nodiscard]] auto
	TriggerSwitchDelayedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerSwitchDelayedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerSwitchDelayedEvent> {
		if (incoming_type_id == TriggerSwitchDelayedEvent::type_id) {
			return std::make_shared<TriggerSwitchDelayedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
