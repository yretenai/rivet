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
	struct RobotestLookLOD;
	struct RobotestLookId; 

	struct RIVET_DDL_SHARED RobotestLookState : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RobotestLookState";
		constexpr static rivet::rivet_type_id type_id = 0x6f1438b6;

		constexpr static std::string_view LookIds_type_name = "LookIds";
		constexpr static rivet::rivet_type_id LookIds_type_id = 0x69a18fac;
		constexpr static std::string_view EnabledLooks_type_name = "EnabledLooks";
		constexpr static rivet::rivet_type_id EnabledLooks_type_id = 0x79df49b5;
		constexpr static std::string_view DisabledLooks_type_name = "DisabledLooks";
		constexpr static rivet::rivet_type_id DisabledLooks_type_id = 0x5fab67c8;
		constexpr static std::string_view LookGroups_type_name = "LookGroups";
		constexpr static rivet::rivet_type_id LookGroups_type_id = 0xb6c4ab29;
		constexpr static std::string_view EnabledLookGroups_type_name = "EnabledLookGroups";
		constexpr static rivet::rivet_type_id EnabledLookGroups_type_id = 0x8da6c2eb;
		constexpr static std::string_view LODs_type_name = "LODs";
		constexpr static rivet::rivet_type_id LODs_type_id = 0x46fb376d;
		constexpr static std::string_view ActiveJointBspheresRemap_type_name = "ActiveJointBspheresRemap";
		constexpr static rivet::rivet_type_id ActiveJointBspheresRemap_type_id = 0x92ca2d75;
		constexpr static std::string_view ActiveRigidBodyRemap_type_name = "ActiveRigidBodyRemap";
		constexpr static rivet::rivet_type_id ActiveRigidBodyRemap_type_id = 0xefcbb882;
		constexpr static std::string_view ActiveClothRemap_type_name = "ActiveClothRemap";
		constexpr static rivet::rivet_type_id ActiveClothRemap_type_id = 0xe1de9ca7;
		constexpr static std::string_view ActiveClothJointsRemap_type_name = "ActiveClothJointsRemap";
		constexpr static rivet::rivet_type_id ActiveClothJointsRemap_type_id = 0xa2a1dad2; 

		explicit RobotestLookState() = default;
		explicit RobotestLookState([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::RobotestLookId>> LookIds {};
		std::vector<uint16_t> EnabledLooks {};
		std::vector<uint16_t> DisabledLooks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::RobotestLookId>> LookGroups {};
		std::vector<uint16_t> EnabledLookGroups {};
		std::vector<std::shared_ptr<rivet::ddl::generated::RobotestLookLOD>> LODs {};
		std::vector<uint16_t> ActiveJointBspheresRemap {};
		std::vector<uint16_t> ActiveRigidBodyRemap {};
		std::vector<uint16_t> ActiveClothRemap {};
		std::vector<uint16_t> ActiveClothJointsRemap {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestLookState>;
	};
} // namespace rivet::ddl::generated

// clang-format on
