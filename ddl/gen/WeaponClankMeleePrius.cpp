// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponClankMeleePrius.hpp>

namespace rivet::ddl::generated {
	WeaponClankMeleePrius::WeaponClankMeleePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponMeleePrius(serialized) {

	}

	[[nodiscard]] auto
	WeaponClankMeleePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponClankMeleePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponClankMeleePrius> {
		if (incoming_type_id == WeaponClankMeleePrius::type_id) {
			return std::make_shared<WeaponClankMeleePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated