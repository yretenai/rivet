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

#include <rivet/ddl/generated/enums/xbb0b7195.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AmbientSoundCurveFollowPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AmbientSoundCurveFollowPrius";
		constexpr static rivet::rivet_type_id type_id = 0x3266e753;

		constexpr static std::string_view CurveObjectHandle_type_name = "CurveObjectHandle";
		constexpr static rivet::rivet_type_id CurveObjectHandle_type_id = 0x51f0cc7b;
		constexpr static std::string_view Curve_type_name = "Curve";
		constexpr static rivet::rivet_type_id Curve_type_id = 0x4eca9176;
		constexpr static std::string_view PosOption_type_name = "PosOption";
		constexpr static rivet::rivet_type_id PosOption_type_id = 0xacf494f3; 

		explicit AmbientSoundCurveFollowPrius() = default;
		explicit AmbientSoundCurveFollowPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t CurveObjectHandle {};
		uint64_t Curve {};
		rivet::ddl::generated::xbb0b7195 PosOption {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientSoundCurveFollowPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
