// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeleeWeaponItemPrius.hpp> 

#include <rivet/ddl/generated/WeaponItemPrius.hpp>

namespace rivet::ddl::generated {
	WeaponItemPrius::WeaponItemPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameItemPrius(serialized) {
		LastCheckpointAmmo = serialized->get_float(LastCheckpointAmmo_type_id, 0.000000);
		LoadedAmmo = serialized->get_float(LoadedAmmo_type_id, 0.000000);
		ModCount = serialized->get_uint8s(ModCount_type_id);
		SelectedCell = serialized->get_uint8(SelectedCell_type_id, 0);
		Omega = serialized->get_bool(Omega_type_id, false); 
	}

	[[nodiscard]] auto
	WeaponItemPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponItemPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponItemPrius> {
		if (incoming_type_id == WeaponItemPrius::type_id) {
			return std::make_shared<WeaponItemPrius>(serialized);
		}

		auto MeleeWeaponItemPrius_ptr = MeleeWeaponItemPrius::from_substruct(incoming_type_id, serialized);
		if (MeleeWeaponItemPrius_ptr != nullptr) {
			return MeleeWeaponItemPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
