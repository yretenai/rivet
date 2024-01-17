// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/TriggerByEventPrius.hpp>

namespace rivet::ddl::generated {
	TriggerByEventPrius::TriggerByEventPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerByBasePrius(serialized) {
		EventSender = serialized->get_uint64(EventSender_type_id, 0);
		Range = serialized->get_float(Range_type_id, -1.000000);
		TriggeringEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(TriggeringEvent_type_id); 
	}

	[[nodiscard]] auto
	TriggerByEventPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerByEventPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerByEventPrius> {
		if (incoming_type_id == TriggerByEventPrius::type_id) {
			return std::make_shared<TriggerByEventPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
