// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotShooterConstructorBotPrius.hpp>

namespace rivet::ddl::generated {
	GameBotShooterConstructorBotPrius::GameBotShooterConstructorBotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotShooterPrius(serialized) {
		AttachLocator = serialized->get_string(AttachLocator_type_id);
		FiringConfig = serialized->get_string(FiringConfig_type_id); 
	}

	[[nodiscard]] auto
	GameBotShooterConstructorBotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotShooterConstructorBotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotShooterConstructorBotPrius> {
		if (incoming_type_id == GameBotShooterConstructorBotPrius::type_id) {
			return std::make_shared<GameBotShooterConstructorBotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated