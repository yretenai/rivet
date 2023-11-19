// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotDarterBatPrius.hpp>

namespace rivet::ddl::generated {
	GameBotDarterBatPrius::GameBotDarterBatPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotMeleeFlierPrius(serialized) {

	}

	[[nodiscard]] auto
	GameBotDarterBatPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotDarterBatPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotDarterBatPrius> {
		if (incoming_type_id == GameBotDarterBatPrius::type_id) {
			return std::make_shared<GameBotDarterBatPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated