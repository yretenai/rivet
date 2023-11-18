// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDamageIdealFrameEvent.hpp>

namespace rivet::ddl::generated {
	AnimDamageIdealFrameEvent::AnimDamageIdealFrameEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ImpactLocation = serialized->get_enum<rivet::ddl::generated::x80ca62e9>(ImpactLocation_type_id, rivet::ddl::generated::x80ca62e9_values);
		ImpactLevel = serialized->get_enum<rivet::ddl::generated::x3b1e2e8d>(ImpactLevel_type_id, rivet::ddl::generated::x3b1e2e8d_values); 
	}

	[[nodiscard]] auto
	AnimDamageIdealFrameEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDamageIdealFrameEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageIdealFrameEvent> {
		if (incoming_type_id == AnimDamageIdealFrameEvent::type_id) {
			return std::make_shared<AnimDamageIdealFrameEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
