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

#include <rivet/ddl/generated/FocusTrackingAimingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SmoothAimingPrius : FocusTrackingAimingPrius {
		constexpr static std::string_view type_name = "SmoothAimingPrius";
		constexpr static rivet::rivet_type_id type_id = 0xaca2f9fd;

		constexpr static std::string_view AimPosAccel_type_name = "AimPosAccel";
		constexpr static rivet::rivet_type_id AimPosAccel_type_id = 0x8aebedf;
		constexpr static std::string_view AimPosDecel_type_name = "AimPosDecel";
		constexpr static rivet::rivet_type_id AimPosDecel_type_id = 0xe5256e73;
		constexpr static std::string_view AimPosMaxSpeed_type_name = "AimPosMaxSpeed";
		constexpr static rivet::rivet_type_id AimPosMaxSpeed_type_id = 0x4c3b1f8b; 

		explicit SmoothAimingPrius() = default;
		explicit SmoothAimingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float AimPosAccel {};
		float AimPosDecel {};
		float AimPosMaxSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SmoothAimingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
