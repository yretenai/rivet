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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED OverrideHeroSpaceshipTurnRateActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OverrideHeroSpaceshipTurnRateActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x523d25d7;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view NonFireTurnAccel_type_name = "NonFireTurnAccel";
		constexpr static rivet::rivet_type_id NonFireTurnAccel_type_id = 0x48b65dd;
		constexpr static std::string_view NonFireTurnDecel_type_name = "NonFireTurnDecel";
		constexpr static rivet::rivet_type_id NonFireTurnDecel_type_id = 0xe900b571;
		constexpr static std::string_view NonFireTurnSpeed_type_name = "NonFireTurnSpeed";
		constexpr static rivet::rivet_type_id NonFireTurnSpeed_type_id = 0x5651adce;
		constexpr static std::string_view FireTurnAccel_type_name = "FireTurnAccel";
		constexpr static rivet::rivet_type_id FireTurnAccel_type_id = 0x62781d51;
		constexpr static std::string_view FireTurnDecel_type_name = "FireTurnDecel";
		constexpr static rivet::rivet_type_id FireTurnDecel_type_id = 0x8ff3cdfd;
		constexpr static std::string_view FireTurnSpeed_type_name = "FireTurnSpeed";
		constexpr static rivet::rivet_type_id FireTurnSpeed_type_id = 0x30a2d542; 

		explicit OverrideHeroSpaceshipTurnRateActionPrius() = default;
		explicit OverrideHeroSpaceshipTurnRateActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		float NonFireTurnAccel {};
		float NonFireTurnDecel {};
		float NonFireTurnSpeed {};
		float FireTurnAccel {};
		float FireTurnDecel {};
		float FireTurnSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OverrideHeroSpaceshipTurnRateActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
