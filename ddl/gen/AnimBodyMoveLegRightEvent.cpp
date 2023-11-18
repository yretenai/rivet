// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimBodyMoveLegRightEvent.hpp>

namespace rivet::ddl::generated {
	AnimBodyMoveLegRightEvent::AnimBodyMoveLegRightEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AnimBodyMoveBaseEvent(serialized) {

	}

	[[nodiscard]] auto
	AnimBodyMoveLegRightEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimBodyMoveLegRightEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimBodyMoveLegRightEvent> {
		if (incoming_type_id == AnimBodyMoveLegRightEvent::type_id) {
			return std::make_shared<AnimBodyMoveLegRightEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
