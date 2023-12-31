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
	struct RIVET_DDL_SHARED IntersectionFadeData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "IntersectionFadeData";
		constexpr static rivet::rivet_type_id type_id = 0x25b478aa;

		constexpr static std::string_view FadeOutDistance_type_name = "FadeOutDistance";
		constexpr static rivet::rivet_type_id FadeOutDistance_type_id = 0xa3cc9166;
		constexpr static std::string_view HeadFadeOutDistance_type_name = "HeadFadeOutDistance";
		constexpr static rivet::rivet_type_id HeadFadeOutDistance_type_id = 0xca6b39e9;
		constexpr static std::string_view FadeTime_type_name = "FadeTime";
		constexpr static rivet::rivet_type_id FadeTime_type_id = 0x8833d162; 

		explicit IntersectionFadeData() = default;
		explicit IntersectionFadeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FadeOutDistance {};
		float HeadFadeOutDistance {};
		float FadeTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IntersectionFadeData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
