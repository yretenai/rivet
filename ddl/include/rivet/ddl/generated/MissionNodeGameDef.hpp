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

#include <rivet/ddl/generated/enums/x1953eb86.hpp>
#include <rivet/ddl/generated/MissionNodeSharedDef.hpp> 

namespace rivet::ddl::generated {
	struct ActivityHint;
	struct MissionActivityCardInfo;
	struct MissionNodeInfoUI;
	struct ObjectiveLoadInfo; 

	struct RIVET_DDL_SHARED MissionNodeGameDef : MissionNodeSharedDef {
		constexpr static std::string_view type_name = "MissionNodeGameDef";
		constexpr static rivet::rivet_type_id type_id = 0x33408d17;

		constexpr static std::string_view AvailableDebugLoadInfo_type_name = "AvailableDebugLoadInfo";
		constexpr static rivet::rivet_type_id AvailableDebugLoadInfo_type_id = 0x42bd84aa;
		constexpr static std::string_view InfoUI_type_name = "InfoUI";
		constexpr static rivet::rivet_type_id InfoUI_type_id = 0x13490c9d;
		constexpr static std::string_view MissionType_type_name = "MissionType";
		constexpr static rivet::rivet_type_id MissionType_type_id = 0x773e274f;
		constexpr static std::string_view ActivityPlaytimeEstimate_type_name = "ActivityPlaytimeEstimate";
		constexpr static rivet::rivet_type_id ActivityPlaytimeEstimate_type_id = 0xbfd45ea9;
		constexpr static std::string_view ActivityCard_type_name = "ActivityCard";
		constexpr static rivet::rivet_type_id ActivityCard_type_id = 0x4afa8815;
		constexpr static std::string_view Hints_type_name = "Hints";
		constexpr static rivet::rivet_type_id Hints_type_id = 0xf00bc587; 

		explicit MissionNodeGameDef() = default;
		explicit MissionNodeGameDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ObjectiveLoadInfo> AvailableDebugLoadInfo {};
		std::shared_ptr<rivet::ddl::generated::MissionNodeInfoUI> InfoUI {};
		rivet::ddl::generated::x1953eb86 MissionType {};
		uint32_t ActivityPlaytimeEstimate {};
		std::shared_ptr<rivet::ddl::generated::MissionActivityCardInfo> ActivityCard {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ActivityHint>> Hints {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionNodeGameDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
