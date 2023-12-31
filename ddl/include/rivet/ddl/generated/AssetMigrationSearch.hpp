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
	struct RIVET_DDL_SHARED AssetMigrationSearch : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetMigrationSearch";
		constexpr static rivet::rivet_type_id type_id = 0xf72d3757;

		constexpr static std::string_view FileCriteria_type_name = "FileCriteria";
		constexpr static rivet::rivet_type_id FileCriteria_type_id = 0xa3c99911;
		constexpr static std::string_view CreatedBy_type_name = "CreatedBy";
		constexpr static rivet::rivet_type_id CreatedBy_type_id = 0x51abd94e;
		constexpr static std::string_view Suffixes_type_name = "Suffixes";
		constexpr static rivet::rivet_type_id Suffixes_type_id = 0x6395b49;
		constexpr static std::string_view Branches_type_name = "Branches";
		constexpr static rivet::rivet_type_id Branches_type_id = 0x2d616c1f;
		constexpr static std::string_view UsePath_type_name = "UsePath";
		constexpr static rivet::rivet_type_id UsePath_type_id = 0x74903fb5;
		constexpr static std::string_view Limit_type_name = "Limit";
		constexpr static rivet::rivet_type_id Limit_type_id = 0x66c524a1; 

		explicit AssetMigrationSearch() = default;
		explicit AssetMigrationSearch([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view FileCriteria {};
		std::string_view CreatedBy {};
		std::vector<std::string_view> Suffixes {};
		std::vector<std::string_view> Branches {};
		bool UsePath {};
		int32_t Limit {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetMigrationSearch>;
	};
} // namespace rivet::ddl::generated

// clang-format on
