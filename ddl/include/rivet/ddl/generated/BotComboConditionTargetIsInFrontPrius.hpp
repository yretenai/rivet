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
	struct RIVET_DDL_SHARED BotComboConditionTargetIsInFrontPrius : BotComboConditionBasePrius {
		constexpr static std::string_view type_name = "BotComboConditionTargetIsInFrontPrius";
		constexpr static rivet::rivet_type_id type_id = 0x19fa774d;

		constexpr static std::string_view FrontDotTolerance_type_name = "FrontDotTolerance";
		constexpr static rivet::rivet_type_id FrontDotTolerance_type_id = 0x2b1a5114;
		constexpr static std::string_view XZOnly_type_name = "XZOnly";
		constexpr static rivet::rivet_type_id XZOnly_type_id = 0x7bc7f470;
		constexpr static std::string_view CheckLeftNotFront_type_name = "CheckLeftNotFront";
		constexpr static rivet::rivet_type_id CheckLeftNotFront_type_id = 0xcfc4c150;
		constexpr static std::string_view ReverseLogic_type_name = "ReverseLogic";
		constexpr static rivet::rivet_type_id ReverseLogic_type_id = 0x49c47cc; 

		explicit BotComboConditionTargetIsInFrontPrius() = default;
		explicit BotComboConditionTargetIsInFrontPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FrontDotTolerance {};
		bool XZOnly {};
		bool CheckLeftNotFront {};
		bool ReverseLogic {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionTargetIsInFrontPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on