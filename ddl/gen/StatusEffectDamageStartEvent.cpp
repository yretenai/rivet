// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectDamageStartEvent.hpp>

namespace rivet::ddl::generated {
	StatusEffectDamageStartEvent::StatusEffectDamageStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		DamageTypeName = serialized->get_string(DamageTypeName_type_id, {}); 
	}

	[[nodiscard]] auto
	StatusEffectDamageStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectDamageStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectDamageStartEvent> {
		if (incoming_type_id == StatusEffectDamageStartEvent::type_id) {
			return std::make_shared<StatusEffectDamageStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
