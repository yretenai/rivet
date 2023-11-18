// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RYNOPortalObjectCreateEvent.hpp>

namespace rivet::ddl::generated {
	RYNOPortalObjectCreateEvent::RYNOPortalObjectCreateEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PortalSize = serialized->get_enum<rivet::ddl::generated::xbf5ff3c6>(PortalSize_type_id, rivet::ddl::generated::xbf5ff3c6_values); 
	}

	[[nodiscard]] auto
	RYNOPortalObjectCreateEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RYNOPortalObjectCreateEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RYNOPortalObjectCreateEvent> {
		if (incoming_type_id == RYNOPortalObjectCreateEvent::type_id) {
			return std::make_shared<RYNOPortalObjectCreateEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
