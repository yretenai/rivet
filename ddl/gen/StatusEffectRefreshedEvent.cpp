// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectRefreshedEvent.hpp>

namespace rivet::ddl::generated {
	StatusEffectRefreshedEvent::StatusEffectRefreshedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectRefreshedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectRefreshedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectRefreshedEvent> {
		if (incoming_type_id == StatusEffectRefreshedEvent::type_id) {
			return std::make_shared<StatusEffectRefreshedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
