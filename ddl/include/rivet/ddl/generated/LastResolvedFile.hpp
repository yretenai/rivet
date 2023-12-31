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
	struct RIVET_DDL_SHARED LastResolvedFile : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LastResolvedFile";
		constexpr static rivet::rivet_type_id type_id = 0x7aaf27e9;

		constexpr static std::string_view FileToResolve_type_name = "FileToResolve";
		constexpr static rivet::rivet_type_id FileToResolve_type_id = 0x54a1fc75;
		constexpr static std::string_view BaseRevisionNumber_type_name = "BaseRevisionNumber";
		constexpr static rivet::rivet_type_id BaseRevisionNumber_type_id = 0x7c497ea3;
		constexpr static std::string_view LatestRevisionNumber_type_name = "LatestRevisionNumber";
		constexpr static rivet::rivet_type_id LatestRevisionNumber_type_id = 0x7d43870c;
		constexpr static std::string_view TheirChanges_type_name = "TheirChanges";
		constexpr static rivet::rivet_type_id TheirChanges_type_id = 0x2e8a03e0;
		constexpr static std::string_view YourChanges_type_name = "YourChanges";
		constexpr static rivet::rivet_type_id YourChanges_type_id = 0x65689d14;
		constexpr static std::string_view MergedResult_type_name = "MergedResult";
		constexpr static rivet::rivet_type_id MergedResult_type_id = 0xa76db314; 

		explicit LastResolvedFile() = default;
		explicit LastResolvedFile([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view FileToResolve {};
		int32_t BaseRevisionNumber {};
		int32_t LatestRevisionNumber {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> TheirChanges {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> YourChanges {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> MergedResult {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LastResolvedFile>;
	};
} // namespace rivet::ddl::generated

// clang-format on
