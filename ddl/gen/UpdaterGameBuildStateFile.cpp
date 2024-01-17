// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UpdaterGameBuildStateFile.hpp>

namespace rivet::ddl::generated {
	UpdaterGameBuildStateFile::UpdaterGameBuildStateFile([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocalDir = serialized->get_string(LocalDir_type_id, "");
		RemoteDir = serialized->get_string(RemoteDir_type_id, "");
		ConfigFile = serialized->get_string(ConfigFile_type_id, "");
		PackageFile = serialized->get_string(PackageFile_type_id, "");
		IsLocalBuild = serialized->get_bool(IsLocalBuild_type_id, false);
		IsConfigDownloaded = serialized->get_bool(IsConfigDownloaded_type_id, false);
		IsPackageDownloaded = serialized->get_bool(IsPackageDownloaded_type_id, false);
		IsPackageUnpacked = serialized->get_bool(IsPackageUnpacked_type_id, false); 
	}

	[[nodiscard]] auto
	UpdaterGameBuildStateFile::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UpdaterGameBuildStateFile::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UpdaterGameBuildStateFile> {
		if (incoming_type_id == UpdaterGameBuildStateFile::type_id) {
			return std::make_shared<UpdaterGameBuildStateFile>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
