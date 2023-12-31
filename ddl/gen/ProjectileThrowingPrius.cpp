// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProjectileThrowingPrius.hpp>

namespace rivet::ddl::generated {
	ProjectileThrowingPrius::ProjectileThrowingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ProjectileThrowingConfig = serialized->get_string(ProjectileThrowingConfig_type_id);
		ThrowLocator = serialized->get_string(ThrowLocator_type_id);
		UseArcFinder = serialized->get_bool(UseArcFinder_type_id);
		SnapTargetPositionToGround = serialized->get_bool(SnapTargetPositionToGround_type_id); 
	}

	[[nodiscard]] auto
	ProjectileThrowingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProjectileThrowingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileThrowingPrius> {
		if (incoming_type_id == ProjectileThrowingPrius::type_id) {
			return std::make_shared<ProjectileThrowingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
