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

#include <rivet/ddl/generated/bitsets/xb52df7e7.hpp> 

namespace rivet::ddl::generated {
	struct Cinematic2CameraMagnitudeCurveTrackDef;
	struct Cinematic2CameraShakeTrackDefaultValues;
	struct Cinematic2TrackTagsDef; 

	struct RIVET_DDL_SHARED Cinematic2CameraShakeTrackDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2CameraShakeTrackDef";
		constexpr static rivet::rivet_type_id type_id = 0x6eebe78e;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view PlatformFilter_type_name = "PlatformFilter";
		constexpr static rivet::rivet_type_id PlatformFilter_type_id = 0x92542397;
		constexpr static std::string_view Tags_type_name = "Tags";
		constexpr static rivet::rivet_type_id Tags_type_id = 0x5f2c5496;
		constexpr static std::string_view Global_type_name = "Global";
		constexpr static rivet::rivet_type_id Global_type_id = 0xd67dc5e4;
		constexpr static std::string_view PredefinedShakeAnimClip_type_name = "PredefinedShakeAnimClip";
		constexpr static rivet::rivet_type_id PredefinedShakeAnimClip_type_id = 0x387bd350;
		constexpr static std::string_view DefaultValues_type_name = "DefaultValues";
		constexpr static rivet::rivet_type_id DefaultValues_type_id = 0x616c13d7;
		constexpr static std::string_view Magnitude_type_name = "Magnitude";
		constexpr static rivet::rivet_type_id Magnitude_type_id = 0xb77ae20d;
		constexpr static std::string_view FadeOutDuration_type_name = "FadeOutDuration";
		constexpr static rivet::rivet_type_id FadeOutDuration_type_id = 0x39018b27;
		constexpr static std::string_view GameplayShakeConfig_type_name = "GameplayShakeConfig";
		constexpr static rivet::rivet_type_id GameplayShakeConfig_type_id = 0xd270bf65;
		constexpr static std::string_view OverrideViewportBlocking_type_name = "OverrideViewportBlocking";
		constexpr static rivet::rivet_type_id OverrideViewportBlocking_type_id = 0xc631bf22;
		constexpr static std::string_view UseGameplayShake_type_name = "UseGameplayShake";
		constexpr static rivet::rivet_type_id UseGameplayShake_type_id = 0xcdbaadb6; 

		explicit Cinematic2CameraShakeTrackDef() = default;
		explicit Cinematic2CameraShakeTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view Name {};
		rivet::ddl::generated::xb52df7e7 PlatformFilter {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2TrackTagsDef> Tags {};
		bool Global {};
		std::string_view PredefinedShakeAnimClip {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2CameraShakeTrackDefaultValues> DefaultValues {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2CameraMagnitudeCurveTrackDef> Magnitude {};
		float FadeOutDuration {};
		std::string_view GameplayShakeConfig {};
		bool OverrideViewportBlocking {};
		bool UseGameplayShake {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2CameraShakeTrackDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
