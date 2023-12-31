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

#include <rivet/ddl/generated/GameBotShooterJetPackPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GameBotShooterMrsZurkonMinionPrius : GameBotShooterJetPackPrius {
		constexpr static std::string_view type_name = "GameBotShooterMrsZurkonMinionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8ac96200;

		constexpr static std::string_view ShieldActor_type_name = "ShieldActor";
		constexpr static rivet::rivet_type_id ShieldActor_type_id = 0xb785ec5c; 

		explicit GameBotShooterMrsZurkonMinionPrius() = default;
		explicit GameBotShooterMrsZurkonMinionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ShieldActor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotShooterMrsZurkonMinionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
