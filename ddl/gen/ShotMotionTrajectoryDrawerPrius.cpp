// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionTrajectoryDrawerPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionTrajectoryDrawerPrius::ShotMotionTrajectoryDrawerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponTrajectoryDrawerPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionTrajectoryDrawerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionTrajectoryDrawerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionTrajectoryDrawerPrius> {
		if (incoming_type_id == ShotMotionTrajectoryDrawerPrius::type_id) {
			return std::make_shared<ShotMotionTrajectoryDrawerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
