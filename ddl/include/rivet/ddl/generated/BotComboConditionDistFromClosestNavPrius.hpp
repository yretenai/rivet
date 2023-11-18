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

#include <rivet/ddl/generated/BotComboConditionBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotComboConditionDistFromClosestNavPrius : BotComboConditionBasePrius {
		constexpr static std::string_view type_name = "BotComboConditionDistFromClosestNavPrius";
		constexpr static rivet::rivet_type_id type_id = 0x50c447e1;

		constexpr static std::string_view NavDistance_type_name = "NavDistance";
		constexpr static rivet::rivet_type_id NavDistance_type_id = 0xd9a3afa6;
		constexpr static std::string_view FlipLogicToCheckOutsideOfDist_type_name = "FlipLogicToCheckOutsideOfDist";
		constexpr static rivet::rivet_type_id FlipLogicToCheckOutsideOfDist_type_id = 0x42e5c0ad;
		constexpr static std::string_view CheckFromLastGoodGround_type_name = "CheckFromLastGoodGround";
		constexpr static rivet::rivet_type_id CheckFromLastGoodGround_type_id = 0x5a23e669; 

		explicit BotComboConditionDistFromClosestNavPrius() = default;
		explicit BotComboConditionDistFromClosestNavPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float NavDistance {};
		bool FlipLogicToCheckOutsideOfDist {};
		bool CheckFromLastGoodGround {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionDistFromClosestNavPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
