// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DeathEraseStartedEvent.hpp>

namespace rivet::ddl::generated {
	DeathEraseStartedEvent::DeathEraseStartedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Delay = serialized->get_float(Delay_type_id);
		Duration = serialized->get_float(Duration_type_id); 
	}

	[[nodiscard]] auto
	DeathEraseStartedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DeathEraseStartedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DeathEraseStartedEvent> {
		if (incoming_type_id == DeathEraseStartedEvent::type_id) {
			return std::make_shared<DeathEraseStartedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
