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
	struct RIVET_DDL_SHARED ClankPuzzleVolumeEndPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ClankPuzzleVolumeEndPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc5707da;

		constexpr static std::string_view PrimaryBotCountdownTimer_type_name = "PrimaryBotCountdownTimer";
		constexpr static rivet::rivet_type_id PrimaryBotCountdownTimer_type_id = 0xd663f6ba;
		constexpr static std::string_view SecondaryBotCountdownTimer_type_name = "SecondaryBotCountdownTimer";
		constexpr static rivet::rivet_type_id SecondaryBotCountdownTimer_type_id = 0xb0235bfb;
		constexpr static std::string_view GoalMarkers_type_name = "GoalMarkers";
		constexpr static rivet::rivet_type_id GoalMarkers_type_id = 0x605c25b0; 

		explicit ClankPuzzleVolumeEndPrius() = default;
		explicit ClankPuzzleVolumeEndPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PrimaryBotCountdownTimer {};
		float SecondaryBotCountdownTimer {};
		std::vector<uint64_t> GoalMarkers {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleVolumeEndPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on