// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WallRunOnEvent.hpp>

namespace rivet::ddl::generated {
	WallRunOnEvent::WallRunOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Direction = serialized->get_int8(Direction_type_id, 0); 
	}

	[[nodiscard]] auto
	WallRunOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WallRunOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WallRunOnEvent> {
		if (incoming_type_id == WallRunOnEvent::type_id) {
			return std::make_shared<WallRunOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
