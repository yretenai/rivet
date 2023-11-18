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

	struct RIVET_DDL_SHARED ShaderConstant : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ShaderConstant";
		constexpr static rivet::rivet_type_id type_id = 0xac429e93;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view InputInternalName_type_name = "InputInternalName";
		constexpr static rivet::rivet_type_id InputInternalName_type_id = 0xaa785586;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view UIType_type_name = "UIType";
		constexpr static rivet::rivet_type_id UIType_type_id = 0x8c1e6e85;
		constexpr static std::string_view Labels_type_name = "Labels";
		constexpr static rivet::rivet_type_id Labels_type_id = 0x8ba94c76;
		constexpr static std::string_view Group_type_name = "Group";
		constexpr static rivet::rivet_type_id Group_type_id = 0x74938804;
		constexpr static std::string_view SortOrder_type_name = "SortOrder";
		constexpr static rivet::rivet_type_id SortOrder_type_id = 0xbd9f03f1;
		constexpr static std::string_view SubGraphAncestors_type_name = "SubGraphAncestors";
		constexpr static rivet::rivet_type_id SubGraphAncestors_type_id = 0xaa160e78;
		constexpr static std::string_view Offset_type_name = "Offset";
		constexpr static rivet::rivet_type_id Offset_type_id = 0x677284b7;
		constexpr static std::string_view Size_type_name = "Size";
		constexpr static rivet::rivet_type_id Size_type_id = 0xc750e4da;
		constexpr static std::string_view MinRange_type_name = "MinRange";
		constexpr static rivet::rivet_type_id MinRange_type_id = 0x6c79323f;
		constexpr static std::string_view MaxRange_type_name = "MaxRange";
		constexpr static rivet::rivet_type_id MaxRange_type_id = 0x8a199dde;
		constexpr static std::string_view Content_type_name = "Content";
		constexpr static rivet::rivet_type_id Content_type_id = 0xff2f5391;
		constexpr static std::string_view SelectItems_type_name = "SelectItems";
		constexpr static rivet::rivet_type_id SelectItems_type_id = 0x5819ef65;
		constexpr static std::string_view DeveloperMode_type_name = "DeveloperMode";
		constexpr static rivet::rivet_type_id DeveloperMode_type_id = 0xfd8c5200;
		constexpr static std::string_view VisibilityCondition_type_name = "VisibilityCondition";
		constexpr static rivet::rivet_type_id VisibilityCondition_type_id = 0x10b37a44; 

		explicit ShaderConstant() = default;
		explicit ShaderConstant([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::string_view DisplayName {};
		std::string_view InputInternalName {};
		std::string_view Description {};
		std::string_view UIType {};
		std::string_view Labels {};
		std::string_view Group {};
		std::string_view SortOrder {};
		std::string_view SubGraphAncestors {};
		uint16_t Offset {};
		uint16_t Size {};
		std::vector<float> MinRange {};
		std::vector<float> MaxRange {};
		std::vector<float> Content {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MaterialNodeInputSelectItem>> SelectItems {};
		bool DeveloperMode {};
		std::shared_ptr<rivet::ddl::generated::MaterialNodeInputVisibilityCondition> VisibilityCondition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShaderConstant>;
	};
} // namespace rivet::ddl::generated

// clang-format on
