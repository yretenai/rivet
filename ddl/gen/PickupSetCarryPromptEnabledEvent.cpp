// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupSetCarryPromptEnabledEvent.hpp>

namespace rivet::ddl::generated {
	PickupSetCarryPromptEnabledEvent::PickupSetCarryPromptEnabledEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		SetEnabled = serialized->get_bool(SetEnabled_type_id); 
	}

	[[nodiscard]] auto
	PickupSetCarryPromptEnabledEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupSetCarryPromptEnabledEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupSetCarryPromptEnabledEvent> {
		if (incoming_type_id == PickupSetCarryPromptEnabledEvent::type_id) {
			return std::make_shared<PickupSetCarryPromptEnabledEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated