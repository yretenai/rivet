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

#include <rivet/ddl/generated/enums/xee0945fb.hpp>
#include <rivet/ddl/generated/enums/xd64fa9b1.hpp>
#include <rivet/ddl/generated/enums/HeroTypes.hpp>
#include <rivet/ddl/generated/enums/LevelEnum.hpp> 

namespace rivet::ddl::generated {
	struct PlanetLightingCondition;
	struct PlanetMap;
	struct PlanetActivityData;
	struct PlanetMenuData; 

	struct RIVET_DDL_SHARED PlanetRegionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PlanetRegionData";
		constexpr static rivet::rivet_type_id type_id = 0xf2e3a8bb;

		constexpr static std::string_view PlanetName_type_name = "PlanetName";
		constexpr static rivet::rivet_type_id PlanetName_type_id = 0x38548038;
		constexpr static std::string_view IsMainRegion_type_name = "IsMainRegion";
		constexpr static rivet::rivet_type_id IsMainRegion_type_id = 0xe71d5cb8;
		constexpr static std::string_view LevelEnum_type_name = "LevelEnum";
		constexpr static rivet::rivet_type_id LevelEnum_type_id = 0x4223680a;
		constexpr static std::string_view InterplanetaryCheckpoint_type_name = "InterplanetaryCheckpoint";
		constexpr static rivet::rivet_type_id InterplanetaryCheckpoint_type_id = 0xbfa9c073;
		constexpr static std::string_view Checkpoint_type_name = "Checkpoint";
		constexpr static rivet::rivet_type_id Checkpoint_type_id = 0xd436a987;
		constexpr static std::string_view HeroTypes_type_name = "HeroTypes";
		constexpr static rivet::rivet_type_id HeroTypes_type_id = 0xc7c22b65;
		constexpr static std::string_view MenuData_type_name = "MenuData";
		constexpr static rivet::rivet_type_id MenuData_type_id = 0x220a36e5;
		constexpr static std::string_view ActivityData_type_name = "ActivityData";
		constexpr static rivet::rivet_type_id ActivityData_type_id = 0xf11de3a5;
		constexpr static std::string_view DefaultMap_type_name = "DefaultMap";
		constexpr static rivet::rivet_type_id DefaultMap_type_id = 0x7ad0bc7f;
		constexpr static std::string_view Maps_type_name = "Maps";
		constexpr static rivet::rivet_type_id Maps_type_id = 0x77bec815;
		constexpr static std::string_view DefaultLightingMode_type_name = "DefaultLightingMode";
		constexpr static rivet::rivet_type_id DefaultLightingMode_type_id = 0x95f292ab;
		constexpr static std::string_view ConditionalLightingModes_type_name = "ConditionalLightingModes";
		constexpr static rivet::rivet_type_id ConditionalLightingModes_type_id = 0x2a15ccb0; 

		explicit PlanetRegionData() = default;
		explicit PlanetRegionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PlanetName {};
		bool IsMainRegion {};
		rivet::ddl::generated::LevelEnum LevelEnum {};
		std::string_view InterplanetaryCheckpoint {};
		std::string_view Checkpoint {};
		rivet::ddl::generated::HeroTypes HeroTypes {};
		std::shared_ptr<rivet::ddl::generated::PlanetMenuData> MenuData {};
		std::shared_ptr<rivet::ddl::generated::PlanetActivityData> ActivityData {};
		rivet::ddl::generated::xd64fa9b1 DefaultMap {};
		std::vector<std::shared_ptr<rivet::ddl::generated::PlanetMap>> Maps {};
		rivet::ddl::generated::xee0945fb DefaultLightingMode {};
		std::vector<std::shared_ptr<rivet::ddl::generated::PlanetLightingCondition>> ConditionalLightingModes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetRegionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
