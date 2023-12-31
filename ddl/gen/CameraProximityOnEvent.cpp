// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraProximityOnEvent.hpp>

namespace rivet::ddl::generated {
	CameraProximityOnEvent::CameraProximityOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	CameraProximityOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraProximityOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraProximityOnEvent> {
		if (incoming_type_id == CameraProximityOnEvent::type_id) {
			return std::make_shared<CameraProximityOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
