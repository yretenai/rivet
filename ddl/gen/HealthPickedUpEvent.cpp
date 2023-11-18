// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HealthPickedUpEvent.hpp>

namespace rivet::ddl::generated {
	HealthPickedUpEvent::HealthPickedUpEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		HealthReceived = serialized->get_float(HealthReceived_type_id); 
	}

	[[nodiscard]] auto
	HealthPickedUpEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HealthPickedUpEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthPickedUpEvent> {
		if (incoming_type_id == HealthPickedUpEvent::type_id) {
			return std::make_shared<HealthPickedUpEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
