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
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED GroupDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GroupDef";
		constexpr static rivet::rivet_type_id type_id = 0x569d0686;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view Lock_type_name = "Lock";
		constexpr static rivet::rivet_type_id Lock_type_id = 0xb71f5bbe;
		constexpr static std::string_view IsHoudiniGenerated_type_name = "IsHoudiniGenerated";
		constexpr static rivet::rivet_type_id IsHoudiniGenerated_type_id = 0x3e2ad3ba;
		constexpr static std::string_view HoudiniPluginName_type_name = "HoudiniPluginName";
		constexpr static rivet::rivet_type_id HoudiniPluginName_type_id = 0x1eee05a3; 

		explicit GroupDef() = default;
		explicit GroupDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		bool Lock {};
		bool IsHoudiniGenerated {};
		std::string_view HoudiniPluginName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GroupDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
