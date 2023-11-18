// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChangeWeaponZoomEvent.hpp>

namespace rivet::ddl::generated {
	ChangeWeaponZoomEvent::ChangeWeaponZoomEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ZoomLevel = serialized->get_int32(ZoomLevel_type_id); 
	}

	[[nodiscard]] auto
	ChangeWeaponZoomEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChangeWeaponZoomEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChangeWeaponZoomEvent> {
		if (incoming_type_id == ChangeWeaponZoomEvent::type_id) {
			return std::make_shared<ChangeWeaponZoomEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
