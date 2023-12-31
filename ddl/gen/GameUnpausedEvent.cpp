// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameUnpausedEvent.hpp>

namespace rivet::ddl::generated {
	GameUnpausedEvent::GameUnpausedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		UserIndex = serialized->get_int32(UserIndex_type_id);
		Time = serialized->get_float(Time_type_id);
		ElapsedTime = serialized->get_float(ElapsedTime_type_id); 
	}

	[[nodiscard]] auto
	GameUnpausedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameUnpausedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameUnpausedEvent> {
		if (incoming_type_id == GameUnpausedEvent::type_id) {
			return std::make_shared<GameUnpausedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
