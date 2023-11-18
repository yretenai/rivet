// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrindCameraAimContextConfig.hpp>
#include <rivet/ddl/generated/HoverbootCameraAimContextConfig.hpp>
#include <rivet/ddl/generated/SlopeSlideCameraAimContextConfig.hpp>
#include <rivet/ddl/generated/HackySeparatorStruct.hpp> 

#include <rivet/ddl/generated/CameraAimContextVariableFOVConfig.hpp>

namespace rivet::ddl::generated {
	CameraAimContextVariableFOVConfig::CameraAimContextVariableFOVConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraAimContextConfig(serialized) {
		SeparatorFOVConfig = serialized->unwrap_into<rivet::ddl::generated::HackySeparatorStruct>(SeparatorFOVConfig_type_id); 
	}

	[[nodiscard]] auto
	CameraAimContextVariableFOVConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraAimContextVariableFOVConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAimContextVariableFOVConfig> {
		if (incoming_type_id == CameraAimContextVariableFOVConfig::type_id) {
			return std::make_shared<CameraAimContextVariableFOVConfig>(serialized);
		}

		auto SlopeSlideCameraAimContextConfig_ptr = SlopeSlideCameraAimContextConfig::from_substruct(incoming_type_id, serialized);
		if (SlopeSlideCameraAimContextConfig_ptr != nullptr) {
			return SlopeSlideCameraAimContextConfig_ptr;
		}

		auto HoverbootCameraAimContextConfig_ptr = HoverbootCameraAimContextConfig::from_substruct(incoming_type_id, serialized);
		if (HoverbootCameraAimContextConfig_ptr != nullptr) {
			return HoverbootCameraAimContextConfig_ptr;
		}

		auto GrindCameraAimContextConfig_ptr = GrindCameraAimContextConfig::from_substruct(incoming_type_id, serialized);
		if (GrindCameraAimContextConfig_ptr != nullptr) {
			return GrindCameraAimContextConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
