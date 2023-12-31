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
	struct AimAssistCurveData; 

	struct RIVET_DDL_SHARED AimAssistMagnetData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AimAssistMagnetData";
		constexpr static rivet::rivet_type_id type_id = 0x43ed3754;

		constexpr static std::string_view Enable_type_name = "Enable";
		constexpr static rivet::rivet_type_id Enable_type_id = 0xcdd88655;
		constexpr static std::string_view BoxProcessing_type_name = "BoxProcessing";
		constexpr static rivet::rivet_type_id BoxProcessing_type_id = 0x643e4b40;
		constexpr static std::string_view StickMin_type_name = "StickMin";
		constexpr static rivet::rivet_type_id StickMin_type_id = 0xdee2a17d;
		constexpr static std::string_view StickMax_type_name = "StickMax";
		constexpr static rivet::rivet_type_id StickMax_type_id = 0xe2ef9e24;
		constexpr static std::string_view FactorMin_type_name = "FactorMin";
		constexpr static rivet::rivet_type_id FactorMin_type_id = 0xc102c0af;
		constexpr static std::string_view FactorMax_type_name = "FactorMax";
		constexpr static rivet::rivet_type_id FactorMax_type_id = 0xfd0ffff6;
		constexpr static std::string_view PitchFactor_type_name = "PitchFactor";
		constexpr static rivet::rivet_type_id PitchFactor_type_id = 0x25afe2e8; 

		explicit AimAssistMagnetData() = default;
		explicit AimAssistMagnetData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enable {};
		std::shared_ptr<rivet::ddl::generated::AimAssistCurveData> BoxProcessing {};
		float StickMin {};
		float StickMax {};
		float FactorMin {};
		float FactorMax {};
		float PitchFactor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistMagnetData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
