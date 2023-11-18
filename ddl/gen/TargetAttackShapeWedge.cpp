// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetAttackShapeWedge.hpp>

namespace rivet::ddl::generated {
	TargetAttackShapeWedge::TargetAttackShapeWedge([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetedAttackShape(serialized) {
		Locator = serialized->get_string(Locator_type_id);
		Radius = serialized->get_float(Radius_type_id);
		HalfAngle = serialized->get_float(HalfAngle_type_id);
		HeightUp = serialized->get_float(HeightUp_type_id);
		HeightDown = serialized->get_float(HeightDown_type_id); 
	}

	[[nodiscard]] auto
	TargetAttackShapeWedge::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetAttackShapeWedge::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetAttackShapeWedge> {
		if (incoming_type_id == TargetAttackShapeWedge::type_id) {
			return std::make_shared<TargetAttackShapeWedge>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
