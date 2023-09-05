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
	struct AimAssistTargetZoneListItem;
	struct AimAssistSnapLocationListItem;
	struct AimAssistAutoTargetLocationListItem; 

	struct RIVET_DDL_SHARED AimAssistTargetConfig : ConfigBase {
		constexpr const static std::string_view type_name = "AimAssistTargetConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x65c85e9a;

		constexpr const static std::string_view AssistZones_type_name = "AssistZones";
		constexpr const static rivet::rivet_type_id AssistZones_type_id = 0xa3ef3fc4;
		constexpr const static std::string_view SnapLocations_type_name = "SnapLocations";
		constexpr const static rivet::rivet_type_id SnapLocations_type_id = 0xe25d1b9c;
		constexpr const static std::string_view AutoTargetLocations_type_name = "AutoTargetLocations";
		constexpr const static rivet::rivet_type_id AutoTargetLocations_type_id = 0x42f4ba9b;
		constexpr const static std::string_view TargetPriority_type_name = "TargetPriority";
		constexpr const static rivet::rivet_type_id TargetPriority_type_id = 0x76a817c3;
		constexpr const static std::string_view StrafeCenteringScale_type_name = "StrafeCenteringScale";
		constexpr const static rivet::rivet_type_id StrafeCenteringScale_type_id = 0x586a4433;
		constexpr const static std::string_view Enabled_type_name = "Enabled";
		constexpr const static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr const static std::string_view BSphereInclusion_type_name = "BSphereInclusion";
		constexpr const static rivet::rivet_type_id BSphereInclusion_type_id = 0x26b1268b; 

		explicit AimAssistTargetConfig() = default;
		explicit AimAssistTargetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::AimAssistTargetZoneListItem>> AssistZones {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AimAssistSnapLocationListItem>> SnapLocations {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AimAssistAutoTargetLocationListItem>> AutoTargetLocations {};
		float TargetPriority {};
		float StrafeCenteringScale {};
		bool Enabled {};
		bool BSphereInclusion {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistTargetConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
