// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponWalloperPrius.hpp>

namespace rivet::ddl::generated {
	WeaponWalloperPrius::WeaponWalloperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {

	}

	[[nodiscard]] auto
	WeaponWalloperPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponWalloperPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponWalloperPrius> {
		if (incoming_type_id == WeaponWalloperPrius::type_id) {
			return std::make_shared<WeaponWalloperPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
