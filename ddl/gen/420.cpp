// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TurretIonCannonShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	TurretIonCannonShotMotionPrius::TurretIonCannonShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	auto
	TurretIonCannonShotMotionPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	TurretIonCannonShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TurretIonCannonShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TurretIonCannonShotMotionPrius> {
		if (incoming_type_id == TurretIonCannonShotMotionPrius::type_id) {
			return std::make_shared<TurretIonCannonShotMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
