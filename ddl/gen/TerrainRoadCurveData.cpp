// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainRoadCompositeProperties.hpp>
#include <rivet/ddl/generated/TerrainRoadMaterialCompositeProperties.hpp> 

#include <rivet/ddl/generated/TerrainRoadCurveData.hpp>

namespace rivet::ddl::generated {
	TerrainRoadCurveData::TerrainRoadCurveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WidthMeters = serialized->get_float(WidthMeters_type_id);
		SortValue = serialized->get_float(SortValue_type_id);
		MaterialProperties = serialized->unwrap_into<rivet::ddl::generated::TerrainRoadMaterialCompositeProperties>(MaterialProperties_type_id);
		HeightProperties = serialized->unwrap_into<rivet::ddl::generated::TerrainRoadCompositeProperties>(HeightProperties_type_id); 
	}

	[[nodiscard]] auto
	TerrainRoadCurveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainRoadCurveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainRoadCurveData> {
		if (incoming_type_id == TerrainRoadCurveData::type_id) {
			return std::make_shared<TerrainRoadCurveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
