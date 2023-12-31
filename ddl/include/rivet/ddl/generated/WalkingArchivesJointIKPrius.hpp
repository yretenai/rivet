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
	struct RIVET_DDL_SHARED WalkingArchivesJointIKPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WalkingArchivesJointIKPrius";
		constexpr static rivet::rivet_type_id type_id = 0xdbd1112a;

		constexpr static std::string_view FootJoint_type_name = "FootJoint";
		constexpr static rivet::rivet_type_id FootJoint_type_id = 0x351d165e;
		constexpr static std::string_view IKChainID_type_name = "IKChainID";
		constexpr static rivet::rivet_type_id IKChainID_type_id = 0x81b8f1ae;
		constexpr static std::string_view MoveDriver_type_name = "MoveDriver";
		constexpr static rivet::rivet_type_id MoveDriver_type_id = 0x8bc6d4e3;
		constexpr static std::string_view CameraShake_type_name = "CameraShake";
		constexpr static rivet::rivet_type_id CameraShake_type_id = 0xefd546ca;
		constexpr static std::string_view CameraShakeInnerRadius_type_name = "CameraShakeInnerRadius";
		constexpr static rivet::rivet_type_id CameraShakeInnerRadius_type_id = 0x4ca6dc25;
		constexpr static std::string_view CameraShakeOuterRadius_type_name = "CameraShakeOuterRadius";
		constexpr static rivet::rivet_type_id CameraShakeOuterRadius_type_id = 0x42b3a496;
		constexpr static std::string_view FootDamageRadius_type_name = "FootDamageRadius";
		constexpr static rivet::rivet_type_id FootDamageRadius_type_id = 0x325d203a; 

		explicit WalkingArchivesJointIKPrius() = default;
		explicit WalkingArchivesJointIKPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> FootJoint {};
		std::vector<std::string_view> IKChainID {};
		std::string_view MoveDriver {};
		std::string_view CameraShake {};
		float CameraShakeInnerRadius {};
		float CameraShakeOuterRadius {};
		float FootDamageRadius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WalkingArchivesJointIKPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
