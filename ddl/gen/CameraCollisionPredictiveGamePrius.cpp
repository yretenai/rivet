// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraCollisionPredictiveGamePrius.hpp>

namespace rivet::ddl::generated {
	CameraCollisionPredictiveGamePrius::CameraCollisionPredictiveGamePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraCollisionPredictivePrius(serialized) {

	}

	[[nodiscard]] auto
	CameraCollisionPredictiveGamePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraCollisionPredictiveGamePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraCollisionPredictiveGamePrius> {
		if (incoming_type_id == CameraCollisionPredictiveGamePrius::type_id) {
			return std::make_shared<CameraCollisionPredictiveGamePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
