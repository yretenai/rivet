// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/PauseMenuClosedDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	PauseMenuClosedDevstatsEvent::PauseMenuClosedDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id, {});
		MenuSegmentId = serialized->get_string(MenuSegmentId_type_id, {});
		FinalTab = serialized->get_enum<rivet::ddl::generated::PauseTabs>(FinalTab_type_id, rivet::ddl::generated::PauseTabs_values, rivet::ddl::generated::PauseTabs::Map);
		Duration = serialized->get_float(Duration_type_id, 0.000000);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id); 
	}

	[[nodiscard]] auto
	PauseMenuClosedDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PauseMenuClosedDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PauseMenuClosedDevstatsEvent> {
		if (incoming_type_id == PauseMenuClosedDevstatsEvent::type_id) {
			return std::make_shared<PauseMenuClosedDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
