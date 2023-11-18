// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotClankLemmingPrius.hpp>

namespace rivet::ddl::generated {
	GameBotClankLemmingPrius::GameBotClankLemmingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {

	}

	[[nodiscard]] auto
	GameBotClankLemmingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotClankLemmingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotClankLemmingPrius> {
		if (incoming_type_id == GameBotClankLemmingPrius::type_id) {
			return std::make_shared<GameBotClankLemmingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
