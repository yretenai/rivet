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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/enums/x8d7e44cf.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GrindHazardPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GrindHazardPrius";
		constexpr static rivet::rivet_type_id type_id = 0xdc8c5728;

		constexpr static std::string_view CurveActor_type_name = "CurveActor";
		constexpr static rivet::rivet_type_id CurveActor_type_id = 0xc23a6c53;
		constexpr static std::string_view StartTValue_type_name = "StartTValue";
		constexpr static rivet::rivet_type_id StartTValue_type_id = 0x4ef8ccd9;
		constexpr static std::string_view EndTValue_type_name = "EndTValue";
		constexpr static rivet::rivet_type_id EndTValue_type_id = 0x45135ffa;
		constexpr static std::string_view DamageType_type_name = "DamageType";
		constexpr static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr static std::string_view DamagePercent_type_name = "DamagePercent";
		constexpr static rivet::rivet_type_id DamagePercent_type_id = 0x7bbba4a0;
		constexpr static std::string_view DamageRadius_type_name = "DamageRadius";
		constexpr static rivet::rivet_type_id DamageRadius_type_id = 0xe3e6fa68;
		constexpr static std::string_view IgnoreDuration_type_name = "IgnoreDuration";
		constexpr static rivet::rivet_type_id IgnoreDuration_type_id = 0x2ee45555;
		constexpr static std::string_view KnockbackLevel_type_name = "KnockbackLevel";
		constexpr static rivet::rivet_type_id KnockbackLevel_type_id = 0x2554a262;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view HazardActor_type_name = "HazardActor";
		constexpr static rivet::rivet_type_id HazardActor_type_id = 0xe0a113c4;
		constexpr static std::string_view HazardSpacing_type_name = "HazardSpacing";
		constexpr static rivet::rivet_type_id HazardSpacing_type_id = 0x842617ee;
		constexpr static std::string_view HazardStretchPercent_type_name = "HazardStretchPercent";
		constexpr static rivet::rivet_type_id HazardStretchPercent_type_id = 0xfb241200; 

		explicit GrindHazardPrius() = default;
		explicit GrindHazardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t CurveActor {};
		float StartTValue {};
		float EndTValue {};
		rivet::ddl::generated::x8d7e44cf DamageType {};
		float DamagePercent {};
		float DamageRadius {};
		float IgnoreDuration {};
		rivet::ddl::generated::KnockbackLevels KnockbackLevel {};
		float KnockbackAmount {};
		std::string_view HazardActor {};
		float HazardSpacing {};
		float HazardStretchPercent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindHazardPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
