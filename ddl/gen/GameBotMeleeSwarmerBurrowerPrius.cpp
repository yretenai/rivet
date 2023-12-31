// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotMeleeSwarmerBurrowerPrius.hpp>

namespace rivet::ddl::generated {
	GameBotMeleeSwarmerBurrowerPrius::GameBotMeleeSwarmerBurrowerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotMeleeSwarmerPrius(serialized) {
		ChanceToBurrow = serialized->get_float(ChanceToBurrow_type_id);
		PreBurrowDelayMin = serialized->get_float(PreBurrowDelayMin_type_id);
		PreBurrowDelayMax = serialized->get_float(PreBurrowDelayMax_type_id); 
	}

	[[nodiscard]] auto
	GameBotMeleeSwarmerBurrowerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotMeleeSwarmerBurrowerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMeleeSwarmerBurrowerPrius> {
		if (incoming_type_id == GameBotMeleeSwarmerBurrowerPrius::type_id) {
			return std::make_shared<GameBotMeleeSwarmerBurrowerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
