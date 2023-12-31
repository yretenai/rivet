// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainPaintingTarget.hpp>

namespace rivet::ddl::generated {
	TerrainPaintingTarget::TerrainPaintingTarget([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SplatMaskLayerId = serialized->get_uint8(SplatMaskLayerId_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x6b1fdfe1>(Type_type_id, rivet::ddl::generated::x6b1fdfe1_values); 
	}

	[[nodiscard]] auto
	TerrainPaintingTarget::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainPaintingTarget::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainPaintingTarget> {
		if (incoming_type_id == TerrainPaintingTarget::type_id) {
			return std::make_shared<TerrainPaintingTarget>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
