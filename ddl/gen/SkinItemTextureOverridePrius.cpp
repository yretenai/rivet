// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemTextureOverridePrius.hpp>

namespace rivet::ddl::generated {
	SkinItemTextureOverridePrius::SkinItemTextureOverridePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OriginalMaterialNameHash = serialized->get_uint64(OriginalMaterialNameHash_type_id, 0);
		OverrideTextureNameHash = serialized->get_uint64(OverrideTextureNameHash_type_id, 0);
		ConstantNameHash = serialized->get_uint32(ConstantNameHash_type_id, 0); 
	}

	[[nodiscard]] auto
	SkinItemTextureOverridePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemTextureOverridePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemTextureOverridePrius> {
		if (incoming_type_id == SkinItemTextureOverridePrius::type_id) {
			return std::make_shared<SkinItemTextureOverridePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
