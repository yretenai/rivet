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

#include <rivet/ddl/generated/SpawnShotForwardConeTargetingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SpawnShotForwardConeRandomTargetingPrius : SpawnShotForwardConeTargetingPrius {
		constexpr static std::string_view type_name = "SpawnShotForwardConeRandomTargetingPrius";
		constexpr static rivet::rivet_type_id type_id = 0x688db7c6;

		constexpr static std::string_view FireAtGroundPos_type_name = "FireAtGroundPos";
		constexpr static rivet::rivet_type_id FireAtGroundPos_type_id = 0xb34e8b73; 

		explicit SpawnShotForwardConeRandomTargetingPrius() = default;
		explicit SpawnShotForwardConeRandomTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool FireAtGroundPos {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnShotForwardConeRandomTargetingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
