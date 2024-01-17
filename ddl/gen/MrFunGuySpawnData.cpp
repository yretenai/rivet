// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/MrFunGuySpawnData.hpp>

namespace rivet::ddl::generated {
	MrFunGuySpawnData::MrFunGuySpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ActorSpawnData(serialized) {
		OwnerHandle = serialized->get_uint32(OwnerHandle_type_id, 0);
		ShotHandle = serialized->get_uint32(ShotHandle_type_id, 0);
		AssetId = serialized->get_uint64(AssetId_type_id, 0);
		ZoneIndex = serialized->get_int32(ZoneIndex_type_id, 0);
		TurretShotConfigAssetId = serialized->get_uint64(TurretShotConfigAssetId_type_id, 0);
		WeaponId = serialized->get_uint32(WeaponId_type_id, 0);
		WeaponNameHash = serialized->get_uint32(WeaponNameHash_type_id, 0);
		MaxLifetime = serialized->get_float(MaxLifetime_type_id, 0.000000);
		TurretShotDamage = serialized->get_float(TurretShotDamage_type_id, 0.000000);
		TurretFireRate = serialized->get_float(TurretFireRate_type_id, 0.000000);
		AttackRange = serialized->get_float(AttackRange_type_id, 0.000000);
		TurretAmmoCapacity = serialized->get_uint8(TurretAmmoCapacity_type_id, 0);
		PoisonStatusDuration = serialized->get_float(PoisonStatusDuration_type_id, 0.000000);
		HasAOECloudOnDeathUpgrade = serialized->get_float(HasAOECloudOnDeathUpgrade_type_id, 0.000000);
		MovementSpeedMultiplier = serialized->get_float(MovementSpeedMultiplier_type_id, 0.000000);
		AggroBias = serialized->get_float(AggroBias_type_id, 0.000000);
		GasDamage = serialized->get_float(GasDamage_type_id, 0.000000);
		SpawnBounceAngleOffset = serialized->get_float(SpawnBounceAngleOffset_type_id, 0.000000);
		SpawnBounceDistance = serialized->get_float(SpawnBounceDistance_type_id, 0.000000);
		SpawnPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnPos_type_id);
		Facing = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Facing_type_id);
		Up = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Up_type_id);
		LandPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LandPos_type_id); 
	}

	[[nodiscard]] auto
	MrFunGuySpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MrFunGuySpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MrFunGuySpawnData> {
		if (incoming_type_id == MrFunGuySpawnData::type_id) {
			return std::make_shared<MrFunGuySpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
