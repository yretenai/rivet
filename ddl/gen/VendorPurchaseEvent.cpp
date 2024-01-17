// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorPurchaseEvent.hpp>

namespace rivet::ddl::generated {
	VendorPurchaseEvent::VendorPurchaseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		WeaponName = serialized->get_string(WeaponName_type_id, {});
		ShowRemapTutorial = serialized->get_bool(ShowRemapTutorial_type_id, false); 
	}

	[[nodiscard]] auto
	VendorPurchaseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorPurchaseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorPurchaseEvent> {
		if (incoming_type_id == VendorPurchaseEvent::type_id) {
			return std::make_shared<VendorPurchaseEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
