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

#include <rivet/ddl/generated/enums/x2efb4283.hpp>
#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct TargetingStimulusListenerPrius;
	struct AwarenessBasePrius; 

	struct RIVET_DDL_SHARED BotConfigAwareness : ConfigBase {
		constexpr static std::string_view type_name = "BotConfigAwareness";
		constexpr static rivet::rivet_type_id type_id = 0xbc11c5bc;

		constexpr static std::string_view Awareness_type_name = "Awareness";
		constexpr static rivet::rivet_type_id Awareness_type_id = 0xeb7b1622;
		constexpr static std::string_view StimulusSource_type_name = "StimulusSource";
		constexpr static rivet::rivet_type_id StimulusSource_type_id = 0x3bf83781;
		constexpr static std::string_view StimulusConfig_type_name = "StimulusConfig";
		constexpr static rivet::rivet_type_id StimulusConfig_type_id = 0xb0f8678e;
		constexpr static std::string_view TargetingStimulus_type_name = "TargetingStimulus";
		constexpr static rivet::rivet_type_id TargetingStimulus_type_id = 0xa40dee7c; 

		explicit BotConfigAwareness() = default;
		explicit BotConfigAwareness([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AwarenessBasePrius> Awareness {};
		rivet::ddl::generated::x2efb4283 StimulusSource {};
		std::string_view StimulusConfig {};
		std::shared_ptr<rivet::ddl::generated::TargetingStimulusListenerPrius> TargetingStimulus {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigAwareness>;
	};
} // namespace rivet::ddl::generated

// clang-format on