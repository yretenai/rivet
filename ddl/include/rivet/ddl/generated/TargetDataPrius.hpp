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

#include <rivet/ddl/generated/enums/TargetCategory.hpp>
#include <rivet/ddl/generated/bitsets/TargetType.hpp>
#include <rivet/ddl/generated/enums/x6bdf4ba1.hpp> 

namespace rivet::ddl::generated {
	struct TargetLocationData; 

	struct RIVET_DDL_SHARED TargetDataPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TargetDataPrius";
		constexpr static rivet::rivet_type_id type_id = 0x705e7185;

		constexpr static std::string_view Allegiance_type_name = "Allegiance";
		constexpr static rivet::rivet_type_id Allegiance_type_id = 0xd10c0c26;
		constexpr static std::string_view TargetTypes_type_name = "TargetTypes";
		constexpr static rivet::rivet_type_id TargetTypes_type_id = 0x85109145;
		constexpr static std::string_view TargetCategory_type_name = "TargetCategory";
		constexpr static rivet::rivet_type_id TargetCategory_type_id = 0x1242d225;
		constexpr static std::string_view AimAssistConfig_type_name = "AimAssistConfig";
		constexpr static rivet::rivet_type_id AimAssistConfig_type_id = 0x3d0da883;
		constexpr static std::string_view DesiredMaxTargeters_type_name = "DesiredMaxTargeters";
		constexpr static rivet::rivet_type_id DesiredMaxTargeters_type_id = 0xdf3dadb4;
		constexpr static std::string_view StartStatic_type_name = "StartStatic";
		constexpr static rivet::rivet_type_id StartStatic_type_id = 0xf5dd8aa5;
		constexpr static std::string_view StartTargetable_type_name = "StartTargetable";
		constexpr static rivet::rivet_type_id StartTargetable_type_id = 0x5684d3c1;
		constexpr static std::string_view LocationData_type_name = "LocationData";
		constexpr static rivet::rivet_type_id LocationData_type_id = 0xe2f6f6b2; 

		explicit TargetDataPrius() = default;
		explicit TargetDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x6bdf4ba1 Allegiance {};
		rivet::ddl::generated::TargetType TargetTypes {};
		rivet::ddl::generated::TargetCategory TargetCategory {};
		std::string_view AimAssistConfig {};
		int32_t DesiredMaxTargeters {};
		bool StartStatic {};
		bool StartTargetable {};
		std::vector<std::shared_ptr<rivet::ddl::generated::TargetLocationData>> LocationData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetDataPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
