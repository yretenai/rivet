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

#include <rivet/ddl/generated/EmergentVOManagerGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct EmergentVOManagerVoiceSwitches;
	struct LookGroupVoiceOverrideData; 

	struct RIVET_DDL_SHARED EmergentVOManagerBotPrius : EmergentVOManagerGamePrius {
		constexpr static std::string_view type_name = "EmergentVOManagerBotPrius";
		constexpr static rivet::rivet_type_id type_id = 0x21698788;

		constexpr static std::string_view LookGroupVoiceOverrideData_type_name = "LookGroupVoiceOverrideData";
		constexpr static rivet::rivet_type_id LookGroupVoiceOverrideData_type_id = 0x177a05d0;
		constexpr static std::string_view VoiceSwitches_type_name = "VoiceSwitches";
		constexpr static rivet::rivet_type_id VoiceSwitches_type_id = 0x1879581e;
		constexpr static std::string_view MaxDistance_type_name = "MaxDistance";
		constexpr static rivet::rivet_type_id MaxDistance_type_id = 0x88831235;
		constexpr static std::string_view OffScreenApproachingTaunt_type_name = "OffScreenApproachingTaunt";
		constexpr static rivet::rivet_type_id OffScreenApproachingTaunt_type_id = 0xbbeeedae; 

		explicit EmergentVOManagerBotPrius() = default;
		explicit EmergentVOManagerBotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::LookGroupVoiceOverrideData> LookGroupVoiceOverrideData {};
		std::vector<std::shared_ptr<rivet::ddl::generated::EmergentVOManagerVoiceSwitches>> VoiceSwitches {};
		float MaxDistance {};
		float OffScreenApproachingTaunt {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOManagerBotPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
