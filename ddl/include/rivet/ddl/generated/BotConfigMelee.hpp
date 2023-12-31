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
	struct AnimDamageHandlerPrius;
	struct BotMeleeAttackData; 

	struct RIVET_DDL_SHARED BotConfigMelee : ConfigBase {
		constexpr static std::string_view type_name = "BotConfigMelee";
		constexpr static rivet::rivet_type_id type_id = 0xce273072;

		constexpr static std::string_view AttackRange_type_name = "AttackRange";
		constexpr static rivet::rivet_type_id AttackRange_type_id = 0x75a49560;
		constexpr static std::string_view IdealRange_type_name = "IdealRange";
		constexpr static rivet::rivet_type_id IdealRange_type_id = 0x4a596da2;
		constexpr static std::string_view MaxSuckDist_type_name = "MaxSuckDist";
		constexpr static rivet::rivet_type_id MaxSuckDist_type_id = 0xd34a55f;
		constexpr static std::string_view CanFlank_type_name = "CanFlank";
		constexpr static rivet::rivet_type_id CanFlank_type_id = 0x10305686;
		constexpr static std::string_view FlankPercent_type_name = "FlankPercent";
		constexpr static rivet::rivet_type_id FlankPercent_type_id = 0x3198dcb6;
		constexpr static std::string_view DoDelayAttacks_type_name = "DoDelayAttacks";
		constexpr static rivet::rivet_type_id DoDelayAttacks_type_id = 0xe6b8ca8d;
		constexpr static std::string_view MinTimeBetweenAttacks_type_name = "MinTimeBetweenAttacks";
		constexpr static rivet::rivet_type_id MinTimeBetweenAttacks_type_id = 0xa8651169;
		constexpr static std::string_view PreMeleeDuration_type_name = "PreMeleeDuration";
		constexpr static rivet::rivet_type_id PreMeleeDuration_type_id = 0xffde51e7;
		constexpr static std::string_view MeleeAttackData_type_name = "MeleeAttackData";
		constexpr static rivet::rivet_type_id MeleeAttackData_type_id = 0xf2a6d993;
		constexpr static std::string_view AnimDamage_type_name = "AnimDamage";
		constexpr static rivet::rivet_type_id AnimDamage_type_id = 0x105b657b; 

		explicit BotConfigMelee() = default;
		explicit BotConfigMelee([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float AttackRange {};
		float IdealRange {};
		float MaxSuckDist {};
		bool CanFlank {};
		float FlankPercent {};
		bool DoDelayAttacks {};
		float MinTimeBetweenAttacks {};
		float PreMeleeDuration {};
		std::shared_ptr<rivet::ddl::generated::BotMeleeAttackData> MeleeAttackData {};
		std::shared_ptr<rivet::ddl::generated::AnimDamageHandlerPrius> AnimDamage {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigMelee>;
	};
} // namespace rivet::ddl::generated

// clang-format on
