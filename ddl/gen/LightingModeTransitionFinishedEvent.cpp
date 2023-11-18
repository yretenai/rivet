// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LightingModeTransitionFinishedEvent.hpp>

namespace rivet::ddl::generated {
	LightingModeTransitionFinishedEvent::LightingModeTransitionFinishedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PrevMode = serialized->get_enum<rivet::ddl::generated::xee0945fb>(PrevMode_type_id, rivet::ddl::generated::xee0945fb_values);
		CurrMode = serialized->get_enum<rivet::ddl::generated::xee0945fb>(CurrMode_type_id, rivet::ddl::generated::xee0945fb_values); 
	}

	[[nodiscard]] auto
	LightingModeTransitionFinishedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LightingModeTransitionFinishedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightingModeTransitionFinishedEvent> {
		if (incoming_type_id == LightingModeTransitionFinishedEvent::type_id) {
			return std::make_shared<LightingModeTransitionFinishedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
