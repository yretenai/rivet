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
	struct StreakData; 

	struct RIVET_DDL_SHARED StreakSet : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "StreakSet";
		constexpr static rivet::rivet_type_id type_id = 0xcf6320e2;

		constexpr static std::string_view Streaks_type_name = "Streaks";
		constexpr static rivet::rivet_type_id Streaks_type_id = 0x584fbe44; 

		explicit StreakSet() = default;
		explicit StreakSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::StreakData>> Streaks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StreakSet>;
	};
} // namespace rivet::ddl::generated

// clang-format on
