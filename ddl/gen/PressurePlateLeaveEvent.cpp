// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PressurePlateLeaveEvent.hpp>

namespace rivet::ddl::generated {
	PressurePlateLeaveEvent::PressurePlateLeaveEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	PressurePlateLeaveEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PressurePlateLeaveEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PressurePlateLeaveEvent> {
		if (incoming_type_id == PressurePlateLeaveEvent::type_id) {
			return std::make_shared<PressurePlateLeaveEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated