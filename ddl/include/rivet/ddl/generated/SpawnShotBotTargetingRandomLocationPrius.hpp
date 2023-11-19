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

#include <rivet/ddl/generated/SpawnShotBotTargetingPrius.hpp> 

namespace rivet::ddl::generated {
	struct TargetingLocationWeightData; 

	struct RIVET_DDL_SHARED SpawnShotBotTargetingRandomLocationPrius : SpawnShotBotTargetingPrius {
		constexpr static std::string_view type_name = "SpawnShotBotTargetingRandomLocationPrius";
		constexpr static rivet::rivet_type_id type_id = 0xeb0ec715;

		constexpr static std::string_view LocationWeightData_type_name = "LocationWeightData";
		constexpr static rivet::rivet_type_id LocationWeightData_type_id = 0x48766868; 

		explicit SpawnShotBotTargetingRandomLocationPrius() = default;
		explicit SpawnShotBotTargetingRandomLocationPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::TargetingLocationWeightData>> LocationWeightData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotBotTargetingRandomLocationPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on