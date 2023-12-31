// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraRotationLimiterRelativeMatrixPrius.hpp> 

#include <rivet/ddl/generated/CameraRotationLimiterBasePrius.hpp>

namespace rivet::ddl::generated {
	CameraRotationLimiterBasePrius::CameraRotationLimiterBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		YawMin = serialized->get_float(YawMin_type_id);
		YawMax = serialized->get_float(YawMax_type_id);
		PitchMin = serialized->get_float(PitchMin_type_id);
		PitchMax = serialized->get_float(PitchMax_type_id); 
	}

	[[nodiscard]] auto
	CameraRotationLimiterBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraRotationLimiterBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraRotationLimiterBasePrius> {
		if (incoming_type_id == CameraRotationLimiterBasePrius::type_id) {
			return std::make_shared<CameraRotationLimiterBasePrius>(serialized);
		}

		auto CameraRotationLimiterRelativeMatrixPrius_ptr = CameraRotationLimiterRelativeMatrixPrius::from_substruct(incoming_type_id, serialized);
		if (CameraRotationLimiterRelativeMatrixPrius_ptr != nullptr) {
			return CameraRotationLimiterRelativeMatrixPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
