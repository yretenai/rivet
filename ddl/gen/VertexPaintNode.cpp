// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VertexPaintNode.hpp>

namespace rivet::ddl::generated {
	VertexPaintNode::VertexPaintNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		IsDeleted = serialized->get_bool(IsDeleted_type_id);
		ColorMap = serialized->get_uint32s(ColorMap_type_id);
		DefaultColor = serialized->get_uint32(DefaultColor_type_id);
		MetersPerVoxel = serialized->get_float(MetersPerVoxel_type_id); 
	}

	[[nodiscard]] auto
	VertexPaintNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VertexPaintNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VertexPaintNode> {
		if (incoming_type_id == VertexPaintNode::type_id) {
			return std::make_shared<VertexPaintNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
