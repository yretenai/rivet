// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MechanicImpactByEvent.hpp>

namespace rivet::ddl::generated {
	MechanicImpactByEvent::MechanicImpactByEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UDSEventBase(serialized) {
		usedMechanics = serialized->get_strings(usedMechanics_type_id);
		initiatorActor = serialized->get_string(initiatorActor_type_id, {});
		targetActors = serialized->get_strings(targetActors_type_id); 
	}

	[[nodiscard]] auto
	MechanicImpactByEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MechanicImpactByEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MechanicImpactByEvent> {
		if (incoming_type_id == MechanicImpactByEvent::type_id) {
			return std::make_shared<MechanicImpactByEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
