// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSWebApiSubCategoryMetadata.hpp>

namespace rivet::ddl::generated {
	UDSWebApiSubCategoryMetadata::UDSWebApiSubCategoryMetadata([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		name = serialized->get_strings(name_type_id); 
	}

	[[nodiscard]] auto
	UDSWebApiSubCategoryMetadata::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSWebApiSubCategoryMetadata::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSWebApiSubCategoryMetadata> {
		if (incoming_type_id == UDSWebApiSubCategoryMetadata::type_id) {
			return std::make_shared<UDSWebApiSubCategoryMetadata>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
