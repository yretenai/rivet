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
#include <rivet/ddl/generated/bitsets/x65d7dac2.hpp> 

namespace rivet::ddl::generated {
	struct KnockbackTierData;
	struct CustomDamageContainer; 

	struct RIVET_DDL_SHARED ShotDamageData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ShotDamageData";
		constexpr const static rivet::rivet_type_id type_id = 0x87e0415e;

		constexpr const static std::string_view Damage_type_name = "Damage";
		constexpr const static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b;
		constexpr const static std::string_view DamageType_type_name = "DamageType";
		constexpr const static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr const static std::string_view KnockbackTiers_type_name = "KnockbackTiers";
		constexpr const static rivet::rivet_type_id KnockbackTiers_type_id = 0xa9f955d3;
		constexpr const static std::string_view DamageFlags_type_name = "DamageFlags";
		constexpr const static rivet::rivet_type_id DamageFlags_type_id = 0x93d0d934;
		constexpr const static std::string_view HeadshotMod_type_name = "HeadshotMod";
		constexpr const static rivet::rivet_type_id HeadshotMod_type_id = 0x32db3fb4;
		constexpr const static std::string_view AOE_type_name = "AOE";
		constexpr const static rivet::rivet_type_id AOE_type_id = 0xed56b719;
		constexpr const static std::string_view Impulse_type_name = "Impulse";
		constexpr const static rivet::rivet_type_id Impulse_type_id = 0xebf69433;
		constexpr const static std::string_view StatusAmount_type_name = "StatusAmount";
		constexpr const static rivet::rivet_type_id StatusAmount_type_id = 0x37e1f098;
		constexpr const static std::string_view IgnoreDuration_type_name = "IgnoreDuration";
		constexpr const static rivet::rivet_type_id IgnoreDuration_type_id = 0x2ee45555;
		constexpr const static std::string_view HitPauseDuration_type_name = "HitPauseDuration";
		constexpr const static rivet::rivet_type_id HitPauseDuration_type_id = 0x4e7e2a7;
		constexpr const static std::string_view DamageHashString_type_name = "DamageHashString";
		constexpr const static rivet::rivet_type_id DamageHashString_type_id = 0x5a2efcb4;
		constexpr const static std::string_view CustomDamageEntries_type_name = "CustomDamageEntries";
		constexpr const static rivet::rivet_type_id CustomDamageEntries_type_id = 0xd53b4d9; 

		explicit ShotDamageData() = default;
		explicit ShotDamageData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Damage {};
		rivet::ddl::generated::x8d7e44cf DamageType {};
		std::vector<std::shared_ptr<rivet::ddl::generated::KnockbackTierData>> KnockbackTiers {};
		rivet::ddl::generated::x65d7dac2 DamageFlags {};
		float HeadshotMod {};
		float AOE {};
		float Impulse {};
		float StatusAmount {};
		float IgnoreDuration {};
		float HitPauseDuration {};
		std::string_view DamageHashString {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CustomDamageContainer>> CustomDamageEntries {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotDamageData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
