// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShootAtCurveInWorld.hpp>

namespace rivet::ddl::generated {
	ShootAtCurveInWorld::ShootAtCurveInWorld([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShootAtMortarFiringStyle(serialized) {

	}

	auto
	ShootAtCurveInWorld::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShootAtCurveInWorld::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShootAtCurveInWorld::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootAtCurveInWorld> {
		if (incoming_type_id == ShootAtCurveInWorld::type_id) {
			return std::make_shared<ShootAtCurveInWorld>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
