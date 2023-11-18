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
	struct RIVET_DDL_SHARED VisualEffectFrameAttr : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectFrameAttr";
		constexpr static rivet::rivet_type_id type_id = 0xe6dbc058;

		constexpr static std::string_view FPSPercentageHigh_type_name = "FPSPercentageHigh";
		constexpr static rivet::rivet_type_id FPSPercentageHigh_type_id = 0xa4d02141;
		constexpr static std::string_view FPSPercentageLow_type_name = "FPSPercentageLow";
		constexpr static rivet::rivet_type_id FPSPercentageLow_type_id = 0x4d013330;
		constexpr static std::string_view SpawnRateScale_type_name = "SpawnRateScale";
		constexpr static rivet::rivet_type_id SpawnRateScale_type_id = 0xef876f34; 

		explicit VisualEffectFrameAttr() = default;
		explicit VisualEffectFrameAttr([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FPSPercentageHigh {};
		float FPSPercentageLow {};
		float SpawnRateScale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectFrameAttr>;
	};
} // namespace rivet::ddl::generated

// clang-format on
