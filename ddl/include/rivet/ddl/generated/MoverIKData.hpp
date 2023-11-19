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
	struct RIVET_DDL_SHARED MoverIKData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MoverIKData";
		constexpr static rivet::rivet_type_id type_id = 0x164300ca;

		constexpr static std::string_view MaxHeightAboveAnim_type_name = "MaxHeightAboveAnim";
		constexpr static rivet::rivet_type_id MaxHeightAboveAnim_type_id = 0xab908c6;
		constexpr static std::string_view MaxHeightBelowAnim_type_name = "MaxHeightBelowAnim";
		constexpr static rivet::rivet_type_id MaxHeightBelowAnim_type_id = 0x36e0b036; 

		explicit MoverIKData() = default;
		explicit MoverIKData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MaxHeightAboveAnim {};
		float MaxHeightBelowAnim {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverIKData>;
	};
} // namespace rivet::ddl::generated

// clang-format on