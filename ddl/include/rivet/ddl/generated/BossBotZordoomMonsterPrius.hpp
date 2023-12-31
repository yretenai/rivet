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

#include <rivet/ddl/generated/BotPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BossBotZordoomMonsterPrius : BotPrius {
		constexpr static std::string_view type_name = "BossBotZordoomMonsterPrius";
		constexpr static rivet::rivet_type_id type_id = 0x70fe8ef3;

		constexpr static std::string_view ChaseMeleeMinRange_type_name = "ChaseMeleeMinRange";
		constexpr static rivet::rivet_type_id ChaseMeleeMinRange_type_id = 0xec11f7d8;
		constexpr static std::string_view ChaseMeleeMaxRange_type_name = "ChaseMeleeMaxRange";
		constexpr static rivet::rivet_type_id ChaseMeleeMaxRange_type_id = 0xa715839;
		constexpr static std::string_view ChaseMoveAnim_type_name = "ChaseMoveAnim";
		constexpr static rivet::rivet_type_id ChaseMoveAnim_type_id = 0x92a85251;
		constexpr static std::string_view ChaseMoveIntroAnim_type_name = "ChaseMoveIntroAnim";
		constexpr static rivet::rivet_type_id ChaseMoveIntroAnim_type_id = 0x4285deaf; 

		explicit BossBotZordoomMonsterPrius() = default;
		explicit BossBotZordoomMonsterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ChaseMeleeMinRange {};
		float ChaseMeleeMaxRange {};
		std::string_view ChaseMoveAnim {};
		std::string_view ChaseMoveIntroAnim {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BossBotZordoomMonsterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
