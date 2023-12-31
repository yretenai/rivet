// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponIcicleBlastPrius.hpp>

namespace rivet::ddl::generated {
	WeaponIcicleBlastPrius::WeaponIcicleBlastPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {

	}

	[[nodiscard]] auto
	WeaponIcicleBlastPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponIcicleBlastPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponIcicleBlastPrius> {
		if (incoming_type_id == WeaponIcicleBlastPrius::type_id) {
			return std::make_shared<WeaponIcicleBlastPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
