// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DbVerifyAssetCollection.hpp> 

#include <rivet/ddl/generated/DbVerifyResult.hpp>

namespace rivet::ddl::generated {
	DbVerifyResult::DbVerifyResult([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetCollection = serialized->unwrap_into_many<rivet::ddl::generated::DbVerifyAssetCollection>(AssetCollection_type_id);
		FileCount = serialized->get_uint32(FileCount_type_id);
		DbEntryCount = serialized->get_uint32(DbEntryCount_type_id);
		ErrorCount = serialized->get_uint32(ErrorCount_type_id);
		UnionCount = serialized->get_uint32(UnionCount_type_id);
		UncleanAssetPath = serialized->get_uint32(UncleanAssetPath_type_id);
		HashClashes = serialized->get_uint32(HashClashes_type_id); 
	}

	[[nodiscard]] auto
	DbVerifyResult::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DbVerifyResult::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DbVerifyResult> {
		if (incoming_type_id == DbVerifyResult::type_id) {
			return std::make_shared<DbVerifyResult>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated