// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetAttackShapeCone.hpp>

namespace rivet::ddl::generated {
	TargetAttackShapeCone::TargetAttackShapeCone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetedAttackShape(serialized) {
		Locator = serialized->get_string(Locator_type_id);
		Length = serialized->get_float(Length_type_id);
		HalfAngle = serialized->get_float(HalfAngle_type_id); 
	}

	[[nodiscard]] auto
	TargetAttackShapeCone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetAttackShapeCone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetAttackShapeCone> {
		if (incoming_type_id == TargetAttackShapeCone::type_id) {
			return std::make_shared<TargetAttackShapeCone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
