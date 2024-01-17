// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SwingingMotionHitEvent.hpp>

namespace rivet::ddl::generated {
	SwingingMotionHitEvent::SwingingMotionHitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ImpactSpeed = serialized->get_float(ImpactSpeed_type_id, 0.000000);
		OwnerIsHero = serialized->get_bool(OwnerIsHero_type_id, false); 
	}

	[[nodiscard]] auto
	SwingingMotionHitEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwingingMotionHitEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwingingMotionHitEvent> {
		if (incoming_type_id == SwingingMotionHitEvent::type_id) {
			return std::make_shared<SwingingMotionHitEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
