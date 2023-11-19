// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlayerHeuristics.hpp>

namespace rivet::ddl::generated {
	PlayerHeuristics::PlayerHeuristics([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HeroBotWeight = serialized->get_float(HeroBotWeight_type_id);
		HumanWeight = serialized->get_float(HumanWeight_type_id);
		HumanAimWeight = serialized->get_float(HumanAimWeight_type_id);
		MinAimedAtDot = serialized->get_float(MinAimedAtDot_type_id);
		MaxAimedAtDot = serialized->get_float(MaxAimedAtDot_type_id);
		OutOfCoverMul = serialized->get_float(OutOfCoverMul_type_id); 
	}

	[[nodiscard]] auto
	PlayerHeuristics::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlayerHeuristics::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlayerHeuristics> {
		if (incoming_type_id == PlayerHeuristics::type_id) {
			return std::make_shared<PlayerHeuristics>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated