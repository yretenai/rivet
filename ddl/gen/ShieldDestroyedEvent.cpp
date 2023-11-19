// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShieldDestroyedEvent.hpp>

namespace rivet::ddl::generated {
	ShieldDestroyedEvent::ShieldDestroyedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ShieldDestroyedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShieldDestroyedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShieldDestroyedEvent> {
		if (incoming_type_id == ShieldDestroyedEvent::type_id) {
			return std::make_shared<ShieldDestroyedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated