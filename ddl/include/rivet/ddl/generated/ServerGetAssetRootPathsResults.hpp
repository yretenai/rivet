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
	struct RIVET_DDL_SHARED ServerGetAssetRootPathsResults : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ServerGetAssetRootPathsResults";
		constexpr static rivet::rivet_type_id type_id = 0x73b73ae;

		constexpr static std::string_view BuiltFolder_type_name = "BuiltFolder";
		constexpr static rivet::rivet_type_id BuiltFolder_type_id = 0xcbec5a79;
		constexpr static std::string_view SourceFolder_type_name = "SourceFolder";
		constexpr static rivet::rivet_type_id SourceFolder_type_id = 0x3bb003d8; 

		explicit ServerGetAssetRootPathsResults() = default;
		explicit ServerGetAssetRootPathsResults([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view BuiltFolder {};
		std::string_view SourceFolder {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ServerGetAssetRootPathsResults>;
	};
} // namespace rivet::ddl::generated

// clang-format on
