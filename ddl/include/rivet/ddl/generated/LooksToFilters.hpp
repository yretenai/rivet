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
	struct FilterPair; 

	struct RIVET_DDL_SHARED LooksToFilters : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "LooksToFilters";
		constexpr const static rivet::rivet_type_id type_id = 0x34d66690;

		constexpr const static std::string_view Looks_type_name = "Looks";
		constexpr const static rivet::rivet_type_id Looks_type_id = 0xec785832;
		constexpr const static std::string_view Filters_type_name = "Filters";
		constexpr const static rivet::rivet_type_id Filters_type_id = 0x799d04b5; 

		explicit LooksToFilters() = default;
		explicit LooksToFilters([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Looks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::FilterPair>> Filters {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LooksToFilters>;
	};
} // namespace rivet::ddl::generated

// clang-format on
