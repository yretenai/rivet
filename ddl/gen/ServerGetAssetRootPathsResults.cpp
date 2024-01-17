// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ServerGetAssetRootPathsResults.hpp>

namespace rivet::ddl::generated {
	ServerGetAssetRootPathsResults::ServerGetAssetRootPathsResults([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BuiltFolder = serialized->get_string(BuiltFolder_type_id, {});
		SourceFolder = serialized->get_string(SourceFolder_type_id, {}); 
	}

	[[nodiscard]] auto
	ServerGetAssetRootPathsResults::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ServerGetAssetRootPathsResults::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ServerGetAssetRootPathsResults> {
		if (incoming_type_id == ServerGetAssetRootPathsResults::type_id) {
			return std::make_shared<ServerGetAssetRootPathsResults>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
