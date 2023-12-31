// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HazardTurretPrius.hpp>

namespace rivet::ddl::generated {
	HazardTurretPrius::HazardTurretPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FiringLocatorName = serialized->get_string(FiringLocatorName_type_id);
		CasingEjectLocatorName = serialized->get_string(CasingEjectLocatorName_type_id);
		YawJointName = serialized->get_string(YawJointName_type_id);
		PitchJointName = serialized->get_string(PitchJointName_type_id);
		StartOn = serialized->get_bool(StartOn_type_id);
		SlerpRotation = serialized->get_bool(SlerpRotation_type_id);
		HazardTurretConfig = serialized->get_string(HazardTurretConfig_type_id); 
	}

	[[nodiscard]] auto
	HazardTurretPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HazardTurretPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HazardTurretPrius> {
		if (incoming_type_id == HazardTurretPrius::type_id) {
			return std::make_shared<HazardTurretPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
