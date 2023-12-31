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
	struct CritterLocationWeights;
	struct CritterTypeData; 

	struct RIVET_DDL_SHARED AutoPlaceCritterSystemConfig : ConfigBase {
		constexpr static std::string_view type_name = "AutoPlaceCritterSystemConfig";
		constexpr static rivet::rivet_type_id type_id = 0xf0d24212;

		constexpr static std::string_view CritterTypes_type_name = "CritterTypes";
		constexpr static rivet::rivet_type_id CritterTypes_type_id = 0x28c9178d;
		constexpr static std::string_view MinSpawnDistance_type_name = "MinSpawnDistance";
		constexpr static rivet::rivet_type_id MinSpawnDistance_type_id = 0xef1087b4;
		constexpr static std::string_view IdealSpawnDistance_type_name = "IdealSpawnDistance";
		constexpr static rivet::rivet_type_id IdealSpawnDistance_type_id = 0xc7256058;
		constexpr static std::string_view MaxActiveDistance_type_name = "MaxActiveDistance";
		constexpr static rivet::rivet_type_id MaxActiveDistance_type_id = 0xb1508ef1;
		constexpr static std::string_view PanicRadius_type_name = "PanicRadius";
		constexpr static rivet::rivet_type_id PanicRadius_type_id = 0x4a15a09b;
		constexpr static std::string_view CombatPanicRadius_type_name = "CombatPanicRadius";
		constexpr static rivet::rivet_type_id CombatPanicRadius_type_id = 0x1a64380c;
		constexpr static std::string_view RefreshPeriod_type_name = "RefreshPeriod";
		constexpr static rivet::rivet_type_id RefreshPeriod_type_id = 0xef2d955f;
		constexpr static std::string_view LocationSelectionHeuristic_type_name = "LocationSelectionHeuristic";
		constexpr static rivet::rivet_type_id LocationSelectionHeuristic_type_id = 0xecb3d72a; 

		explicit AutoPlaceCritterSystemConfig() = default;
		explicit AutoPlaceCritterSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::CritterTypeData>> CritterTypes {};
		float MinSpawnDistance {};
		float IdealSpawnDistance {};
		float MaxActiveDistance {};
		float PanicRadius {};
		float CombatPanicRadius {};
		float RefreshPeriod {};
		std::shared_ptr<rivet::ddl::generated::CritterLocationWeights> LocationSelectionHeuristic {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AutoPlaceCritterSystemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
