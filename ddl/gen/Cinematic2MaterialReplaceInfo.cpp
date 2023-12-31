// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2MaterialReplaceInfo.hpp>

namespace rivet::ddl::generated {
	Cinematic2MaterialReplaceInfo::Cinematic2MaterialReplaceInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaterialMappingName = serialized->get_string(MaterialMappingName_type_id);
		MaterialAsset = serialized->get_string(MaterialAsset_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2MaterialReplaceInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2MaterialReplaceInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2MaterialReplaceInfo> {
		if (incoming_type_id == Cinematic2MaterialReplaceInfo::type_id) {
			return std::make_shared<Cinematic2MaterialReplaceInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
