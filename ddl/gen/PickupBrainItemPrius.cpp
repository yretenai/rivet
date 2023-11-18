// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupBrainItemPrius.hpp>

namespace rivet::ddl::generated {
	PickupBrainItemPrius::PickupBrainItemPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PickupItemPrius(serialized) {

	}

	[[nodiscard]] auto
	PickupBrainItemPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupBrainItemPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupBrainItemPrius> {
		if (incoming_type_id == PickupBrainItemPrius::type_id) {
			return std::make_shared<PickupBrainItemPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
