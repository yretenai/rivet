// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponTriggerData.hpp> 

#include <rivet/ddl/generated/WeaponTriggerDataListItem.hpp>

namespace rivet::ddl::generated {
	WeaponTriggerDataListItem::WeaponTriggerDataListItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Trigger = serialized->unwrap_into<rivet::ddl::generated::WeaponTriggerData>(Trigger_type_id); 
	}

	[[nodiscard]] auto
	WeaponTriggerDataListItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponTriggerDataListItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponTriggerDataListItem> {
		if (incoming_type_id == WeaponTriggerDataListItem::type_id) {
			return std::make_shared<WeaponTriggerDataListItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
