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

#include <rivet/ddl/generated/OmniAwarenessPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED OmniDelayAwarenessPrius : OmniAwarenessPrius {
		constexpr static std::string_view type_name = "OmniDelayAwarenessPrius";
		constexpr static rivet::rivet_type_id type_id = 0xf205bdd;

		constexpr static std::string_view ApplyConfirmStagger_type_name = "ApplyConfirmStagger";
		constexpr static rivet::rivet_type_id ApplyConfirmStagger_type_id = 0xcaed5a9;
		constexpr static std::string_view IgnoreTargetsInWater_type_name = "IgnoreTargetsInWater";
		constexpr static rivet::rivet_type_id IgnoreTargetsInWater_type_id = 0x47049076; 

		explicit OmniDelayAwarenessPrius() = default;
		explicit OmniDelayAwarenessPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool ApplyConfirmStagger {};
		bool IgnoreTargetsInWater {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OmniDelayAwarenessPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
