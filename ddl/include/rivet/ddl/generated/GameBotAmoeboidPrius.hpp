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

#include <rivet/ddl/generated/enums/x232b923a.hpp>
#include <rivet/ddl/generated/GameBotMeleeSwarmerPrius.hpp> 

namespace rivet::ddl::generated {
	struct AmoeboidDeathSpawnData; 

	struct RIVET_DDL_SHARED GameBotAmoeboidPrius : GameBotMeleeSwarmerPrius {
		constexpr static std::string_view type_name = "GameBotAmoeboidPrius";
		constexpr static rivet::rivet_type_id type_id = 0x749779c9;

		constexpr static std::string_view DeathSpawnData_type_name = "DeathSpawnData";
		constexpr static rivet::rivet_type_id DeathSpawnData_type_id = 0xec9c78e8;
		constexpr static std::string_view AmoeboidType_type_name = "AmoeboidType";
		constexpr static rivet::rivet_type_id AmoeboidType_type_id = 0x725ad7f;
		constexpr static std::string_view CombineSpawnActor_type_name = "CombineSpawnActor";
		constexpr static rivet::rivet_type_id CombineSpawnActor_type_id = 0x4b7f4b29;
		constexpr static std::string_view MaxCombinesAllowed_type_name = "MaxCombinesAllowed";
		constexpr static rivet::rivet_type_id MaxCombinesAllowed_type_id = 0x76c2f3c9; 

		explicit GameBotAmoeboidPrius() = default;
		explicit GameBotAmoeboidPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AmoeboidDeathSpawnData> DeathSpawnData {};
		rivet::ddl::generated::x232b923a AmoeboidType {};
		std::string_view CombineSpawnActor {};
		uint32_t MaxCombinesAllowed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotAmoeboidPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
