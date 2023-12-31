// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectVampireDrainEvent.hpp>

namespace rivet::ddl::generated {
	StatusEffectVampireDrainEvent::StatusEffectVampireDrainEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Amount = serialized->get_float(Amount_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectVampireDrainEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectVampireDrainEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectVampireDrainEvent> {
		if (incoming_type_id == StatusEffectVampireDrainEvent::type_id) {
			return std::make_shared<StatusEffectVampireDrainEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
