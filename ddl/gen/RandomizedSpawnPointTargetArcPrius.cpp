// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RandomizedSpawnPointTargetArcPrius.hpp>

namespace rivet::ddl::generated {
	RandomizedSpawnPointTargetArcPrius::RandomizedSpawnPointTargetArcPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): RandomizedSpawnPointBasePrius(serialized) {
		MinRadius = serialized->get_float(MinRadius_type_id);
		MaxRadius = serialized->get_float(MaxRadius_type_id);
		TargetArcAngle = serialized->get_float(TargetArcAngle_type_id); 
	}

	[[nodiscard]] auto
	RandomizedSpawnPointTargetArcPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RandomizedSpawnPointTargetArcPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RandomizedSpawnPointTargetArcPrius> {
		if (incoming_type_id == RandomizedSpawnPointTargetArcPrius::type_id) {
			return std::make_shared<RandomizedSpawnPointTargetArcPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated