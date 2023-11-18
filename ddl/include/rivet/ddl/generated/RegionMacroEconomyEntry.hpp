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
	struct RIVET_DDL_SHARED RegionMacroEconomyEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RegionMacroEconomyEntry";
		constexpr static rivet::rivet_type_id type_id = 0x39a2e421;

		constexpr static std::string_view Regions_type_name = "Regions";
		constexpr static rivet::rivet_type_id Regions_type_id = 0xa38d1acb;
		constexpr static std::string_view EconConfig_type_name = "EconConfig";
		constexpr static rivet::rivet_type_id EconConfig_type_id = 0xda3a4a5c; 

		explicit RegionMacroEconomyEntry() = default;
		explicit RegionMacroEconomyEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Regions {};
		std::string_view EconConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionMacroEconomyEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
