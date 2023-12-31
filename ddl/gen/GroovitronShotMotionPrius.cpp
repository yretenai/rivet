// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GroovitronShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	GroovitronShotMotionPrius::GroovitronShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	GroovitronShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GroovitronShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GroovitronShotMotionPrius> {
		if (incoming_type_id == GroovitronShotMotionPrius::type_id) {
			return std::make_shared<GroovitronShotMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
