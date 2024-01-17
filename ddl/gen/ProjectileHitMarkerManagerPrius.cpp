// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectileHitMarkerManagerPrius.hpp>

namespace rivet::ddl::generated {
	ProjectileHitMarkerManagerPrius::ProjectileHitMarkerManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MarkerActor = serialized->get_string(MarkerActor_type_id, {});
		AppearTime = serialized->get_float(AppearTime_type_id, 0.500000); 
	}

	[[nodiscard]] auto
	ProjectileHitMarkerManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectileHitMarkerManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileHitMarkerManagerPrius> {
		if (incoming_type_id == ProjectileHitMarkerManagerPrius::type_id) {
			return std::make_shared<ProjectileHitMarkerManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
