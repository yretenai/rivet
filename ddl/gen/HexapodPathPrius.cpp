// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UVTiling.hpp> 

#include <rivet/ddl/generated/HexapodPathPrius.hpp>

namespace rivet::ddl::generated {
	HexapodPathPrius::HexapodPathPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PathRadius = serialized->get_float(PathRadius_type_id);
		PointSpacing = serialized->get_float(PointSpacing_type_id);
		PathMaterial = serialized->get_string(PathMaterial_type_id);
		UV0Tiling = serialized->unwrap_into<rivet::ddl::generated::UVTiling>(UV0Tiling_type_id);
		UV1Tiling = serialized->unwrap_into<rivet::ddl::generated::UVTiling>(UV1Tiling_type_id);
		Roundness = serialized->get_uint8(Roundness_type_id); 
	}

	[[nodiscard]] auto
	HexapodPathPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HexapodPathPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HexapodPathPrius> {
		if (incoming_type_id == HexapodPathPrius::type_id) {
			return std::make_shared<HexapodPathPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
