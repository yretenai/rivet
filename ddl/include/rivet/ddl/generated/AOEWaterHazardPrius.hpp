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

#include <rivet/ddl/generated/enums/DamageTypes.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AOEWaterHazardPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AOEWaterHazardPrius";
		constexpr static rivet::rivet_type_id type_id = 0x149d9dcc;

		constexpr static std::string_view TellRadius_type_name = "TellRadius";
		constexpr static rivet::rivet_type_id TellRadius_type_id = 0x97aa8eec;
		constexpr static std::string_view TriggerRadius_type_name = "TriggerRadius";
		constexpr static rivet::rivet_type_id TriggerRadius_type_id = 0xcc7f53a5;
		constexpr static std::string_view DamageRadius_type_name = "DamageRadius";
		constexpr static rivet::rivet_type_id DamageRadius_type_id = 0xe3e6fa68;
		constexpr static std::string_view DamageDuration_type_name = "DamageDuration";
		constexpr static rivet::rivet_type_id DamageDuration_type_id = 0xdd944989;
		constexpr static std::string_view CooldownTime_type_name = "CooldownTime";
		constexpr static rivet::rivet_type_id CooldownTime_type_id = 0x499881db;
		constexpr static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr static rivet::rivet_type_id DamageAmount_type_id = 0x563be470;
		constexpr static std::string_view DamageIgnoreDuration_type_name = "DamageIgnoreDuration";
		constexpr static rivet::rivet_type_id DamageIgnoreDuration_type_id = 0xc0897c0a;
		constexpr static std::string_view DamageType_type_name = "DamageType";
		constexpr static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr static std::string_view DamageString_type_name = "DamageString";
		constexpr static rivet::rivet_type_id DamageString_type_id = 0x4624269b; 

		explicit AOEWaterHazardPrius() = default;
		explicit AOEWaterHazardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float TellRadius {};
		float TriggerRadius {};
		float DamageRadius {};
		float DamageDuration {};
		float CooldownTime {};
		float DamageAmount {};
		float DamageIgnoreDuration {};
		rivet::ddl::generated::DamageTypes DamageType {};
		std::string_view DamageString {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AOEWaterHazardPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
