// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectileLockOnCompleteEvent.hpp>

namespace rivet::ddl::generated {
	ProjectileLockOnCompleteEvent::ProjectileLockOnCompleteEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ProjectileLockOnCompleteEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectileLockOnCompleteEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileLockOnCompleteEvent> {
		if (incoming_type_id == ProjectileLockOnCompleteEvent::type_id) {
			return std::make_shared<ProjectileLockOnCompleteEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
