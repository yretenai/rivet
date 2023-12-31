// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameRevisitMacroLevelData.hpp> 

#include <rivet/ddl/generated/GameMacroLevelData.hpp>

namespace rivet::ddl::generated {
	GameMacroLevelData::GameMacroLevelData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MacroLevelData(serialized) {

	}

	[[nodiscard]] auto
	GameMacroLevelData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameMacroLevelData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameMacroLevelData> {
		if (incoming_type_id == GameMacroLevelData::type_id) {
			return std::make_shared<GameMacroLevelData>(serialized);
		}

		auto GameRevisitMacroLevelData_ptr = GameRevisitMacroLevelData::from_substruct(incoming_type_id, serialized);
		if (GameRevisitMacroLevelData_ptr != nullptr) {
			return GameRevisitMacroLevelData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
