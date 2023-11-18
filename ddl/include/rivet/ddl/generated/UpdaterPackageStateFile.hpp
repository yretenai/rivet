// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UpdaterPackageStateFile : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UpdaterPackageStateFile";
		constexpr static rivet::rivet_type_id type_id = 0x75e487d2;

		constexpr static std::string_view PackageRootDir_type_name = "PackageRootDir";
		constexpr static rivet::rivet_type_id PackageRootDir_type_id = 0xc78ccd21;
		constexpr static std::string_view PackageFolder_type_name = "PackageFolder";
		constexpr static rivet::rivet_type_id PackageFolder_type_id = 0xcb4b0515;
		constexpr static std::string_view PackageConfigFile_type_name = "PackageConfigFile";
		constexpr static rivet::rivet_type_id PackageConfigFile_type_id = 0x9f8fab1b;
		constexpr static std::string_view MainPackageFile_type_name = "MainPackageFile";
		constexpr static rivet::rivet_type_id MainPackageFile_type_id = 0xf9209020;
		constexpr static std::string_view IsCodeFolder_type_name = "IsCodeFolder";
		constexpr static rivet::rivet_type_id IsCodeFolder_type_id = 0x4bd40e09;
		constexpr static std::string_view IsConfigDownloaded_type_name = "IsConfigDownloaded";
		constexpr static rivet::rivet_type_id IsConfigDownloaded_type_id = 0x48274b4e;
		constexpr static std::string_view IsPackageDownloaded_type_name = "IsPackageDownloaded";
		constexpr static rivet::rivet_type_id IsPackageDownloaded_type_id = 0xab321f0e;
		constexpr static std::string_view IsPackageUnpacked_type_name = "IsPackageUnpacked";
		constexpr static rivet::rivet_type_id IsPackageUnpacked_type_id = 0xf369b90b; 

		explicit UpdaterPackageStateFile() = default;
		explicit UpdaterPackageStateFile([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PackageRootDir {};
		std::string_view PackageFolder {};
		std::string_view PackageConfigFile {};
		std::string_view MainPackageFile {};
		bool IsCodeFolder {};
		bool IsConfigDownloaded {};
		bool IsPackageDownloaded {};
		bool IsPackageUnpacked {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UpdaterPackageStateFile>;
	};
} // namespace rivet::ddl::generated

// clang-format on
