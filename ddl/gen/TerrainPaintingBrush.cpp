// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainPaintingBrush.hpp>

namespace rivet::ddl::generated {
	TerrainPaintingBrush::TerrainPaintingBrush([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BrushPath = serialized->get_string(BrushPath_type_id); 
	}

	[[nodiscard]] auto
	TerrainPaintingBrush::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainPaintingBrush::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainPaintingBrush> {
		if (incoming_type_id == TerrainPaintingBrush::type_id) {
			return std::make_shared<TerrainPaintingBrush>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated