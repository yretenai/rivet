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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct UseMagCamInfo;
	struct WarshipFiringRangeDiffValue; 

	struct RIVET_DDL_SHARED SpaceshipMagnetConfig : ConfigBase {
		constexpr static std::string_view type_name = "SpaceshipMagnetConfig";
		constexpr static rivet::rivet_type_id type_id = 0xebfe9a68;

		constexpr static std::string_view AllowBullets_type_name = "AllowBullets";
		constexpr static rivet::rivet_type_id AllowBullets_type_id = 0xd6fc571f;
		constexpr static std::string_view RestrictTarget_type_name = "RestrictTarget";
		constexpr static rivet::rivet_type_id RestrictTarget_type_id = 0x322f5ee0;
		constexpr static std::string_view FireOnlyOnValidTargets_type_name = "FireOnlyOnValidTargets";
		constexpr static rivet::rivet_type_id FireOnlyOnValidTargets_type_id = 0x9952dd84;
		constexpr static std::string_view TowedActorDamage_type_name = "TowedActorDamage";
		constexpr static rivet::rivet_type_id TowedActorDamage_type_id = 0x52bb86a3;
		constexpr static std::string_view WarshipFiringRange_type_name = "WarshipFiringRange";
		constexpr static rivet::rivet_type_id WarshipFiringRange_type_id = 0x1effa22c;
		constexpr static std::string_view MagnetShipSpeed_type_name = "MagnetShipSpeed";
		constexpr static rivet::rivet_type_id MagnetShipSpeed_type_id = 0x420012f7;
		constexpr static std::string_view MagnetPitch_type_name = "MagnetPitch";
		constexpr static rivet::rivet_type_id MagnetPitch_type_id = 0xd71c40f7;
		constexpr static std::string_view MagnetFixed_type_name = "MagnetFixed";
		constexpr static rivet::rivet_type_id MagnetFixed_type_id = 0x6e4a301c;
		constexpr static std::string_view MagnetRangeEasy_type_name = "MagnetRangeEasy";
		constexpr static rivet::rivet_type_id MagnetRangeEasy_type_id = 0x432555;
		constexpr static std::string_view MagnetRadiusEasy_type_name = "MagnetRadiusEasy";
		constexpr static rivet::rivet_type_id MagnetRadiusEasy_type_id = 0x148da013;
		constexpr static std::string_view MagnetRange_type_name = "MagnetRange";
		constexpr static rivet::rivet_type_id MagnetRange_type_id = 0x6304a467;
		constexpr static std::string_view MagnetRadius_type_name = "MagnetRadius";
		constexpr static rivet::rivet_type_id MagnetRadius_type_id = 0x35580fe6;
		constexpr static std::string_view MagnetRangeHard_type_name = "MagnetRangeHard";
		constexpr static rivet::rivet_type_id MagnetRangeHard_type_id = 0x8834a010;
		constexpr static std::string_view MagnetRadiusHard_type_name = "MagnetRadiusHard";
		constexpr static rivet::rivet_type_id MagnetRadiusHard_type_id = 0x9cfa2556;
		constexpr static std::string_view EnergyInit_type_name = "EnergyInit";
		constexpr static rivet::rivet_type_id EnergyInit_type_id = 0xde1ee59a;
		constexpr static std::string_view EnergyMinThreshold_type_name = "EnergyMinThreshold";
		constexpr static rivet::rivet_type_id EnergyMinThreshold_type_id = 0xaed989d;
		constexpr static std::string_view EnergyMaxRegen_type_name = "EnergyMaxRegen";
		constexpr static rivet::rivet_type_id EnergyMaxRegen_type_id = 0xcf17af27;
		constexpr static std::string_view RegenTime_type_name = "RegenTime";
		constexpr static rivet::rivet_type_id RegenTime_type_id = 0xfc6203e7;
		constexpr static std::string_view TowMax_type_name = "TowMax";
		constexpr static rivet::rivet_type_id TowMax_type_id = 0xa8f965d1;
		constexpr static std::string_view MaxAttackRuns_type_name = "MaxAttackRuns";
		constexpr static rivet::rivet_type_id MaxAttackRuns_type_id = 0x36e69b0f;
		constexpr static std::string_view AutoDestroyOnMaxRuns_type_name = "AutoDestroyOnMaxRuns";
		constexpr static rivet::rivet_type_id AutoDestroyOnMaxRuns_type_id = 0xdfab099e;
		constexpr static std::string_view TargetRadius_type_name = "TargetRadius";
		constexpr static rivet::rivet_type_id TargetRadius_type_id = 0xc9cd247c;
		constexpr static std::string_view UseMagCamInfoEasy_type_name = "UseMagCamInfoEasy";
		constexpr static rivet::rivet_type_id UseMagCamInfoEasy_type_id = 0xd20a75b2;
		constexpr static std::string_view UseMagCamInfoNormal_type_name = "UseMagCamInfoNormal";
		constexpr static rivet::rivet_type_id UseMagCamInfoNormal_type_id = 0xb81ace7d;
		constexpr static std::string_view UseMagCamInfoHard_type_name = "UseMagCamInfoHard";
		constexpr static rivet::rivet_type_id UseMagCamInfoHard_type_id = 0x5a7df0f7;
		constexpr static std::string_view UseMagTransInCamTimeMin_type_name = "UseMagTransInCamTimeMin";
		constexpr static rivet::rivet_type_id UseMagTransInCamTimeMin_type_id = 0x2463f6cf;
		constexpr static std::string_view UseMagTransInCamTimeMax_type_name = "UseMagTransInCamTimeMax";
		constexpr static rivet::rivet_type_id UseMagTransInCamTimeMax_type_id = 0x186ec996;
		constexpr static std::string_view UseMagTransOutCamTimeMin_type_name = "UseMagTransOutCamTimeMin";
		constexpr static rivet::rivet_type_id UseMagTransOutCamTimeMin_type_id = 0x3d0362f8;
		constexpr static std::string_view UseMagTransOutCamTimeMax_type_name = "UseMagTransOutCamTimeMax";
		constexpr static rivet::rivet_type_id UseMagTransOutCamTimeMax_type_id = 0x10e5da1;
		constexpr static std::string_view TowCamCurveConfig_type_name = "TowCamCurveConfig";
		constexpr static rivet::rivet_type_id TowCamCurveConfig_type_id = 0xb5081406;
		constexpr static std::string_view TowCamMaxOffset_type_name = "TowCamMaxOffset";
		constexpr static rivet::rivet_type_id TowCamMaxOffset_type_id = 0xb4173ae2; 

		explicit SpaceshipMagnetConfig() = default;
		explicit SpaceshipMagnetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool AllowBullets {};
		bool RestrictTarget {};
		bool FireOnlyOnValidTargets {};
		float TowedActorDamage {};
		std::shared_ptr<rivet::ddl::generated::WarshipFiringRangeDiffValue> WarshipFiringRange {};
		float MagnetShipSpeed {};
		float MagnetPitch {};
		bool MagnetFixed {};
		float MagnetRangeEasy {};
		float MagnetRadiusEasy {};
		float MagnetRange {};
		float MagnetRadius {};
		float MagnetRangeHard {};
		float MagnetRadiusHard {};
		float EnergyInit {};
		float EnergyMinThreshold {};
		float EnergyMaxRegen {};
		float RegenTime {};
		uint8_t TowMax {};
		uint8_t MaxAttackRuns {};
		bool AutoDestroyOnMaxRuns {};
		float TargetRadius {};
		std::shared_ptr<rivet::ddl::generated::UseMagCamInfo> UseMagCamInfoEasy {};
		std::shared_ptr<rivet::ddl::generated::UseMagCamInfo> UseMagCamInfoNormal {};
		std::shared_ptr<rivet::ddl::generated::UseMagCamInfo> UseMagCamInfoHard {};
		float UseMagTransInCamTimeMin {};
		float UseMagTransInCamTimeMax {};
		float UseMagTransOutCamTimeMin {};
		float UseMagTransOutCamTimeMax {};
		std::string_view TowCamCurveConfig {};
		float TowCamMaxOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpaceshipMagnetConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
