// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectileLockingOnEvent.hpp>

namespace rivet::ddl::generated {
	ProjectileLockingOnEvent::ProjectileLockingOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		VictimLocator = serialized->get_string(VictimLocator_type_id); 
	}

	[[nodiscard]] auto
	ProjectileLockingOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectileLockingOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileLockingOnEvent> {
		if (incoming_type_id == ProjectileLockingOnEvent::type_id) {
			return std::make_shared<ProjectileLockingOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
