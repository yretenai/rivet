// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShockwaveStartEvent.hpp>

namespace rivet::ddl::generated {
	ShockwaveStartEvent::ShockwaveStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Radius = serialized->get_float(Radius_type_id);
		Height = serialized->get_float(Height_type_id);
		GrowDuration = serialized->get_float(GrowDuration_type_id);
		LifeDuration = serialized->get_float(LifeDuration_type_id); 
	}

	[[nodiscard]] auto
	ShockwaveStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShockwaveStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShockwaveStartEvent> {
		if (incoming_type_id == ShockwaveStartEvent::type_id) {
			return std::make_shared<ShockwaveStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
