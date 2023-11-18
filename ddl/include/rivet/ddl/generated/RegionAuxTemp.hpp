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
	struct RIVET_DDL_SHARED RegionAuxTemp : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RegionAuxTemp";
		constexpr static rivet::rivet_type_id type_id = 0xb2e69a64;

		constexpr static std::string_view HighLod_type_name = "HighLod";
		constexpr static rivet::rivet_type_id HighLod_type_id = 0xf9e326a;
		constexpr static std::string_view LowLod_type_name = "LowLod";
		constexpr static rivet::rivet_type_id LowLod_type_id = 0xcc3cfed1;
		constexpr static std::string_view Units_type_name = "Units";
		constexpr static rivet::rivet_type_id Units_type_id = 0xf0e3b888;
		constexpr static std::string_view Zones_type_name = "Zones";
		constexpr static rivet::rivet_type_id Zones_type_id = 0x9c997da9; 

		explicit RegionAuxTemp() = default;
		explicit RegionAuxTemp([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t HighLod {};
		uint64_t LowLod {};
		uint64_t Units {};
		std::vector<std::string_view> Zones {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionAuxTemp>;
	};
} // namespace rivet::ddl::generated

// clang-format on
