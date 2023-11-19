// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageRollTriggeredEvent.hpp>

namespace rivet::ddl::generated {
	DamageRollTriggeredEvent::DamageRollTriggeredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	DamageRollTriggeredEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageRollTriggeredEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageRollTriggeredEvent> {
		if (incoming_type_id == DamageRollTriggeredEvent::type_id) {
			return std::make_shared<DamageRollTriggeredEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated