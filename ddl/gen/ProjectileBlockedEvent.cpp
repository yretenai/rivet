// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectileBlockedEvent.hpp>

namespace rivet::ddl::generated {
	ProjectileBlockedEvent::ProjectileBlockedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageEventBase(serialized) {

	}

	[[nodiscard]] auto
	ProjectileBlockedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectileBlockedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileBlockedEvent> {
		if (incoming_type_id == ProjectileBlockedEvent::type_id) {
			return std::make_shared<ProjectileBlockedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
