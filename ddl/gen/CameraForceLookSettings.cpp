// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraForceLookSettings.hpp>

namespace rivet::ddl::generated {
	CameraForceLookSettings::CameraForceLookSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpeedMax = serialized->get_float(SpeedMax_type_id, 480.000000);
		SpeedAccel = serialized->get_float(SpeedAccel_type_id, 9000.000000);
		SpeedDecel = serialized->get_float(SpeedDecel_type_id, 9000.000000); 
	}

	[[nodiscard]] auto
	CameraForceLookSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraForceLookSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraForceLookSettings> {
		if (incoming_type_id == CameraForceLookSettings::type_id) {
			return std::make_shared<CameraForceLookSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
