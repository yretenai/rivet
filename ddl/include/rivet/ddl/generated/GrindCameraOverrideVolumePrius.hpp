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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED GrindCameraOverrideVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GrindCameraOverrideVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0x5c2a7120;

		constexpr static std::string_view HeroOffset_type_name = "HeroOffset";
		constexpr static rivet::rivet_type_id HeroOffset_type_id = 0x90977284;
		constexpr static std::string_view IsHeroOffsetAdditive_type_name = "IsHeroOffsetAdditive";
		constexpr static rivet::rivet_type_id IsHeroOffsetAdditive_type_id = 0xb9f21a71;
		constexpr static std::string_view CurveLookAheadDistance_type_name = "CurveLookAheadDistance";
		constexpr static rivet::rivet_type_id CurveLookAheadDistance_type_id = 0xc46f4a79;
		constexpr static std::string_view IsCurveLookAheadDistanceAdditive_type_name = "IsCurveLookAheadDistanceAdditive";
		constexpr static rivet::rivet_type_id IsCurveLookAheadDistanceAdditive_type_id = 0x388844e5;
		constexpr static std::string_view LookAtActor_type_name = "LookAtActor";
		constexpr static rivet::rivet_type_id LookAtActor_type_id = 0xa37bf657;
		constexpr static std::string_view TargetOffset_type_name = "TargetOffset";
		constexpr static rivet::rivet_type_id TargetOffset_type_id = 0xabbb80f6;
		constexpr static std::string_view IsTargetOffsetRelative_type_name = "IsTargetOffsetRelative";
		constexpr static rivet::rivet_type_id IsTargetOffsetRelative_type_id = 0x3a36060a;
		constexpr static std::string_view BlendInTime_type_name = "BlendInTime";
		constexpr static rivet::rivet_type_id BlendInTime_type_id = 0x69e34f4b;
		constexpr static std::string_view BlendOutTime_type_name = "BlendOutTime";
		constexpr static rivet::rivet_type_id BlendOutTime_type_id = 0xda2e044e; 

		explicit GrindCameraOverrideVolumePrius() = default;
		explicit GrindCameraOverrideVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> HeroOffset {};
		bool IsHeroOffsetAdditive {};
		float CurveLookAheadDistance {};
		bool IsCurveLookAheadDistanceAdditive {};
		uint64_t LookAtActor {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> TargetOffset {};
		bool IsTargetOffsetRelative {};
		float BlendInTime {};
		float BlendOutTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindCameraOverrideVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on