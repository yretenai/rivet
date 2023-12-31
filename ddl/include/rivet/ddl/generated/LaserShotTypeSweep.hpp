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

#include <rivet/ddl/generated/BotComboLaserShotType.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED LaserShotTypeSweep : BotComboLaserShotType {
		constexpr static std::string_view type_name = "LaserShotTypeSweep";
		constexpr static rivet::rivet_type_id type_id = 0x4598de61;

		constexpr static std::string_view LaserTellTime_type_name = "LaserTellTime";
		constexpr static rivet::rivet_type_id LaserTellTime_type_id = 0x5c1cd434;
		constexpr static std::string_view LaserSweepTime_type_name = "LaserSweepTime";
		constexpr static rivet::rivet_type_id LaserSweepTime_type_id = 0xd88b95e;
		constexpr static std::string_view CurveFollowsTarget_type_name = "CurveFollowsTarget";
		constexpr static rivet::rivet_type_id CurveFollowsTarget_type_id = 0xf06be4e0; 

		explicit LaserShotTypeSweep() = default;
		explicit LaserShotTypeSweep([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float LaserTellTime {};
		float LaserSweepTime {};
		bool CurveFollowsTarget {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LaserShotTypeSweep>;
	};
} // namespace rivet::ddl::generated

// clang-format on
