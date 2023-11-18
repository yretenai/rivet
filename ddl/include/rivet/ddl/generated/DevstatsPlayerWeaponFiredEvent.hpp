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
	struct DevstatsPrimarySegmentInfo;
	struct DevstatsPlayerPositionInfo; 

	struct RIVET_DDL_SHARED DevstatsPlayerWeaponFiredEvent : EventBase {
		constexpr static std::string_view type_name = "DevstatsPlayerWeaponFiredEvent";
		constexpr static rivet::rivet_type_id type_id = 0x2a7d73c9;

		constexpr static std::string_view EventId_type_name = "EventId";
		constexpr static rivet::rivet_type_id EventId_type_id = 0x2ac4d854;
		constexpr static std::string_view DevstatsName_type_name = "DevstatsName";
		constexpr static rivet::rivet_type_id DevstatsName_type_id = 0x74ba9afa;
		constexpr static std::string_view PlayerPosInfo_type_name = "PlayerPosInfo";
		constexpr static rivet::rivet_type_id PlayerPosInfo_type_id = 0xeadcc3e4;
		constexpr static std::string_view PrimarySegmentInfo_type_name = "PrimarySegmentInfo";
		constexpr static rivet::rivet_type_id PrimarySegmentInfo_type_id = 0x9e8725db; 

		explicit DevstatsPlayerWeaponFiredEvent() = default;
		explicit DevstatsPlayerWeaponFiredEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EventId {};
		std::string_view DevstatsName {};
		std::shared_ptr<rivet::ddl::generated::DevstatsPlayerPositionInfo> PlayerPosInfo {};
		std::shared_ptr<rivet::ddl::generated::DevstatsPrimarySegmentInfo> PrimarySegmentInfo {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsPlayerWeaponFiredEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
