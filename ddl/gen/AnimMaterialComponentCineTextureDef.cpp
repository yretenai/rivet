// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimMaterialComponentCineTextureDef.hpp>

namespace rivet::ddl::generated {
	AnimMaterialComponentCineTextureDef::AnimMaterialComponentCineTextureDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TextureSlot = serialized->get_enum<rivet::ddl::generated::xfc5b2547>(TextureSlot_type_id, rivet::ddl::generated::xfc5b2547_values);
		TextureSamplerName = serialized->get_string(TextureSamplerName_type_id);
		OriginalMaterialName = serialized->get_string(OriginalMaterialName_type_id); 
	}

	[[nodiscard]] auto
	AnimMaterialComponentCineTextureDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimMaterialComponentCineTextureDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimMaterialComponentCineTextureDef> {
		if (incoming_type_id == AnimMaterialComponentCineTextureDef::type_id) {
			return std::make_shared<AnimMaterialComponentCineTextureDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
