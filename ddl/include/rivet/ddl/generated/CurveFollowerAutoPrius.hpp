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

#include <rivet/ddl/generated/enums/OpenCurveFollowMode.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CurveFollowerAutoPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CurveFollowerAutoPrius";
		constexpr static rivet::rivet_type_id type_id = 0x118c96ed;

		constexpr static std::string_view Curve_type_name = "Curve";
		constexpr static rivet::rivet_type_id Curve_type_id = 0x4eca9176;
		constexpr static std::string_view OpenCurveFollowMode_type_name = "OpenCurveFollowMode";
		constexpr static rivet::rivet_type_id OpenCurveFollowMode_type_id = 0xc850698f;
		constexpr static std::string_view Speed_type_name = "Speed";
		constexpr static rivet::rivet_type_id Speed_type_id = 0x16753237;
		constexpr static std::string_view WaitDuration_type_name = "WaitDuration";
		constexpr static rivet::rivet_type_id WaitDuration_type_id = 0xe3655ff0;
		constexpr static std::string_view TransitionMinDistFactor_type_name = "TransitionMinDistFactor";
		constexpr static rivet::rivet_type_id TransitionMinDistFactor_type_id = 0x6bc5c814;
		constexpr static std::string_view TransitionMaxDistFactor_type_name = "TransitionMaxDistFactor";
		constexpr static rivet::rivet_type_id TransitionMaxDistFactor_type_id = 0x2b8ab062;
		constexpr static std::string_view TransitionAngleFactor_type_name = "TransitionAngleFactor";
		constexpr static rivet::rivet_type_id TransitionAngleFactor_type_id = 0xd5bc1eb7;
		constexpr static std::string_view TransitionMaxTurnRate_type_name = "TransitionMaxTurnRate";
		constexpr static rivet::rivet_type_id TransitionMaxTurnRate_type_id = 0x906ec33;
		constexpr static std::string_view StartOnInit_type_name = "StartOnInit";
		constexpr static rivet::rivet_type_id StartOnInit_type_id = 0x5c7de3d6;
		constexpr static std::string_view StartReversed_type_name = "StartReversed";
		constexpr static rivet::rivet_type_id StartReversed_type_id = 0x592685f7;
		constexpr static std::string_view StartOnClosestPoint_type_name = "StartOnClosestPoint";
		constexpr static rivet::rivet_type_id StartOnClosestPoint_type_id = 0x63fb369;
		constexpr static std::string_view DeleteAtEnd_type_name = "DeleteAtEnd";
		constexpr static rivet::rivet_type_id DeleteAtEnd_type_id = 0x15e49676; 

		explicit CurveFollowerAutoPrius() = default;
		explicit CurveFollowerAutoPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Curve {};
		rivet::ddl::generated::OpenCurveFollowMode OpenCurveFollowMode {};
		float Speed {};
		float WaitDuration {};
		float TransitionMinDistFactor {};
		float TransitionMaxDistFactor {};
		float TransitionAngleFactor {};
		float TransitionMaxTurnRate {};
		bool StartOnInit {};
		bool StartReversed {};
		bool StartOnClosestPoint {};
		bool DeleteAtEnd {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveFollowerAutoPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
