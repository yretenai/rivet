// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponFiredEvent.hpp>

namespace rivet::ddl::generated {
	WeaponFiredEvent::WeaponFiredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponTriggeredEvent(serialized) {
		EmitLocatorName = serialized->get_string(EmitLocatorName_type_id, {});
		WeaponTypeName = serialized->get_string(WeaponTypeName_type_id, {});
		PerkName = serialized->get_string(PerkName_type_id, {}); 
	}

	[[nodiscard]] auto
	WeaponFiredEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponFiredEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponFiredEvent> {
		if (incoming_type_id == WeaponFiredEvent::type_id) {
			return std::make_shared<WeaponFiredEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
