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

#include <rivet/ddl/generated/BotGeneratorComponentPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED HexapodNestBotGeneratorComponentPrius : BotGeneratorComponentPrius {
		constexpr static std::string_view type_name = "HexapodNestBotGeneratorComponentPrius";
		constexpr static rivet::rivet_type_id type_id = 0x97269d39;

		constexpr static std::string_view SpawnCountMax_type_name = "SpawnCountMax";
		constexpr static rivet::rivet_type_id SpawnCountMax_type_id = 0x1b319e6a;
		constexpr static std::string_view GlobalSpawnCountMax_type_name = "GlobalSpawnCountMax";
		constexpr static rivet::rivet_type_id GlobalSpawnCountMax_type_id = 0x59dcabad;
		constexpr static std::string_view SimultaneousSpawnCount_type_name = "SimultaneousSpawnCount";
		constexpr static rivet::rivet_type_id SimultaneousSpawnCount_type_id = 0x5eb1b94b; 

		explicit HexapodNestBotGeneratorComponentPrius() = default;
		explicit HexapodNestBotGeneratorComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t SpawnCountMax {};
		uint32_t GlobalSpawnCountMax {};
		uint32_t SimultaneousSpawnCount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HexapodNestBotGeneratorComponentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
