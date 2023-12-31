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
	struct RIVET_DDL_SHARED WarshipFiringRangeDiffValue : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WarshipFiringRangeDiffValue";
		constexpr static rivet::rivet_type_id type_id = 0x47c244b3;

		constexpr static std::string_view RangeEasy_type_name = "RangeEasy";
		constexpr static rivet::rivet_type_id RangeEasy_type_id = 0xf15eda06;
		constexpr static std::string_view RangeNormal_type_name = "RangeNormal";
		constexpr static rivet::rivet_type_id RangeNormal_type_id = 0x7eda38ec;
		constexpr static std::string_view RangeHard_type_name = "RangeHard";
		constexpr static rivet::rivet_type_id RangeHard_type_id = 0x79295f43; 

		explicit WarshipFiringRangeDiffValue() = default;
		explicit WarshipFiringRangeDiffValue([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float RangeEasy {};
		float RangeNormal {};
		float RangeHard {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WarshipFiringRangeDiffValue>;
	};
} // namespace rivet::ddl::generated

// clang-format on
