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
	struct SkinItemDecal;
	struct SkinItemConduitOverride;
	struct SkinItemConstantOverride;
	struct SkinItemColorOverride;
	struct SkinItemCompositeMaterialOverride;
	struct SkinItemMaterialOverride;
	struct SkinItemTextureOverride;
	struct SkinItemModelVariantOverride;
	struct SkinItemLocatorOverride; 

	struct RIVET_DDL_SHARED SkinItemOverride : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinItemOverride";
		constexpr static rivet::rivet_type_id type_id = 0x76cd4ce9;

		constexpr static std::string_view LocatorOverrideList_type_name = "LocatorOverrideList";
		constexpr static rivet::rivet_type_id LocatorOverrideList_type_id = 0xa6babbde;
		constexpr static std::string_view TextureOverrideList_type_name = "TextureOverrideList";
		constexpr static rivet::rivet_type_id TextureOverrideList_type_id = 0x31be016c;
		constexpr static std::string_view MaterialOverrideList_type_name = "MaterialOverrideList";
		constexpr static rivet::rivet_type_id MaterialOverrideList_type_id = 0xeb47267a;
		constexpr static std::string_view CompositeMaterialOverrideList_type_name = "CompositeMaterialOverrideList";
		constexpr static rivet::rivet_type_id CompositeMaterialOverrideList_type_id = 0x88bf7983;
		constexpr static std::string_view ColorOverrideList_type_name = "ColorOverrideList";
		constexpr static rivet::rivet_type_id ColorOverrideList_type_id = 0x5a9f1a9d;
		constexpr static std::string_view ConstantOverrideList_type_name = "ConstantOverrideList";
		constexpr static rivet::rivet_type_id ConstantOverrideList_type_id = 0xce09a84b;
		constexpr static std::string_view ConduitOverrideList_type_name = "ConduitOverrideList";
		constexpr static rivet::rivet_type_id ConduitOverrideList_type_id = 0x6c1e1c97;
		constexpr static std::string_view DecalList_type_name = "DecalList";
		constexpr static rivet::rivet_type_id DecalList_type_id = 0x1dfa6d24;
		constexpr static std::string_view ModelVariantOverrideList_type_name = "ModelVariantOverrideList";
		constexpr static rivet::rivet_type_id ModelVariantOverrideList_type_id = 0xdf65d905; 

		explicit SkinItemOverride() = default;
		explicit SkinItemOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemLocatorOverride>> LocatorOverrideList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemTextureOverride>> TextureOverrideList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemMaterialOverride>> MaterialOverrideList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemCompositeMaterialOverride>> CompositeMaterialOverrideList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemColorOverride>> ColorOverrideList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemConstantOverride>> ConstantOverrideList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemConduitOverride>> ConduitOverrideList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemDecal>> DecalList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemModelVariantOverride>> ModelVariantOverrideList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemOverride>;
	};
} // namespace rivet::ddl::generated

// clang-format on