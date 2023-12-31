// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageStateChunkEjectedEvent.hpp>

namespace rivet::ddl::generated {
	DamageStateChunkEjectedEvent::DamageStateChunkEjectedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Locator = serialized->get_string(Locator_type_id); 
	}

	[[nodiscard]] auto
	DamageStateChunkEjectedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageStateChunkEjectedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStateChunkEjectedEvent> {
		if (incoming_type_id == DamageStateChunkEjectedEvent::type_id) {
			return std::make_shared<DamageStateChunkEjectedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
