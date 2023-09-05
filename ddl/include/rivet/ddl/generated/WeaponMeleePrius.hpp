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

#include <rivet/ddl/generated/WeaponGamePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponMeleePrius : WeaponGamePrius {
		constexpr const static std::string_view type_name = "WeaponMeleePrius";
		constexpr const static rivet::rivet_type_id type_id = 0x53f3a6ef;

		constexpr const static std::string_view SnapRangeEnemy_type_name = "SnapRangeEnemy";
		constexpr const static rivet::rivet_type_id SnapRangeEnemy_type_id = 0x75e1a5ae;
		constexpr const static std::string_view SnapRangeBreak_type_name = "SnapRangeBreak";
		constexpr const static rivet::rivet_type_id SnapRangeBreak_type_id = 0x8202afdd;
		constexpr const static std::string_view EmissiveColorConstantName_type_name = "EmissiveColorConstantName";
		constexpr const static rivet::rivet_type_id EmissiveColorConstantName_type_id = 0xa1a7becd;
		constexpr const static std::string_view EmissiveMaterialMappingName_type_name = "EmissiveMaterialMappingName";
		constexpr const static rivet::rivet_type_id EmissiveMaterialMappingName_type_id = 0x6c50b4a7;
		constexpr const static std::string_view DefaultEmissiveIDValue_type_name = "DefaultEmissiveIDValue";
		constexpr const static rivet::rivet_type_id DefaultEmissiveIDValue_type_id = 0xb2a7616a;
		constexpr const static std::string_view UpgradeEmissiveIDValue_type_name = "UpgradeEmissiveIDValue";
		constexpr const static rivet::rivet_type_id UpgradeEmissiveIDValue_type_id = 0x94983748; 

		explicit WeaponMeleePrius() = default;
		explicit WeaponMeleePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SnapRangeEnemy {};
		float SnapRangeBreak {};
		std::string_view EmissiveColorConstantName {};
		std::string_view EmissiveMaterialMappingName {};
		float DefaultEmissiveIDValue {};
		float UpgradeEmissiveIDValue {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponMeleePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
