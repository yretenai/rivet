// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MechanicUseEvent.hpp>

namespace rivet::ddl::generated {
	MechanicUseEvent::MechanicUseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UDSEventBase(serialized) {
		usedMechanics = serialized->get_strings(usedMechanics_type_id); 
	}

	[[nodiscard]] auto
	MechanicUseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MechanicUseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MechanicUseEvent> {
		if (incoming_type_id == MechanicUseEvent::type_id) {
			return std::make_shared<MechanicUseEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
