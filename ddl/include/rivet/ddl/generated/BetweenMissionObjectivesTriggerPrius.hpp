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

#include <rivet/ddl/generated/BaseCustomOverlayTriggerPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BetweenMissionObjectivesTriggerPrius : BaseCustomOverlayTriggerPrius {
		constexpr static std::string_view type_name = "BetweenMissionObjectivesTriggerPrius";
		constexpr static rivet::rivet_type_id type_id = 0xe43e38a0;

		constexpr static std::string_view Mission1Name_type_name = "Mission1Name";
		constexpr static rivet::rivet_type_id Mission1Name_type_id = 0x32df8c9b;
		constexpr static std::string_view Objective1Name_type_name = "Objective1Name";
		constexpr static rivet::rivet_type_id Objective1Name_type_id = 0x184d106a;
		constexpr static std::string_view Mission2Name_type_name = "Mission2Name";
		constexpr static rivet::rivet_type_id Mission2Name_type_id = 0x757ff64b;
		constexpr static std::string_view Objective2Name_type_name = "Objective2Name";
		constexpr static rivet::rivet_type_id Objective2Name_type_id = 0x5fed6aba; 

		explicit BetweenMissionObjectivesTriggerPrius() = default;
		explicit BetweenMissionObjectivesTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Mission1Name {};
		std::string_view Objective1Name {};
		std::string_view Mission2Name {};
		std::string_view Objective2Name {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BetweenMissionObjectivesTriggerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
