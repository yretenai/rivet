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

#include <rivet/ddl/generated/enums/VerticalSpacingMode.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DebugGraphDrawSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DebugGraphDrawSettings";
		constexpr static rivet::rivet_type_id type_id = 0xf08f152f;

		constexpr static std::string_view ScrollSpeedVertical_type_name = "ScrollSpeedVertical";
		constexpr static rivet::rivet_type_id ScrollSpeedVertical_type_id = 0x8e8a7491;
		constexpr static std::string_view ScrollSpeedHorizontal_type_name = "ScrollSpeedHorizontal";
		constexpr static rivet::rivet_type_id ScrollSpeedHorizontal_type_id = 0xa7744e00;
		constexpr static std::string_view NodeSpacingVertical_type_name = "NodeSpacingVertical";
		constexpr static rivet::rivet_type_id NodeSpacingVertical_type_id = 0xf170cf67;
		constexpr static std::string_view NodeSpacingHorizontal_type_name = "NodeSpacingHorizontal";
		constexpr static rivet::rivet_type_id NodeSpacingHorizontal_type_id = 0xb9211dc5;
		constexpr static std::string_view VerticalSpacingMode_type_name = "VerticalSpacingMode";
		constexpr static rivet::rivet_type_id VerticalSpacingMode_type_id = 0x3953b966; 

		explicit DebugGraphDrawSettings() = default;
		explicit DebugGraphDrawSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ScrollSpeedVertical {};
		float ScrollSpeedHorizontal {};
		float NodeSpacingVertical {};
		float NodeSpacingHorizontal {};
		rivet::ddl::generated::VerticalSpacingMode VerticalSpacingMode {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugGraphDrawSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
