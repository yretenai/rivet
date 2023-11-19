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
	struct LightStat; 

	struct RIVET_DDL_SHARED LightStats : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LightStats";
		constexpr static rivet::rivet_type_id type_id = 0xa1c7be0a;

		constexpr static std::string_view Sun_type_name = "Sun";
		constexpr static rivet::rivet_type_id Sun_type_id = 0x7be1e73e;
		constexpr static std::string_view Point_type_name = "Point";
		constexpr static rivet::rivet_type_id Point_type_id = 0xaef63fe5;
		constexpr static std::string_view Spot_type_name = "Spot";
		constexpr static rivet::rivet_type_id Spot_type_id = 0x89a2bac3;
		constexpr static std::string_view Shaft_type_name = "Shaft";
		constexpr static rivet::rivet_type_id Shaft_type_id = 0xb24ba63c;
		constexpr static std::string_view Pyramid_type_name = "Pyramid";
		constexpr static rivet::rivet_type_id Pyramid_type_id = 0xe2a43e71;
		constexpr static std::string_view Modulate_type_name = "Modulate";
		constexpr static rivet::rivet_type_id Modulate_type_id = 0x450a0905; 

		explicit LightStats() = default;
		explicit LightStats([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::LightStat> Sun {};
		std::shared_ptr<rivet::ddl::generated::LightStat> Point {};
		std::shared_ptr<rivet::ddl::generated::LightStat> Spot {};
		std::shared_ptr<rivet::ddl::generated::LightStat> Shaft {};
		std::shared_ptr<rivet::ddl::generated::LightStat> Pyramid {};
		std::shared_ptr<rivet::ddl::generated::LightStat> Modulate {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightStats>;
	};
} // namespace rivet::ddl::generated

// clang-format on