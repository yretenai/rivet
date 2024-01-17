// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookGroupDef.hpp>
#include <rivet/ddl/generated/UI_OutsourceMaterialDef.hpp> 

#include <rivet/ddl/generated/UI_OutsourceModelDef.hpp>

namespace rivet::ddl::generated {
	UI_OutsourceModelDef::UI_OutsourceModelDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GeomLodDist1 = serialized->get_uint16(GeomLodDist1_type_id, 15);
		GeomLodDist2 = serialized->get_uint16(GeomLodDist2_type_id, 30);
		GeomLodDist3 = serialized->get_uint16(GeomLodDist3_type_id, 110);
		GeomLodDist4 = serialized->get_uint16(GeomLodDist4_type_id, 160);
		GeomLodDist5 = serialized->get_uint16(GeomLodDist5_type_id, 210);
		Materials = serialized->unwrap_into_many<rivet::ddl::generated::UI_OutsourceMaterialDef>(Materials_type_id);
		LookGroups = serialized->unwrap_into_many<rivet::ddl::generated::LookGroupDef>(LookGroups_type_id); 
	}

	[[nodiscard]] auto
	UI_OutsourceModelDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_OutsourceModelDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_OutsourceModelDef> {
		if (incoming_type_id == UI_OutsourceModelDef::type_id) {
			return std::make_shared<UI_OutsourceModelDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
