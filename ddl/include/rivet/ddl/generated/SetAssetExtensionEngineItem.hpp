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

#include <rivet/ddl/generated/enums/AssetExtensions.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SetAssetExtensionEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetAssetExtensionEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x15858224;

		constexpr static std::string_view AssetExtension_type_name = "AssetExtension";
		constexpr static rivet::rivet_type_id AssetExtension_type_id = 0xe3b51190; 

		explicit SetAssetExtensionEngineItem() = default;
		explicit SetAssetExtensionEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::AssetExtensions AssetExtension {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetAssetExtensionEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
