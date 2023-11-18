// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectCloningEvent.hpp>

namespace rivet::ddl::generated {
	StatusEffectCloningEvent::StatusEffectCloningEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsOriginal = serialized->get_bool(IsOriginal_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectCloningEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectCloningEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectCloningEvent> {
		if (incoming_type_id == StatusEffectCloningEvent::type_id) {
			return std::make_shared<StatusEffectCloningEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
