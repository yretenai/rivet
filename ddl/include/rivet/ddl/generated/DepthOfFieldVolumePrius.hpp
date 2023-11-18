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
	struct RIVET_DDL_SHARED DepthOfFieldVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DepthOfFieldVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0x9564864e;

		constexpr static std::string_view BlurStartDistance_type_name = "BlurStartDistance";
		constexpr static rivet::rivet_type_id BlurStartDistance_type_id = 0x5acb163c;
		constexpr static std::string_view BlurValue_type_name = "BlurValue";
		constexpr static rivet::rivet_type_id BlurValue_type_id = 0x730b441f;
		constexpr static std::string_view BlurNearDistance_type_name = "BlurNearDistance";
		constexpr static rivet::rivet_type_id BlurNearDistance_type_id = 0x389a1da6;
		constexpr static std::string_view BlurNearValue_type_name = "BlurNearValue";
		constexpr static rivet::rivet_type_id BlurNearValue_type_id = 0xf1d75c63;
		constexpr static std::string_view BlendOnTime_type_name = "BlendOnTime";
		constexpr static rivet::rivet_type_id BlendOnTime_type_id = 0xbfbaac56;
		constexpr static std::string_view DisableDOF_type_name = "DisableDOF";
		constexpr static rivet::rivet_type_id DisableDOF_type_id = 0x95a5d5c7; 

		explicit DepthOfFieldVolumePrius() = default;
		explicit DepthOfFieldVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float BlurStartDistance {};
		float BlurValue {};
		float BlurNearDistance {};
		float BlurNearValue {};
		float BlendOnTime {};
		bool DisableDOF {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DepthOfFieldVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
