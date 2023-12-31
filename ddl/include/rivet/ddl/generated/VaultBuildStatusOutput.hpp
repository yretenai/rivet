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
	struct RIVET_DDL_SHARED VaultBuildStatusOutput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VaultBuildStatusOutput";
		constexpr static rivet::rivet_type_id type_id = 0xee7d7ecc;

		constexpr static std::string_view IsBuildingToC_type_name = "IsBuildingToC";
		constexpr static rivet::rivet_type_id IsBuildingToC_type_id = 0xb58b9a80;
		constexpr static std::string_view IsUpdatingEntries_type_name = "IsUpdatingEntries";
		constexpr static rivet::rivet_type_id IsUpdatingEntries_type_id = 0x1c56d168;
		constexpr static std::string_view CurrentEntryCount_type_name = "CurrentEntryCount";
		constexpr static rivet::rivet_type_id CurrentEntryCount_type_id = 0x2ddf55c9;
		constexpr static std::string_view TotalEntryCount_type_name = "TotalEntryCount";
		constexpr static rivet::rivet_type_id TotalEntryCount_type_id = 0xed6d38;
		constexpr static std::string_view OutdatedEntryCount_type_name = "OutdatedEntryCount";
		constexpr static rivet::rivet_type_id OutdatedEntryCount_type_id = 0xaf477f9e; 

		explicit VaultBuildStatusOutput() = default;
		explicit VaultBuildStatusOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool IsBuildingToC {};
		bool IsUpdatingEntries {};
		int32_t CurrentEntryCount {};
		int32_t TotalEntryCount {};
		int32_t OutdatedEntryCount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultBuildStatusOutput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
