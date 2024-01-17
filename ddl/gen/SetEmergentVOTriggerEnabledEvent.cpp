// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetEmergentVOTriggerEnabledEvent.hpp>

namespace rivet::ddl::generated {
	SetEmergentVOTriggerEnabledEvent::SetEmergentVOTriggerEnabledEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Trigger = serialized->get_enum<rivet::ddl::generated::x6be956dd>(Trigger_type_id, rivet::ddl::generated::x6be956dd_values, rivet::ddl::generated::x6be956dd::None);
		Enabled = serialized->get_bool(Enabled_type_id, false); 
	}

	[[nodiscard]] auto
	SetEmergentVOTriggerEnabledEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetEmergentVOTriggerEnabledEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetEmergentVOTriggerEnabledEvent> {
		if (incoming_type_id == SetEmergentVOTriggerEnabledEvent::type_id) {
			return std::make_shared<SetEmergentVOTriggerEnabledEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
