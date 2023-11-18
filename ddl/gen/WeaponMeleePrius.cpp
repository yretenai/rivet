// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponHammerPrius.hpp>
#include <rivet/ddl/generated/WeaponWrenchPrius.hpp>
#include <rivet/ddl/generated/WeaponClankMeleePrius.hpp> 

#include <rivet/ddl/generated/WeaponMeleePrius.hpp>

namespace rivet::ddl::generated {
	WeaponMeleePrius::WeaponMeleePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		SnapRangeEnemy = serialized->get_float(SnapRangeEnemy_type_id);
		SnapRangeBreak = serialized->get_float(SnapRangeBreak_type_id);
		EmissiveColorConstantName = serialized->get_string(EmissiveColorConstantName_type_id);
		EmissiveMaterialMappingName = serialized->get_string(EmissiveMaterialMappingName_type_id);
		DefaultEmissiveIDValue = serialized->get_float(DefaultEmissiveIDValue_type_id);
		UpgradeEmissiveIDValue = serialized->get_float(UpgradeEmissiveIDValue_type_id); 
	}

	[[nodiscard]] auto
	WeaponMeleePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponMeleePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponMeleePrius> {
		if (incoming_type_id == WeaponMeleePrius::type_id) {
			return std::make_shared<WeaponMeleePrius>(serialized);
		}

		auto WeaponClankMeleePrius_ptr = WeaponClankMeleePrius::from_substruct(incoming_type_id, serialized);
		if (WeaponClankMeleePrius_ptr != nullptr) {
			return WeaponClankMeleePrius_ptr;
		}

		auto WeaponWrenchPrius_ptr = WeaponWrenchPrius::from_substruct(incoming_type_id, serialized);
		if (WeaponWrenchPrius_ptr != nullptr) {
			return WeaponWrenchPrius_ptr;
		}

		auto WeaponHammerPrius_ptr = WeaponHammerPrius::from_substruct(incoming_type_id, serialized);
		if (WeaponHammerPrius_ptr != nullptr) {
			return WeaponHammerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
