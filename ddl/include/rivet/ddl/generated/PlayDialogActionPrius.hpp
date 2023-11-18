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

#include <rivet/ddl/generated/enums/x90d1aef7.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PlayDialogActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PlayDialogActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x46957611;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view Tag_type_name = "Tag";
		constexpr static rivet::rivet_type_id Tag_type_id = 0x29dc9e4a;
		constexpr static std::string_view Priority_type_name = "Priority";
		constexpr static rivet::rivet_type_id Priority_type_id = 0x98a76157;
		constexpr static std::string_view InterruptSamePriorityLines_type_name = "InterruptSamePriorityLines";
		constexpr static rivet::rivet_type_id InterruptSamePriorityLines_type_id = 0x3e2813a0;
		constexpr static std::string_view Queue_type_name = "Queue";
		constexpr static rivet::rivet_type_id Queue_type_id = 0x66aeb3a2;
		constexpr static std::string_view MaxQueueTime_type_name = "MaxQueueTime";
		constexpr static rivet::rivet_type_id MaxQueueTime_type_id = 0xc6aa3a36;
		constexpr static std::string_view TempText_type_name = "TempText";
		constexpr static rivet::rivet_type_id TempText_type_id = 0x99f2b59f;
		constexpr static std::string_view TempTextDuration_type_name = "TempTextDuration";
		constexpr static rivet::rivet_type_id TempTextDuration_type_id = 0x1aaa06d6;
		constexpr static std::string_view StopOnHeroDeath_type_name = "StopOnHeroDeath";
		constexpr static rivet::rivet_type_id StopOnHeroDeath_type_id = 0x283d76ee;
		constexpr static std::string_view StopForCinematics_type_name = "StopForCinematics";
		constexpr static rivet::rivet_type_id StopForCinematics_type_id = 0xc951a7c;
		constexpr static std::string_view StopAllSoundsOnSpeaker_type_name = "StopAllSoundsOnSpeaker";
		constexpr static rivet::rivet_type_id StopAllSoundsOnSpeaker_type_id = 0x5e0d53ab;
		constexpr static std::string_view CantBeInterrupted_type_name = "CantBeInterrupted";
		constexpr static rivet::rivet_type_id CantBeInterrupted_type_id = 0x37e2edbc;
		constexpr static std::string_view StopOnEngaged_type_name = "StopOnEngaged";
		constexpr static rivet::rivet_type_id StopOnEngaged_type_id = 0x72d87f26;
		constexpr static std::string_view StopOnDeath_type_name = "StopOnDeath";
		constexpr static rivet::rivet_type_id StopOnDeath_type_id = 0x31aa484f;
		constexpr static std::string_view SignalFinishedOnInterrupted_type_name = "SignalFinishedOnInterrupted";
		constexpr static rivet::rivet_type_id SignalFinishedOnInterrupted_type_id = 0xee25be21;
		constexpr static std::string_view PlayAsAnOverlap_type_name = "PlayAsAnOverlap";
		constexpr static rivet::rivet_type_id PlayAsAnOverlap_type_id = 0x8a0890fd; 

		explicit PlayDialogActionPrius() = default;
		explicit PlayDialogActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view Tag {};
		rivet::ddl::generated::x90d1aef7 Priority {};
		bool InterruptSamePriorityLines {};
		bool Queue {};
		float MaxQueueTime {};
		std::string_view TempText {};
		float TempTextDuration {};
		bool StopOnHeroDeath {};
		bool StopForCinematics {};
		bool StopAllSoundsOnSpeaker {};
		bool CantBeInterrupted {};
		bool StopOnEngaged {};
		bool StopOnDeath {};
		bool SignalFinishedOnInterrupted {};
		bool PlayAsAnOverlap {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlayDialogActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
