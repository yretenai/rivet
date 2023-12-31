// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageDealtIgnoredEvent.hpp>

namespace rivet::ddl::generated {
	DamageDealtIgnoredEvent::DamageDealtIgnoredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageEventBase(serialized) {

	}

	[[nodiscard]] auto
	DamageDealtIgnoredEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageDealtIgnoredEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageDealtIgnoredEvent> {
		if (incoming_type_id == DamageDealtIgnoredEvent::type_id) {
			return std::make_shared<DamageDealtIgnoredEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
