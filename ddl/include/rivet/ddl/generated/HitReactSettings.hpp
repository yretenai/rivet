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
	struct RIVET_DDL_SHARED HitReactSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HitReactSettings";
		constexpr static rivet::rivet_type_id type_id = 0x869d2c05;

		constexpr static std::string_view MirrorVar_type_name = "MirrorVar";
		constexpr static rivet::rivet_type_id MirrorVar_type_id = 0x4be9ab76;
		constexpr static std::string_view RangeFilterShort_type_name = "RangeFilterShort";
		constexpr static rivet::rivet_type_id RangeFilterShort_type_id = 0x1c6a33ac;
		constexpr static std::string_view RangeFilterLong_type_name = "RangeFilterLong";
		constexpr static rivet::rivet_type_id RangeFilterLong_type_id = 0x7fa14ac3; 

		explicit HitReactSettings() = default;
		explicit HitReactSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MirrorVar {};
		float RangeFilterShort {};
		float RangeFilterLong {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HitReactSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
