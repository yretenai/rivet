// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SmoothAimingPrius.hpp>

namespace rivet::ddl::generated {
	SmoothAimingPrius::SmoothAimingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): FocusTrackingAimingPrius(serialized) {
		AimPosAccel = serialized->get_float(AimPosAccel_type_id, 100.000000);
		AimPosDecel = serialized->get_float(AimPosDecel_type_id, 100.000000);
		AimPosMaxSpeed = serialized->get_float(AimPosMaxSpeed_type_id, 100.000000); 
	}

	[[nodiscard]] auto
	SmoothAimingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SmoothAimingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SmoothAimingPrius> {
		if (incoming_type_id == SmoothAimingPrius::type_id) {
			return std::make_shared<SmoothAimingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
