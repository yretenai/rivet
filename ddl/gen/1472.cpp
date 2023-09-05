// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShootAtCurveInWorld.hpp>
#include <rivet/ddl/generated/ShootAtCurveFollowTarget.hpp>
#include <rivet/ddl/generated/ShootAtMortarNoCurve.hpp> 

#include <rivet/ddl/generated/ShootAtMortarFiringStyle.hpp>

namespace rivet::ddl::generated {
	ShootAtMortarFiringStyle::ShootAtMortarFiringStyle([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	auto
	ShootAtMortarFiringStyle::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShootAtMortarFiringStyle::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShootAtMortarFiringStyle::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootAtMortarFiringStyle> {
		if (incoming_type_id == ShootAtMortarFiringStyle::type_id) {
			return std::make_shared<ShootAtMortarFiringStyle>(serialized);
		}

		auto ShootAtCurveInWorld_ptr = ShootAtCurveInWorld::from_substruct(incoming_type_id, serialized);
		if (ShootAtCurveInWorld_ptr != nullptr) {
			return ShootAtCurveInWorld_ptr;
		}

		auto ShootAtCurveFollowTarget_ptr = ShootAtCurveFollowTarget::from_substruct(incoming_type_id, serialized);
		if (ShootAtCurveFollowTarget_ptr != nullptr) {
			return ShootAtCurveFollowTarget_ptr;
		}

		auto ShootAtMortarNoCurve_ptr = ShootAtMortarNoCurve::from_substruct(incoming_type_id, serialized);
		if (ShootAtMortarNoCurve_ptr != nullptr) {
			return ShootAtMortarNoCurve_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
