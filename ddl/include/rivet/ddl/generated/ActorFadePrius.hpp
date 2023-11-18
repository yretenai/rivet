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

#include <rivet/ddl/generated/enums/xc19f3ae.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ActorFadePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActorFadePrius";
		constexpr static rivet::rivet_type_id type_id = 0x84ba0b8d;

		constexpr static std::string_view FadeInTime_type_name = "FadeInTime";
		constexpr static rivet::rivet_type_id FadeInTime_type_id = 0xc2c56073;
		constexpr static std::string_view FadeOutTime_type_name = "FadeOutTime";
		constexpr static rivet::rivet_type_id FadeOutTime_type_id = 0xf2879aff;
		constexpr static std::string_view DestroyWhenFadedOut_type_name = "DestroyWhenFadedOut";
		constexpr static rivet::rivet_type_id DestroyWhenFadedOut_type_id = 0x7296be3f;
		constexpr static std::string_view SkipWhenOccluded_type_name = "SkipWhenOccluded";
		constexpr static rivet::rivet_type_id SkipWhenOccluded_type_id = 0x87186102;
		constexpr static std::string_view MaxVisiblePixelPercent_type_name = "MaxVisiblePixelPercent";
		constexpr static rivet::rivet_type_id MaxVisiblePixelPercent_type_id = 0x9d571f5a;
		constexpr static std::string_view FadeEffect_type_name = "FadeEffect";
		constexpr static rivet::rivet_type_id FadeEffect_type_id = 0x227c2ffb; 

		explicit ActorFadePrius() = default;
		explicit ActorFadePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FadeInTime {};
		float FadeOutTime {};
		bool DestroyWhenFadedOut {};
		bool SkipWhenOccluded {};
		float MaxVisiblePixelPercent {};
		rivet::ddl::generated::xc19f3ae FadeEffect {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorFadePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
