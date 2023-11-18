// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UseTurretOfferPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/MannableTurretBataliaPrius.hpp>

namespace rivet::ddl::generated {
	MannableTurretBataliaPrius::MannableTurretBataliaPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CameraOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CameraOffset_type_id);
		PitchJoint = serialized->get_string(PitchJoint_type_id);
		YawJoint = serialized->get_string(YawJoint_type_id);
		YawLimitMin = serialized->get_float(YawLimitMin_type_id);
		YawLimitMax = serialized->get_float(YawLimitMax_type_id);
		PitchLimitMin = serialized->get_float(PitchLimitMin_type_id);
		PitchLimitMax = serialized->get_float(PitchLimitMax_type_id);
		MaxYawSpeed = serialized->get_float(MaxYawSpeed_type_id);
		MaxPitchSpeed = serialized->get_float(MaxPitchSpeed_type_id);
		ShotConfigMachineGun = serialized->get_string(ShotConfigMachineGun_type_id);
		MachineGunFireDelay = serialized->get_float(MachineGunFireDelay_type_id);
		ShotConfigIonCannon = serialized->get_string(ShotConfigIonCannon_type_id);
		MaxIonCannonDamageMultiplier = serialized->get_float(MaxIonCannonDamageMultiplier_type_id);
		MaxIonCannonEnergy = serialized->get_float(MaxIonCannonEnergy_type_id);
		OfferVolume = serialized->get_uint64(OfferVolume_type_id);
		ExternalActor = serialized->get_uint64(ExternalActor_type_id);
		DamageActor = serialized->get_uint64(DamageActor_type_id);
		TurretOfferPrius = serialized->unwrap_into<rivet::ddl::generated::UseTurretOfferPrius>(TurretOfferPrius_type_id); 
	}

	[[nodiscard]] auto
	MannableTurretBataliaPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MannableTurretBataliaPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MannableTurretBataliaPrius> {
		if (incoming_type_id == MannableTurretBataliaPrius::type_id) {
			return std::make_shared<MannableTurretBataliaPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
