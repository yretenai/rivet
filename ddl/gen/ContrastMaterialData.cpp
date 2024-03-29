// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ContrastMaterialEntry.hpp> 

#include <rivet/ddl/generated/ContrastMaterialData.hpp>

namespace rivet::ddl::generated {
	ContrastMaterialData::ContrastMaterialData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Entries = serialized->unwrap_into_many<rivet::ddl::generated::ContrastMaterialEntry>(Entries_type_id);
		FallbackMaterial = serialized->get_string(FallbackMaterial_type_id, {}); 
	}

	[[nodiscard]] auto
	ContrastMaterialData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ContrastMaterialData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ContrastMaterialData> {
		if (incoming_type_id == ContrastMaterialData::type_id) {
			return std::make_shared<ContrastMaterialData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
