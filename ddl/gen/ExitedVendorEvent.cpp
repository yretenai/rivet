// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ExitedVendorEvent.hpp>

namespace rivet::ddl::generated {
	ExitedVendorEvent::ExitedVendorEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PurchasedItem = serialized->get_string(PurchasedItem_type_id, {});
		AnimName = serialized->get_string(AnimName_type_id, "Pickup_Item"); 
	}

	[[nodiscard]] auto
	ExitedVendorEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ExitedVendorEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExitedVendorEvent> {
		if (incoming_type_id == ExitedVendorEvent::type_id) {
			return std::make_shared<ExitedVendorEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
