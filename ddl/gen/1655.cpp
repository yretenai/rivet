// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemLocatorOverride.hpp>
#include <rivet/ddl/generated/SkinItemTextureOverride.hpp>
#include <rivet/ddl/generated/SkinItemColorOverride.hpp>
#include <rivet/ddl/generated/SkinItemDecal.hpp>
#include <rivet/ddl/generated/SkinItemMaterialOverride.hpp>
#include <rivet/ddl/generated/SkinItemConduitOverride.hpp>
#include <rivet/ddl/generated/SkinItemCompositeMaterialOverride.hpp>
#include <rivet/ddl/generated/SkinItemConstantOverride.hpp>
#include <rivet/ddl/generated/SkinItemModelVariantOverride.hpp> 

#include <rivet/ddl/generated/SkinItemOverride.hpp>

namespace rivet::ddl::generated {
	SkinItemOverride::SkinItemOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocatorOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemLocatorOverride>(LocatorOverrideList_type_id);
		TextureOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemTextureOverride>(TextureOverrideList_type_id);
		MaterialOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemMaterialOverride>(MaterialOverrideList_type_id);
		CompositeMaterialOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemCompositeMaterialOverride>(CompositeMaterialOverrideList_type_id);
		ColorOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemColorOverride>(ColorOverrideList_type_id);
		ConstantOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemConstantOverride>(ConstantOverrideList_type_id);
		ConduitOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemConduitOverride>(ConduitOverrideList_type_id);
		DecalList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemDecal>(DecalList_type_id);
		ModelVariantOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemModelVariantOverride>(ModelVariantOverrideList_type_id); 
	}

	auto
	SkinItemOverride::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SkinItemOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemOverride> {
		if (incoming_type_id == SkinItemOverride::type_id) {
			return std::make_shared<SkinItemOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
