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
	struct MovingLevelTileList; 

	struct RIVET_DDL_SHARED MovingLevelPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MovingLevelPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd3db002a;

		constexpr static std::string_view InitialTile_type_name = "InitialTile";
		constexpr static rivet::rivet_type_id InitialTile_type_id = 0xac8b427f;
		constexpr static std::string_view FinalTile_type_name = "FinalTile";
		constexpr static rivet::rivet_type_id FinalTile_type_id = 0x37336031;
		constexpr static std::string_view TileLists_type_name = "TileLists";
		constexpr static rivet::rivet_type_id TileLists_type_id = 0x1df55d2f;
		constexpr static std::string_view MaxSpeed_type_name = "MaxSpeed";
		constexpr static rivet::rivet_type_id MaxSpeed_type_id = 0x16b83961;
		constexpr static std::string_view Accel_type_name = "Accel";
		constexpr static rivet::rivet_type_id Accel_type_id = 0x44affa24;
		constexpr static std::string_view Decel_type_name = "Decel";
		constexpr static rivet::rivet_type_id Decel_type_id = 0xa9242a88; 

		explicit MovingLevelPrius() = default;
		explicit MovingLevelPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t InitialTile {};
		uint64_t FinalTile {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MovingLevelTileList>> TileLists {};
		float MaxSpeed {};
		float Accel {};
		float Decel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovingLevelPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
