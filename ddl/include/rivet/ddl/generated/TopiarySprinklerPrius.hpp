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

#include <rivet/ddl/generated/enums/x6bdf4ba1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TopiarySprinklerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TopiarySprinklerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x240ea2be;

		constexpr static std::string_view Owner_type_name = "Owner";
		constexpr static rivet::rivet_type_id Owner_type_id = 0xd6332abd;
		constexpr static std::string_view Weapon_type_name = "Weapon";
		constexpr static rivet::rivet_type_id Weapon_type_id = 0x574be981;
		constexpr static std::string_view WeaponId_type_name = "WeaponId";
		constexpr static rivet::rivet_type_id WeaponId_type_id = 0x902af590;
		constexpr static std::string_view WeaponNameHash_type_name = "WeaponNameHash";
		constexpr static rivet::rivet_type_id WeaponNameHash_type_id = 0x42a5ee59;
		constexpr static std::string_view UpgradeVersion_type_name = "UpgradeVersion";
		constexpr static rivet::rivet_type_id UpgradeVersion_type_id = 0xe7336362;
		constexpr static std::string_view MaxActiveSprinklers_type_name = "MaxActiveSprinklers";
		constexpr static rivet::rivet_type_id MaxActiveSprinklers_type_id = 0xbdc54aa1;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view SearchRadius_type_name = "SearchRadius";
		constexpr static rivet::rivet_type_id SearchRadius_type_id = 0x41537c99;
		constexpr static std::string_view StatusAmount_type_name = "StatusAmount";
		constexpr static rivet::rivet_type_id StatusAmount_type_id = 0x37e1f098;
		constexpr static std::string_view TargetDuration_type_name = "TargetDuration";
		constexpr static rivet::rivet_type_id TargetDuration_type_id = 0x92514b24;
		constexpr static std::string_view TimeBetweenDamage_type_name = "TimeBetweenDamage";
		constexpr static rivet::rivet_type_id TimeBetweenDamage_type_id = 0x9e4528;
		constexpr static std::string_view TimeToRotate180_type_name = "TimeToRotate180";
		constexpr static rivet::rivet_type_id TimeToRotate180_type_id = 0xf193fd41;
		constexpr static std::string_view EveryNthWaterShotFlagged_type_name = "EveryNthWaterShotFlagged";
		constexpr static rivet::rivet_type_id EveryNthWaterShotFlagged_type_id = 0xdf09c8cf;
		constexpr static std::string_view HealthDropConfig_type_name = "HealthDropConfig";
		constexpr static rivet::rivet_type_id HealthDropConfig_type_id = 0x10db3c65;
		constexpr static std::string_view DropHealthOnBotDeath_type_name = "DropHealthOnBotDeath";
		constexpr static rivet::rivet_type_id DropHealthOnBotDeath_type_id = 0xc9893cd6;
		constexpr static std::string_view StatusDamageAmount_type_name = "StatusDamageAmount";
		constexpr static rivet::rivet_type_id StatusDamageAmount_type_id = 0x77af6f2a;
		constexpr static std::string_view IncomingDamageMultiplier_type_name = "IncomingDamageMultiplier";
		constexpr static rivet::rivet_type_id IncomingDamageMultiplier_type_id = 0x7bd0e83a;
		constexpr static std::string_view OwnerAllegiance_type_name = "OwnerAllegiance";
		constexpr static rivet::rivet_type_id OwnerAllegiance_type_id = 0x96b53ec; 

		explicit TopiarySprinklerPrius() = default;
		explicit TopiarySprinklerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Owner {};
		uint32_t Weapon {};
		uint32_t WeaponId {};
		uint32_t WeaponNameHash {};
		uint8_t UpgradeVersion {};
		int8_t MaxActiveSprinklers {};
		float Duration {};
		float SearchRadius {};
		float StatusAmount {};
		float TargetDuration {};
		float TimeBetweenDamage {};
		float TimeToRotate180 {};
		uint32_t EveryNthWaterShotFlagged {};
		std::string_view HealthDropConfig {};
		bool DropHealthOnBotDeath {};
		float StatusDamageAmount {};
		float IncomingDamageMultiplier {};
		rivet::ddl::generated::x6bdf4ba1 OwnerAllegiance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TopiarySprinklerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
