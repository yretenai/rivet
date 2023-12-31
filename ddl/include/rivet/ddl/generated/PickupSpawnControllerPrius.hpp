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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PickupSpawnControllerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PickupSpawnControllerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8f395e29;

		constexpr static std::string_view SpawnLocationGroup_type_name = "SpawnLocationGroup";
		constexpr static rivet::rivet_type_id SpawnLocationGroup_type_id = 0x1557dd;
		constexpr static std::string_view PickupActor_type_name = "PickupActor";
		constexpr static rivet::rivet_type_id PickupActor_type_id = 0x2b00e05f;
		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82;
		constexpr static std::string_view FillMax_type_name = "FillMax";
		constexpr static rivet::rivet_type_id FillMax_type_id = 0x2c53f487;
		constexpr static std::string_view MinHeroDistance_type_name = "MinHeroDistance";
		constexpr static rivet::rivet_type_id MinHeroDistance_type_id = 0x5ada8518;
		constexpr static std::string_view MinSpawnDelay_type_name = "MinSpawnDelay";
		constexpr static rivet::rivet_type_id MinSpawnDelay_type_id = 0xde027326;
		constexpr static std::string_view MaxSpawnDelay_type_name = "MaxSpawnDelay";
		constexpr static rivet::rivet_type_id MaxSpawnDelay_type_id = 0x9e4d0b50; 

		explicit PickupSpawnControllerPrius() = default;
		explicit PickupSpawnControllerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t SpawnLocationGroup {};
		std::string_view PickupActor {};
		int32_t StartActive {};
		int32_t FillMax {};
		float MinHeroDistance {};
		float MinSpawnDelay {};
		float MaxSpawnDelay {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupSpawnControllerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
