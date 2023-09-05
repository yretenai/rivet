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

	struct RIVET_DDL_SHARED LedgeBirdTypeConfig : ConfigBase {
		constexpr const static std::string_view type_name = "LedgeBirdTypeConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x8ae5d833;

		constexpr const static std::string_view BirdAsset_type_name = "BirdAsset";
		constexpr const static rivet::rivet_type_id BirdAsset_type_id = 0x341b971b;
		constexpr const static std::string_view BirdPhysicsSize_type_name = "BirdPhysicsSize";
		constexpr const static rivet::rivet_type_id BirdPhysicsSize_type_id = 0x712c0901;
		constexpr const static std::string_view BirdPhysicsOffsetY_type_name = "BirdPhysicsOffsetY";
		constexpr const static rivet::rivet_type_id BirdPhysicsOffsetY_type_id = 0x746ad72a;
		constexpr const static std::string_view MinBirdSpacing_type_name = "MinBirdSpacing";
		constexpr const static rivet::rivet_type_id MinBirdSpacing_type_id = 0x229368b1;
		constexpr const static std::string_view MaxBirdSpacing_type_name = "MaxBirdSpacing";
		constexpr const static rivet::rivet_type_id MaxBirdSpacing_type_id = 0x9bb5f3c0;
		constexpr const static std::string_view FlockRadius_type_name = "FlockRadius";
		constexpr const static rivet::rivet_type_id FlockRadius_type_id = 0x4cfc634f;
		constexpr const static std::string_view MaxBirdsPerLedge_type_name = "MaxBirdsPerLedge";
		constexpr const static rivet::rivet_type_id MaxBirdsPerLedge_type_id = 0x630e0b1e;
		constexpr const static std::string_view FlockSoundSource_type_name = "FlockSoundSource";
		constexpr const static rivet::rivet_type_id FlockSoundSource_type_id = 0xd8e09e63; 

		explicit LedgeBirdTypeConfig() = default;
		explicit LedgeBirdTypeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view BirdAsset {};
		float BirdPhysicsSize {};
		float BirdPhysicsOffsetY {};
		float MinBirdSpacing {};
		float MaxBirdSpacing {};
		float FlockRadius {};
		int32_t MaxBirdsPerLedge {};
		std::shared_ptr<rivet::ddl::generated::SoundSourceComponentPrius> FlockSoundSource {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LedgeBirdTypeConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
