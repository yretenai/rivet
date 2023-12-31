// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsPrimarySegmentInfo.hpp>
#include <rivet/ddl/generated/DevstatsPlayerPositionInfo.hpp> 

#include <rivet/ddl/generated/DevstatsSystemMenuOptionChangedEvent.hpp>

namespace rivet::ddl::generated {
	DevstatsSystemMenuOptionChangedEvent::DevstatsSystemMenuOptionChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id);
		OptionName = serialized->get_string(OptionName_type_id);
		StringValue = serialized->get_string(StringValue_type_id);
		FloatValue = serialized->get_float(FloatValue_type_id);
		IsPreset = serialized->get_bool(IsPreset_type_id);
		PlayerPosInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPlayerPositionInfo>(PlayerPosInfo_type_id);
		PrimarySegmentInfo = serialized->unwrap_into<rivet::ddl::generated::DevstatsPrimarySegmentInfo>(PrimarySegmentInfo_type_id); 
	}

	[[nodiscard]] auto
	DevstatsSystemMenuOptionChangedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsSystemMenuOptionChangedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsSystemMenuOptionChangedEvent> {
		if (incoming_type_id == DevstatsSystemMenuOptionChangedEvent::type_id) {
			return std::make_shared<DevstatsSystemMenuOptionChangedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
