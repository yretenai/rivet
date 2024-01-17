// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/SkinItemModelVariantOverride.hpp>

namespace rivet::ddl::generated {
	SkinItemModelVariantOverride::SkinItemModelVariantOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModelVariant = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(ModelVariant_type_id);
		VariantName = serialized->get_string(VariantName_type_id, "Default"); 
	}

	[[nodiscard]] auto
	SkinItemModelVariantOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemModelVariantOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemModelVariantOverride> {
		if (incoming_type_id == SkinItemModelVariantOverride::type_id) {
			return std::make_shared<SkinItemModelVariantOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
