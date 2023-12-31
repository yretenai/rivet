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
	struct RIVET_DDL_SHARED BloodTrailPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BloodTrailPrius";
		constexpr static rivet::rivet_type_id type_id = 0x3d7471a1;

		constexpr static std::string_view SplatFrequency_type_name = "SplatFrequency";
		constexpr static rivet::rivet_type_id SplatFrequency_type_id = 0xae3e01f4;
		constexpr static std::string_view MovingSplatFrequency_type_name = "MovingSplatFrequency";
		constexpr static rivet::rivet_type_id MovingSplatFrequency_type_id = 0x6c0b0c6e;
		constexpr static std::string_view SpeedThreshold_type_name = "SpeedThreshold";
		constexpr static rivet::rivet_type_id SpeedThreshold_type_id = 0x69e55b8a;
		constexpr static std::string_view RandOffset_type_name = "RandOffset";
		constexpr static rivet::rivet_type_id RandOffset_type_id = 0xd4e44237;
		constexpr static std::string_view UseDamageTimer_type_name = "UseDamageTimer";
		constexpr static rivet::rivet_type_id UseDamageTimer_type_id = 0xc822776d;
		constexpr static std::string_view MaxDuration_type_name = "MaxDuration";
		constexpr static rivet::rivet_type_id MaxDuration_type_id = 0x124e0874;
		constexpr static std::string_view MaxDamage_type_name = "MaxDamage";
		constexpr static rivet::rivet_type_id MaxDamage_type_id = 0xadb823c1; 

		explicit BloodTrailPrius() = default;
		explicit BloodTrailPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SplatFrequency {};
		float MovingSplatFrequency {};
		float SpeedThreshold {};
		float RandOffset {};
		bool UseDamageTimer {};
		float MaxDuration {};
		float MaxDamage {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BloodTrailPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
