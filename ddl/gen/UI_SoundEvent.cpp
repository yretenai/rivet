// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseSoundEvent.hpp> 

#include <rivet/ddl/generated/UI_SoundEvent.hpp>

namespace rivet::ddl::generated {
	UI_SoundEvent::UI_SoundEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Action = serialized->get_enum<rivet::ddl::generated::x6f4fd950>(Action_type_id, rivet::ddl::generated::x6f4fd950_values, rivet::ddl::generated::x6f4fd950::SoundEventActionPlay);
		WwiseEvent = serialized->unwrap_into<rivet::ddl::generated::WwiseSoundEvent>(WwiseEvent_type_id);
		EventInitiator = serialized->get_string(EventInitiator_type_id, {});
		TriggerLocator = serialized->get_string(TriggerLocator_type_id, {}); 
	}

	[[nodiscard]] auto
	UI_SoundEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_SoundEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_SoundEvent> {
		if (incoming_type_id == UI_SoundEvent::type_id) {
			return std::make_shared<UI_SoundEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
