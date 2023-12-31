// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CrateMaterialOverride.hpp>

namespace rivet::ddl::generated {
	CrateMaterialOverride::CrateMaterialOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaterialOverride = serialized->get_string(MaterialOverride_type_id);
		MaterialMappingName = serialized->get_string(MaterialMappingName_type_id);
		MaterialType = serialized->get_enum<rivet::ddl::generated::x2351894b>(MaterialType_type_id, rivet::ddl::generated::x2351894b_values); 
	}

	[[nodiscard]] auto
	CrateMaterialOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CrateMaterialOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CrateMaterialOverride> {
		if (incoming_type_id == CrateMaterialOverride::type_id) {
			return std::make_shared<CrateMaterialOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
