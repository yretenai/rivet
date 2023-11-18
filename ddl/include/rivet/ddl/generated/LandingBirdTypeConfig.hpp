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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct SoundSourceComponentPrius; 

	struct RIVET_DDL_SHARED LandingBirdTypeConfig : ConfigBase {
		constexpr static std::string_view type_name = "LandingBirdTypeConfig";
		constexpr static rivet::rivet_type_id type_id = 0xfd5188ee;

		constexpr static std::string_view BirdAsset_type_name = "BirdAsset";
		constexpr static rivet::rivet_type_id BirdAsset_type_id = 0x341b971b;
		constexpr static std::string_view MinSpawnPeriod_type_name = "MinSpawnPeriod";
		constexpr static rivet::rivet_type_id MinSpawnPeriod_type_id = 0xa206a681;
		constexpr static std::string_view MaxSpawnPeriod_type_name = "MaxSpawnPeriod";
		constexpr static rivet::rivet_type_id MaxSpawnPeriod_type_id = 0x1b203df0;
		constexpr static std::string_view MinBirdSeparation_type_name = "MinBirdSeparation";
		constexpr static rivet::rivet_type_id MinBirdSeparation_type_id = 0x67e3c696;
		constexpr static std::string_view MaxSpawnCount_type_name = "MaxSpawnCount";
		constexpr static rivet::rivet_type_id MaxSpawnCount_type_id = 0xa90ecfa9;
		constexpr static std::string_view SpawnHeight_type_name = "SpawnHeight";
		constexpr static rivet::rivet_type_id SpawnHeight_type_id = 0x2f52a11;
		constexpr static std::string_view SpawnRadius_type_name = "SpawnRadius";
		constexpr static rivet::rivet_type_id SpawnRadius_type_id = 0xccc4a144;
		constexpr static std::string_view LandPhysicsRadius_type_name = "LandPhysicsRadius";
		constexpr static rivet::rivet_type_id LandPhysicsRadius_type_id = 0x8ad34522;
		constexpr static std::string_view FlockSoundSource_type_name = "FlockSoundSource";
		constexpr static rivet::rivet_type_id FlockSoundSource_type_id = 0xd8e09e63; 

		explicit LandingBirdTypeConfig() = default;
		explicit LandingBirdTypeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view BirdAsset {};
		float MinSpawnPeriod {};
		float MaxSpawnPeriod {};
		float MinBirdSeparation {};
		int32_t MaxSpawnCount {};
		float SpawnHeight {};
		float SpawnRadius {};
		float LandPhysicsRadius {};
		std::shared_ptr<rivet::ddl::generated::SoundSourceComponentPrius> FlockSoundSource {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LandingBirdTypeConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
