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
	struct DynamicEnumValue;
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED DynamicEnumDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DynamicEnumDef";
		constexpr static rivet::rivet_type_id type_id = 0xe60c1db2;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Select_type_name = "Select";
		constexpr static rivet::rivet_type_id Select_type_id = 0x758aa4a7;
		constexpr static std::string_view Values_type_name = "Values";
		constexpr static rivet::rivet_type_id Values_type_id = 0x4df0281; 

		explicit DynamicEnumDef() = default;
		explicit DynamicEnumDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		std::string_view Name {};
		std::string_view Select {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DynamicEnumValue>> Values {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicEnumDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
