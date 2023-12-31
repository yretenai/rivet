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
	struct RIVET_DDL_SHARED ClankPuzzleTimeData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ClankPuzzleTimeData";
		constexpr static rivet::rivet_type_id type_id = 0x86a74b84;

		constexpr static std::string_view FadeInTime_type_name = "FadeInTime";
		constexpr static rivet::rivet_type_id FadeInTime_type_id = 0xc2c56073;
		constexpr static std::string_view FadeOutTime_type_name = "FadeOutTime";
		constexpr static rivet::rivet_type_id FadeOutTime_type_id = 0xf2879aff;
		constexpr static std::string_view HoldTime_type_name = "HoldTime";
		constexpr static rivet::rivet_type_id HoldTime_type_id = 0x1cb513d0; 

		explicit ClankPuzzleTimeData() = default;
		explicit ClankPuzzleTimeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FadeInTime {};
		float FadeOutTime {};
		float HoldTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleTimeData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
