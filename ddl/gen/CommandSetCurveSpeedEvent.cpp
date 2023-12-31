// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CommandSetCurveSpeedEvent.hpp>

namespace rivet::ddl::generated {
	CommandSetCurveSpeedEvent::CommandSetCurveSpeedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CommandEvent(serialized) {

	}

	[[nodiscard]] auto
	CommandSetCurveSpeedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CommandSetCurveSpeedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CommandSetCurveSpeedEvent> {
		if (incoming_type_id == CommandSetCurveSpeedEvent::type_id) {
			return std::make_shared<CommandSetCurveSpeedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
