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

#include <rivet/ddl/generated/BotComboConditionBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotComboConditionHaveArcFinderPrius : BotComboConditionBasePrius {
		constexpr static std::string_view type_name = "BotComboConditionHaveArcFinderPrius";
		constexpr static rivet::rivet_type_id type_id = 0x92b37285;

		constexpr static std::string_view EmitLocatorName_type_name = "EmitLocatorName";
		constexpr static rivet::rivet_type_id EmitLocatorName_type_id = 0x85f80e0;
		constexpr static std::string_view DesiredFlightTime_type_name = "DesiredFlightTime";
		constexpr static rivet::rivet_type_id DesiredFlightTime_type_id = 0xd292ec09;
		constexpr static std::string_view MinSpeed_type_name = "MinSpeed";
		constexpr static rivet::rivet_type_id MinSpeed_type_id = 0xf0d89680;
		constexpr static std::string_view MaxSpeed_type_name = "MaxSpeed";
		constexpr static rivet::rivet_type_id MaxSpeed_type_id = 0x16b83961;
		constexpr static std::string_view ArcHeight0_type_name = "ArcHeight0";
		constexpr static rivet::rivet_type_id ArcHeight0_type_id = 0xb0e87cbd;
		constexpr static std::string_view ArcHeight1_type_name = "ArcHeight1";
		constexpr static rivet::rivet_type_id ArcHeight1_type_id = 0xc7ef4c2b;
		constexpr static std::string_view ArcHeight2_type_name = "ArcHeight2";
		constexpr static rivet::rivet_type_id ArcHeight2_type_id = 0x5ee61d91;
		constexpr static std::string_view UseLastNavPosition_type_name = "UseLastNavPosition";
		constexpr static rivet::rivet_type_id UseLastNavPosition_type_id = 0xc387f89c; 

		explicit BotComboConditionHaveArcFinderPrius() = default;
		explicit BotComboConditionHaveArcFinderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EmitLocatorName {};
		float DesiredFlightTime {};
		float MinSpeed {};
		float MaxSpeed {};
		float ArcHeight0 {};
		float ArcHeight1 {};
		float ArcHeight2 {};
		bool UseLastNavPosition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionHaveArcFinderPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
