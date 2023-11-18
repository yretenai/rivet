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

#include <rivet/ddl/generated/POIAttributeDistanceScaleBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED POIAttributeDistanceScale : POIAttributeDistanceScaleBase {
		constexpr static std::string_view type_name = "POIAttributeDistanceScale";
		constexpr static rivet::rivet_type_id type_id = 0xce5792d7;

		constexpr static std::string_view MinScale_type_name = "MinScale";
		constexpr static rivet::rivet_type_id MinScale_type_id = 0x13b84df2;
		constexpr static std::string_view MaxScale_type_name = "MaxScale";
		constexpr static rivet::rivet_type_id MaxScale_type_id = 0xf5d8e213;
		constexpr static std::string_view MinDistance_type_name = "MinDistance";
		constexpr static rivet::rivet_type_id MinDistance_type_id = 0x448e693a;
		constexpr static std::string_view MaxDistance_type_name = "MaxDistance";
		constexpr static rivet::rivet_type_id MaxDistance_type_id = 0x88831235; 

		explicit POIAttributeDistanceScale() = default;
		explicit POIAttributeDistanceScale([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinScale {};
		float MaxScale {};
		float MinDistance {};
		float MaxDistance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIAttributeDistanceScale>;
	};
} // namespace rivet::ddl::generated

// clang-format on
