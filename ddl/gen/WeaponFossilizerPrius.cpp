// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponFossilizerPrius.hpp>

namespace rivet::ddl::generated {
	WeaponFossilizerPrius::WeaponFossilizerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponGamePrius(serialized) {
		SlowDownPercent = serialized->get_float(SlowDownPercent_type_id, 0.500000);
		SlowDownDuration = serialized->get_float(SlowDownDuration_type_id, 5.000000);
		BonusBulletCount = serialized->get_uint32(BonusBulletCount_type_id, 2);
		TimeToShootBonusBullet = serialized->get_float(TimeToShootBonusBullet_type_id, 0.050000);
		ZoomAlphaMod = serialized->get_float(ZoomAlphaMod_type_id, 0.700000); 
	}

	[[nodiscard]] auto
	WeaponFossilizerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponFossilizerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponFossilizerPrius> {
		if (incoming_type_id == WeaponFossilizerPrius::type_id) {
			return std::make_shared<WeaponFossilizerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
