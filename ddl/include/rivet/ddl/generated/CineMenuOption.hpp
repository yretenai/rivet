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
	struct RIVET_DDL_SHARED CineMenuOption : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CineMenuOption";
		constexpr static rivet::rivet_type_id type_id = 0xf0b0d690;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Items_type_name = "Items";
		constexpr static rivet::rivet_type_id Items_type_id = 0xf84d258c;
		constexpr static std::string_view DefaultItem_type_name = "DefaultItem";
		constexpr static rivet::rivet_type_id DefaultItem_type_id = 0x51f9b12c; 

		explicit CineMenuOption() = default;
		explicit CineMenuOption([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::vector<std::string_view> Items {};
		std::string_view DefaultItem {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CineMenuOption>;
	};
} // namespace rivet::ddl::generated

// clang-format on
