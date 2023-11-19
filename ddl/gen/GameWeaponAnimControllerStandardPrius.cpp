// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponWarpRifleAnimControllerPrius.hpp>
#include <rivet/ddl/generated/RicochetWeaponAnimControllerPrius.hpp> 

#include <rivet/ddl/generated/GameWeaponAnimControllerStandardPrius.hpp>

namespace rivet::ddl::generated {
	GameWeaponAnimControllerStandardPrius::GameWeaponAnimControllerStandardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MatchIdleFidget = serialized->get_bool(MatchIdleFidget_type_id); 
	}

	[[nodiscard]] auto
	GameWeaponAnimControllerStandardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameWeaponAnimControllerStandardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameWeaponAnimControllerStandardPrius> {
		if (incoming_type_id == GameWeaponAnimControllerStandardPrius::type_id) {
			return std::make_shared<GameWeaponAnimControllerStandardPrius>(serialized);
		}

		auto RicochetWeaponAnimControllerPrius_ptr = RicochetWeaponAnimControllerPrius::from_substruct(incoming_type_id, serialized);
		if (RicochetWeaponAnimControllerPrius_ptr != nullptr) {
			return RicochetWeaponAnimControllerPrius_ptr;
		}

		auto WeaponWarpRifleAnimControllerPrius_ptr = WeaponWarpRifleAnimControllerPrius::from_substruct(incoming_type_id, serialized);
		if (WeaponWarpRifleAnimControllerPrius_ptr != nullptr) {
			return WeaponWarpRifleAnimControllerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated