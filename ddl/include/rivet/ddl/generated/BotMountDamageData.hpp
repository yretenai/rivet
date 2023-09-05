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

#include <rivet/ddl/generated/enums/x8d7e44cf.hpp>
#include <rivet/ddl/generated/enums/KnockbackLevels.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotMountDamageData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "BotMountDamageData";
		constexpr const static rivet::rivet_type_id type_id = 0x8d47bf30;

		constexpr const static std::string_view EnableTouchDamage_type_name = "EnableTouchDamage";
		constexpr const static rivet::rivet_type_id EnableTouchDamage_type_id = 0xbfaa9b05;
		constexpr const static std::string_view LocatorName_type_name = "LocatorName";
		constexpr const static rivet::rivet_type_id LocatorName_type_id = 0x5814524d;
		constexpr const static std::string_view DamageSphereRadius_type_name = "DamageSphereRadius";
		constexpr const static rivet::rivet_type_id DamageSphereRadius_type_id = 0x359f9b0a;
		constexpr const static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr const static rivet::rivet_type_id DamageAmount_type_id = 0x563be470;
		constexpr const static std::string_view DamageType_type_name = "DamageType";
		constexpr const static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr const static std::string_view Knockback_type_name = "Knockback";
		constexpr const static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr const static std::string_view DamageStr_type_name = "DamageStr";
		constexpr const static rivet::rivet_type_id DamageStr_type_id = 0xecbb9a92;
		constexpr const static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr const static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b; 

		explicit BotMountDamageData() = default;
		explicit BotMountDamageData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool EnableTouchDamage {};
		std::string_view LocatorName {};
		float DamageSphereRadius {};
		float DamageAmount {};
		rivet::ddl::generated::x8d7e44cf DamageType {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		std::string_view DamageStr {};
		float KnockbackAmount {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMountDamageData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
