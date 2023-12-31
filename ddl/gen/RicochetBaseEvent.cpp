// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RicochetHitFinalEvent.hpp>
#include <rivet/ddl/generated/RicochetReturnedEvent.hpp>
#include <rivet/ddl/generated/RicochetFullSuccessEvent.hpp>
#include <rivet/ddl/generated/RicochetFlyingStartEvent.hpp>
#include <rivet/ddl/generated/RicochetAttemptEvent.hpp>
#include <rivet/ddl/generated/RicochetFailEvent.hpp>
#include <rivet/ddl/generated/RicochetSuccessEvent.hpp>
#include <rivet/ddl/generated/RicochetHitEvent.hpp>
#include <rivet/ddl/generated/RicochetAttemptDoneEvent.hpp> 

#include <rivet/ddl/generated/RicochetBaseEvent.hpp>

namespace rivet::ddl::generated {
	RicochetBaseEvent::RicochetBaseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		HitCount = serialized->get_float(HitCount_type_id);
		MaxHitCount = serialized->get_float(MaxHitCount_type_id);
		Red = serialized->get_float(Red_type_id);
		Green = serialized->get_float(Green_type_id);
		Blue = serialized->get_float(Blue_type_id); 
	}

	[[nodiscard]] auto
	RicochetBaseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RicochetBaseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RicochetBaseEvent> {
		if (incoming_type_id == RicochetBaseEvent::type_id) {
			return std::make_shared<RicochetBaseEvent>(serialized);
		}

		auto RicochetAttemptDoneEvent_ptr = RicochetAttemptDoneEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetAttemptDoneEvent_ptr != nullptr) {
			return RicochetAttemptDoneEvent_ptr;
		}

		auto RicochetHitEvent_ptr = RicochetHitEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetHitEvent_ptr != nullptr) {
			return RicochetHitEvent_ptr;
		}

		auto RicochetFailEvent_ptr = RicochetFailEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetFailEvent_ptr != nullptr) {
			return RicochetFailEvent_ptr;
		}

		auto RicochetAttemptEvent_ptr = RicochetAttemptEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetAttemptEvent_ptr != nullptr) {
			return RicochetAttemptEvent_ptr;
		}

		auto RicochetFlyingStartEvent_ptr = RicochetFlyingStartEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetFlyingStartEvent_ptr != nullptr) {
			return RicochetFlyingStartEvent_ptr;
		}

		auto RicochetFullSuccessEvent_ptr = RicochetFullSuccessEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetFullSuccessEvent_ptr != nullptr) {
			return RicochetFullSuccessEvent_ptr;
		}

		auto RicochetReturnedEvent_ptr = RicochetReturnedEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetReturnedEvent_ptr != nullptr) {
			return RicochetReturnedEvent_ptr;
		}

		auto RicochetSuccessEvent_ptr = RicochetSuccessEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetSuccessEvent_ptr != nullptr) {
			return RicochetSuccessEvent_ptr;
		}

		auto RicochetHitFinalEvent_ptr = RicochetHitFinalEvent::from_substruct(incoming_type_id, serialized);
		if (RicochetHitFinalEvent_ptr != nullptr) {
			return RicochetHitFinalEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
