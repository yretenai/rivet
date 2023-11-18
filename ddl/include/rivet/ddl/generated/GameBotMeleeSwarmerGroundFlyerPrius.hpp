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

#include <rivet/ddl/generated/GameBotMeleeSwarmerPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GameBotMeleeSwarmerGroundFlyerPrius : GameBotMeleeSwarmerPrius {
		constexpr static std::string_view type_name = "GameBotMeleeSwarmerGroundFlyerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x55a0de33;

		constexpr static std::string_view DistToLandMin_type_name = "DistToLandMin";
		constexpr static rivet::rivet_type_id DistToLandMin_type_id = 0x41991993;
		constexpr static std::string_view DistToLandMax_type_name = "DistToLandMax";
		constexpr static rivet::rivet_type_id DistToLandMax_type_id = 0x7d9426ca;
		constexpr static std::string_view PreFlyDelayMin_type_name = "PreFlyDelayMin";
		constexpr static rivet::rivet_type_id PreFlyDelayMin_type_id = 0x758ef890;
		constexpr static std::string_view PreFlyDelayMax_type_name = "PreFlyDelayMax";
		constexpr static rivet::rivet_type_id PreFlyDelayMax_type_id = 0x4983c7c9;
		constexpr static std::string_view MinDistToFly_type_name = "MinDistToFly";
		constexpr static rivet::rivet_type_id MinDistToFly_type_id = 0xd1a8f192;
		constexpr static std::string_view FlyHeightMin_type_name = "FlyHeightMin";
		constexpr static rivet::rivet_type_id FlyHeightMin_type_id = 0xf2502ddb;
		constexpr static std::string_view FlyHeightMax_type_name = "FlyHeightMax";
		constexpr static rivet::rivet_type_id FlyHeightMax_type_id = 0xce5d1282;
		constexpr static std::string_view FlyEngagedHeightMin_type_name = "FlyEngagedHeightMin";
		constexpr static rivet::rivet_type_id FlyEngagedHeightMin_type_id = 0xfcb9a72d;
		constexpr static std::string_view FlyEngagedHeightMax_type_name = "FlyEngagedHeightMax";
		constexpr static rivet::rivet_type_id FlyEngagedHeightMax_type_id = 0xc0b49874;
		constexpr static std::string_view FlyMinionHeightMin_type_name = "FlyMinionHeightMin";
		constexpr static rivet::rivet_type_id FlyMinionHeightMin_type_id = 0x4e64890e;
		constexpr static std::string_view FlyMinionHeightMax_type_name = "FlyMinionHeightMax";
		constexpr static rivet::rivet_type_id FlyMinionHeightMax_type_id = 0x7269b657; 

		explicit GameBotMeleeSwarmerGroundFlyerPrius() = default;
		explicit GameBotMeleeSwarmerGroundFlyerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DistToLandMin {};
		float DistToLandMax {};
		float PreFlyDelayMin {};
		float PreFlyDelayMax {};
		float MinDistToFly {};
		float FlyHeightMin {};
		float FlyHeightMax {};
		float FlyEngagedHeightMin {};
		float FlyEngagedHeightMax {};
		float FlyMinionHeightMin {};
		float FlyMinionHeightMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMeleeSwarmerGroundFlyerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
