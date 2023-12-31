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

#include <rivet/ddl/generated/enums/xd2b2d773.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CelebrateDifficultyData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CelebrateDifficultyData";
		constexpr static rivet::rivet_type_id type_id = 0x3c7875a1;

		constexpr static std::string_view Difficulty_type_name = "Difficulty";
		constexpr static rivet::rivet_type_id Difficulty_type_id = 0x605d31d6;
		constexpr static std::string_view Cooldown_type_name = "Cooldown";
		constexpr static rivet::rivet_type_id Cooldown_type_id = 0x246291a9; 

		explicit CelebrateDifficultyData() = default;
		explicit CelebrateDifficultyData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xd2b2d773 Difficulty {};
		float Cooldown {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CelebrateDifficultyData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
