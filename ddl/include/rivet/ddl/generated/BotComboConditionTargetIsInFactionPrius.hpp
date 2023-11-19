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

#include <rivet/ddl/generated/enums/x6bdf4ba1.hpp>
#include <rivet/ddl/generated/BotComboConditionBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotComboConditionTargetIsInFactionPrius : BotComboConditionBasePrius {
		constexpr static std::string_view type_name = "BotComboConditionTargetIsInFactionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xe9e21cfa;

		constexpr static std::string_view Faction_type_name = "Faction";
		constexpr static rivet::rivet_type_id Faction_type_id = 0x82eee8a8;
		constexpr static std::string_view FlipFactionCondition_type_name = "FlipFactionCondition";
		constexpr static rivet::rivet_type_id FlipFactionCondition_type_id = 0x1f5d97ea; 

		explicit BotComboConditionTargetIsInFactionPrius() = default;
		explicit BotComboConditionTargetIsInFactionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x6bdf4ba1 Faction {};
		bool FlipFactionCondition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionTargetIsInFactionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on