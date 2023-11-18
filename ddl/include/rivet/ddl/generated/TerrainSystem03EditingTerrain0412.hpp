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
	struct RIVET_DDL_SHARED TerrainSystem03EditingTerrain0412 : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TerrainSystem03EditingTerrain0412";
		constexpr static rivet::rivet_type_id type_id = 0x8f1c819d;

		constexpr static std::string_view line00_type_name = "line00";
		constexpr static rivet::rivet_type_id line00_type_id = 0xf78bf4b;
		constexpr static std::string_view line01_type_name = "line01";
		constexpr static rivet::rivet_type_id line01_type_id = 0x787f8fdd;
		constexpr static std::string_view line02_type_name = "line02";
		constexpr static rivet::rivet_type_id line02_type_id = 0xe176de67;
		constexpr static std::string_view line03_type_name = "line03";
		constexpr static rivet::rivet_type_id line03_type_id = 0x9671eef1;
		constexpr static std::string_view line04_type_name = "line04";
		constexpr static rivet::rivet_type_id line04_type_id = 0x8157b52;
		constexpr static std::string_view line05_type_name = "line05";
		constexpr static rivet::rivet_type_id line05_type_id = 0x7f124bc4; 

		explicit TerrainSystem03EditingTerrain0412() = default;
		explicit TerrainSystem03EditingTerrain0412([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view line00 {};
		std::string_view line01 {};
		std::string_view line02 {};
		std::string_view line03 {};
		std::string_view line04 {};
		std::string_view line05 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainSystem03EditingTerrain0412>;
	};
} // namespace rivet::ddl::generated

// clang-format on
