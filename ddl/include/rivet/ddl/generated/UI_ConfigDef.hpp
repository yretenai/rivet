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

#include <rivet/ddl/generated/enums/x9750cc97.hpp> 

namespace rivet::ddl::generated {
	struct AssetSwap;
	struct ConfigType;
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED UI_ConfigDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_ConfigDef";
		constexpr static rivet::rivet_type_id type_id = 0xf343009b;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view LoadType_type_name = "LoadType";
		constexpr static rivet::rivet_type_id LoadType_type_id = 0xc72bc198;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view AssetSwaps_type_name = "AssetSwaps";
		constexpr static rivet::rivet_type_id AssetSwaps_type_id = 0x8228c9ae;
		constexpr static std::string_view Def_type_name = "Def";
		constexpr static rivet::rivet_type_id Def_type_id = 0x2691c8a8; 

		explicit UI_ConfigDef() = default;
		explicit UI_ConfigDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		rivet::ddl::generated::x9750cc97 LoadType {};
		std::shared_ptr<rivet::ddl::generated::ConfigType> Type {};
		std::shared_ptr<rivet::ddl::generated::AssetSwap> AssetSwaps {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> Def {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_ConfigDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
