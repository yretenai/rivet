// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroFootIKOnEvent.hpp>

namespace rivet::ddl::generated {
	HeroFootIKOnEvent::HeroFootIKOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Chain = serialized->get_string(Chain_type_id);
		SlopeMatch = serialized->get_bool(SlopeMatch_type_id);
		EnableGroundOffset = serialized->get_bool(EnableGroundOffset_type_id); 
	}

	[[nodiscard]] auto
	HeroFootIKOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroFootIKOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroFootIKOnEvent> {
		if (incoming_type_id == HeroFootIKOnEvent::type_id) {
			return std::make_shared<HeroFootIKOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
