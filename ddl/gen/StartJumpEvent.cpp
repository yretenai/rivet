// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StartJumpEvent.hpp>

namespace rivet::ddl::generated {
	StartJumpEvent::StartJumpEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	StartJumpEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StartJumpEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StartJumpEvent> {
		if (incoming_type_id == StartJumpEvent::type_id) {
			return std::make_shared<StartJumpEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated