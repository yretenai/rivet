// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2MaterialTextureOverrideInfo.hpp>

namespace rivet::ddl::generated {
	Cinematic2MaterialTextureOverrideInfo::Cinematic2MaterialTextureOverrideInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaterialMappingName = serialized->get_string(MaterialMappingName_type_id);
		TextureSamplerName = serialized->get_string(TextureSamplerName_type_id);
		TextureAsset = serialized->get_string(TextureAsset_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2MaterialTextureOverrideInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2MaterialTextureOverrideInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2MaterialTextureOverrideInfo> {
		if (incoming_type_id == Cinematic2MaterialTextureOverrideInfo::type_id) {
			return std::make_shared<Cinematic2MaterialTextureOverrideInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
