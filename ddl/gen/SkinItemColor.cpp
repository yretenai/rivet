// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemMaterialOverride.hpp>
#include <rivet/ddl/generated/SkinItemTextureOverride.hpp> 

#include <rivet/ddl/generated/SkinItemColor.hpp>

namespace rivet::ddl::generated {
	SkinItemColor::SkinItemColor([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ColorName = serialized->get_string(ColorName_type_id);
		NameLocTag = serialized->get_string(NameLocTag_type_id);
		Available = serialized->get_enum<rivet::ddl::generated::x7ecfc969>(Available_type_id, rivet::ddl::generated::x7ecfc969_values);
		R = serialized->get_uint8(R_type_id);
		G = serialized->get_uint8(G_type_id);
		B = serialized->get_uint8(B_type_id);
		TextureOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemTextureOverride>(TextureOverrideList_type_id);
		MaterialOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemMaterialOverride>(MaterialOverrideList_type_id); 
	}

	[[nodiscard]] auto
	SkinItemColor::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemColor::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemColor> {
		if (incoming_type_id == SkinItemColor::type_id) {
			return std::make_shared<SkinItemColor>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
