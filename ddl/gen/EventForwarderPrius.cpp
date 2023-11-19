// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventForwarderPrius.hpp>

namespace rivet::ddl::generated {
	EventForwarderPrius::EventForwarderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetActor = serialized->get_uint64(TargetActor_type_id);
		EventsToForward = serialized->get_strings(EventsToForward_type_id);
		ForwardedSender = serialized->get_enum<rivet::ddl::generated::xc97f8430>(ForwardedSender_type_id, rivet::ddl::generated::xc97f8430_values);
		QueueImmediateEvent = serialized->get_bool(QueueImmediateEvent_type_id); 
	}

	[[nodiscard]] auto
	EventForwarderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventForwarderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventForwarderPrius> {
		if (incoming_type_id == EventForwarderPrius::type_id) {
			return std::make_shared<EventForwarderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated