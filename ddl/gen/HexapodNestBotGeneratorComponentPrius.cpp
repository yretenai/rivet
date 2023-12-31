// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HexapodNestBotGeneratorComponentPrius.hpp>

namespace rivet::ddl::generated {
	HexapodNestBotGeneratorComponentPrius::HexapodNestBotGeneratorComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotGeneratorComponentPrius(serialized) {
		SpawnCountMax = serialized->get_uint32(SpawnCountMax_type_id);
		GlobalSpawnCountMax = serialized->get_uint32(GlobalSpawnCountMax_type_id);
		SimultaneousSpawnCount = serialized->get_uint32(SimultaneousSpawnCount_type_id); 
	}

	[[nodiscard]] auto
	HexapodNestBotGeneratorComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HexapodNestBotGeneratorComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HexapodNestBotGeneratorComponentPrius> {
		if (incoming_type_id == HexapodNestBotGeneratorComponentPrius::type_id) {
			return std::make_shared<HexapodNestBotGeneratorComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
