// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectileExplodedEvent.hpp>

namespace rivet::ddl::generated {
	ProjectileExplodedEvent::ProjectileExplodedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ProjectileHitEvent(serialized) {

	}

	[[nodiscard]] auto
	ProjectileExplodedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectileExplodedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileExplodedEvent> {
		if (incoming_type_id == ProjectileExplodedEvent::type_id) {
			return std::make_shared<ProjectileExplodedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
