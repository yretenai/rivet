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

#include <rivet/ddl/generated/enums/xb82a951f.hpp>
#include <rivet/ddl/generated/enums/xd3dac94.hpp>
#include <rivet/ddl/generated/enums/xd5643d7e.hpp>
#include <rivet/ddl/generated/enums/x597cb7da.hpp>
#include <rivet/ddl/generated/enums/xc533d93f.hpp>
#include <rivet/ddl/generated/enums/xc968d790.hpp>
#include <rivet/ddl/generated/enums/x8c1c9e5c.hpp>
#include <rivet/ddl/generated/WeaponConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct WeaponObstructionBase;
	struct WeaponReticleInfo;
	struct WeaponTargetingInfo;
	struct WeaponEarnedXPData;
	struct WeaponLevelDataListItem; 

	struct RIVET_DDL_SHARED WeaponConfig : WeaponConfigBase {
		constexpr static std::string_view type_name = "WeaponConfig";
		constexpr static rivet::rivet_type_id type_id = 0xb72a0e33;

		constexpr static std::string_view LevelList_type_name = "LevelList";
		constexpr static rivet::rivet_type_id LevelList_type_id = 0x8553e43;
		constexpr static std::string_view XPSourceList_type_name = "XPSourceList";
		constexpr static rivet::rivet_type_id XPSourceList_type_id = 0xb611f4fa;
		constexpr static std::string_view GripStyle_type_name = "GripStyle";
		constexpr static rivet::rivet_type_id GripStyle_type_id = 0x93d195a6;
		constexpr static std::string_view HolsterType_type_name = "HolsterType";
		constexpr static rivet::rivet_type_id HolsterType_type_id = 0x7a8cd201;
		constexpr static std::string_view SlotType_type_name = "SlotType";
		constexpr static rivet::rivet_type_id SlotType_type_id = 0x9b20e70;
		constexpr static std::string_view FireStyle_type_name = "FireStyle";
		constexpr static rivet::rivet_type_id FireStyle_type_id = 0x93b9f784;
		constexpr static std::string_view ReloadStyle_type_name = "ReloadStyle";
		constexpr static rivet::rivet_type_id ReloadStyle_type_id = 0x4ebd6ef8;
		constexpr static std::string_view OffsetStyle_type_name = "OffsetStyle";
		constexpr static rivet::rivet_type_id OffsetStyle_type_id = 0x894bd445;
		constexpr static std::string_view HudWeaponTypeEnum_type_name = "HudWeaponTypeEnum";
		constexpr static rivet::rivet_type_id HudWeaponTypeEnum_type_id = 0xad66be60;
		constexpr static std::string_view ZoomConfig_type_name = "ZoomConfig";
		constexpr static rivet::rivet_type_id ZoomConfig_type_id = 0xdb4379b0;
		constexpr static std::string_view BeamInConfig_type_name = "BeamInConfig";
		constexpr static rivet::rivet_type_id BeamInConfig_type_id = 0x41075a28;
		constexpr static std::string_view AimTriggerEffectConfigOverride_type_name = "AimTriggerEffectConfigOverride";
		constexpr static rivet::rivet_type_id AimTriggerEffectConfigOverride_type_id = 0xcc48488a;
		constexpr static std::string_view LightAimTriggerEffectConfigOverride_type_name = "LightAimTriggerEffectConfigOverride";
		constexpr static rivet::rivet_type_id LightAimTriggerEffectConfigOverride_type_id = 0x5de7f54e;
		constexpr static std::string_view FireTriggerEffectConfigOverride_type_name = "FireTriggerEffectConfigOverride";
		constexpr static rivet::rivet_type_id FireTriggerEffectConfigOverride_type_id = 0x48e6a944;
		constexpr static std::string_view LightFireTriggerEffectConfigOverride_type_name = "LightFireTriggerEffectConfigOverride";
		constexpr static rivet::rivet_type_id LightFireTriggerEffectConfigOverride_type_id = 0xd47e0050;
		constexpr static std::string_view TargetingInfo_type_name = "TargetingInfo";
		constexpr static rivet::rivet_type_id TargetingInfo_type_id = 0x1f11b0ec;
		constexpr static std::string_view ReticleInfo_type_name = "ReticleInfo";
		constexpr static rivet::rivet_type_id ReticleInfo_type_id = 0xcb75cd69;
		constexpr static std::string_view ModConfig_type_name = "ModConfig";
		constexpr static rivet::rivet_type_id ModConfig_type_id = 0xdd0ebc59;
		constexpr static std::string_view GridConfig_type_name = "GridConfig";
		constexpr static rivet::rivet_type_id GridConfig_type_id = 0x76b9a9a;
		constexpr static std::string_view GloveModelOverride_type_name = "GloveModelOverride";
		constexpr static rivet::rivet_type_id GloveModelOverride_type_id = 0x6f9879e4;
		constexpr static std::string_view AmmoCost_type_name = "AmmoCost";
		constexpr static rivet::rivet_type_id AmmoCost_type_id = 0x5f5bf7df;
		constexpr static std::string_view BarrelObstruction_type_name = "BarrelObstruction";
		constexpr static rivet::rivet_type_id BarrelObstruction_type_id = 0x4f4fae15;
		constexpr static std::string_view WantsTargetLOS_type_name = "WantsTargetLOS";
		constexpr static rivet::rivet_type_id WantsTargetLOS_type_id = 0x59b794a8;
		constexpr static std::string_view UseBeamInEquip_type_name = "UseBeamInEquip";
		constexpr static rivet::rivet_type_id UseBeamInEquip_type_id = 0xf50154a7;
		constexpr static std::string_view ForHeroSkipObstructionChecks_type_name = "ForHeroSkipObstructionChecks";
		constexpr static rivet::rivet_type_id ForHeroSkipObstructionChecks_type_id = 0x929c2b16; 

		explicit WeaponConfig() = default;
		explicit WeaponConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::WeaponLevelDataListItem>> LevelList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::WeaponEarnedXPData>> XPSourceList {};
		rivet::ddl::generated::x8c1c9e5c GripStyle {};
		rivet::ddl::generated::xc968d790 HolsterType {};
		rivet::ddl::generated::xc533d93f SlotType {};
		rivet::ddl::generated::x597cb7da FireStyle {};
		rivet::ddl::generated::xd3dac94 ReloadStyle {};
		rivet::ddl::generated::xb82a951f OffsetStyle {};
		rivet::ddl::generated::xd5643d7e HudWeaponTypeEnum {};
		std::string_view ZoomConfig {};
		std::string_view BeamInConfig {};
		std::string_view AimTriggerEffectConfigOverride {};
		std::string_view LightAimTriggerEffectConfigOverride {};
		std::string_view FireTriggerEffectConfigOverride {};
		std::string_view LightFireTriggerEffectConfigOverride {};
		std::shared_ptr<rivet::ddl::generated::WeaponTargetingInfo> TargetingInfo {};
		std::shared_ptr<rivet::ddl::generated::WeaponReticleInfo> ReticleInfo {};
		std::string_view ModConfig {};
		std::string_view GridConfig {};
		std::string_view GloveModelOverride {};
		int32_t AmmoCost {};
		std::shared_ptr<rivet::ddl::generated::WeaponObstructionBase> BarrelObstruction {};
		bool WantsTargetLOS {};
		bool UseBeamInEquip {};
		bool ForHeroSkipObstructionChecks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
