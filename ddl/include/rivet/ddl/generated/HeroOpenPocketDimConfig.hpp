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
	struct HeroPortalZipLineData; 

	struct RIVET_DDL_SHARED HeroOpenPocketDimConfig : ConfigBase {
		constexpr const static std::string_view type_name = "HeroOpenPocketDimConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x2320cd88;

		constexpr const static std::string_view MinTargetDistance_type_name = "MinTargetDistance";
		constexpr const static rivet::rivet_type_id MinTargetDistance_type_id = 0xecff5f76;
		constexpr const static std::string_view MaxTargetDistance_type_name = "MaxTargetDistance";
		constexpr const static rivet::rivet_type_id MaxTargetDistance_type_id = 0xf9748b84;
		constexpr const static std::string_view MaxAngleStartAutoTarget_type_name = "MaxAngleStartAutoTarget";
		constexpr const static rivet::rivet_type_id MaxAngleStartAutoTarget_type_id = 0xd02cb593;
		constexpr const static std::string_view MinAngleEndAutoTarget_type_name = "MinAngleEndAutoTarget";
		constexpr const static rivet::rivet_type_id MinAngleEndAutoTarget_type_id = 0x78e2b899;
		constexpr const static std::string_view StopMomentumTime_type_name = "StopMomentumTime";
		constexpr const static rivet::rivet_type_id StopMomentumTime_type_id = 0xe1645179;
		constexpr const static std::string_view MaxMomentumDistance_type_name = "MaxMomentumDistance";
		constexpr const static rivet::rivet_type_id MaxMomentumDistance_type_id = 0x3084f673;
		constexpr const static std::string_view LineData_type_name = "LineData";
		constexpr const static rivet::rivet_type_id LineData_type_id = 0x49e0cb8d;
		constexpr const static std::string_view CameraAimContext_type_name = "CameraAimContext";
		constexpr const static rivet::rivet_type_id CameraAimContext_type_id = 0x4df55ad0;
		constexpr const static std::string_view PortalAimContext_type_name = "PortalAimContext";
		constexpr const static rivet::rivet_type_id PortalAimContext_type_id = 0x86cc4d07; 

		explicit HeroOpenPocketDimConfig() = default;
		explicit HeroOpenPocketDimConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MinTargetDistance {};
		float MaxTargetDistance {};
		float MaxAngleStartAutoTarget {};
		float MinAngleEndAutoTarget {};
		float StopMomentumTime {};
		float MaxMomentumDistance {};
		std::shared_ptr<rivet::ddl::generated::HeroPortalZipLineData> LineData {};
		std::string_view CameraAimContext {};
		std::string_view PortalAimContext {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroOpenPocketDimConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
