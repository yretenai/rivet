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
	struct RIVET_DDL_SHARED DepthOfFieldProcessorPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DepthOfFieldProcessorPrius";
		constexpr static rivet::rivet_type_id type_id = 0xde05e0de;

		constexpr static std::string_view ViewportIndex_type_name = "ViewportIndex";
		constexpr static rivet::rivet_type_id ViewportIndex_type_id = 0x3f4db543;
		constexpr static std::string_view HUDDOFDistance_type_name = "HUDDOFDistance";
		constexpr static rivet::rivet_type_id HUDDOFDistance_type_id = 0x3fc97ae2;
		constexpr static std::string_view HUDAperatureScale_type_name = "HUDAperatureScale";
		constexpr static rivet::rivet_type_id HUDAperatureScale_type_id = 0x28f69dbb;
		constexpr static std::string_view HUDBlendTime_type_name = "HUDBlendTime";
		constexpr static rivet::rivet_type_id HUDBlendTime_type_id = 0x16bd9852;
		constexpr static std::string_view DefaultBlendTime_type_name = "DefaultBlendTime";
		constexpr static rivet::rivet_type_id DefaultBlendTime_type_id = 0x918530b7;
		constexpr static std::string_view AimBlendTime_type_name = "AimBlendTime";
		constexpr static rivet::rivet_type_id AimBlendTime_type_id = 0x1a2c5302;
		constexpr static std::string_view DeactivateTime_type_name = "DeactivateTime";
		constexpr static rivet::rivet_type_id DeactivateTime_type_id = 0x1890a394; 

		explicit DepthOfFieldProcessorPrius() = default;
		explicit DepthOfFieldProcessorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t ViewportIndex {};
		float HUDDOFDistance {};
		float HUDAperatureScale {};
		float HUDBlendTime {};
		float DefaultBlendTime {};
		float AimBlendTime {};
		float DeactivateTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DepthOfFieldProcessorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
