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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct VanityCategoryListItem;
	struct SkinItemPartList;
	struct SkinItemCategoryList; 

	struct RIVET_DDL_SHARED MasterSkinItemList : ConfigBase {
		constexpr static std::string_view type_name = "MasterSkinItemList";
		constexpr static rivet::rivet_type_id type_id = 0xdcbf0fe4;

		constexpr static std::string_view ItemCategoryList_type_name = "ItemCategoryList";
		constexpr static rivet::rivet_type_id ItemCategoryList_type_id = 0x6bbf2976;
		constexpr static std::string_view ItemPartList_type_name = "ItemPartList";
		constexpr static rivet::rivet_type_id ItemPartList_type_id = 0x2e58f6a8;
		constexpr static std::string_view VanityCategoryList_type_name = "VanityCategoryList";
		constexpr static rivet::rivet_type_id VanityCategoryList_type_id = 0xf89a4963;
		constexpr static std::string_view ColorConfigs_type_name = "ColorConfigs";
		constexpr static rivet::rivet_type_id ColorConfigs_type_id = 0x9277805e;
		constexpr static std::string_view ConstantConfigs_type_name = "ConstantConfigs";
		constexpr static rivet::rivet_type_id ConstantConfigs_type_id = 0x262e5777;
		constexpr static std::string_view DecalConfigs_type_name = "DecalConfigs";
		constexpr static rivet::rivet_type_id DecalConfigs_type_id = 0x54b89253; 

		explicit MasterSkinItemList() = default;
		explicit MasterSkinItemList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemCategoryList>> ItemCategoryList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemPartList>> ItemPartList {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VanityCategoryListItem>> VanityCategoryList {};
		std::vector<std::string_view> ColorConfigs {};
		std::vector<std::string_view> ConstantConfigs {};
		std::vector<std::string_view> DecalConfigs {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterSkinItemList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
