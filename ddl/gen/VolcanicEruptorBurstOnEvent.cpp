// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolcanicEruptorBurstOnEvent.hpp>

namespace rivet::ddl::generated {
	VolcanicEruptorBurstOnEvent::VolcanicEruptorBurstOnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Height = serialized->get_float(Height_type_id);
		Radius = serialized->get_float(Radius_type_id); 
	}

	[[nodiscard]] auto
	VolcanicEruptorBurstOnEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolcanicEruptorBurstOnEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolcanicEruptorBurstOnEvent> {
		if (incoming_type_id == VolcanicEruptorBurstOnEvent::type_id) {
			return std::make_shared<VolcanicEruptorBurstOnEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
