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

#include <rivet/ddl/generated/GameBotMeleeBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GameBotMrFunGuyPrius : GameBotMeleeBasePrius {
		constexpr static std::string_view type_name = "GameBotMrFunGuyPrius";
		constexpr static rivet::rivet_type_id type_id = 0x994fef0d;

		constexpr static std::string_view GasElementActor_type_name = "GasElementActor";
		constexpr static rivet::rivet_type_id GasElementActor_type_id = 0xe3a0d20e;
		constexpr static std::string_view TurretShotConfig_type_name = "TurretShotConfig";
		constexpr static rivet::rivet_type_id TurretShotConfig_type_id = 0x7a0c7c53;
		constexpr static std::string_view IntroAnim_type_name = "IntroAnim";
		constexpr static rivet::rivet_type_id IntroAnim_type_id = 0xf227a2c3;
		constexpr static std::string_view LeftHandThrowAnim_type_name = "LeftHandThrowAnim";
		constexpr static rivet::rivet_type_id LeftHandThrowAnim_type_id = 0x3b379230;
		constexpr static std::string_view RightHandThrowAnim_type_name = "RightHandThrowAnim";
		constexpr static rivet::rivet_type_id RightHandThrowAnim_type_id = 0x2e69087a;
		constexpr static std::string_view ThrowingLoopAnim_type_name = "ThrowingLoopAnim";
		constexpr static rivet::rivet_type_id ThrowingLoopAnim_type_id = 0x60d70413;
		constexpr static std::string_view DeathAnim_type_name = "DeathAnim";
		constexpr static rivet::rivet_type_id DeathAnim_type_id = 0xf9dd5a6;
		constexpr static std::string_view IdleAnimHash_type_name = "IdleAnimHash";
		constexpr static rivet::rivet_type_id IdleAnimHash_type_id = 0x10ab67e6;
		constexpr static std::string_view DanceAnimHash_type_name = "DanceAnimHash";
		constexpr static rivet::rivet_type_id DanceAnimHash_type_id = 0x431ff821;
		constexpr static std::string_view LeftEmitLocator_type_name = "LeftEmitLocator";
		constexpr static rivet::rivet_type_id LeftEmitLocator_type_id = 0x219c6b54;
		constexpr static std::string_view RightEmitLocator_type_name = "RightEmitLocator";
		constexpr static rivet::rivet_type_id RightEmitLocator_type_id = 0x28dee847;
		constexpr static std::string_view MaxLifetime_type_name = "MaxLifetime";
		constexpr static rivet::rivet_type_id MaxLifetime_type_id = 0xa9f6b83c;
		constexpr static std::string_view GasLifetime_type_name = "GasLifetime";
		constexpr static rivet::rivet_type_id GasLifetime_type_id = 0xc90c7e65;
		constexpr static std::string_view HoverHeight_type_name = "HoverHeight";
		constexpr static rivet::rivet_type_id HoverHeight_type_id = 0xfc65caf;
		constexpr static std::string_view ModelScale_type_name = "ModelScale";
		constexpr static rivet::rivet_type_id ModelScale_type_id = 0x86c30845;
		constexpr static std::string_view GasTargetingRadius_type_name = "GasTargetingRadius";
		constexpr static rivet::rivet_type_id GasTargetingRadius_type_id = 0x7889b8fe; 

		explicit GameBotMrFunGuyPrius() = default;
		explicit GameBotMrFunGuyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view GasElementActor {};
		std::string_view TurretShotConfig {};
		std::string_view IntroAnim {};
		std::string_view LeftHandThrowAnim {};
		std::string_view RightHandThrowAnim {};
		std::string_view ThrowingLoopAnim {};
		std::string_view DeathAnim {};
		std::string_view IdleAnimHash {};
		std::string_view DanceAnimHash {};
		std::string_view LeftEmitLocator {};
		std::string_view RightEmitLocator {};
		float MaxLifetime {};
		float GasLifetime {};
		float HoverHeight {};
		float ModelScale {};
		float GasTargetingRadius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMrFunGuyPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
