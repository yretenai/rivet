// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeleeAnimCameraStopEvent.hpp>

namespace rivet::ddl::generated {
	MeleeAnimCameraStopEvent::MeleeAnimCameraStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	MeleeAnimCameraStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MeleeAnimCameraStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleeAnimCameraStopEvent> {
		if (incoming_type_id == MeleeAnimCameraStopEvent::type_id) {
			return std::make_shared<MeleeAnimCameraStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
