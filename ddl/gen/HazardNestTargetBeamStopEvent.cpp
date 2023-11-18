// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HazardNestTargetBeamStopEvent.hpp>

namespace rivet::ddl::generated {
	HazardNestTargetBeamStopEvent::HazardNestTargetBeamStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	HazardNestTargetBeamStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HazardNestTargetBeamStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HazardNestTargetBeamStopEvent> {
		if (incoming_type_id == HazardNestTargetBeamStopEvent::type_id) {
			return std::make_shared<HazardNestTargetBeamStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
