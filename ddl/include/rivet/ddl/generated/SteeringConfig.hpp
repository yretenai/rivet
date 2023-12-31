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
	struct RIVET_DDL_SHARED SteeringConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SteeringConfig";
		constexpr static rivet::rivet_type_id type_id = 0x153a00dc;

		constexpr static std::string_view AlwaysUseAccel_type_name = "AlwaysUseAccel";
		constexpr static rivet::rivet_type_id AlwaysUseAccel_type_id = 0xc6e2b259;
		constexpr static std::string_view UseNavPositionTrackerQueries_type_name = "UseNavPositionTrackerQueries";
		constexpr static rivet::rivet_type_id UseNavPositionTrackerQueries_type_id = 0x617c7319; 

		explicit SteeringConfig() = default;
		explicit SteeringConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool AlwaysUseAccel {};
		bool UseNavPositionTrackerQueries {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SteeringConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
