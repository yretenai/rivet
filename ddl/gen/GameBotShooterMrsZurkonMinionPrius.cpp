// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotShooterMrsZurkonMinionPrius.hpp>

namespace rivet::ddl::generated {
	GameBotShooterMrsZurkonMinionPrius::GameBotShooterMrsZurkonMinionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotShooterJetPackPrius(serialized) {
		ShieldActor = serialized->get_string(ShieldActor_type_id); 
	}

	[[nodiscard]] auto
	GameBotShooterMrsZurkonMinionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotShooterMrsZurkonMinionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotShooterMrsZurkonMinionPrius> {
		if (incoming_type_id == GameBotShooterMrsZurkonMinionPrius::type_id) {
			return std::make_shared<GameBotShooterMrsZurkonMinionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
