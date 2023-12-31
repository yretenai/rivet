// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetTrophyProgressEvent.hpp> 

#include <rivet/ddl/generated/CustomEvent.hpp>

namespace rivet::ddl::generated {
	CustomEvent::CustomEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UDSEventBase(serialized) {

	}

	[[nodiscard]] auto
	CustomEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CustomEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomEvent> {
		if (incoming_type_id == CustomEvent::type_id) {
			return std::make_shared<CustomEvent>(serialized);
		}

		auto SetTrophyProgressEvent_ptr = SetTrophyProgressEvent::from_substruct(incoming_type_id, serialized);
		if (SetTrophyProgressEvent_ptr != nullptr) {
			return SetTrophyProgressEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
