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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct WwiseParameter;
	struct WwiseTrigger;
	struct WwiseSwitch;
	struct WwiseState;
	struct WwiseSoundEvent; 

	struct RIVET_DDL_SHARED WwiseGameSyncActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WwiseGameSyncActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x76f44c94;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view WwiseEvent_type_name = "WwiseEvent";
		constexpr static rivet::rivet_type_id WwiseEvent_type_id = 0xcebb3bc3;
		constexpr static std::string_view WwiseState_type_name = "WwiseState";
		constexpr static rivet::rivet_type_id WwiseState_type_id = 0x5686e39f;
		constexpr static std::string_view WwiseState1_type_name = "WwiseState1";
		constexpr static rivet::rivet_type_id WwiseState1_type_id = 0x3138080c;
		constexpr static std::string_view WwiseState2_type_name = "WwiseState2";
		constexpr static rivet::rivet_type_id WwiseState2_type_id = 0xa83159b6;
		constexpr static std::string_view WwiseState3_type_name = "WwiseState3";
		constexpr static rivet::rivet_type_id WwiseState3_type_id = 0xdf366920;
		constexpr static std::string_view WwiseSwitch_type_name = "WwiseSwitch";
		constexpr static rivet::rivet_type_id WwiseSwitch_type_id = 0xf7c114e5;
		constexpr static std::string_view WwiseTrigger_type_name = "WwiseTrigger";
		constexpr static rivet::rivet_type_id WwiseTrigger_type_id = 0xbfd462e;
		constexpr static std::string_view WwiseParameter_type_name = "WwiseParameter";
		constexpr static rivet::rivet_type_id WwiseParameter_type_id = 0x605c4178; 

		explicit WwiseGameSyncActionPrius() = default;
		explicit WwiseGameSyncActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::shared_ptr<rivet::ddl::generated::WwiseSoundEvent> WwiseEvent {};
		std::shared_ptr<rivet::ddl::generated::WwiseState> WwiseState {};
		std::shared_ptr<rivet::ddl::generated::WwiseState> WwiseState1 {};
		std::shared_ptr<rivet::ddl::generated::WwiseState> WwiseState2 {};
		std::shared_ptr<rivet::ddl::generated::WwiseState> WwiseState3 {};
		std::shared_ptr<rivet::ddl::generated::WwiseSwitch> WwiseSwitch {};
		std::shared_ptr<rivet::ddl::generated::WwiseTrigger> WwiseTrigger {};
		std::shared_ptr<rivet::ddl::generated::WwiseParameter> WwiseParameter {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseGameSyncActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
