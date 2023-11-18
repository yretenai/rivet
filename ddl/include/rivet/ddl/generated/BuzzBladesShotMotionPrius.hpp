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

#include <rivet/ddl/generated/BasicShotMotionPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BuzzBladesShotMotionPrius : BasicShotMotionPrius {
		constexpr static std::string_view type_name = "BuzzBladesShotMotionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7767fa6e;

		constexpr static std::string_view MaxBounces_type_name = "MaxBounces";
		constexpr static rivet::rivet_type_id MaxBounces_type_id = 0x73e25a00;
		constexpr static std::string_view SpinJoint_type_name = "SpinJoint";
		constexpr static rivet::rivet_type_id SpinJoint_type_id = 0xb74c2620; 

		explicit BuzzBladesShotMotionPrius() = default;
		explicit BuzzBladesShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t MaxBounces {};
		std::string_view SpinJoint {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BuzzBladesShotMotionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
