// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RandomizedSpawnPointTargetArcPrius.hpp>
#include <rivet/ddl/generated/RandomizedSpawnPointArcPrius.hpp> 

#include <rivet/ddl/generated/RandomizedSpawnPointBasePrius.hpp>

namespace rivet::ddl::generated {
	RandomizedSpawnPointBasePrius::RandomizedSpawnPointBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	RandomizedSpawnPointBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RandomizedSpawnPointBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RandomizedSpawnPointBasePrius> {
		if (incoming_type_id == RandomizedSpawnPointBasePrius::type_id) {
			return std::make_shared<RandomizedSpawnPointBasePrius>(serialized);
		}

		auto RandomizedSpawnPointArcPrius_ptr = RandomizedSpawnPointArcPrius::from_substruct(incoming_type_id, serialized);
		if (RandomizedSpawnPointArcPrius_ptr != nullptr) {
			return RandomizedSpawnPointArcPrius_ptr;
		}

		auto RandomizedSpawnPointTargetArcPrius_ptr = RandomizedSpawnPointTargetArcPrius::from_substruct(incoming_type_id, serialized);
		if (RandomizedSpawnPointTargetArcPrius_ptr != nullptr) {
			return RandomizedSpawnPointTargetArcPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated