// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraFPSPrius.hpp>

namespace rivet::ddl::generated {
	CameraFPSPrius::CameraFPSPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraPrius(serialized) {

	}

	auto
	CameraFPSPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CameraFPSPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraFPSPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraFPSPrius> {
		if (incoming_type_id == CameraFPSPrius::type_id) {
			return std::make_shared<CameraFPSPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
