// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorWeaponStat.hpp> 

#include <rivet/ddl/generated/VendorWeaponInfo.hpp>

namespace rivet::ddl::generated {
	VendorWeaponInfo::VendorWeaponInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Class = serialized->get_string(Class_type_id);
		Special = serialized->get_string(Special_type_id);
		Stats = serialized->unwrap_into_many<rivet::ddl::generated::VendorWeaponStat>(Stats_type_id);
		CustomStatName = serialized->get_string(CustomStatName_type_id); 
	}

	[[nodiscard]] auto
	VendorWeaponInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorWeaponInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorWeaponInfo> {
		if (incoming_type_id == VendorWeaponInfo::type_id) {
			return std::make_shared<VendorWeaponInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
