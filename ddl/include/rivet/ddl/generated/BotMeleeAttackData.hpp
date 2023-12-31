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

#include <rivet/ddl/generated/enums/x9e94da32.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED BotMeleeAttackData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BotMeleeAttackData";
		constexpr static rivet::rivet_type_id type_id = 0x35236c91;

		constexpr static std::string_view AnimDriver_type_name = "AnimDriver";
		constexpr static rivet::rivet_type_id AnimDriver_type_id = 0x10f54dce;
		constexpr static std::string_view WindUpDuration_type_name = "WindUpDuration";
		constexpr static rivet::rivet_type_id WindUpDuration_type_id = 0x11dca8da;
		constexpr static std::string_view ActiveDuration_type_name = "ActiveDuration";
		constexpr static rivet::rivet_type_id ActiveDuration_type_id = 0xda754e51;
		constexpr static std::string_view RecoveryDuration_type_name = "RecoveryDuration";
		constexpr static rivet::rivet_type_id RecoveryDuration_type_id = 0x3b07ba4;
		constexpr static std::string_view IdealDistance_type_name = "IdealDistance";
		constexpr static rivet::rivet_type_id IdealDistance_type_id = 0xb70823ec;
		constexpr static std::string_view SuckDistance_type_name = "SuckDistance";
		constexpr static rivet::rivet_type_id SuckDistance_type_id = 0xdad4ee;
		constexpr static std::string_view PushbackDistance_type_name = "PushbackDistance";
		constexpr static rivet::rivet_type_id PushbackDistance_type_id = 0xb4e3c4dd;
		constexpr static std::string_view MaxTranslationScale_type_name = "MaxTranslationScale";
		constexpr static rivet::rivet_type_id MaxTranslationScale_type_id = 0x3deb2a4f;
		constexpr static std::string_view MaxTranslationRate_type_name = "MaxTranslationRate";
		constexpr static rivet::rivet_type_id MaxTranslationRate_type_id = 0xc6ee75bb;
		constexpr static std::string_view MaxTurnScale_type_name = "MaxTurnScale";
		constexpr static rivet::rivet_type_id MaxTurnScale_type_id = 0x13c0c2a6;
		constexpr static std::string_view MaxTurnRate_type_name = "MaxTurnRate";
		constexpr static rivet::rivet_type_id MaxTurnRate_type_id = 0x590b1dc6;
		constexpr static std::string_view MaxTurnAdjust_type_name = "MaxTurnAdjust";
		constexpr static rivet::rivet_type_id MaxTurnAdjust_type_id = 0x4c9ea693;
		constexpr static std::string_view DisableFriendlyCVC_type_name = "DisableFriendlyCVC";
		constexpr static rivet::rivet_type_id DisableFriendlyCVC_type_id = 0xaa7ccfda;
		constexpr static std::string_view EnableGravity_type_name = "EnableGravity";
		constexpr static rivet::rivet_type_id EnableGravity_type_id = 0x8c6af0d3;
		constexpr static std::string_view YAdjustType_type_name = "YAdjustType";
		constexpr static rivet::rivet_type_id YAdjustType_type_id = 0x60f46de3; 

		explicit BotMeleeAttackData() = default;
		explicit BotMeleeAttackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AnimDriver {};
		float WindUpDuration {};
		float ActiveDuration {};
		float RecoveryDuration {};
		float IdealDistance {};
		float SuckDistance {};
		float PushbackDistance {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> MaxTranslationScale {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> MaxTranslationRate {};
		float MaxTurnScale {};
		float MaxTurnRate {};
		float MaxTurnAdjust {};
		bool DisableFriendlyCVC {};
		bool EnableGravity {};
		rivet::ddl::generated::x9e94da32 YAdjustType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMeleeAttackData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
