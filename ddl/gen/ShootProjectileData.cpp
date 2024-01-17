// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModWrapper.hpp>
#include <rivet/ddl/generated/BurstSequence.hpp> 

#include <rivet/ddl/generated/ShootProjectileData.hpp>

namespace rivet::ddl::generated {
	ShootProjectileData::ShootProjectileData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ShootFlags = serialized->get_bitset<rivet::ddl::generated::x768b595c>(ShootFlags_type_id, rivet::ddl::generated::x768b595c_values, 9);
		FireIntroAnim = serialized->get_string(FireIntroAnim_type_id, {});
		FireAnim = serialized->get_string(FireAnim_type_id, {});
		FireOutroAnim = serialized->get_string(FireOutroAnim_type_id, {});
		ChargeTimeMin = serialized->get_float(ChargeTimeMin_type_id, 0.000000);
		ChargeTimeMax = serialized->get_float(ChargeTimeMax_type_id, 0.000000);
		ShotSpawnerDescription = serialized->get_string(ShotSpawnerDescription_type_id, {});
		ShotIndex = serialized->get_int32(ShotIndex_type_id, 0);
		UseOverrideBurst = serialized->get_bool(UseOverrideBurst_type_id, false);
		OverrideBurst = serialized->unwrap_into<rivet::ddl::generated::BurstSequence>(OverrideBurst_type_id);
		AimMods = serialized->unwrap_into_many<rivet::ddl::generated::AimModWrapper>(AimMods_type_id);
		CleanupAimModsOnBurstComplete = serialized->get_bool(CleanupAimModsOnBurstComplete_type_id, false); 
	}

	[[nodiscard]] auto
	ShootProjectileData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShootProjectileData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootProjectileData> {
		if (incoming_type_id == ShootProjectileData::type_id) {
			return std::make_shared<ShootProjectileData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
