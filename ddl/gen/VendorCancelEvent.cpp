// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorCancelEvent.hpp>

namespace rivet::ddl::generated {
	VendorCancelEvent::VendorCancelEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	VendorCancelEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorCancelEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorCancelEvent> {
		if (incoming_type_id == VendorCancelEvent::type_id) {
			return std::make_shared<VendorCancelEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated