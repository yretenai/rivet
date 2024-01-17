// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TouchedByBeamStartEvent.hpp>

namespace rivet::ddl::generated {
	TouchedByBeamStartEvent::TouchedByBeamStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		JointIndex = serialized->get_int32(JointIndex_type_id, 0); 
	}

	[[nodiscard]] auto
	TouchedByBeamStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TouchedByBeamStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TouchedByBeamStartEvent> {
		if (incoming_type_id == TouchedByBeamStartEvent::type_id) {
			return std::make_shared<TouchedByBeamStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
