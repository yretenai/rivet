// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotShooterSheepPrius.hpp>

namespace rivet::ddl::generated {
	GameBotShooterSheepPrius::GameBotShooterSheepPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotShooterPrius(serialized) {
		Horns = serialized->get_string(Horns_type_id); 
	}

	[[nodiscard]] auto
	GameBotShooterSheepPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotShooterSheepPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotShooterSheepPrius> {
		if (incoming_type_id == GameBotShooterSheepPrius::type_id) {
			return std::make_shared<GameBotShooterSheepPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
