// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TrajectoryHighlightOnEvent.hpp>

namespace rivet::ddl::generated {
	TrajectoryHighlightOnEvent::TrajectoryHighlightOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ColorKeyFrameModName = serialized->get_string(ColorKeyFrameModName_type_id);
		ColorR = serialized->get_float(ColorR_type_id);
		ColorG = serialized->get_float(ColorG_type_id);
		ColorB = serialized->get_float(ColorB_type_id);
		ImpactScale = serialized->get_float(ImpactScale_type_id); 
	}

	[[nodiscard]] auto
	TrajectoryHighlightOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TrajectoryHighlightOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrajectoryHighlightOnEvent> {
		if (incoming_type_id == TrajectoryHighlightOnEvent::type_id) {
			return std::make_shared<TrajectoryHighlightOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
