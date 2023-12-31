// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DistanceHeuristics.hpp>

namespace rivet::ddl::generated {
	DistanceHeuristics::DistanceHeuristics([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Weight = serialized->get_float(Weight_type_id);
		BoostRange = serialized->get_float(BoostRange_type_id);
		BoostMul = serialized->get_float(BoostMul_type_id); 
	}

	[[nodiscard]] auto
	DistanceHeuristics::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DistanceHeuristics::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DistanceHeuristics> {
		if (incoming_type_id == DistanceHeuristics::type_id) {
			return std::make_shared<DistanceHeuristics>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
