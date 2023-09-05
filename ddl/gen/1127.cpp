// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponMagShieldPrius.hpp>

namespace rivet::ddl::generated {
	WeaponMagShieldPrius::WeaponMagShieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		BlastWaveMinTime = serialized->get_float(BlastWaveMinTime_type_id); 
	}

	auto
	WeaponMagShieldPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponMagShieldPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponMagShieldPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponMagShieldPrius> {
		if (incoming_type_id == WeaponMagShieldPrius::type_id) {
			return std::make_shared<WeaponMagShieldPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
