// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeshTriDef.hpp>

namespace rivet::ddl::generated {
	MeshTriDef::MeshTriDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PositionIds = serialized->get_uint16s(PositionIds_type_id);
		NormalIds = serialized->get_uint16s(NormalIds_type_id);
		UvIds = serialized->get_uint16s(UvIds_type_id);
		Uv2Ids = serialized->get_uint16s(Uv2Ids_type_id);
		ColorIds = serialized->get_uint16s(ColorIds_type_id);
		SkinIds = serialized->get_uint16s(SkinIds_type_id); 
	}

	[[nodiscard]] auto
	MeshTriDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MeshTriDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeshTriDef> {
		if (incoming_type_id == MeshTriDef::type_id) {
			return std::make_shared<MeshTriDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
