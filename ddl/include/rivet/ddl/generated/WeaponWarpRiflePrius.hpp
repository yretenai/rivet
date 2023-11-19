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

#include <rivet/ddl/generated/enums/x41032d7a.hpp>
#include <rivet/ddl/generated/bitsets/x8b303a8b.hpp>
#include <rivet/ddl/generated/WeaponGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct ShellCasingDataSingleEmit;
	struct HeatStateData; 

	struct RIVET_DDL_SHARED WeaponWarpRiflePrius : WeaponGamePrius {
		constexpr static std::string_view type_name = "WeaponWarpRiflePrius";
		constexpr static rivet::rivet_type_id type_id = 0xea1985fa;

		constexpr static std::string_view SpreadToAddPerSecond_type_name = "SpreadToAddPerSecond";
		constexpr static rivet::rivet_type_id SpreadToAddPerSecond_type_id = 0x314a6826;
		constexpr static std::string_view BaseBulletSpreadAngle_type_name = "BaseBulletSpreadAngle";
		constexpr static rivet::rivet_type_id BaseBulletSpreadAngle_type_id = 0x9cb91ef5;
		constexpr static std::string_view MaxBulletSpreadAngle_type_name = "MaxBulletSpreadAngle";
		constexpr static rivet::rivet_type_id MaxBulletSpreadAngle_type_id = 0x82f64dfd;
		constexpr static std::string_view SpinUpDuration_type_name = "SpinUpDuration";
		constexpr static rivet::rivet_type_id SpinUpDuration_type_id = 0xadd53af8;
		constexpr static std::string_view SpinDownDuration_type_name = "SpinDownDuration";
		constexpr static rivet::rivet_type_id SpinDownDuration_type_id = 0xe1a9dc0c;
		constexpr static std::string_view SpinUpSustainDuration_type_name = "SpinUpSustainDuration";
		constexpr static rivet::rivet_type_id SpinUpSustainDuration_type_id = 0x8d9a4104;
		constexpr static std::string_view FiringAllowedKnockbacks_type_name = "FiringAllowedKnockbacks";
		constexpr static rivet::rivet_type_id FiringAllowedKnockbacks_type_id = 0xe37d083a;
		constexpr static std::string_view FiringDisabledStates_type_name = "FiringDisabledStates";
		constexpr static rivet::rivet_type_id FiringDisabledStates_type_id = 0x3452bbe0;
		constexpr static std::string_view HeatStates_type_name = "HeatStates";
		constexpr static rivet::rivet_type_id HeatStates_type_id = 0x6fb231e5;
		constexpr static std::string_view ShellCasingData_type_name = "ShellCasingData";
		constexpr static rivet::rivet_type_id ShellCasingData_type_id = 0x2fda4eac; 

		explicit WeaponWarpRiflePrius() = default;
		explicit WeaponWarpRiflePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SpreadToAddPerSecond {};
		float BaseBulletSpreadAngle {};
		float MaxBulletSpreadAngle {};
		float SpinUpDuration {};
		float SpinDownDuration {};
		float SpinUpSustainDuration {};
		rivet::ddl::generated::x8b303a8b FiringAllowedKnockbacks {};
		std::vector<rivet::ddl::generated::x41032d7a> FiringDisabledStates {};
		std::vector<std::shared_ptr<rivet::ddl::generated::HeatStateData>> HeatStates {};
		std::shared_ptr<rivet::ddl::generated::ShellCasingDataSingleEmit> ShellCasingData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponWarpRiflePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on