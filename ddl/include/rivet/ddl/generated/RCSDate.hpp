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
	struct RIVET_DDL_SHARED RCSDate : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RCSDate";
		constexpr static rivet::rivet_type_id type_id = 0x3ae6f7c5;

		constexpr static std::string_view Month_type_name = "Month";
		constexpr static rivet::rivet_type_id Month_type_id = 0x97e5dcc7;
		constexpr static std::string_view Day_type_name = "Day";
		constexpr static rivet::rivet_type_id Day_type_id = 0xcff50059;
		constexpr static std::string_view Year_type_name = "Year";
		constexpr static rivet::rivet_type_id Year_type_id = 0x8b12b387;
		constexpr static std::string_view Hours_type_name = "Hours";
		constexpr static rivet::rivet_type_id Hours_type_id = 0x9349714c;
		constexpr static std::string_view Minutes_type_name = "Minutes";
		constexpr static rivet::rivet_type_id Minutes_type_id = 0xa181299b;
		constexpr static std::string_view Seconds_type_name = "Seconds";
		constexpr static rivet::rivet_type_id Seconds_type_id = 0x2e3c6ade; 

		explicit RCSDate() = default;
		explicit RCSDate([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint8_t Month {};
		uint8_t Day {};
		uint8_t Year {};
		uint8_t Hours {};
		uint8_t Minutes {};
		uint8_t Seconds {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSDate>;
	};
} // namespace rivet::ddl::generated

// clang-format on
