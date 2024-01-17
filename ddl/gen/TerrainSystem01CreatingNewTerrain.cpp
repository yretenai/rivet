// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainSystem01CreatingNewTerrain.hpp>

namespace rivet::ddl::generated {
	TerrainSystem01CreatingNewTerrain::TerrainSystem01CreatingNewTerrain([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		line01 = serialized->get_string(line01_type_id, {});
		line02 = serialized->get_string(line02_type_id, {});
		line03 = serialized->get_string(line03_type_id, {});
		line04 = serialized->get_string(line04_type_id, {});
		line05 = serialized->get_string(line05_type_id, {});
		line06 = serialized->get_string(line06_type_id, {});
		line07 = serialized->get_string(line07_type_id, {});
		line08 = serialized->get_string(line08_type_id, {});
		line09 = serialized->get_string(line09_type_id, {});
		line10 = serialized->get_string(line10_type_id, {});
		line11 = serialized->get_string(line11_type_id, {});
		line12 = serialized->get_string(line12_type_id, {});
		line13 = serialized->get_string(line13_type_id, {});
		line14 = serialized->get_string(line14_type_id, {});
		line15 = serialized->get_string(line15_type_id, {});
		line16 = serialized->get_string(line16_type_id, {});
		line17 = serialized->get_string(line17_type_id, {});
		line18 = serialized->get_string(line18_type_id, {});
		line19 = serialized->get_string(line19_type_id, {});
		line20 = serialized->get_string(line20_type_id, {});
		line21 = serialized->get_string(line21_type_id, {});
		line22 = serialized->get_string(line22_type_id, {});
		line23 = serialized->get_string(line23_type_id, {});
		line24 = serialized->get_string(line24_type_id, {});
		line25 = serialized->get_string(line25_type_id, {});
		line26 = serialized->get_string(line26_type_id, {});
		line27 = serialized->get_string(line27_type_id, {});
		line28 = serialized->get_string(line28_type_id, {});
		line29 = serialized->get_string(line29_type_id, {});
		line30 = serialized->get_string(line30_type_id, {});
		line31 = serialized->get_string(line31_type_id, {});
		line32 = serialized->get_string(line32_type_id, {});
		line33 = serialized->get_string(line33_type_id, {});
		line34 = serialized->get_string(line34_type_id, {});
		line35 = serialized->get_string(line35_type_id, {});
		line36 = serialized->get_string(line36_type_id, {});
		line37 = serialized->get_string(line37_type_id, {});
		line38 = serialized->get_string(line38_type_id, {});
		line39 = serialized->get_string(line39_type_id, {});
		line40 = serialized->get_string(line40_type_id, {});
		line41 = serialized->get_string(line41_type_id, {});
		line42 = serialized->get_string(line42_type_id, {});
		line43 = serialized->get_string(line43_type_id, {});
		line44 = serialized->get_string(line44_type_id, {});
		line45 = serialized->get_string(line45_type_id, {});
		line46 = serialized->get_string(line46_type_id, {});
		line47 = serialized->get_string(line47_type_id, {});
		line48 = serialized->get_string(line48_type_id, {});
		line49 = serialized->get_string(line49_type_id, {});
		line51 = serialized->get_string(line51_type_id, {});
		line52 = serialized->get_string(line52_type_id, {});
		line53 = serialized->get_string(line53_type_id, {});
		line54 = serialized->get_string(line54_type_id, {});
		line55 = serialized->get_string(line55_type_id, {});
		line56 = serialized->get_string(line56_type_id, {});
		line57 = serialized->get_string(line57_type_id, {});
		line58 = serialized->get_string(line58_type_id, {}); 
	}

	[[nodiscard]] auto
	TerrainSystem01CreatingNewTerrain::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainSystem01CreatingNewTerrain::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainSystem01CreatingNewTerrain> {
		if (incoming_type_id == TerrainSystem01CreatingNewTerrain::type_id) {
			return std::make_shared<TerrainSystem01CreatingNewTerrain>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
