// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CheckpointTriggeredEvent.hpp>

namespace rivet::ddl::generated {
	CheckpointTriggeredEvent::CheckpointTriggeredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CheckpointEventBase(serialized) {
		Loaded = serialized->get_bool(Loaded_type_id, true); 
	}

	[[nodiscard]] auto
	CheckpointTriggeredEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CheckpointTriggeredEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CheckpointTriggeredEvent> {
		if (incoming_type_id == CheckpointTriggeredEvent::type_id) {
			return std::make_shared<CheckpointTriggeredEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
