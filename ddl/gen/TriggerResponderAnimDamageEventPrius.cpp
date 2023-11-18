// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerResponderAnimDamageEventPrius.hpp>

namespace rivet::ddl::generated {
	TriggerResponderAnimDamageEventPrius::TriggerResponderAnimDamageEventPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerResponderBasePrius(serialized) {
		AttackIndex = serialized->get_uint32(AttackIndex_type_id);
		DamageDuration = serialized->get_float(DamageDuration_type_id); 
	}

	[[nodiscard]] auto
	TriggerResponderAnimDamageEventPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerResponderAnimDamageEventPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerResponderAnimDamageEventPrius> {
		if (incoming_type_id == TriggerResponderAnimDamageEventPrius::type_id) {
			return std::make_shared<TriggerResponderAnimDamageEventPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
