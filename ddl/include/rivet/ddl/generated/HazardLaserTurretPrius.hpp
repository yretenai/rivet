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
	struct RIVET_DDL_SHARED HazardLaserTurretPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HazardLaserTurretPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd7c5a2ee;

		constexpr static std::string_view LaserStartLocName_type_name = "LaserStartLocName";
		constexpr static rivet::rivet_type_id LaserStartLocName_type_id = 0x82517cad;
		constexpr static std::string_view LaserEndLocName_type_name = "LaserEndLocName";
		constexpr static rivet::rivet_type_id LaserEndLocName_type_id = 0x10fd28fa;
		constexpr static std::string_view YawJointName_type_name = "YawJointName";
		constexpr static rivet::rivet_type_id YawJointName_type_id = 0x39d7862a;
		constexpr static std::string_view PitchJointName_type_name = "PitchJointName";
		constexpr static rivet::rivet_type_id PitchJointName_type_id = 0x7100f11f;
		constexpr static std::string_view TurnSpeed_type_name = "TurnSpeed";
		constexpr static rivet::rivet_type_id TurnSpeed_type_id = 0x6cc70f48;
		constexpr static std::string_view FOVAngle_type_name = "FOVAngle";
		constexpr static rivet::rivet_type_id FOVAngle_type_id = 0xe651b84f;
		constexpr static std::string_view FireDelay_type_name = "FireDelay";
		constexpr static rivet::rivet_type_id FireDelay_type_id = 0x129ecf75;
		constexpr static std::string_view RangeDist_type_name = "RangeDist";
		constexpr static rivet::rivet_type_id RangeDist_type_id = 0x39409066;
		constexpr static std::string_view DPSAmt_type_name = "DPSAmt";
		constexpr static rivet::rivet_type_id DPSAmt_type_id = 0xb178a37;
		constexpr static std::string_view InnerAwareness_type_name = "InnerAwareness";
		constexpr static rivet::rivet_type_id InnerAwareness_type_id = 0x4a5fe10e;
		constexpr static std::string_view OuterAwareness_type_name = "OuterAwareness";
		constexpr static rivet::rivet_type_id OuterAwareness_type_id = 0x77cb65c;
		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82; 

		explicit HazardLaserTurretPrius() = default;
		explicit HazardLaserTurretPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LaserStartLocName {};
		std::string_view LaserEndLocName {};
		std::string_view YawJointName {};
		std::string_view PitchJointName {};
		float TurnSpeed {};
		float FOVAngle {};
		float FireDelay {};
		float RangeDist {};
		float DPSAmt {};
		uint64_t InnerAwareness {};
		uint64_t OuterAwareness {};
		bool StartActive {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HazardLaserTurretPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
