// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/DevstatsPlayerDamagedEvent.hpp>

namespace rivet::ddl::generated {
	DevstatsPlayerDamagedEvent::DevstatsPlayerDamagedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id, {});
		DamageAmount = serialized->get_float(DamageAmount_type_id, 0.000000);
		NewHealth = serialized->get_float(NewHealth_type_id, 0.000000);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id); 
	}

	[[nodiscard]] auto
	DevstatsPlayerDamagedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsPlayerDamagedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsPlayerDamagedEvent> {
		if (incoming_type_id == DevstatsPlayerDamagedEvent::type_id) {
			return std::make_shared<DevstatsPlayerDamagedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
