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
	struct RIVET_DDL_SHARED MacroEcon : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "MacroEcon";
		constexpr const static rivet::rivet_type_id type_id = 0x9c7bb11b;

		constexpr const static std::string_view SegmentsCompleted_type_name = "SegmentsCompleted";
		constexpr const static rivet::rivet_type_id SegmentsCompleted_type_id = 0xc9dca744;
		constexpr const static std::string_view MinBolts_type_name = "MinBolts";
		constexpr const static rivet::rivet_type_id MinBolts_type_id = 0x7af9f223;
		constexpr const static std::string_view MaxBolts_type_name = "MaxBolts";
		constexpr const static rivet::rivet_type_id MaxBolts_type_id = 0x9c995dc2;
		constexpr const static std::string_view MinHeroXP_type_name = "MinHeroXP";
		constexpr const static rivet::rivet_type_id MinHeroXP_type_id = 0xf49873e7;
		constexpr const static std::string_view MaxHeroXP_type_name = "MaxHeroXP";
		constexpr const static rivet::rivet_type_id MaxHeroXP_type_id = 0x2373c1a6;
		constexpr const static std::string_view MinWpnXP_type_name = "MinWpnXP";
		constexpr const static rivet::rivet_type_id MinWpnXP_type_id = 0x425163aa;
		constexpr const static std::string_view MaxWpnXP_type_name = "MaxWpnXP";
		constexpr const static rivet::rivet_type_id MaxWpnXP_type_id = 0xa431cc4b;
		constexpr const static std::string_view MinRaritanium_type_name = "MinRaritanium";
		constexpr const static rivet::rivet_type_id MinRaritanium_type_id = 0x17c583a;
		constexpr const static std::string_view MaxRaritanium_type_name = "MaxRaritanium";
		constexpr const static rivet::rivet_type_id MaxRaritanium_type_id = 0x4133204c; 

		explicit MacroEcon() = default;
		explicit MacroEcon([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t SegmentsCompleted {};
		uint32_t MinBolts {};
		uint32_t MaxBolts {};
		uint32_t MinHeroXP {};
		uint32_t MaxHeroXP {};
		uint32_t MinWpnXP {};
		uint32_t MaxWpnXP {};
		uint32_t MinRaritanium {};
		uint32_t MaxRaritanium {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MacroEcon>;
	};
} // namespace rivet::ddl::generated

// clang-format on
