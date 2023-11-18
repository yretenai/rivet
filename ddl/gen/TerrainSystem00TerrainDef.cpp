// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainSystem00TerrainDef.hpp>

namespace rivet::ddl::generated {
	TerrainSystem00TerrainDef::TerrainSystem00TerrainDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		line01 = serialized->get_string(line01_type_id);
		line02 = serialized->get_string(line02_type_id);
		line03 = serialized->get_string(line03_type_id);
		line04 = serialized->get_string(line04_type_id);
		line05 = serialized->get_string(line05_type_id);
		line06 = serialized->get_string(line06_type_id);
		line07 = serialized->get_string(line07_type_id);
		line08 = serialized->get_string(line08_type_id);
		line09 = serialized->get_string(line09_type_id);
		line10 = serialized->get_string(line10_type_id);
		line11 = serialized->get_string(line11_type_id);
		line12 = serialized->get_string(line12_type_id);
		line13 = serialized->get_string(line13_type_id);
		line14 = serialized->get_string(line14_type_id);
		line15 = serialized->get_string(line15_type_id);
		line16 = serialized->get_string(line16_type_id);
		line17 = serialized->get_string(line17_type_id);
		line18 = serialized->get_string(line18_type_id);
		line19 = serialized->get_string(line19_type_id);
		line20 = serialized->get_string(line20_type_id);
		line21 = serialized->get_string(line21_type_id);
		line22 = serialized->get_string(line22_type_id);
		line23 = serialized->get_string(line23_type_id);
		line24 = serialized->get_string(line24_type_id);
		line25 = serialized->get_string(line25_type_id);
		line26 = serialized->get_string(line26_type_id);
		line27 = serialized->get_string(line27_type_id);
		line28 = serialized->get_string(line28_type_id);
		line29 = serialized->get_string(line29_type_id);
		line30 = serialized->get_string(line30_type_id);
		line31 = serialized->get_string(line31_type_id);
		line40 = serialized->get_string(line40_type_id); 
	}

	[[nodiscard]] auto
	TerrainSystem00TerrainDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainSystem00TerrainDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainSystem00TerrainDef> {
		if (incoming_type_id == TerrainSystem00TerrainDef::type_id) {
			return std::make_shared<TerrainSystem00TerrainDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
