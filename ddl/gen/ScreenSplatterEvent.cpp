// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScreenSplatterEvent.hpp>

namespace rivet::ddl::generated {
	ScreenSplatterEvent::ScreenSplatterEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ViewContextIndex = serialized->get_int32(ViewContextIndex_type_id); 
	}

	[[nodiscard]] auto
	ScreenSplatterEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScreenSplatterEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScreenSplatterEvent> {
		if (incoming_type_id == ScreenSplatterEvent::type_id) {
			return std::make_shared<ScreenSplatterEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
