// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/DevstatsPlayerAbilityHitEvent.hpp>

namespace rivet::ddl::generated {
	DevstatsPlayerAbilityHitEvent::DevstatsPlayerAbilityHitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id);
		DevstatsName = serialized->get_string(DevstatsName_type_id);
		WasKill = serialized->get_bool(WasKill_type_id);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id); 
	}

	[[nodiscard]] auto
	DevstatsPlayerAbilityHitEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsPlayerAbilityHitEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsPlayerAbilityHitEvent> {
		if (incoming_type_id == DevstatsPlayerAbilityHitEvent::type_id) {
			return std::make_shared<DevstatsPlayerAbilityHitEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
