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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct CrowdDensityTier; 

	struct RIVET_DDL_SHARED CrowdSpawnerTypeConfig : ConfigBase {
		constexpr const static std::string_view type_name = "CrowdSpawnerTypeConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x1240ed91;

		constexpr const static std::string_view MemberModel_type_name = "MemberModel";
		constexpr const static rivet::rivet_type_id MemberModel_type_id = 0x3a255041;
		constexpr const static std::string_view MinModelScale_type_name = "MinModelScale";
		constexpr const static rivet::rivet_type_id MinModelScale_type_id = 0x3fa9c84a;
		constexpr const static std::string_view MaxModelScale_type_name = "MaxModelScale";
		constexpr const static rivet::rivet_type_id MaxModelScale_type_id = 0x7fe6b03c;
		constexpr const static std::string_view FadeTime_type_name = "FadeTime";
		constexpr const static rivet::rivet_type_id FadeTime_type_id = 0x8833d162;
		constexpr const static std::string_view DensityTiers_type_name = "DensityTiers";
		constexpr const static rivet::rivet_type_id DensityTiers_type_id = 0x5e86a82b;
		constexpr const static std::string_view DensityTiersPerfMode60_type_name = "DensityTiersPerfMode60";
		constexpr const static rivet::rivet_type_id DensityTiersPerfMode60_type_id = 0x5ab55a9d;
		constexpr const static std::string_view DensityTiersPcMedium_type_name = "DensityTiersPcMedium";
		constexpr const static rivet::rivet_type_id DensityTiersPcMedium_type_id = 0xf721fa;
		constexpr const static std::string_view DensityTiersPcLow_type_name = "DensityTiersPcLow";
		constexpr const static rivet::rivet_type_id DensityTiersPcLow_type_id = 0xbb4a4862; 

		explicit CrowdSpawnerTypeConfig() = default;
		explicit CrowdSpawnerTypeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MemberModel {};
		float MinModelScale {};
		float MaxModelScale {};
		float FadeTime {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CrowdDensityTier>> DensityTiers {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CrowdDensityTier>> DensityTiersPerfMode60 {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CrowdDensityTier>> DensityTiersPcMedium {};
		std::vector<std::shared_ptr<rivet::ddl::generated::CrowdDensityTier>> DensityTiersPcLow {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CrowdSpawnerTypeConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
