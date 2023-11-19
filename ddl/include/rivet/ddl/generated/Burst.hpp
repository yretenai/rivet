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

#include <rivet/ddl/generated/enums/xba90f6fd.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED Burst : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Burst";
		constexpr static rivet::rivet_type_id type_id = 0x646d6c71;

		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view BurstShotsMin_type_name = "BurstShotsMin";
		constexpr static rivet::rivet_type_id BurstShotsMin_type_id = 0x7dc9fae1;
		constexpr static std::string_view BurstShotsMax_type_name = "BurstShotsMax";
		constexpr static rivet::rivet_type_id BurstShotsMax_type_id = 0x41c4c5b8;
		constexpr static std::string_view BurstShots_type_name = "BurstShots";
		constexpr static rivet::rivet_type_id BurstShots_type_id = 0xb4290d8a;
		constexpr static std::string_view BurstDurationMin_type_name = "BurstDurationMin";
		constexpr static rivet::rivet_type_id BurstDurationMin_type_id = 0x282f869c;
		constexpr static std::string_view BurstDurationMax_type_name = "BurstDurationMax";
		constexpr static rivet::rivet_type_id BurstDurationMax_type_id = 0x1422b9c5;
		constexpr static std::string_view BurstDuration_type_name = "BurstDuration";
		constexpr static rivet::rivet_type_id BurstDuration_type_id = 0xee3f4769;
		constexpr static std::string_view BurstRateOfFire_type_name = "BurstRateOfFire";
		constexpr static rivet::rivet_type_id BurstRateOfFire_type_id = 0xa1723d89;
		constexpr static std::string_view BurstTimeBetweenShots_type_name = "BurstTimeBetweenShots";
		constexpr static rivet::rivet_type_id BurstTimeBetweenShots_type_id = 0x264280a7; 

		explicit Burst() = default;
		explicit Burst([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xba90f6fd Type {};
		int32_t BurstShotsMin {};
		int32_t BurstShotsMax {};
		int32_t BurstShots {};
		float BurstDurationMin {};
		float BurstDurationMax {};
		float BurstDuration {};
		float BurstRateOfFire {};
		float BurstTimeBetweenShots {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Burst>;
	};
} // namespace rivet::ddl::generated

// clang-format on