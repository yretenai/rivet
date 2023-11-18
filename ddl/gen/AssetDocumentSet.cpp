// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetDocument.hpp> 

#include <rivet/ddl/generated/AssetDocumentSet.hpp>

namespace rivet::ddl::generated {
	AssetDocumentSet::AssetDocumentSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetDocumentSet_ = serialized->unwrap_into_many<rivet::ddl::generated::AssetDocument>(AssetDocumentSet__type_id); 
	}

	[[nodiscard]] auto
	AssetDocumentSet::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetDocumentSet::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetDocumentSet> {
		if (incoming_type_id == AssetDocumentSet::type_id) {
			return std::make_shared<AssetDocumentSet>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
