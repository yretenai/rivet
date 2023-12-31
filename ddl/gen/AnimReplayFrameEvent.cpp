// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimReplayFrameEvent.hpp>

namespace rivet::ddl::generated {
	AnimReplayFrameEvent::AnimReplayFrameEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AnimReplayFrameEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimReplayFrameEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimReplayFrameEvent> {
		if (incoming_type_id == AnimReplayFrameEvent::type_id) {
			return std::make_shared<AnimReplayFrameEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
