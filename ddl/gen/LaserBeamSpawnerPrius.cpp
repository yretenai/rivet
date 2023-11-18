// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LaserBeamSpawnerPrius.hpp>

namespace rivet::ddl::generated {
	LaserBeamSpawnerPrius::LaserBeamSpawnerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnedShotConfig = serialized->get_string(SpawnedShotConfig_type_id); 
	}

	[[nodiscard]] auto
	LaserBeamSpawnerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LaserBeamSpawnerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LaserBeamSpawnerPrius> {
		if (incoming_type_id == LaserBeamSpawnerPrius::type_id) {
			return std::make_shared<LaserBeamSpawnerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
