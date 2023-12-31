// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponNailGunPrius.hpp>

namespace rivet::ddl::generated {
	WeaponNailGunPrius::WeaponNailGunPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {

	}

	[[nodiscard]] auto
	WeaponNailGunPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponNailGunPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponNailGunPrius> {
		if (incoming_type_id == WeaponNailGunPrius::type_id) {
			return std::make_shared<WeaponNailGunPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
