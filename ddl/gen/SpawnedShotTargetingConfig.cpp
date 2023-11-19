// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnShotTargetingPrius.hpp> 

#include <rivet/ddl/generated/SpawnedShotTargetingConfig.hpp>

namespace rivet::ddl::generated {
	SpawnedShotTargetingConfig::SpawnedShotTargetingConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		TargetingPrius = serialized->unwrap_into<rivet::ddl::generated::SpawnShotTargetingPrius>(TargetingPrius_type_id); 
	}

	[[nodiscard]] auto
	SpawnedShotTargetingConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnedShotTargetingConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnedShotTargetingConfig> {
		if (incoming_type_id == SpawnedShotTargetingConfig::type_id) {
			return std::make_shared<SpawnedShotTargetingConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated