// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotShooterNymphFlyerPrius.hpp>
#include <rivet/ddl/generated/GameBotShooterMrsZurkonMinionPrius.hpp>
#include <rivet/ddl/generated/GameBotShooterJetPackNoFiringPrius.hpp>
#include <rivet/ddl/generated/GameBotTelepathipusPrius.hpp>
#include <rivet/ddl/generated/HoverShuffleData.hpp> 

#include <rivet/ddl/generated/GameBotShooterJetPackPrius.hpp>

namespace rivet::ddl::generated {
	GameBotShooterJetPackPrius::GameBotShooterJetPackPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotShooterPrius(serialized) {
		HoverLeanVarMultiplier = serialized->get_float(HoverLeanVarMultiplier_type_id);
		HoverLeanBlendSpeed = serialized->get_float(HoverLeanBlendSpeed_type_id);
		HoverSpeedScaleWhenPassive = serialized->get_float(HoverSpeedScaleWhenPassive_type_id);
		HoverShuffleData = serialized->unwrap_into<rivet::ddl::generated::HoverShuffleData>(HoverShuffleData_type_id); 
	}

	[[nodiscard]] auto
	GameBotShooterJetPackPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotShooterJetPackPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotShooterJetPackPrius> {
		if (incoming_type_id == GameBotShooterJetPackPrius::type_id) {
			return std::make_shared<GameBotShooterJetPackPrius>(serialized);
		}

		auto GameBotTelepathipusPrius_ptr = GameBotTelepathipusPrius::from_substruct(incoming_type_id, serialized);
		if (GameBotTelepathipusPrius_ptr != nullptr) {
			return GameBotTelepathipusPrius_ptr;
		}

		auto GameBotShooterJetPackNoFiringPrius_ptr = GameBotShooterJetPackNoFiringPrius::from_substruct(incoming_type_id, serialized);
		if (GameBotShooterJetPackNoFiringPrius_ptr != nullptr) {
			return GameBotShooterJetPackNoFiringPrius_ptr;
		}

		auto GameBotShooterMrsZurkonMinionPrius_ptr = GameBotShooterMrsZurkonMinionPrius::from_substruct(incoming_type_id, serialized);
		if (GameBotShooterMrsZurkonMinionPrius_ptr != nullptr) {
			return GameBotShooterMrsZurkonMinionPrius_ptr;
		}

		auto GameBotShooterNymphFlyerPrius_ptr = GameBotShooterNymphFlyerPrius::from_substruct(incoming_type_id, serialized);
		if (GameBotShooterNymphFlyerPrius_ptr != nullptr) {
			return GameBotShooterNymphFlyerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated