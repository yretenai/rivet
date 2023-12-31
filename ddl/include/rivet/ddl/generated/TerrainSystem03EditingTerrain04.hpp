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
	struct RIVET_DDL_SHARED TerrainSystem03EditingTerrain04 : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TerrainSystem03EditingTerrain04";
		constexpr static rivet::rivet_type_id type_id = 0xc3da4a38;

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
		constexpr static std::string_view line06_type_name = "line06";
		constexpr static rivet::rivet_type_id line06_type_id = 0xe61b1a7e;
		constexpr static std::string_view line07_type_name = "line07";
		constexpr static rivet::rivet_type_id line07_type_id = 0x911c2ae8;
		constexpr static std::string_view line08_type_name = "line08";
		constexpr static rivet::rivet_type_id line08_type_id = 0x1a33779;
		constexpr static std::string_view line09_type_name = "line09";
		constexpr static rivet::rivet_type_id line09_type_id = 0x76a407ef;
		constexpr static std::string_view line10_type_name = "line10";
		constexpr static rivet::rivet_type_id line10_type_id = 0x16638e0a;
		constexpr static std::string_view line11_type_name = "line11";
		constexpr static rivet::rivet_type_id line11_type_id = 0x6164be9c;
		constexpr static std::string_view line12_type_name = "line12";
		constexpr static rivet::rivet_type_id line12_type_id = 0xf86def26;
		constexpr static std::string_view line13_type_name = "line13";
		constexpr static rivet::rivet_type_id line13_type_id = 0x8f6adfb0;
		constexpr static std::string_view line14_type_name = "line14";
		constexpr static rivet::rivet_type_id line14_type_id = 0x110e4a13;
		constexpr static std::string_view line15_type_name = "line15";
		constexpr static rivet::rivet_type_id line15_type_id = 0x66097a85;
		constexpr static std::string_view line16_type_name = "line16";
		constexpr static rivet::rivet_type_id line16_type_id = 0xff002b3f;
		constexpr static std::string_view line17_type_name = "line17";
		constexpr static rivet::rivet_type_id line17_type_id = 0x88071ba9;
		constexpr static std::string_view line18_type_name = "line18";
		constexpr static rivet::rivet_type_id line18_type_id = 0x18b80638;
		constexpr static std::string_view line19_type_name = "line19";
		constexpr static rivet::rivet_type_id line19_type_id = 0x6fbf36ae; 

		explicit TerrainSystem03EditingTerrain04() = default;
		explicit TerrainSystem03EditingTerrain04([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view line00 {};
		std::string_view line01 {};
		std::string_view line02 {};
		std::string_view line03 {};
		std::string_view line04 {};
		std::string_view line05 {};
		std::string_view line06 {};
		std::string_view line07 {};
		std::string_view line08 {};
		std::string_view line09 {};
		std::string_view line10 {};
		std::string_view line11 {};
		std::string_view line12 {};
		std::string_view line13 {};
		std::string_view line14 {};
		std::string_view line15 {};
		std::string_view line16 {};
		std::string_view line17 {};
		std::string_view line18 {};
		std::string_view line19 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainSystem03EditingTerrain04>;
	};
} // namespace rivet::ddl::generated

// clang-format on
