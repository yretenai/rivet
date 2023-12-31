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
	struct RIVET_DDL_SHARED SpawnDirections : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpawnDirections";
		constexpr static rivet::rivet_type_id type_id = 0x4dec0a2e;

		constexpr static std::string_view PositiveX_type_name = "PositiveX";
		constexpr static rivet::rivet_type_id PositiveX_type_id = 0x8ddc204;
		constexpr static std::string_view NegativeX_type_name = "NegativeX";
		constexpr static rivet::rivet_type_id NegativeX_type_id = 0x82dd7d9f;
		constexpr static std::string_view PositiveY_type_name = "PositiveY";
		constexpr static rivet::rivet_type_id PositiveY_type_id = 0x7fdaf292;
		constexpr static std::string_view NegativeY_type_name = "NegativeY";
		constexpr static rivet::rivet_type_id NegativeY_type_id = 0xf5da4d09;
		constexpr static std::string_view PositiveZ_type_name = "PositiveZ";
		constexpr static rivet::rivet_type_id PositiveZ_type_id = 0xe6d3a328;
		constexpr static std::string_view NegativeZ_type_name = "NegativeZ";
		constexpr static rivet::rivet_type_id NegativeZ_type_id = 0x6cd31cb3; 

		explicit SpawnDirections() = default;
		explicit SpawnDirections([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool PositiveX {};
		bool NegativeX {};
		bool PositiveY {};
		bool NegativeY {};
		bool PositiveZ {};
		bool NegativeZ {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnDirections>;
	};
} // namespace rivet::ddl::generated

// clang-format on
