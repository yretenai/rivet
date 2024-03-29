// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogEvent.hpp> 

#include <rivet/ddl/generated/SoundEvent.hpp>

namespace rivet::ddl::generated {
	SoundEvent::SoundEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Action = serialized->get_enum<rivet::ddl::generated::x6f4fd950>(Action_type_id, rivet::ddl::generated::x6f4fd950_values, rivet::ddl::generated::x6f4fd950::SoundEventActionPlay);
		SoundBankPath = serialized->get_string(SoundBankPath_type_id, {});
		SoundEventName = serialized->get_string(SoundEventName_type_id, {});
		EventInitiator = serialized->get_string(EventInitiator_type_id, {});
		TriggerLocator = serialized->get_string(TriggerLocator_type_id, {}); 
	}

	[[nodiscard]] auto
	SoundEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundEvent> {
		if (incoming_type_id == SoundEvent::type_id) {
			return std::make_shared<SoundEvent>(serialized);
		}

		auto DialogEvent_ptr = DialogEvent::from_substruct(incoming_type_id, serialized);
		if (DialogEvent_ptr != nullptr) {
			return DialogEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
