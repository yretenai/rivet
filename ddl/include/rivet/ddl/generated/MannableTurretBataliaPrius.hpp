// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct UseTurretOfferPrius;
	struct DDLVector3; 

	struct RIVET_DDL_SHARED MannableTurretBataliaPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MannableTurretBataliaPrius";
		constexpr static rivet::rivet_type_id type_id = 0x4a2cdeda;

		constexpr static std::string_view CameraOffset_type_name = "CameraOffset";
		constexpr static rivet::rivet_type_id CameraOffset_type_id = 0x68f0fd3d;
		constexpr static std::string_view PitchJoint_type_name = "PitchJoint";
		constexpr static rivet::rivet_type_id PitchJoint_type_id = 0xd2c06413;
		constexpr static std::string_view YawJoint_type_name = "YawJoint";
		constexpr static rivet::rivet_type_id YawJoint_type_id = 0x8dcc3694;
		constexpr static std::string_view YawLimitMin_type_name = "YawLimitMin";
		constexpr static rivet::rivet_type_id YawLimitMin_type_id = 0xbad2fd6;
		constexpr static std::string_view YawLimitMax_type_name = "YawLimitMax";
		constexpr static rivet::rivet_type_id YawLimitMax_type_id = 0x37a0108f;
		constexpr static std::string_view PitchLimitMin_type_name = "PitchLimitMin";
		constexpr static rivet::rivet_type_id PitchLimitMin_type_id = 0x6eec5171;
		constexpr static std::string_view PitchLimitMax_type_name = "PitchLimitMax";
		constexpr static rivet::rivet_type_id PitchLimitMax_type_id = 0x52e16e28;
		constexpr static std::string_view MaxYawSpeed_type_name = "MaxYawSpeed";
		constexpr static rivet::rivet_type_id MaxYawSpeed_type_id = 0x710f81a1;
		constexpr static std::string_view MaxPitchSpeed_type_name = "MaxPitchSpeed";
		constexpr static rivet::rivet_type_id MaxPitchSpeed_type_id = 0xb9365e9b;
		constexpr static std::string_view ShotConfigMachineGun_type_name = "ShotConfigMachineGun";
		constexpr static rivet::rivet_type_id ShotConfigMachineGun_type_id = 0x56b26112;
		constexpr static std::string_view MachineGunFireDelay_type_name = "MachineGunFireDelay";
		constexpr static rivet::rivet_type_id MachineGunFireDelay_type_id = 0xe38befd9;
		constexpr static std::string_view ShotConfigIonCannon_type_name = "ShotConfigIonCannon";
		constexpr static rivet::rivet_type_id ShotConfigIonCannon_type_id = 0xae622536;
		constexpr static std::string_view MaxIonCannonDamageMultiplier_type_name = "MaxIonCannonDamageMultiplier";
		constexpr static rivet::rivet_type_id MaxIonCannonDamageMultiplier_type_id = 0xd4fd1bea;
		constexpr static std::string_view MaxIonCannonEnergy_type_name = "MaxIonCannonEnergy";
		constexpr static rivet::rivet_type_id MaxIonCannonEnergy_type_id = 0x67c14c45;
		constexpr static std::string_view OfferVolume_type_name = "OfferVolume";
		constexpr static rivet::rivet_type_id OfferVolume_type_id = 0x3aff0846;
		constexpr static std::string_view ExternalActor_type_name = "ExternalActor";
		constexpr static rivet::rivet_type_id ExternalActor_type_id = 0x72f78b5f;
		constexpr static std::string_view DamageActor_type_name = "DamageActor";
		constexpr static rivet::rivet_type_id DamageActor_type_id = 0xdca0ce77;
		constexpr static std::string_view TurretOfferPrius_type_name = "TurretOfferPrius";
		constexpr static rivet::rivet_type_id TurretOfferPrius_type_id = 0x50d39793; 

		explicit MannableTurretBataliaPrius() = default;
		explicit MannableTurretBataliaPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> CameraOffset {};
		std::string_view PitchJoint {};
		std::string_view YawJoint {};
		float YawLimitMin {};
		float YawLimitMax {};
		float PitchLimitMin {};
		float PitchLimitMax {};
		float MaxYawSpeed {};
		float MaxPitchSpeed {};
		std::string_view ShotConfigMachineGun {};
		float MachineGunFireDelay {};
		std::string_view ShotConfigIonCannon {};
		float MaxIonCannonDamageMultiplier {};
		float MaxIonCannonEnergy {};
		uint64_t OfferVolume {};
		uint64_t ExternalActor {};
		uint64_t DamageActor {};
		std::shared_ptr<rivet::ddl::generated::UseTurretOfferPrius> TurretOfferPrius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MannableTurretBataliaPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
