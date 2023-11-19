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
	struct RIVET_DDL_SHARED TunnelerJumpParams : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TunnelerJumpParams";
		constexpr static rivet::rivet_type_id type_id = 0x4018b74;

		constexpr static std::string_view IdealJumpAngle_type_name = "IdealJumpAngle";
		constexpr static rivet::rivet_type_id IdealJumpAngle_type_id = 0xcc7f5545;
		constexpr static std::string_view MinimumJumpDistance_type_name = "MinimumJumpDistance";
		constexpr static rivet::rivet_type_id MinimumJumpDistance_type_id = 0x409f5a2b;
		constexpr static std::string_view TargetSearchDistance_type_name = "TargetSearchDistance";
		constexpr static rivet::rivet_type_id TargetSearchDistance_type_id = 0x455fab52;
		constexpr static std::string_view TargetSearchHalfAngle_type_name = "TargetSearchHalfAngle";
		constexpr static rivet::rivet_type_id TargetSearchHalfAngle_type_id = 0x45ab6123;
		constexpr static std::string_view TargetSearchHeight_type_name = "TargetSearchHeight";
		constexpr static rivet::rivet_type_id TargetSearchHeight_type_id = 0x2d16466d; 

		explicit TunnelerJumpParams() = default;
		explicit TunnelerJumpParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float IdealJumpAngle {};
		float MinimumJumpDistance {};
		float TargetSearchDistance {};
		float TargetSearchHalfAngle {};
		float TargetSearchHeight {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TunnelerJumpParams>;
	};
} // namespace rivet::ddl::generated

// clang-format on