// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrenadeHazardStopEvent.hpp>

namespace rivet::ddl::generated {
	GrenadeHazardStopEvent::GrenadeHazardStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	GrenadeHazardStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrenadeHazardStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrenadeHazardStopEvent> {
		if (incoming_type_id == GrenadeHazardStopEvent::type_id) {
			return std::make_shared<GrenadeHazardStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
