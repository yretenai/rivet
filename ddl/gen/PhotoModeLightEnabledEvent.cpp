// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhotoModeLightEnabledEvent.hpp>

namespace rivet::ddl::generated {
	PhotoModeLightEnabledEvent::PhotoModeLightEnabledEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		LightIndex = serialized->get_int32(LightIndex_type_id, 0);
		EnableState = serialized->get_bool(EnableState_type_id, false); 
	}

	[[nodiscard]] auto
	PhotoModeLightEnabledEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhotoModeLightEnabledEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotoModeLightEnabledEvent> {
		if (incoming_type_id == PhotoModeLightEnabledEvent::type_id) {
			return std::make_shared<PhotoModeLightEnabledEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
