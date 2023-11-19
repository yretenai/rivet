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
	struct RIVET_DDL_SHARED TargetingAimAnglePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TargetingAimAnglePrius";
		constexpr static rivet::rivet_type_id type_id = 0x1a34bc03;

		constexpr static std::string_view StartEnabled_type_name = "StartEnabled";
		constexpr static rivet::rivet_type_id StartEnabled_type_id = 0x6f36ca8b;
		constexpr static std::string_view WeaponEquipIndex_type_name = "WeaponEquipIndex";
		constexpr static rivet::rivet_type_id WeaponEquipIndex_type_id = 0xe4b06364;
		constexpr static std::string_view ApplySpeed_type_name = "ApplySpeed";
		constexpr static rivet::rivet_type_id ApplySpeed_type_id = 0x32945733;
		constexpr static std::string_view AimGain_type_name = "AimGain";
		constexpr static rivet::rivet_type_id AimGain_type_id = 0xaefd4b5b;
		constexpr static std::string_view YawRangeDegreesMin_type_name = "YawRangeDegreesMin";
		constexpr static rivet::rivet_type_id YawRangeDegreesMin_type_id = 0xa81b891e;
		constexpr static std::string_view YawRangeDegreesMax_type_name = "YawRangeDegreesMax";
		constexpr static rivet::rivet_type_id YawRangeDegreesMax_type_id = 0x9416b647;
		constexpr static std::string_view PitchRangeDegreesMin_type_name = "PitchRangeDegreesMin";
		constexpr static rivet::rivet_type_id PitchRangeDegreesMin_type_id = 0x72547e87;
		constexpr static std::string_view PitchRangeDegreesMax_type_name = "PitchRangeDegreesMax";
		constexpr static rivet::rivet_type_id PitchRangeDegreesMax_type_id = 0x4e5941de;
		constexpr static std::string_view VerticalAnimVarName_type_name = "VerticalAnimVarName";
		constexpr static rivet::rivet_type_id VerticalAnimVarName_type_id = 0x9668832c;
		constexpr static std::string_view HorizontalAnimVarName_type_name = "HorizontalAnimVarName";
		constexpr static rivet::rivet_type_id HorizontalAnimVarName_type_id = 0x217b8783;
		constexpr static std::string_view PartialName_type_name = "PartialName";
		constexpr static rivet::rivet_type_id PartialName_type_id = 0x8e02e812;
		constexpr static std::string_view AimSourceLocator_type_name = "AimSourceLocator";
		constexpr static rivet::rivet_type_id AimSourceLocator_type_id = 0x73cc899c;
		constexpr static std::string_view AimDestLocator_type_name = "AimDestLocator";
		constexpr static rivet::rivet_type_id AimDestLocator_type_id = 0x355606c2;
		constexpr static std::string_view LeftToRight_type_name = "LeftToRight";
		constexpr static rivet::rivet_type_id LeftToRight_type_id = 0x1129919e;
		constexpr static std::string_view DownToUp_type_name = "DownToUp";
		constexpr static rivet::rivet_type_id DownToUp_type_id = 0x1674c8c4;
		constexpr static std::string_view VarValuesAreInDegrees_type_name = "VarValuesAreInDegrees";
		constexpr static rivet::rivet_type_id VarValuesAreInDegrees_type_id = 0x9af0d274;
		constexpr static std::string_view UseAimSourceReferenceMat_type_name = "UseAimSourceReferenceMat";
		constexpr static rivet::rivet_type_id UseAimSourceReferenceMat_type_id = 0x195d07db;
		constexpr static std::string_view UpdateStandardHeadLookValues_type_name = "UpdateStandardHeadLookValues";
		constexpr static rivet::rivet_type_id UpdateStandardHeadLookValues_type_id = 0x25806d47; 

		explicit TargetingAimAnglePrius() = default;
		explicit TargetingAimAnglePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartEnabled {};
		uint32_t WeaponEquipIndex {};
		float ApplySpeed {};
		float AimGain {};
		float YawRangeDegreesMin {};
		float YawRangeDegreesMax {};
		float PitchRangeDegreesMin {};
		float PitchRangeDegreesMax {};
		std::string_view VerticalAnimVarName {};
		std::string_view HorizontalAnimVarName {};
		std::string_view PartialName {};
		std::string_view AimSourceLocator {};
		std::string_view AimDestLocator {};
		bool LeftToRight {};
		bool DownToUp {};
		bool VarValuesAreInDegrees {};
		bool UseAimSourceReferenceMat {};
		bool UpdateStandardHeadLookValues {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingAimAnglePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on