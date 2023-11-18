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

#include <rivet/ddl/generated/enums/FlyerCameraStickOption.hpp>
#include <rivet/ddl/generated/enums/x8b42b541.hpp>
#include <rivet/ddl/generated/enums/xc74f3c1.hpp> 

namespace rivet::ddl::generated {
	struct DebugPlaytestHeroInfo;
	struct DebugPlaytestLoadInfo;
	struct DebugPlaytestMissionInfo; 

	struct RIVET_DDL_SHARED DebugPlaytest : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DebugPlaytest";
		constexpr static rivet::rivet_type_id type_id = 0xb90da889;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view CommandLineAlias_type_name = "CommandLineAlias";
		constexpr static rivet::rivet_type_id CommandLineAlias_type_id = 0x221022c0;
		constexpr static std::string_view IsDemo_type_name = "IsDemo";
		constexpr static rivet::rivet_type_id IsDemo_type_id = 0x490784cb;
		constexpr static std::string_view DemoName_type_name = "DemoName";
		constexpr static rivet::rivet_type_id DemoName_type_id = 0x62515d26;
		constexpr static std::string_view CineTimeCodeMode_type_name = "CineTimeCodeMode";
		constexpr static rivet::rivet_type_id CineTimeCodeMode_type_id = 0xf5029197;
		constexpr static std::string_view EnableRecoveryLedgesOnWalkOff_type_name = "EnableRecoveryLedgesOnWalkOff";
		constexpr static rivet::rivet_type_id EnableRecoveryLedgesOnWalkOff_type_id = 0x89333d78;
		constexpr static std::string_view EnableRecoveryLedgesOnRunOffCombat_type_name = "EnableRecoveryLedgesOnRunOffCombat";
		constexpr static rivet::rivet_type_id EnableRecoveryLedgesOnRunOffCombat_type_id = 0x5940e245;
		constexpr static std::string_view EnableRecoveryLedgesOnRunOffNoCombat_type_name = "EnableRecoveryLedgesOnRunOffNoCombat";
		constexpr static rivet::rivet_type_id EnableRecoveryLedgesOnRunOffNoCombat_type_id = 0xe4ca5bcb;
		constexpr static std::string_view EnableRecoveryLedgesOnKnockOff_type_name = "EnableRecoveryLedgesOnKnockOff";
		constexpr static rivet::rivet_type_id EnableRecoveryLedgesOnKnockOff_type_id = 0x89f226ba;
		constexpr static std::string_view EnableFrontRecoveryLedgesOnJump_type_name = "EnableFrontRecoveryLedgesOnJump";
		constexpr static rivet::rivet_type_id EnableFrontRecoveryLedgesOnJump_type_id = 0x22f471b7;
		constexpr static std::string_view EnablePlatformingShadowDecal_type_name = "EnablePlatformingShadowDecal";
		constexpr static rivet::rivet_type_id EnablePlatformingShadowDecal_type_id = 0x7740f899;
		constexpr static std::string_view RiftTetherCombatTargeting_type_name = "RiftTetherCombatTargeting";
		constexpr static rivet::rivet_type_id RiftTetherCombatTargeting_type_id = 0x8543519a;
		constexpr static std::string_view FlyerCameraStickOption_type_name = "FlyerCameraStickOption";
		constexpr static rivet::rivet_type_id FlyerCameraStickOption_type_id = 0xda2adf7d;
		constexpr static std::string_view FlyerCameraResponsivenessOption_type_name = "FlyerCameraResponsivenessOption";
		constexpr static rivet::rivet_type_id FlyerCameraResponsivenessOption_type_id = 0x2cb69e5f;
		constexpr static std::string_view FlyerStickInvert_type_name = "FlyerStickInvert";
		constexpr static rivet::rivet_type_id FlyerStickInvert_type_id = 0x22ab5eff;
		constexpr static std::string_view MissionInfo_type_name = "MissionInfo";
		constexpr static rivet::rivet_type_id MissionInfo_type_id = 0x30694131;
		constexpr static std::string_view LoadInfo_type_name = "LoadInfo";
		constexpr static rivet::rivet_type_id LoadInfo_type_id = 0x807ca7e6;
		constexpr static std::string_view OverrideHero_type_name = "OverrideHero";
		constexpr static rivet::rivet_type_id OverrideHero_type_id = 0xffc5854f;
		constexpr static std::string_view HeroInfo_type_name = "HeroInfo";
		constexpr static rivet::rivet_type_id HeroInfo_type_id = 0x52d4b776; 

		explicit DebugPlaytest() = default;
		explicit DebugPlaytest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::string_view Description {};
		std::string_view CommandLineAlias {};
		bool IsDemo {};
		std::string_view DemoName {};
		rivet::ddl::generated::xc74f3c1 CineTimeCodeMode {};
		bool EnableRecoveryLedgesOnWalkOff {};
		bool EnableRecoveryLedgesOnRunOffCombat {};
		bool EnableRecoveryLedgesOnRunOffNoCombat {};
		bool EnableRecoveryLedgesOnKnockOff {};
		bool EnableFrontRecoveryLedgesOnJump {};
		bool EnablePlatformingShadowDecal {};
		bool RiftTetherCombatTargeting {};
		rivet::ddl::generated::FlyerCameraStickOption FlyerCameraStickOption {};
		rivet::ddl::generated::x8b42b541 FlyerCameraResponsivenessOption {};
		bool FlyerStickInvert {};
		std::shared_ptr<rivet::ddl::generated::DebugPlaytestMissionInfo> MissionInfo {};
		std::shared_ptr<rivet::ddl::generated::DebugPlaytestLoadInfo> LoadInfo {};
		bool OverrideHero {};
		std::shared_ptr<rivet::ddl::generated::DebugPlaytestHeroInfo> HeroInfo {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlaytest>;
	};
} // namespace rivet::ddl::generated

// clang-format on
