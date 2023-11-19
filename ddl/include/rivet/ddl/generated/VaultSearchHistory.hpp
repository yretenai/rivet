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
	struct VaultHistoryEntry;
	struct VaultSearchRecord; 

	struct RIVET_DDL_SHARED VaultSearchHistory : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VaultSearchHistory";
		constexpr static rivet::rivet_type_id type_id = 0xd1eba68a;

		constexpr static std::string_view SearchRecords_type_name = "SearchRecords";
		constexpr static rivet::rivet_type_id SearchRecords_type_id = 0x4c880bd3;
		constexpr static std::string_view HistoryOrder_type_name = "HistoryOrder";
		constexpr static rivet::rivet_type_id HistoryOrder_type_id = 0xa176847b; 

		explicit VaultSearchHistory() = default;
		explicit VaultSearchHistory([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::VaultSearchRecord>> SearchRecords {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VaultHistoryEntry>> HistoryOrder {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultSearchHistory>;
	};
} // namespace rivet::ddl::generated

// clang-format on