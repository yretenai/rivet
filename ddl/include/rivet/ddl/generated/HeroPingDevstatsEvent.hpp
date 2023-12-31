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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct DevstatsPlayerPositionInfo; 

	struct RIVET_DDL_SHARED HeroPingDevstatsEvent : EventBase {
		constexpr static std::string_view type_name = "HeroPingDevstatsEvent";
		constexpr static rivet::rivet_type_id type_id = 0xb130c401;

		constexpr static std::string_view PlayerPosInfo_type_name = "PlayerPosInfo";
		constexpr static rivet::rivet_type_id PlayerPosInfo_type_id = 0xeadcc3e4;
		constexpr static std::string_view CurrentHealth_type_name = "CurrentHealth";
		constexpr static rivet::rivet_type_id CurrentHealth_type_id = 0xd8295f28;
		constexpr static std::string_view MaxHealth_type_name = "MaxHealth";
		constexpr static rivet::rivet_type_id MaxHealth_type_id = 0x72aa54be;
		constexpr static std::string_view PlayerState_type_name = "PlayerState";
		constexpr static rivet::rivet_type_id PlayerState_type_id = 0x10b18c0c;
		constexpr static std::string_view InCombat_type_name = "InCombat";
		constexpr static rivet::rivet_type_id InCombat_type_id = 0xb031a93c; 

		explicit HeroPingDevstatsEvent() = default;
		explicit HeroPingDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DevstatsPlayerPositionInfo> PlayerPosInfo {};
		float CurrentHealth {};
		float MaxHealth {};
		std::string_view PlayerState {};
		bool InCombat {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroPingDevstatsEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
