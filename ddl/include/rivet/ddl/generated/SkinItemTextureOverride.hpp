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
	struct AssetReferenceDef; 

	struct RIVET_DDL_SHARED SkinItemTextureOverride : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinItemTextureOverride";
		constexpr static rivet::rivet_type_id type_id = 0x4a72d761;

		constexpr static std::string_view OriginalMaterial_type_name = "OriginalMaterial";
		constexpr static rivet::rivet_type_id OriginalMaterial_type_id = 0x3608a389;
		constexpr static std::string_view OverrideTexture_type_name = "OverrideTexture";
		constexpr static rivet::rivet_type_id OverrideTexture_type_id = 0xc9018aae;
		constexpr static std::string_view ConstantName_type_name = "ConstantName";
		constexpr static rivet::rivet_type_id ConstantName_type_id = 0xc6991700; 

		explicit SkinItemTextureOverride() = default;
		explicit SkinItemTextureOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> OriginalMaterial {};
		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> OverrideTexture {};
		std::string_view ConstantName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemTextureOverride>;
	};
} // namespace rivet::ddl::generated

// clang-format on
