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

#include <rivet/ddl/generated/enums/x87a08fd4.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SpawnInPlacePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpawnInPlacePrius";
		constexpr static rivet::rivet_type_id type_id = 0x9f98f5a0;

		constexpr static std::string_view SpawnActor_type_name = "SpawnActor";
		constexpr static rivet::rivet_type_id SpawnActor_type_id = 0x9187654b;
		constexpr static std::string_view SpawnTime_type_name = "SpawnTime";
		constexpr static rivet::rivet_type_id SpawnTime_type_id = 0xf28cbe41;
		constexpr static std::string_view LifeTime_type_name = "LifeTime";
		constexpr static rivet::rivet_type_id LifeTime_type_id = 0x67d422c6; 

		explicit SpawnInPlacePrius() = default;
		explicit SpawnInPlacePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view SpawnActor {};
		rivet::ddl::generated::x87a08fd4 SpawnTime {};
		float LifeTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnInPlacePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
