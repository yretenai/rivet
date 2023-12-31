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
	struct RIVET_DDL_SHARED HeroEnemyHaloPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroEnemyHaloPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7ccecdf;

		constexpr static std::string_view MaxValidRange_type_name = "MaxValidRange";
		constexpr static rivet::rivet_type_id MaxValidRange_type_id = 0xefbd9dd0;
		constexpr static std::string_view TargetTypeMask_type_name = "TargetTypeMask";
		constexpr static rivet::rivet_type_id TargetTypeMask_type_id = 0x842f58f1;
		constexpr static std::string_view DoStandardLOS_type_name = "DoStandardLOS";
		constexpr static rivet::rivet_type_id DoStandardLOS_type_id = 0x43021edd;
		constexpr static std::string_view DoPathTest_type_name = "DoPathTest";
		constexpr static rivet::rivet_type_id DoPathTest_type_id = 0x7b7515d2;
		constexpr static std::string_view TargetNeutral_type_name = "TargetNeutral";
		constexpr static rivet::rivet_type_id TargetNeutral_type_id = 0xa4d93eca;
		constexpr static std::string_view ForceSmallList_type_name = "ForceSmallList";
		constexpr static rivet::rivet_type_id ForceSmallList_type_id = 0x234c312e;
		constexpr static std::string_view TargetAnyAllegiance_type_name = "TargetAnyAllegiance";
		constexpr static rivet::rivet_type_id TargetAnyAllegiance_type_id = 0xa0faaada; 

		explicit HeroEnemyHaloPrius() = default;
		explicit HeroEnemyHaloPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MaxValidRange {};
		uint32_t TargetTypeMask {};
		bool DoStandardLOS {};
		bool DoPathTest {};
		bool TargetNeutral {};
		bool ForceSmallList {};
		bool TargetAnyAllegiance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroEnemyHaloPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
