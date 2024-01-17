// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainSystem03EditingTerrain0221Stamp.hpp>

namespace rivet::ddl::generated {
	TerrainSystem03EditingTerrain0221Stamp::TerrainSystem03EditingTerrain0221Stamp([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		line00 = serialized->get_string(line00_type_id, {});
		line01 = serialized->get_string(line01_type_id, {});
		line02 = serialized->get_string(line02_type_id, {});
		line03 = serialized->get_string(line03_type_id, {});
		line04 = serialized->get_string(line04_type_id, {}); 
	}

	[[nodiscard]] auto
	TerrainSystem03EditingTerrain0221Stamp::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainSystem03EditingTerrain0221Stamp::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainSystem03EditingTerrain0221Stamp> {
		if (incoming_type_id == TerrainSystem03EditingTerrain0221Stamp::type_id) {
			return std::make_shared<TerrainSystem03EditingTerrain0221Stamp>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
