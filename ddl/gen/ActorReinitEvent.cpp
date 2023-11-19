// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorReinitEvent.hpp>

namespace rivet::ddl::generated {
	ActorReinitEvent::ActorReinitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ActorReinitEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorReinitEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorReinitEvent> {
		if (incoming_type_id == ActorReinitEvent::type_id) {
			return std::make_shared<ActorReinitEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated