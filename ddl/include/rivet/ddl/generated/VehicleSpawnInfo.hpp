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
	struct RIVET_DDL_SHARED VehicleSpawnInfo : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "VehicleSpawnInfo";
		constexpr const static rivet::rivet_type_id type_id = 0xe447bbc8;

		constexpr const static std::string_view MinDistance_type_name = "MinDistance";
		constexpr const static rivet::rivet_type_id MinDistance_type_id = 0x448e693a;
		constexpr const static std::string_view MaxDistance_type_name = "MaxDistance";
		constexpr const static rivet::rivet_type_id MaxDistance_type_id = 0x88831235;
		constexpr const static std::string_view MaxDistanceOffScreen_type_name = "MaxDistanceOffScreen";
		constexpr const static rivet::rivet_type_id MaxDistanceOffScreen_type_id = 0x87ce0c81; 

		explicit VehicleSpawnInfo() = default;
		explicit VehicleSpawnInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinDistance {};
		float MaxDistance {};
		float MaxDistanceOffScreen {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleSpawnInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
