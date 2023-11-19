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
	struct AssertPortalInfo;
	struct RYNOPortalObjectPrius;
	struct RYNOPortalPrius; 

	struct RIVET_DDL_SHARED WeaponRYNOPrius : WeaponGamePrius {
		constexpr static std::string_view type_name = "WeaponRYNOPrius";
		constexpr static rivet::rivet_type_id type_id = 0x63a6fe4c;

		constexpr static std::string_view PortalPrius_type_name = "PortalPrius";
		constexpr static rivet::rivet_type_id PortalPrius_type_id = 0xb94aeb36;
		constexpr static std::string_view PortalObjectPrius_type_name = "PortalObjectPrius";
		constexpr static rivet::rivet_type_id PortalObjectPrius_type_id = 0x3e9dfaec;
		constexpr static std::string_view PreFireTime_type_name = "PreFireTime";
		constexpr static rivet::rivet_type_id PreFireTime_type_id = 0xf4375d46;
		constexpr static std::string_view PortalObjectInitialSpeed_type_name = "PortalObjectInitialSpeed";
		constexpr static rivet::rivet_type_id PortalObjectInitialSpeed_type_id = 0xdc048c71;
		constexpr static std::string_view PortalObjectAccel_type_name = "PortalObjectAccel";
		constexpr static rivet::rivet_type_id PortalObjectAccel_type_id = 0x41e5ee56;
		constexpr static std::string_view BeamShotSpeed_type_name = "BeamShotSpeed";
		constexpr static rivet::rivet_type_id BeamShotSpeed_type_id = 0xf64985ab;
		constexpr static std::string_view PortalActor_type_name = "PortalActor";
		constexpr static rivet::rivet_type_id PortalActor_type_id = 0xdfbb9f90;
		constexpr static std::string_view SmallPortalObjectRefs_type_name = "SmallPortalObjectRefs";
		constexpr static rivet::rivet_type_id SmallPortalObjectRefs_type_id = 0x2798c618;
		constexpr static std::string_view MediumPortalObjectRefs_type_name = "MediumPortalObjectRefs";
		constexpr static rivet::rivet_type_id MediumPortalObjectRefs_type_id = 0xd16f0a85;
		constexpr static std::string_view LargePortalObjectRefs_type_name = "LargePortalObjectRefs";
		constexpr static rivet::rivet_type_id LargePortalObjectRefs_type_id = 0xdf2a2c21;
		constexpr static std::string_view SmallShockwaveCameraShake_type_name = "SmallShockwaveCameraShake";
		constexpr static rivet::rivet_type_id SmallShockwaveCameraShake_type_id = 0xeaedb21c;
		constexpr static std::string_view MediumShockwaveCameraShake_type_name = "MediumShockwaveCameraShake";
		constexpr static rivet::rivet_type_id MediumShockwaveCameraShake_type_id = 0x3251c412;
		constexpr static std::string_view LargeShockwaveCameraShake_type_name = "LargeShockwaveCameraShake";
		constexpr static rivet::rivet_type_id LargeShockwaveCameraShake_type_id = 0xa62ee655; 

		explicit WeaponRYNOPrius() = default;
		explicit WeaponRYNOPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::RYNOPortalPrius> PortalPrius {};
		std::shared_ptr<rivet::ddl::generated::RYNOPortalObjectPrius> PortalObjectPrius {};
		float PreFireTime {};
		float PortalObjectInitialSpeed {};
		float PortalObjectAccel {};
		float BeamShotSpeed {};
		std::string_view PortalActor {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssertPortalInfo>> SmallPortalObjectRefs {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssertPortalInfo>> MediumPortalObjectRefs {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AssertPortalInfo>> LargePortalObjectRefs {};
		std::string_view SmallShockwaveCameraShake {};
		std::string_view MediumShockwaveCameraShake {};
		std::string_view LargeShockwaveCameraShake {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponRYNOPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on