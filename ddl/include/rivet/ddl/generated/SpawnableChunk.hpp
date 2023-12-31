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
	struct RIVET_DDL_SHARED SpawnableChunk : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpawnableChunk";
		constexpr static rivet::rivet_type_id type_id = 0x5bc512c3;

		constexpr static std::string_view SpawnModel_type_name = "SpawnModel";
		constexpr static rivet::rivet_type_id SpawnModel_type_id = 0x267416b;
		constexpr static std::string_view CustomLocator_type_name = "CustomLocator";
		constexpr static rivet::rivet_type_id CustomLocator_type_id = 0x471c96e1;
		constexpr static std::string_view HasCollision_type_name = "HasCollision";
		constexpr static rivet::rivet_type_id HasCollision_type_id = 0x251426c9; 

		explicit SpawnableChunk() = default;
		explicit SpawnableChunk([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view SpawnModel {};
		std::string_view CustomLocator {};
		bool HasCollision {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnableChunk>;
	};
} // namespace rivet::ddl::generated

// clang-format on
