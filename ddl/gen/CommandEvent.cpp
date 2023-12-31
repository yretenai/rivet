// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CommandClearCurveEvent.hpp>
#include <rivet/ddl/generated/CommandContinueFollowCurveEvent.hpp>
#include <rivet/ddl/generated/CommandFollowCurveEvent.hpp>
#include <rivet/ddl/generated/CommandSwitchFlightAreaEvent.hpp>
#include <rivet/ddl/generated/CommandFireAtEvent.hpp>
#include <rivet/ddl/generated/CommandCompleteFollowCurveEvent.hpp>
#include <rivet/ddl/generated/CommandStopFollowCurveEvent.hpp>
#include <rivet/ddl/generated/CommandStandStillEvent.hpp>
#include <rivet/ddl/generated/CommandSetCurveSpeedEvent.hpp>
#include <rivet/ddl/generated/CommandGoToEvent.hpp>
#include <rivet/ddl/generated/CommandSnapperIntroEvent.hpp>
#include <rivet/ddl/generated/CommandJumpToEvent.hpp>
#include <rivet/ddl/generated/CommandPlayAnimEvent.hpp> 

#include <rivet/ddl/generated/CommandEvent.hpp>

namespace rivet::ddl::generated {
	CommandEvent::CommandEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Time = serialized->get_float(Time_type_id); 
	}

	[[nodiscard]] auto
	CommandEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CommandEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CommandEvent> {
		if (incoming_type_id == CommandEvent::type_id) {
			return std::make_shared<CommandEvent>(serialized);
		}

		auto CommandPlayAnimEvent_ptr = CommandPlayAnimEvent::from_substruct(incoming_type_id, serialized);
		if (CommandPlayAnimEvent_ptr != nullptr) {
			return CommandPlayAnimEvent_ptr;
		}

		auto CommandGoToEvent_ptr = CommandGoToEvent::from_substruct(incoming_type_id, serialized);
		if (CommandGoToEvent_ptr != nullptr) {
			return CommandGoToEvent_ptr;
		}

		auto CommandSetCurveSpeedEvent_ptr = CommandSetCurveSpeedEvent::from_substruct(incoming_type_id, serialized);
		if (CommandSetCurveSpeedEvent_ptr != nullptr) {
			return CommandSetCurveSpeedEvent_ptr;
		}

		auto CommandStopFollowCurveEvent_ptr = CommandStopFollowCurveEvent::from_substruct(incoming_type_id, serialized);
		if (CommandStopFollowCurveEvent_ptr != nullptr) {
			return CommandStopFollowCurveEvent_ptr;
		}

		auto CommandCompleteFollowCurveEvent_ptr = CommandCompleteFollowCurveEvent::from_substruct(incoming_type_id, serialized);
		if (CommandCompleteFollowCurveEvent_ptr != nullptr) {
			return CommandCompleteFollowCurveEvent_ptr;
		}

		auto CommandSwitchFlightAreaEvent_ptr = CommandSwitchFlightAreaEvent::from_substruct(incoming_type_id, serialized);
		if (CommandSwitchFlightAreaEvent_ptr != nullptr) {
			return CommandSwitchFlightAreaEvent_ptr;
		}

		auto CommandFollowCurveEvent_ptr = CommandFollowCurveEvent::from_substruct(incoming_type_id, serialized);
		if (CommandFollowCurveEvent_ptr != nullptr) {
			return CommandFollowCurveEvent_ptr;
		}

		auto CommandFireAtEvent_ptr = CommandFireAtEvent::from_substruct(incoming_type_id, serialized);
		if (CommandFireAtEvent_ptr != nullptr) {
			return CommandFireAtEvent_ptr;
		}

		auto CommandJumpToEvent_ptr = CommandJumpToEvent::from_substruct(incoming_type_id, serialized);
		if (CommandJumpToEvent_ptr != nullptr) {
			return CommandJumpToEvent_ptr;
		}

		auto CommandContinueFollowCurveEvent_ptr = CommandContinueFollowCurveEvent::from_substruct(incoming_type_id, serialized);
		if (CommandContinueFollowCurveEvent_ptr != nullptr) {
			return CommandContinueFollowCurveEvent_ptr;
		}

		auto CommandSnapperIntroEvent_ptr = CommandSnapperIntroEvent::from_substruct(incoming_type_id, serialized);
		if (CommandSnapperIntroEvent_ptr != nullptr) {
			return CommandSnapperIntroEvent_ptr;
		}

		auto CommandClearCurveEvent_ptr = CommandClearCurveEvent::from_substruct(incoming_type_id, serialized);
		if (CommandClearCurveEvent_ptr != nullptr) {
			return CommandClearCurveEvent_ptr;
		}

		auto CommandStandStillEvent_ptr = CommandStandStillEvent::from_substruct(incoming_type_id, serialized);
		if (CommandStandStillEvent_ptr != nullptr) {
			return CommandStandStillEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
