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
	struct SpawnerBotThrowData; 

	struct RIVET_DDL_SHARED SpawnerBotBaseConfig : ConfigBase {
		constexpr static std::string_view type_name = "SpawnerBotBaseConfig";
		constexpr static rivet::rivet_type_id type_id = 0x9e208b03;

		constexpr static std::string_view NumActiveSpawnedBots_type_name = "NumActiveSpawnedBots";
		constexpr static rivet::rivet_type_id NumActiveSpawnedBots_type_id = 0x67e67610;
		constexpr static std::string_view SpawnDelay_type_name = "SpawnDelay";
		constexpr static rivet::rivet_type_id SpawnDelay_type_id = 0x6768b329;
		constexpr static std::string_view SpawnTriggerDelay_type_name = "SpawnTriggerDelay";
		constexpr static rivet::rivet_type_id SpawnTriggerDelay_type_id = 0x9402d4cb;
		constexpr static std::string_view DefaultSpawn_type_name = "DefaultSpawn";
		constexpr static rivet::rivet_type_id DefaultSpawn_type_id = 0x8a95937e;
		constexpr static std::string_view ThrowData_type_name = "ThrowData";
		constexpr static rivet::rivet_type_id ThrowData_type_id = 0x2f976166; 

		explicit SpawnerBotBaseConfig() = default;
		explicit SpawnerBotBaseConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint8_t NumActiveSpawnedBots {};
		float SpawnDelay {};
		float SpawnTriggerDelay {};
		std::string_view DefaultSpawn {};
		std::shared_ptr<rivet::ddl::generated::SpawnerBotThrowData> ThrowData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerBotBaseConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
