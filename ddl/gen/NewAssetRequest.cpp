// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NewAssetRequest.hpp>

namespace rivet::ddl::generated {
	NewAssetRequest::NewAssetRequest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetPath = serialized->get_string(AssetPath_type_id);
		Asset = serialized->get_field(Asset_type_id);
		AllowOverwrite = serialized->get_bool(AllowOverwrite_type_id); 
	}

	[[nodiscard]] auto
	NewAssetRequest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NewAssetRequest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NewAssetRequest> {
		if (incoming_type_id == NewAssetRequest::type_id) {
			return std::make_shared<NewAssetRequest>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
