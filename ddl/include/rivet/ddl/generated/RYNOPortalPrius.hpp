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

#include <rivet/ddl/generated/enums/xbf5ff3c6.hpp>
#include <rivet/ddl/generated/enums/KnockbackLevels.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED RYNOPortalPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RYNOPortalPrius";
		constexpr static rivet::rivet_type_id type_id = 0x2faebdc6;

		constexpr static std::string_view ShotConfig_type_name = "ShotConfig";
		constexpr static rivet::rivet_type_id ShotConfig_type_id = 0xb171e6ae;
		constexpr static std::string_view Owner_type_name = "Owner";
		constexpr static rivet::rivet_type_id Owner_type_id = 0xd6332abd;
		constexpr static std::string_view Weapon_type_name = "Weapon";
		constexpr static rivet::rivet_type_id Weapon_type_id = 0x574be981;
		constexpr static std::string_view ShotRYNO_type_name = "ShotRYNO";
		constexpr static rivet::rivet_type_id ShotRYNO_type_id = 0x7aa5e1f4;
		constexpr static std::string_view Target_type_name = "Target";
		constexpr static rivet::rivet_type_id Target_type_id = 0x7817619b;
		constexpr static std::string_view WeaponId_type_name = "WeaponId";
		constexpr static rivet::rivet_type_id WeaponId_type_id = 0x902af590;
		constexpr static std::string_view AOE_type_name = "AOE";
		constexpr static rivet::rivet_type_id AOE_type_id = 0xed56b719;
		constexpr static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr static rivet::rivet_type_id DamageAmount_type_id = 0x563be470;
		constexpr static std::string_view KnockbackLevel_type_name = "KnockbackLevel";
		constexpr static rivet::rivet_type_id KnockbackLevel_type_id = 0x2554a262;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view RangeFromShot_type_name = "RangeFromShot";
		constexpr static rivet::rivet_type_id RangeFromShot_type_id = 0x584bd7e1;
		constexpr static std::string_view ObjectAssetId_type_name = "ObjectAssetId";
		constexpr static rivet::rivet_type_id ObjectAssetId_type_id = 0xf07a7765;
		constexpr static std::string_view Size_type_name = "Size";
		constexpr static rivet::rivet_type_id Size_type_id = 0xc750e4da;
		constexpr static std::string_view OverrideFallRangeForShockwave_type_name = "OverrideFallRangeForShockwave";
		constexpr static rivet::rivet_type_id OverrideFallRangeForShockwave_type_id = 0xd9285b65; 

		explicit RYNOPortalPrius() = default;
		explicit RYNOPortalPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ShotConfig {};
		uint32_t Owner {};
		uint32_t Weapon {};
		uint32_t ShotRYNO {};
		uint32_t Target {};
		uint32_t WeaponId {};
		float AOE {};
		float DamageAmount {};
		rivet::ddl::generated::KnockbackLevels KnockbackLevel {};
		float KnockbackAmount {};
		float RangeFromShot {};
		uint64_t ObjectAssetId {};
		rivet::ddl::generated::xbf5ff3c6 Size {};
		float OverrideFallRangeForShockwave {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RYNOPortalPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
