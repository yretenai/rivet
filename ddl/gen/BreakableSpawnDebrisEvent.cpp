// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BreakableSpawnDebrisEvent.hpp>

namespace rivet::ddl::generated {
	BreakableSpawnDebrisEvent::BreakableSpawnDebrisEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		StageIndex = serialized->get_int32(StageIndex_type_id, 0);
		TotalChunkCount = serialized->get_int32(TotalChunkCount_type_id, 0); 
	}

	[[nodiscard]] auto
	BreakableSpawnDebrisEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BreakableSpawnDebrisEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableSpawnDebrisEvent> {
		if (incoming_type_id == BreakableSpawnDebrisEvent::type_id) {
			return std::make_shared<BreakableSpawnDebrisEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
