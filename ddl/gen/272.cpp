// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpawnShotWaspTargetingPrius.hpp>

namespace rivet::ddl::generated {
	SpawnShotWaspTargetingPrius::SpawnShotWaspTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnShotBotTargetingPrius(serialized) {

	}

	auto
	SpawnShotWaspTargetingPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SpawnShotWaspTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpawnShotWaspTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotWaspTargetingPrius> {
		if (incoming_type_id == SpawnShotWaspTargetingPrius::type_id) {
			return std::make_shared<SpawnShotWaspTargetingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
