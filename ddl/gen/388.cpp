// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionFusionGrenadePrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionFusionGrenadePrius::ShotMotionFusionGrenadePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotMotionPrius(serialized) {

	}

	auto
	ShotMotionFusionGrenadePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotMotionFusionGrenadePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionFusionGrenadePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionFusionGrenadePrius> {
		if (incoming_type_id == ShotMotionFusionGrenadePrius::type_id) {
			return std::make_shared<ShotMotionFusionGrenadePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
