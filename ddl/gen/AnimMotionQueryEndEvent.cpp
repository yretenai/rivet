// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimMotionQueryEndEvent.hpp>

namespace rivet::ddl::generated {
	AnimMotionQueryEndEvent::AnimMotionQueryEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		QueryName = serialized->get_string(QueryName_type_id, {}); 
	}

	[[nodiscard]] auto
	AnimMotionQueryEndEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimMotionQueryEndEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimMotionQueryEndEvent> {
		if (incoming_type_id == AnimMotionQueryEndEvent::type_id) {
			return std::make_shared<AnimMotionQueryEndEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
