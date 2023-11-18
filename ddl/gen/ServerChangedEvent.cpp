// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ServerChangedEvent.hpp>

namespace rivet::ddl::generated {
	ServerChangedEvent::ServerChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		IsServer = serialized->get_bool(IsServer_type_id); 
	}

	[[nodiscard]] auto
	ServerChangedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ServerChangedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ServerChangedEvent> {
		if (incoming_type_id == ServerChangedEvent::type_id) {
			return std::make_shared<ServerChangedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
