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
	struct ProximitySpawnSaveData; 

	struct RIVET_DDL_SHARED ProximitySpawnSystemSave : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ProximitySpawnSystemSave";
		constexpr static rivet::rivet_type_id type_id = 0x209a1b1a;

		constexpr static std::string_view ProximitySpawnData_type_name = "ProximitySpawnData";
		constexpr static rivet::rivet_type_id ProximitySpawnData_type_id = 0x8c2f999f; 

		explicit ProximitySpawnSystemSave() = default;
		explicit ProximitySpawnSystemSave([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ProximitySpawnSaveData>> ProximitySpawnData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximitySpawnSystemSave>;
	};
} // namespace rivet::ddl::generated

// clang-format on
