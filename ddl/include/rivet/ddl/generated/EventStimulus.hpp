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

#include <rivet/ddl/generated/bitsets/RelevantAwareness.hpp>
#include <rivet/ddl/generated/enums/xbd2e617d.hpp> 

namespace rivet::ddl::generated {
	struct EventBase; 

	struct RIVET_DDL_SHARED EventStimulus : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EventStimulus";
		constexpr static rivet::rivet_type_id type_id = 0xa0fb5782;

		constexpr static std::string_view Event_type_name = "Event";
		constexpr static rivet::rivet_type_id Event_type_id = 0x22fdc666;
		constexpr static std::string_view BonusConfirmTime_type_name = "BonusConfirmTime";
		constexpr static rivet::rivet_type_id BonusConfirmTime_type_id = 0x8c4af54b;
		constexpr static std::string_view NewMinTargetAwareness_type_name = "NewMinTargetAwareness";
		constexpr static rivet::rivet_type_id NewMinTargetAwareness_type_id = 0x5c01be78;
		constexpr static std::string_view Aggro_type_name = "Aggro";
		constexpr static rivet::rivet_type_id Aggro_type_id = 0x504e1083;
		constexpr static std::string_view ListenRadius_type_name = "ListenRadius";
		constexpr static rivet::rivet_type_id ListenRadius_type_id = 0xc03b8831;
		constexpr static std::string_view StealTargetFromFriendlySender_type_name = "StealTargetFromFriendlySender";
		constexpr static rivet::rivet_type_id StealTargetFromFriendlySender_type_id = 0x96d5cd23;
		constexpr static std::string_view StealthDamage_type_name = "StealthDamage";
		constexpr static rivet::rivet_type_id StealthDamage_type_id = 0x826b4443;
		constexpr static std::string_view RelevantAwareness_type_name = "RelevantAwareness";
		constexpr static rivet::rivet_type_id RelevantAwareness_type_id = 0x2575d3dc; 

		explicit EventStimulus() = default;
		explicit EventStimulus([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::EventBase> Event {};
		float BonusConfirmTime {};
		rivet::ddl::generated::xbd2e617d NewMinTargetAwareness {};
		float Aggro {};
		float ListenRadius {};
		bool StealTargetFromFriendlySender {};
		bool StealthDamage {};
		rivet::ddl::generated::RelevantAwareness RelevantAwareness {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventStimulus>;
	};
} // namespace rivet::ddl::generated

// clang-format on