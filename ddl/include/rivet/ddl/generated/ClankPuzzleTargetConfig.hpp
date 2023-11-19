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

#include <rivet/ddl/generated/enums/x10b3c4cf.hpp>
#include <rivet/ddl/generated/ClankPuzzleTargetBaseConfig.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ClankPuzzleTargetConfig : ClankPuzzleTargetBaseConfig {
		constexpr static std::string_view type_name = "ClankPuzzleTargetConfig";
		constexpr static rivet::rivet_type_id type_id = 0xefc617b2;

		constexpr static std::string_view SlowDownMult_type_name = "SlowDownMult";
		constexpr static rivet::rivet_type_id SlowDownMult_type_id = 0x4007e76e;
		constexpr static std::string_view MaxSlowDown_type_name = "MaxSlowDown";
		constexpr static rivet::rivet_type_id MaxSlowDown_type_id = 0xb0238676;
		constexpr static std::string_view SpeedUpMult_type_name = "SpeedUpMult";
		constexpr static rivet::rivet_type_id SpeedUpMult_type_id = 0x862191c1;
		constexpr static std::string_view MaxSpeedUp_type_name = "MaxSpeedUp";
		constexpr static rivet::rivet_type_id MaxSpeedUp_type_id = 0xb42a1c7b;
		constexpr static std::string_view WorldTimeManipulationPercent_type_name = "WorldTimeManipulationPercent";
		constexpr static rivet::rivet_type_id WorldTimeManipulationPercent_type_id = 0xd26ad13c;
		constexpr static std::string_view HeavyDangerMaterial_type_name = "HeavyDangerMaterial";
		constexpr static rivet::rivet_type_id HeavyDangerMaterial_type_id = 0x1e7e3814; 

		explicit ClankPuzzleTargetConfig() = default;
		explicit ClankPuzzleTargetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SlowDownMult {};
		float MaxSlowDown {};
		float SpeedUpMult {};
		float MaxSpeedUp {};
		float WorldTimeManipulationPercent {};
		rivet::ddl::generated::x10b3c4cf HeavyDangerMaterial {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleTargetConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on