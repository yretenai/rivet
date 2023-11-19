// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimGrenadeReleaseEvent.hpp>

namespace rivet::ddl::generated {
	AnimGrenadeReleaseEvent::AnimGrenadeReleaseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EmitLocatorOverride = serialized->get_string(EmitLocatorOverride_type_id); 
	}

	[[nodiscard]] auto
	AnimGrenadeReleaseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimGrenadeReleaseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimGrenadeReleaseEvent> {
		if (incoming_type_id == AnimGrenadeReleaseEvent::type_id) {
			return std::make_shared<AnimGrenadeReleaseEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated