// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisionConfig.hpp>

namespace rivet::ddl::generated {
	VisionConfig::VisionConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SphereRadius = serialized->get_float(SphereRadius_type_id, 3.000000);
		WedgeRadius = serialized->get_float(WedgeRadius_type_id, 15.000000);
		WedgeHalfAngle = serialized->get_float(WedgeHalfAngle_type_id, 90.000000);
		WedgeHeightUp = serialized->get_float(WedgeHeightUp_type_id, 3.000000);
		WedgeHeightDown = serialized->get_float(WedgeHeightDown_type_id, -2.000000);
		ConeRadius = serialized->get_float(ConeRadius_type_id, 30.000000);
		ConeHalfAngle = serialized->get_float(ConeHalfAngle_type_id, 25.000000); 
	}

	[[nodiscard]] auto
	VisionConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisionConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisionConfig> {
		if (incoming_type_id == VisionConfig::type_id) {
			return std::make_shared<VisionConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
