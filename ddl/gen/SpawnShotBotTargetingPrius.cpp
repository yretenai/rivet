// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnShotBotTargetingRandomLocationPrius.hpp>
#include <rivet/ddl/generated/SpawnShotWaspTargetingPrius.hpp>
#include <rivet/ddl/generated/SpawnShotBotTargetingLockablePrius.hpp>
#include <rivet/ddl/generated/SpawnShotExtermibotTargetingPrius.hpp> 

#include <rivet/ddl/generated/SpawnShotBotTargetingPrius.hpp>

namespace rivet::ddl::generated {
	SpawnShotBotTargetingPrius::SpawnShotBotTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnShotTargetingPrius(serialized) {
		TargetHero = serialized->get_bool(TargetHero_type_id); 
	}

	[[nodiscard]] auto
	SpawnShotBotTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnShotBotTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotBotTargetingPrius> {
		if (incoming_type_id == SpawnShotBotTargetingPrius::type_id) {
			return std::make_shared<SpawnShotBotTargetingPrius>(serialized);
		}

		auto SpawnShotExtermibotTargetingPrius_ptr = SpawnShotExtermibotTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotExtermibotTargetingPrius_ptr != nullptr) {
			return SpawnShotExtermibotTargetingPrius_ptr;
		}

		auto SpawnShotBotTargetingLockablePrius_ptr = SpawnShotBotTargetingLockablePrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotBotTargetingLockablePrius_ptr != nullptr) {
			return SpawnShotBotTargetingLockablePrius_ptr;
		}

		auto SpawnShotWaspTargetingPrius_ptr = SpawnShotWaspTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotWaspTargetingPrius_ptr != nullptr) {
			return SpawnShotWaspTargetingPrius_ptr;
		}

		auto SpawnShotBotTargetingRandomLocationPrius_ptr = SpawnShotBotTargetingRandomLocationPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotBotTargetingRandomLocationPrius_ptr != nullptr) {
			return SpawnShotBotTargetingRandomLocationPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
