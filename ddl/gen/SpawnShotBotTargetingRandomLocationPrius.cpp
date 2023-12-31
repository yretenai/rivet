// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingLocationWeightData.hpp> 

#include <rivet/ddl/generated/SpawnShotBotTargetingRandomLocationPrius.hpp>

namespace rivet::ddl::generated {
	SpawnShotBotTargetingRandomLocationPrius::SpawnShotBotTargetingRandomLocationPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnShotBotTargetingPrius(serialized) {
		LocationWeightData = serialized->unwrap_into_many<rivet::ddl::generated::TargetingLocationWeightData>(LocationWeightData_type_id); 
	}

	[[nodiscard]] auto
	SpawnShotBotTargetingRandomLocationPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnShotBotTargetingRandomLocationPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotBotTargetingRandomLocationPrius> {
		if (incoming_type_id == SpawnShotBotTargetingRandomLocationPrius::type_id) {
			return std::make_shared<SpawnShotBotTargetingRandomLocationPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
