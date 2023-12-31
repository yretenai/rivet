// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/StartObjectiveDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	StartObjectiveDevstatsEvent::StartObjectiveDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id);
		MissionSegmentId = serialized->get_string(MissionSegmentId_type_id);
		ObjectiveSegmentId = serialized->get_string(ObjectiveSegmentId_type_id);
		MissionName = serialized->get_string(MissionName_type_id);
		ObjectiveName = serialized->get_string(ObjectiveName_type_id);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id); 
	}

	[[nodiscard]] auto
	StartObjectiveDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StartObjectiveDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StartObjectiveDevstatsEvent> {
		if (incoming_type_id == StartObjectiveDevstatsEvent::type_id) {
			return std::make_shared<StartObjectiveDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
