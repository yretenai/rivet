// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimEquipBeamStartEvent.hpp>

namespace rivet::ddl::generated {
	AnimEquipBeamStartEvent::AnimEquipBeamStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Weapon = serialized->get_enum<rivet::ddl::generated::x63d44ada>(Weapon_type_id, rivet::ddl::generated::x63d44ada_values, rivet::ddl::generated::x63d44ada::None); 
	}

	[[nodiscard]] auto
	AnimEquipBeamStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimEquipBeamStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimEquipBeamStartEvent> {
		if (incoming_type_id == AnimEquipBeamStartEvent::type_id) {
			return std::make_shared<AnimEquipBeamStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
