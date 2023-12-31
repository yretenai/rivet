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
	struct RIVET_DDL_SHARED DEVOFlexibleCriterion : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DEVOFlexibleCriterion";
		constexpr static rivet::rivet_type_id type_id = 0xcc08f78b;

		constexpr static std::string_view FactName_type_name = "FactName";
		constexpr static rivet::rivet_type_id FactName_type_id = 0xf901b9ab;
		constexpr static std::string_view AsString_type_name = "AsString";
		constexpr static rivet::rivet_type_id AsString_type_id = 0x76321eb6;
		constexpr static std::string_view NumericLow_type_name = "NumericLow";
		constexpr static rivet::rivet_type_id NumericLow_type_id = 0x71195476;
		constexpr static std::string_view NumericHigh_type_name = "NumericHigh";
		constexpr static rivet::rivet_type_id NumericHigh_type_id = 0x3b53dd83;
		constexpr static std::string_view IncludeNumericLow_type_name = "IncludeNumericLow";
		constexpr static rivet::rivet_type_id IncludeNumericLow_type_id = 0xd5c78e69;
		constexpr static std::string_view IncludeNumericHigh_type_name = "IncludeNumericHigh";
		constexpr static rivet::rivet_type_id IncludeNumericHigh_type_id = 0xb6ff0eac; 

		explicit DEVOFlexibleCriterion() = default;
		explicit DEVOFlexibleCriterion([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view FactName {};
		std::string_view AsString {};
		float NumericLow {};
		float NumericHigh {};
		bool IncludeNumericLow {};
		bool IncludeNumericHigh {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DEVOFlexibleCriterion>;
	};
} // namespace rivet::ddl::generated

// clang-format on
