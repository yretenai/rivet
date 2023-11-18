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
	struct ActorSpawnOnHitInfo;
	struct HittingShotInfo; 

	struct RIVET_DDL_SHARED SpawnSyncedActorForHitMapping : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpawnSyncedActorForHitMapping";
		constexpr static rivet::rivet_type_id type_id = 0x66c60ba9;

		constexpr static std::string_view HittingShotInfo_type_name = "HittingShotInfo";
		constexpr static rivet::rivet_type_id HittingShotInfo_type_id = 0x264fbabf;
		constexpr static std::string_view SpawnInfo_type_name = "SpawnInfo";
		constexpr static rivet::rivet_type_id SpawnInfo_type_id = 0x56911753; 

		explicit SpawnSyncedActorForHitMapping() = default;
		explicit SpawnSyncedActorForHitMapping([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HittingShotInfo> HittingShotInfo {};
		std::shared_ptr<rivet::ddl::generated::ActorSpawnOnHitInfo> SpawnInfo {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnSyncedActorForHitMapping>;
	};
} // namespace rivet::ddl::generated

// clang-format on
