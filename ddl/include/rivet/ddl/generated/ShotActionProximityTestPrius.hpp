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
	struct RIVET_DDL_SHARED ShotActionProximityTestPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ShotActionProximityTestPrius";
		constexpr static rivet::rivet_type_id type_id = 0x20f697aa;

		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view AllegianceMask_type_name = "AllegianceMask";
		constexpr static rivet::rivet_type_id AllegianceMask_type_id = 0x2f3b17da;
		constexpr static std::string_view UseLOS_type_name = "UseLOS";
		constexpr static rivet::rivet_type_id UseLOS_type_id = 0x9adcc9b8;
		constexpr static std::string_view DisableOnBreach_type_name = "DisableOnBreach";
		constexpr static rivet::rivet_type_id DisableOnBreach_type_id = 0xfd4d345b;
		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82; 

		explicit ShotActionProximityTestPrius() = default;
		explicit ShotActionProximityTestPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Radius {};
		uint32_t AllegianceMask {};
		bool UseLOS {};
		bool DisableOnBreach {};
		bool StartActive {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotActionProximityTestPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
