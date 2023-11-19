// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UrlDispatch.hpp>

namespace rivet::ddl::generated {
	UrlDispatch::UrlDispatch([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SessionId = serialized->get_uint64(SessionId_type_id);
		AssetId = serialized->get_uint64(AssetId_type_id);
		DispatchType = serialized->get_enum<rivet::ddl::generated::xa5664812>(DispatchType_type_id, rivet::ddl::generated::xa5664812_values);
		CollectionName = serialized->get_string(CollectionName_type_id);
		Action = serialized->get_string(Action_type_id);
		AssetType = serialized->get_enum<rivet::ddl::generated::AssetExtensions>(AssetType_type_id, rivet::ddl::generated::AssetExtensions_values); 
	}

	[[nodiscard]] auto
	UrlDispatch::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UrlDispatch::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UrlDispatch> {
		if (incoming_type_id == UrlDispatch::type_id) {
			return std::make_shared<UrlDispatch>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated