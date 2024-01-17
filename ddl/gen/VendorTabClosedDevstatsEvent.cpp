// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorTabClosedDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	VendorTabClosedDevstatsEvent::VendorTabClosedDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		EventId = serialized->get_string(EventId_type_id, {});
		TabSegmentId = serialized->get_string(TabSegmentId_type_id, {});
		ClosedTab = serialized->get_enum<rivet::ddl::generated::x868ac365>(ClosedTab_type_id, rivet::ddl::generated::x868ac365_values, rivet::ddl::generated::x868ac365::Purchase);
		Duration = serialized->get_float(Duration_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	VendorTabClosedDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorTabClosedDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorTabClosedDevstatsEvent> {
		if (incoming_type_id == VendorTabClosedDevstatsEvent::type_id) {
			return std::make_shared<VendorTabClosedDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
