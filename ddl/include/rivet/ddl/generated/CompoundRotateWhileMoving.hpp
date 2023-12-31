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

#include <rivet/ddl/generated/enums/xea512758.hpp>
#include <rivet/ddl/generated/OrientationMode.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CompoundRotateWhileMoving : OrientationMode {
		constexpr static std::string_view type_name = "CompoundRotateWhileMoving";
		constexpr static rivet::rivet_type_id type_id = 0x824c80eb;

		constexpr static std::string_view MotionOrientedAxis_type_name = "MotionOrientedAxis";
		constexpr static rivet::rivet_type_id MotionOrientedAxis_type_id = 0x451c94cc;
		constexpr static std::string_view MotionOrientedRotationalSpeed_type_name = "MotionOrientedRotationalSpeed";
		constexpr static rivet::rivet_type_id MotionOrientedRotationalSpeed_type_id = 0x7292613d;
		constexpr static std::string_view LocalAxis_type_name = "LocalAxis";
		constexpr static rivet::rivet_type_id LocalAxis_type_id = 0xf625ad16;
		constexpr static std::string_view LocalRotationalSpeed_type_name = "LocalRotationalSpeed";
		constexpr static rivet::rivet_type_id LocalRotationalSpeed_type_id = 0xd16fdf3d; 

		explicit CompoundRotateWhileMoving() = default;
		explicit CompoundRotateWhileMoving([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xea512758 MotionOrientedAxis {};
		float MotionOrientedRotationalSpeed {};
		rivet::ddl::generated::xea512758 LocalAxis {};
		float LocalRotationalSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompoundRotateWhileMoving>;
	};
} // namespace rivet::ddl::generated

// clang-format on
