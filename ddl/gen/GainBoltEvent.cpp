// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp> 

#include <rivet/ddl/generated/GainBoltEvent.hpp>

namespace rivet::ddl::generated {
	GainBoltEvent::GainBoltEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id);
		NewBolts = serialized->get_int32(NewBolts_type_id);
		TotalBolts = serialized->get_int32(TotalBolts_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id); 
	}

	[[nodiscard]] auto
	GainBoltEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GainBoltEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GainBoltEvent> {
		if (incoming_type_id == GainBoltEvent::type_id) {
			return std::make_shared<GainBoltEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
