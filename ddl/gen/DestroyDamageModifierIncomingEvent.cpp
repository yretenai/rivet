// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp> 

#include <rivet/ddl/generated/DestroyDamageModifierIncomingEvent.hpp>

namespace rivet::ddl::generated {
	DestroyDamageModifierIncomingEvent::DestroyDamageModifierIncomingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		DamageModPrius = serialized->unwrap_into<rivet::ddl::generated::DamageModifierIncomingPrius>(DamageModPrius_type_id); 
	}

	[[nodiscard]] auto
	DestroyDamageModifierIncomingEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DestroyDamageModifierIncomingEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DestroyDamageModifierIncomingEvent> {
		if (incoming_type_id == DestroyDamageModifierIncomingEvent::type_id) {
			return std::make_shared<DestroyDamageModifierIncomingEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
