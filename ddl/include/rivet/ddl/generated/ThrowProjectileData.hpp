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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ThrowProjectileData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ThrowProjectileData";
		constexpr static rivet::rivet_type_id type_id = 0xc55cf2cc;

		constexpr static std::string_view ShotConfig_type_name = "ShotConfig";
		constexpr static rivet::rivet_type_id ShotConfig_type_id = 0xb171e6ae;
		constexpr static std::string_view DamageRequestId_type_name = "DamageRequestId";
		constexpr static rivet::rivet_type_id DamageRequestId_type_id = 0x7c3aad71;
		constexpr static std::string_view IntroDriver_type_name = "IntroDriver";
		constexpr static rivet::rivet_type_id IntroDriver_type_id = 0x9b209c3d;
		constexpr static std::string_view ThrowDriver_type_name = "ThrowDriver";
		constexpr static rivet::rivet_type_id ThrowDriver_type_id = 0x33c9ea6f;
		constexpr static std::string_view EmitLocator_type_name = "EmitLocator";
		constexpr static rivet::rivet_type_id EmitLocator_type_id = 0x138c6595;
		constexpr static std::string_view IntroDuration_type_name = "IntroDuration";
		constexpr static rivet::rivet_type_id IntroDuration_type_id = 0x5d9ecce9;
		constexpr static std::string_view WindUpDuration_type_name = "WindUpDuration";
		constexpr static rivet::rivet_type_id WindUpDuration_type_id = 0x11dca8da;
		constexpr static std::string_view ActiveDuration_type_name = "ActiveDuration";
		constexpr static rivet::rivet_type_id ActiveDuration_type_id = 0xda754e51;
		constexpr static std::string_view RecoveryDuration_type_name = "RecoveryDuration";
		constexpr static rivet::rivet_type_id RecoveryDuration_type_id = 0x3b07ba4;
		constexpr static std::string_view EnableTrackingDuringThrow_type_name = "EnableTrackingDuringThrow";
		constexpr static rivet::rivet_type_id EnableTrackingDuringThrow_type_id = 0xc557841c;
		constexpr static std::string_view EnableTrackingWhenRotationIsDisabled_type_name = "EnableTrackingWhenRotationIsDisabled";
		constexpr static rivet::rivet_type_id EnableTrackingWhenRotationIsDisabled_type_id = 0x5c8a6b87;
		constexpr static std::string_view AimInXZ_type_name = "AimInXZ";
		constexpr static rivet::rivet_type_id AimInXZ_type_id = 0xa2978852;
		constexpr static std::string_view CanDropProjectile_type_name = "CanDropProjectile";
		constexpr static rivet::rivet_type_id CanDropProjectile_type_id = 0x2ea6a015;
		constexpr static std::string_view UseTargetDataForAim_type_name = "UseTargetDataForAim";
		constexpr static rivet::rivet_type_id UseTargetDataForAim_type_id = 0xe211c273;
		constexpr static std::string_view AimIsEmitForward_type_name = "AimIsEmitForward";
		constexpr static rivet::rivet_type_id AimIsEmitForward_type_id = 0xb2a192a6;
		constexpr static std::string_view UseLastNavPosition_type_name = "UseLastNavPosition";
		constexpr static rivet::rivet_type_id UseLastNavPosition_type_id = 0xc387f89c;
		constexpr static std::string_view RequireClearArc_type_name = "RequireClearArc";
		constexpr static rivet::rivet_type_id RequireClearArc_type_id = 0x875b4f8;
		constexpr static std::string_view DropOffset_type_name = "DropOffset";
		constexpr static rivet::rivet_type_id DropOffset_type_id = 0x3422756f;
		constexpr static std::string_view OnDodgeWindUpMult_type_name = "OnDodgeWindUpMult";
		constexpr static rivet::rivet_type_id OnDodgeWindUpMult_type_id = 0x14c45397;
		constexpr static std::string_view DesiredLandOffset_type_name = "DesiredLandOffset";
		constexpr static rivet::rivet_type_id DesiredLandOffset_type_id = 0xe6a1c509;
		constexpr static std::string_view OffScreenLandOffset_type_name = "OffScreenLandOffset";
		constexpr static rivet::rivet_type_id OffScreenLandOffset_type_id = 0xda3e8365;
		constexpr static std::string_view MaxRotation_type_name = "MaxRotation";
		constexpr static rivet::rivet_type_id MaxRotation_type_id = 0xbd6d1045;
		constexpr static std::string_view CollIgnoreDist_type_name = "CollIgnoreDist";
		constexpr static rivet::rivet_type_id CollIgnoreDist_type_id = 0xd84ab22c;
		constexpr static std::string_view ShotCount_type_name = "ShotCount";
		constexpr static rivet::rivet_type_id ShotCount_type_id = 0xc1a3201c;
		constexpr static std::string_view ShotOffsetSide_type_name = "ShotOffsetSide";
		constexpr static rivet::rivet_type_id ShotOffsetSide_type_id = 0x2870b13e;
		constexpr static std::string_view ShotWarningActorAsset_type_name = "ShotWarningActorAsset";
		constexpr static rivet::rivet_type_id ShotWarningActorAsset_type_id = 0xf4f4686f;
		constexpr static std::string_view ShotWarningInterval_type_name = "ShotWarningInterval";
		constexpr static rivet::rivet_type_id ShotWarningInterval_type_id = 0x9ee13df7;
		constexpr static std::string_view TargetPredictionAddTime_type_name = "TargetPredictionAddTime";
		constexpr static rivet::rivet_type_id TargetPredictionAddTime_type_id = 0x7f636004;
		constexpr static std::string_view TargetPredictionMaxTime_type_name = "TargetPredictionMaxTime";
		constexpr static rivet::rivet_type_id TargetPredictionMaxTime_type_id = 0x4d1ee140; 

		explicit ThrowProjectileData() = default;
		explicit ThrowProjectileData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ShotConfig {};
		std::string_view DamageRequestId {};
		std::string_view IntroDriver {};
		std::string_view ThrowDriver {};
		std::string_view EmitLocator {};
		float IntroDuration {};
		float WindUpDuration {};
		float ActiveDuration {};
		float RecoveryDuration {};
		bool EnableTrackingDuringThrow {};
		bool EnableTrackingWhenRotationIsDisabled {};
		bool AimInXZ {};
		bool CanDropProjectile {};
		bool UseTargetDataForAim {};
		bool AimIsEmitForward {};
		bool UseLastNavPosition {};
		bool RequireClearArc {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> DropOffset {};
		float OnDodgeWindUpMult {};
		float DesiredLandOffset {};
		float OffScreenLandOffset {};
		float MaxRotation {};
		float CollIgnoreDist {};
		int32_t ShotCount {};
		float ShotOffsetSide {};
		std::string_view ShotWarningActorAsset {};
		float ShotWarningInterval {};
		float TargetPredictionAddTime {};
		float TargetPredictionMaxTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ThrowProjectileData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
