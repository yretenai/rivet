// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/EndMissionDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	EndMissionDevstatsEvent::EndMissionDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id, {});
		MissionSegmentId = serialized->get_string(MissionSegmentId_type_id, {});
		MissionName = serialized->get_string(MissionName_type_id, {});
		IsReplay = serialized->get_bool(IsReplay_type_id, false);
		EndReason = serialized->get_enum<rivet::ddl::generated::x70690a01>(EndReason_type_id, rivet::ddl::generated::x70690a01_values, rivet::ddl::generated::x70690a01::Complete);
		MissionDuration = serialized->get_float(MissionDuration_type_id, 0.000000f);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id); 
	}

	[[nodiscard]] auto
	EndMissionDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EndMissionDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EndMissionDevstatsEvent> {
		if (incoming_type_id == EndMissionDevstatsEvent::type_id) {
			return std::make_shared<EndMissionDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
