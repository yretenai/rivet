// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TimeScaleChannelBlendOutEvent.hpp>

namespace rivet::ddl::generated {
	TimeScaleChannelBlendOutEvent::TimeScaleChannelBlendOutEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		BlendOutDuration = serialized->get_float(BlendOutDuration_type_id); 
	}

	[[nodiscard]] auto
	TimeScaleChannelBlendOutEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TimeScaleChannelBlendOutEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimeScaleChannelBlendOutEvent> {
		if (incoming_type_id == TimeScaleChannelBlendOutEvent::type_id) {
			return std::make_shared<TimeScaleChannelBlendOutEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated