// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DirectionHeuristics.hpp>

namespace rivet::ddl::generated {
	DirectionHeuristics::DirectionHeuristics([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PhalanxWeight = serialized->get_float(PhalanxWeight_type_id, 5.000000);
		BattleAxisWeight = serialized->get_float(BattleAxisWeight_type_id, 0.000000);
		BattleAxisSideDistMin = serialized->get_float(BattleAxisSideDistMin_type_id, 0.000000);
		BattleAxisSideDistMax = serialized->get_float(BattleAxisSideDistMax_type_id, 5.000000);
		FlankWeight = serialized->get_float(FlankWeight_type_id, 0.000000);
		FlankDist = serialized->get_float(FlankDist_type_id, 5.000000); 
	}

	[[nodiscard]] auto
	DirectionHeuristics::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DirectionHeuristics::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DirectionHeuristics> {
		if (incoming_type_id == DirectionHeuristics::type_id) {
			return std::make_shared<DirectionHeuristics>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
