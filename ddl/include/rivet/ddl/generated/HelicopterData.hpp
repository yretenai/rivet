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
	struct RIVET_DDL_SHARED HelicopterData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HelicopterData";
		constexpr static rivet::rivet_type_id type_id = 0xd3a9c3ac;

		constexpr static std::string_view FlightArea_type_name = "FlightArea";
		constexpr static rivet::rivet_type_id FlightArea_type_id = 0x61b07f41;
		constexpr static std::string_view DeathArea_type_name = "DeathArea";
		constexpr static rivet::rivet_type_id DeathArea_type_id = 0xbfa28c95;
		constexpr static std::string_view RandomizeDeathPosition_type_name = "RandomizeDeathPosition";
		constexpr static rivet::rivet_type_id RandomizeDeathPosition_type_id = 0x6d90febf;
		constexpr static std::string_view DamagerOffset_type_name = "DamagerOffset";
		constexpr static rivet::rivet_type_id DamagerOffset_type_id = 0xdc4f6d3c;
		constexpr static std::string_view MoveToBestFirepoint_type_name = "MoveToBestFirepoint";
		constexpr static rivet::rivet_type_id MoveToBestFirepoint_type_id = 0x9b757740; 

		explicit HelicopterData() = default;
		explicit HelicopterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t FlightArea {};
		uint64_t DeathArea {};
		bool RandomizeDeathPosition {};
		float DamagerOffset {};
		bool MoveToBestFirepoint {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HelicopterData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
