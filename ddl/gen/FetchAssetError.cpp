// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FetchAssetError.hpp>

namespace rivet::ddl::generated {
	FetchAssetError::FetchAssetError([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetId = serialized->get_uint64(AssetId_type_id, 0);
		AssetPath = serialized->get_string(AssetPath_type_id, {});
		Revision = serialized->get_int32(Revision_type_id, -1);
		Error = serialized->get_string(Error_type_id, ""); 
	}

	[[nodiscard]] auto
	FetchAssetError::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FetchAssetError::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FetchAssetError> {
		if (incoming_type_id == FetchAssetError::type_id) {
			return std::make_shared<FetchAssetError>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
