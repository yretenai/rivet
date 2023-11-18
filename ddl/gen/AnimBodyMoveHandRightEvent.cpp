// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimBodyMoveHandRightEvent.hpp>

namespace rivet::ddl::generated {
	AnimBodyMoveHandRightEvent::AnimBodyMoveHandRightEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AnimBodyMoveBaseEvent(serialized) {

	}

	[[nodiscard]] auto
	AnimBodyMoveHandRightEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimBodyMoveHandRightEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimBodyMoveHandRightEvent> {
		if (incoming_type_id == AnimBodyMoveHandRightEvent::type_id) {
			return std::make_shared<AnimBodyMoveHandRightEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
