// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionFusionGrenadeSubShotPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionFusionGrenadeSubShotPrius::ShotMotionFusionGrenadeSubShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotMotionPrius(serialized) {
		MaxBounces = serialized->get_uint32(MaxBounces_type_id); 
	}

	auto
	ShotMotionFusionGrenadeSubShotPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotMotionFusionGrenadeSubShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionFusionGrenadeSubShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionFusionGrenadeSubShotPrius> {
		if (incoming_type_id == ShotMotionFusionGrenadeSubShotPrius::type_id) {
			return std::make_shared<ShotMotionFusionGrenadeSubShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
