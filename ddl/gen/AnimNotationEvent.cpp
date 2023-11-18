// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimNotationEvent.hpp>

namespace rivet::ddl::generated {
	AnimNotationEvent::AnimNotationEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Comment = serialized->get_string(Comment_type_id); 
	}

	[[nodiscard]] auto
	AnimNotationEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimNotationEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimNotationEvent> {
		if (incoming_type_id == AnimNotationEvent::type_id) {
			return std::make_shared<AnimNotationEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
