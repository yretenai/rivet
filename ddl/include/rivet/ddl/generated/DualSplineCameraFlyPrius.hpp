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

#include <rivet/ddl/generated/CameraPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DualSplineCameraFlyPrius : CameraPrius {
		constexpr static std::string_view type_name = "DualSplineCameraFlyPrius";
		constexpr static rivet::rivet_type_id type_id = 0x97d23543;

		constexpr static std::string_view MotionSpline_type_name = "MotionSpline";
		constexpr static rivet::rivet_type_id MotionSpline_type_id = 0x93329739;
		constexpr static std::string_view TargetSpline_type_name = "TargetSpline";
		constexpr static rivet::rivet_type_id TargetSpline_type_id = 0xc7471fcf;
		constexpr static std::string_view StartAtEnd_type_name = "StartAtEnd";
		constexpr static rivet::rivet_type_id StartAtEnd_type_id = 0x39b65e8c;
		constexpr static std::string_view LockMatchT_type_name = "LockMatchT";
		constexpr static rivet::rivet_type_id LockMatchT_type_id = 0xdf12523c; 

		explicit DualSplineCameraFlyPrius() = default;
		explicit DualSplineCameraFlyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t MotionSpline {};
		uint64_t TargetSpline {};
		bool StartAtEnd {};
		bool LockMatchT {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DualSplineCameraFlyPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on