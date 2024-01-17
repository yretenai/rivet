// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetEmergentVOEnabledEvent.hpp>

namespace rivet::ddl::generated {
	SetEmergentVOEnabledEvent::SetEmergentVOEnabledEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false); 
	}

	[[nodiscard]] auto
	SetEmergentVOEnabledEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetEmergentVOEnabledEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetEmergentVOEnabledEvent> {
		if (incoming_type_id == SetEmergentVOEnabledEvent::type_id) {
			return std::make_shared<SetEmergentVOEnabledEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
