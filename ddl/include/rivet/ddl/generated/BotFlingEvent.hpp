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

#include <rivet/ddl/generated/BotForceMoveBaseEvent.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotFlingEvent : BotForceMoveBaseEvent {
		constexpr static std::string_view type_name = "BotFlingEvent";
		constexpr static rivet::rivet_type_id type_id = 0x5efd7d29;

		constexpr static std::string_view TargetLocator_type_name = "TargetLocator";
		constexpr static rivet::rivet_type_id TargetLocator_type_id = 0x7abba555;
		constexpr static std::string_view FlingLocator_type_name = "FlingLocator";
		constexpr static rivet::rivet_type_id FlingLocator_type_id = 0x6e10775b;
		constexpr static std::string_view Speed_type_name = "Speed";
		constexpr static rivet::rivet_type_id Speed_type_id = 0x16753237;
		constexpr static std::string_view OverrideAutoTargetAngle_type_name = "OverrideAutoTargetAngle";
		constexpr static rivet::rivet_type_id OverrideAutoTargetAngle_type_id = 0x9dc4a9cf;
		constexpr static std::string_view VaryDirection_type_name = "VaryDirection";
		constexpr static rivet::rivet_type_id VaryDirection_type_id = 0x6f4b25f7;
		constexpr static std::string_view PreserveYVelocity_type_name = "PreserveYVelocity";
		constexpr static rivet::rivet_type_id PreserveYVelocity_type_id = 0x5d845c9d;
		constexpr static std::string_view UseSourceActorFacing_type_name = "UseSourceActorFacing";
		constexpr static rivet::rivet_type_id UseSourceActorFacing_type_id = 0x4e910edc;
		constexpr static std::string_view UseSourceActorFacingForTargeting_type_name = "UseSourceActorFacingForTargeting";
		constexpr static rivet::rivet_type_id UseSourceActorFacingForTargeting_type_id = 0x5aef8e56; 

		explicit BotFlingEvent() = default;
		explicit BotFlingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TargetLocator {};
		std::string_view FlingLocator {};
		float Speed {};
		float OverrideAutoTargetAngle {};
		bool VaryDirection {};
		bool PreserveYVelocity {};
		bool UseSourceActorFacing {};
		bool UseSourceActorFacingForTargeting {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotFlingEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
