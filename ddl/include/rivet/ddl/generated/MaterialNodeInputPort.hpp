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
	struct MaterialNodeInputVisibilityCondition;
	struct MaterialNodeInputSelectItem; 

	struct RIVET_DDL_SHARED MaterialNodeInputPort : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialNodeInputPort";
		constexpr static rivet::rivet_type_id type_id = 0xc67a7536;

		constexpr static std::string_view InternalName_type_name = "InternalName";
		constexpr static rivet::rivet_type_id InternalName_type_id = 0x93971d83;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view Minimums_type_name = "Minimums";
		constexpr static rivet::rivet_type_id Minimums_type_id = 0xee16155a;
		constexpr static std::string_view Maximums_type_name = "Maximums";
		constexpr static rivet::rivet_type_id Maximums_type_id = 0x876babb;
		constexpr static std::string_view Values_type_name = "Values";
		constexpr static rivet::rivet_type_id Values_type_id = 0x4df0281;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view Documentation_type_name = "Documentation";
		constexpr static rivet::rivet_type_id Documentation_type_id = 0x4cac4bae;
		constexpr static std::string_view UIType_type_name = "UIType";
		constexpr static rivet::rivet_type_id UIType_type_id = 0x8c1e6e85;
		constexpr static std::string_view Group_type_name = "Group";
		constexpr static rivet::rivet_type_id Group_type_id = 0x74938804;
		constexpr static std::string_view SortOrder_type_name = "SortOrder";
		constexpr static rivet::rivet_type_id SortOrder_type_id = 0xbd9f03f1;
		constexpr static std::string_view Labels_type_name = "Labels";
		constexpr static rivet::rivet_type_id Labels_type_id = 0x8ba94c76;
		constexpr static std::string_view Global_type_name = "Global";
		constexpr static rivet::rivet_type_id Global_type_id = 0xd67dc5e4;
		constexpr static std::string_view Visible_type_name = "Visible";
		constexpr static rivet::rivet_type_id Visible_type_id = 0x7b5a8b61;
		constexpr static std::string_view Exposed_type_name = "Exposed";
		constexpr static rivet::rivet_type_id Exposed_type_id = 0x3c0cbb98;
		constexpr static std::string_view TestingOnly_type_name = "TestingOnly";
		constexpr static rivet::rivet_type_id TestingOnly_type_id = 0x1837e13b;
		constexpr static std::string_view InheritName_type_name = "InheritName";
		constexpr static rivet::rivet_type_id InheritName_type_id = 0xfa572691;
		constexpr static std::string_view LinearFilter_type_name = "LinearFilter";
		constexpr static rivet::rivet_type_id LinearFilter_type_id = 0xc95c1d5c;
		constexpr static std::string_view ShowPreview_type_name = "ShowPreview";
		constexpr static rivet::rivet_type_id ShowPreview_type_id = 0x8db08f6f;
		constexpr static std::string_view DeveloperMode_type_name = "DeveloperMode";
		constexpr static rivet::rivet_type_id DeveloperMode_type_id = 0xfd8c5200;
		constexpr static std::string_view UserDefinedLabels_type_name = "UserDefinedLabels";
		constexpr static rivet::rivet_type_id UserDefinedLabels_type_id = 0xb47ed490;
		constexpr static std::string_view SelectItems_type_name = "SelectItems";
		constexpr static rivet::rivet_type_id SelectItems_type_id = 0x5819ef65;
		constexpr static std::string_view VisibilityCondition_type_name = "VisibilityCondition";
		constexpr static rivet::rivet_type_id VisibilityCondition_type_id = 0x10b37a44; 

		explicit MaterialNodeInputPort() = default;
		explicit MaterialNodeInputPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view InternalName {};
		std::string_view DisplayName {};
		std::string_view Minimums {};
		std::string_view Maximums {};
		std::string_view Values {};
		std::string_view Type {};
		std::string_view Description {};
		std::string_view Documentation {};
		std::string_view UIType {};
		std::string_view Group {};
		std::string_view SortOrder {};
		std::string_view Labels {};
		bool Global {};
		bool Visible {};
		bool Exposed {};
		bool TestingOnly {};
		bool InheritName {};
		bool LinearFilter {};
		bool ShowPreview {};
		bool DeveloperMode {};
		bool UserDefinedLabels {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MaterialNodeInputSelectItem>> SelectItems {};
		std::shared_ptr<rivet::ddl::generated::MaterialNodeInputVisibilityCondition> VisibilityCondition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeInputPort>;
	};
} // namespace rivet::ddl::generated

// clang-format on
