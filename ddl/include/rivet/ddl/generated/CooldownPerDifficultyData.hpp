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
	struct RIVET_DDL_SHARED CooldownPerDifficultyData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CooldownPerDifficultyData";
		constexpr static rivet::rivet_type_id type_id = 0x7ebda3f9;

		constexpr static std::string_view MinCooldown_type_name = "MinCooldown";
		constexpr static rivet::rivet_type_id MinCooldown_type_id = 0x867fdf62;
		constexpr static std::string_view MaxCooldown_type_name = "MaxCooldown";
		constexpr static rivet::rivet_type_id MaxCooldown_type_id = 0x4a72a46d; 

		explicit CooldownPerDifficultyData() = default;
		explicit CooldownPerDifficultyData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinCooldown {};
		float MaxCooldown {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CooldownPerDifficultyData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
