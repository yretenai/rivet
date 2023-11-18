// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorTabOpenedDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	VendorTabOpenedDevstatsEvent::VendorTabOpenedDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id);
		TabSegmentId = serialized->get_string(TabSegmentId_type_id);
		OpenedTab = serialized->get_enum<rivet::ddl::generated::x868ac365>(OpenedTab_type_id, rivet::ddl::generated::x868ac365_values); 
	}

	[[nodiscard]] auto
	VendorTabOpenedDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorTabOpenedDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorTabOpenedDevstatsEvent> {
		if (incoming_type_id == VendorTabOpenedDevstatsEvent::type_id) {
			return std::make_shared<VendorTabOpenedDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
