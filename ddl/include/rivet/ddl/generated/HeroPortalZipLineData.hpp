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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED HeroPortalZipLineData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroPortalZipLineData";
		constexpr static rivet::rivet_type_id type_id = 0xb1d32fbd;

		constexpr static std::string_view LaunchSpeed_type_name = "LaunchSpeed";
		constexpr static rivet::rivet_type_id LaunchSpeed_type_id = 0xabd94235;
		constexpr static std::string_view LaunchMaxHeight_type_name = "LaunchMaxHeight";
		constexpr static rivet::rivet_type_id LaunchMaxHeight_type_id = 0xa70ead;
		constexpr static std::string_view LaunchDistanceForMaxHeight_type_name = "LaunchDistanceForMaxHeight";
		constexpr static rivet::rivet_type_id LaunchDistanceForMaxHeight_type_id = 0x73cfc08b;
		constexpr static std::string_view LaunchMinTime_type_name = "LaunchMinTime";
		constexpr static rivet::rivet_type_id LaunchMinTime_type_id = 0xf3cf40a8;
		constexpr static std::string_view LaunchMaxTime_type_name = "LaunchMaxTime";
		constexpr static rivet::rivet_type_id LaunchMaxTime_type_id = 0xf03ca0e7;
		constexpr static std::string_view TautTime_type_name = "TautTime";
		constexpr static rivet::rivet_type_id TautTime_type_id = 0x23a78838;
		constexpr static std::string_view TautMinAmplitude_type_name = "TautMinAmplitude";
		constexpr static rivet::rivet_type_id TautMinAmplitude_type_id = 0xc8e3e46;
		constexpr static std::string_view TautMaxAmplitude_type_name = "TautMaxAmplitude";
		constexpr static rivet::rivet_type_id TautMaxAmplitude_type_id = 0x9cfd2eac;
		constexpr static std::string_view TautFrequency_type_name = "TautFrequency";
		constexpr static rivet::rivet_type_id TautFrequency_type_id = 0xcbe7672f;
		constexpr static std::string_view RecoilMinWaveLength_type_name = "RecoilMinWaveLength";
		constexpr static rivet::rivet_type_id RecoilMinWaveLength_type_id = 0x1e044121;
		constexpr static std::string_view RecoilMaxAmplitude_type_name = "RecoilMaxAmplitude";
		constexpr static rivet::rivet_type_id RecoilMaxAmplitude_type_id = 0xe900bc78;
		constexpr static std::string_view ProjectileActor_type_name = "ProjectileActor";
		constexpr static rivet::rivet_type_id ProjectileActor_type_id = 0x1c826ff4;
		constexpr static std::string_view ProjectileActorScale_type_name = "ProjectileActorScale";
		constexpr static rivet::rivet_type_id ProjectileActorScale_type_id = 0x31927ee6;
		constexpr static std::string_view SplineMaterial_type_name = "SplineMaterial";
		constexpr static rivet::rivet_type_id SplineMaterial_type_id = 0x90e8d3cf;
		constexpr static std::string_view SplineWidth_type_name = "SplineWidth";
		constexpr static rivet::rivet_type_id SplineWidth_type_id = 0xa68ac1a;
		constexpr static std::string_view SplineTilingDistance_type_name = "SplineTilingDistance";
		constexpr static rivet::rivet_type_id SplineTilingDistance_type_id = 0x771b7ab5; 

		explicit HeroPortalZipLineData() = default;
		explicit HeroPortalZipLineData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float LaunchSpeed {};
		float LaunchMaxHeight {};
		float LaunchDistanceForMaxHeight {};
		float LaunchMinTime {};
		float LaunchMaxTime {};
		float TautTime {};
		float TautMinAmplitude {};
		float TautMaxAmplitude {};
		float TautFrequency {};
		float RecoilMinWaveLength {};
		float RecoilMaxAmplitude {};
		std::string_view ProjectileActor {};
		float ProjectileActorScale {};
		std::string_view SplineMaterial {};
		float SplineWidth {};
		float SplineTilingDistance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroPortalZipLineData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
