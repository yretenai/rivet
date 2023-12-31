// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotMountBeastPrius.hpp>

namespace rivet::ddl::generated {
	GameBotMountBeastPrius::GameBotMountBeastPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {

	}

	[[nodiscard]] auto
	GameBotMountBeastPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotMountBeastPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMountBeastPrius> {
		if (incoming_type_id == GameBotMountBeastPrius::type_id) {
			return std::make_shared<GameBotMountBeastPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
