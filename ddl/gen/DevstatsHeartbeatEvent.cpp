// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/DevstatsHeartbeatEvent.hpp>

namespace rivet::ddl::generated {
	DevstatsHeartbeatEvent::DevstatsHeartbeatEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id);
		PlayerState = serialized->get_string(PlayerState_type_id);
		PlayerHealth = serialized->get_float(PlayerHealth_type_id);
		InCombat = serialized->get_bool(InCombat_type_id);
		Invisible = serialized->get_bool(Invisible_type_id); 
	}

	[[nodiscard]] auto
	DevstatsHeartbeatEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsHeartbeatEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsHeartbeatEvent> {
		if (incoming_type_id == DevstatsHeartbeatEvent::type_id) {
			return std::make_shared<DevstatsHeartbeatEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
