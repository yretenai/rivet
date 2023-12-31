// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BattleBrewNanotechDrainPrius.hpp>

namespace rivet::ddl::generated {
	BattleBrewNanotechDrainPrius::BattleBrewNanotechDrainPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BattleBrewBasePrius(serialized) {

	}

	[[nodiscard]] auto
	BattleBrewNanotechDrainPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BattleBrewNanotechDrainPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BattleBrewNanotechDrainPrius> {
		if (incoming_type_id == BattleBrewNanotechDrainPrius::type_id) {
			return std::make_shared<BattleBrewNanotechDrainPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
