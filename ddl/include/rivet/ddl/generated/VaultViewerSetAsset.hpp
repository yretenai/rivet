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
	struct RIVET_DDL_SHARED VaultViewerSetAsset : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VaultViewerSetAsset";
		constexpr static rivet::rivet_type_id type_id = 0x6da353b4;

		constexpr static std::string_view AssetName_type_name = "AssetName";
		constexpr static rivet::rivet_type_id AssetName_type_id = 0x5b8d9442;
		constexpr static std::string_view AnimSetStack_type_name = "AnimSetStack";
		constexpr static rivet::rivet_type_id AnimSetStack_type_id = 0x5d0f513c;
		constexpr static std::string_view AnimSetActorAssetPath_type_name = "AnimSetActorAssetPath";
		constexpr static rivet::rivet_type_id AnimSetActorAssetPath_type_id = 0xf49c395e;
		constexpr static std::string_view AnimSetModelAssetPath_type_name = "AnimSetModelAssetPath";
		constexpr static rivet::rivet_type_id AnimSetModelAssetPath_type_id = 0x930315ab; 

		explicit VaultViewerSetAsset() = default;
		explicit VaultViewerSetAsset([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AssetName {};
		std::vector<std::string_view> AnimSetStack {};
		std::string_view AnimSetActorAssetPath {};
		std::string_view AnimSetModelAssetPath {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultViewerSetAsset>;
	};
} // namespace rivet::ddl::generated

// clang-format on