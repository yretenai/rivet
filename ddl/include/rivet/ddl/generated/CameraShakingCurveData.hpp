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
	struct RIVET_DDL_SHARED CameraShakingCurveData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CameraShakingCurveData";
		constexpr static rivet::rivet_type_id type_id = 0x38252b8a;

		constexpr static std::string_view Magnitude_type_name = "Magnitude";
		constexpr static rivet::rivet_type_id Magnitude_type_id = 0xb77ae20d;
		constexpr static std::string_view Frequency_type_name = "Frequency";
		constexpr static rivet::rivet_type_id Frequency_type_id = 0xa482271f;
		constexpr static std::string_view Offset_type_name = "Offset";
		constexpr static rivet::rivet_type_id Offset_type_id = 0x677284b7; 

		explicit CameraShakingCurveData() = default;
		explicit CameraShakingCurveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Magnitude {};
		float Frequency {};
		float Offset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraShakingCurveData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
